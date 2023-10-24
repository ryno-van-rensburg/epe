#include <QInputDialog>
#include "client.h"
#include <QTcpSocket>
#include <QDebug>
#include <QMessageBox>
#include <QApplication>

void Client::connectClientBroker(){
    //QObject::connect(broker, SIGNAL(accusationResultSignal(QList,bool)));
    //QObject::connect(broker, SIGNAL(cardRequestedSignal(QString,QList));
    //QObject::connect(broker, SIGNAL(cardsDealt(QList)));
    //QObject::connect(broker, SIGNAL(cardShown(bool,QString,QString));
    //QObject::connect(broker, SIGNAL(cardShownToPlayer(QString,QString)));
    QObject::connect(broker, SIGNAL(playerAcceptedSignal(QString,QString,int,int)), this, SLOT(onPlayerAccepted(QString,QString,int,int)));
    //QObject::connect(broker, SIGNAL(suggestionStateUpdate(QString,QString,QString,QString)));
    QObject::connect(broker, SIGNAL(connectionRejectedSignal(QString)), this, SLOT(emitConnectionRejected()));
    //QObject::connect(broker, SIGNAL(errorSignal(ERROR_TYPE,QString)));
    QObject::connect(broker, SIGNAL(gameEndedSignal()),this, SLOT(onGameEnded()));
    //QObject::connect(broker, SIGNAL(gameStartedSignal(int,QJsonArray,int,int,QList)), this, SLOT(onGameStarted(int, QJSonArray,int,int,QList)));
    //QObject::connect(broker, SIGNAL(moveUpdate(QString,int)));
    //QObject::connect(broker, SIGNAL(cardRequestedSignal(QString,QList)));
    //QObject::connect(broker, SIGNAL(invalidMove()));
    //QObject::connect(broker, SIGNAL(playerKicked()));
    //QObject::connect(broker, SIGNAL(yourTurnSignal(int,int))); // make sure you store the dice value
    //QObject::connect(broker, SIGNAL(playerResult(QString,QList,bool)));
    //QObject::connect(broker, SIGNAL(gameStateSignal(int,QJsonArray,int,int,QJsonArray));// somewhere
}
void Client::playerTurnChanged(){

};
void Client::onGameStarted(int numPlayers, QJsonArray players,int dice1,int currentTurn,QVector<QString> faceUpCards){
    qDebug() << "Game started";
    qDebug() << "Num players: " << numPlayers;
    qDebug() << "Players: " << players;
    qDebug() << "Dice: " << dice1;
    qDebug() << "Current turn: " << currentTurn;
    qDebug() << "Face up cards: " << faceUpCards;

    QString face_up_cards;
    for (const QString &str : faceUpCards) {
        face_up_cards += str;
    }
    QMessageBox msgBox;
    msgBox.setText("Game Started");
    msgBox.setInformativeText("\nFace up cards: " + face_up_cards);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();

    //this->setPlayerTurn(currentTurn,dice1,dice1);

}
int Client::getRoomNumber(int x, int y)
{
    if ((x >= 0 && x < 2) && (y >= 0 && y < 2))  // Room 7 Kitchen
       return 7;
    else if ((x >= 0 && x < 2) && (y >= 3 && y < 6)) // Room 8 Dining room
       return 8;
    else if ((x >= 0 && x < 2) && (y >= 6 && y < 10)) // Room 9 Living room
       return 9;

    else if ((x >=2  && x < 6) && (y >= 6 && y < 10)) // Room 1 Courtyard
       return 1;

    else if ((x >=6  && x < 10) && (y >= 6 && y < 10)) // Room 2 Garage
       return 2;

    else if ((x >=6  && x < 10) && (y >= 3 && y < 6)) // Room 3 Game room
       return 3;

    else if ((x >=6  && x < 10) && (y >= 0 && y < 2)) // Room 4 Bedroom
       return 4;

    else if ((x >=3  && x < 4) && (y >= 0 && y < 2)) // Room 5 Bathroom
       return 5;

    else if ((x >=4  && x < 5) && (y >= 0 && y < 2)) // Room 6 Bathroom
       return 6;

    return 0;


}
Client::Client(QObject *parent)
    : QObject{parent}, currentPlayerTurn(0)
{
    this->broker = new ClientMessageBroker();
    connectClientBroker();
    diceValue = 1;
    player1_id = "PLAYER 1";
    player2_id = "PLAYER 2";
    player3_id = "PLAYER 3";
    player4_id = "PLAYER 4";
    player5_id = "PLAYER 5";
    player6_id = "PLAYER 6";


}
/**
 * @brief Sends a test message received from the broker.
 *
 * This function logs the received message from the broker and sends a test
 * message to the broker using the `testSendMessageToBroker` signal.
 *
 * @param message The message received from the broker.
 */
void Client::testReceiveMessage(QString& message){
    qDebug() << "Received message from broker: " << message;
    QString s("Hello from client");
    emit testSendMessageToBroker(s);
}

/**
 * @brief Retrieves the position of a player on the game board.
 *
 * This function retrieves the X and Y coordinates of the specified player
 * identified by their player ID.
 *
 * @param playerId The ID of the player to get the position for.
 * @return A tuple containing X and Y coordinates of the player.
 */
std::tuple<int,int> Client::getPlayerPosition(int playerId){
    std::tuple<int,int> a;
    return a;
}

/**
 * @brief Retrieves the current turn's player ID.
 *
 * This function returns the player ID of the current turn.
 *
 * @return The player ID of the current turn.
 */
int Client::getPlayerTurn() const
{
    return currentPlayerTurn;
}
int Client::getCurrentDiceValue() const{
    return diceValue;
}

/**
 * @brief Emits a signal to make a move to the specified position.
 *
 * This function emits the `makeMove` signal with the specified position,
 * indicating a move action to be taken.
 *
 * @param position The position to move to.
 */
void Client::emitMakeMoveSignal(int position){
    emit makeMove(position);
}

/**
 * @brief Handles the received suggestion and emits a corresponding signal.
 *
 * This function logs the received suggestion and emits the `makeSuggestion`
 * signal to notify other components about the suggestion made by a player.
 *
 * @param room The suggested room.
 * @param person The suggested person.
 * @param item The suggested item.
 */
void Client::onSuggestionReceived(QString room, QString person, QString item)
{

    qDebug() << "Suggestion" << person << room << item;
    broker->makeSuggestion(person, item, room);
}

/**
 * @brief Updates the position of a player on the game board.
 *
 * This function emits the `playerPositionUpdated` signal to notify other components
 * about the updated position of a player identified by their player ID.
 *
 * @param playerId The ID of the player whose position is updated.
 * @param newX The new X-coordinate of the player.
 * @param newY The new Y-coordinate of the player.
 */
void Client::updatePlayerPosition(int playerId, int newX, int newY)
{
    emit playerPositionUpdated(playerId, newX, newY);
}

/**
 * @brief Sets the position of a player on the game board.
 *
 * This function logs the new player position and emits the `makeMove` signal
 * to indicate the player's move action.
 *
 * @param playerId The ID of the player whose position is set.
 * @param newX The new X-coordinate of the player.
 * @param newY The new Y-coordinate of the player.
 */
void Client::playerPositionSet(int playerId, int newX, int newY)
{
    qDebug() << "Player position set: " << playerId << newX << newY;

    emit makeMove(newX);
    this->onTurnEnded();
}

/**
 * @brief Emits a signal to request a connection to the specified address and port.
 *
 * This function emits the `requestConnection` signal with the provided address,
 * port, and username, initiating a connection request to the server.
 *
 * @param address The IP address of the server to connect to.
 * @param port The port number to connect to on the server.
 * @param username The username used for the connection.
 */
void Client::emitRequestConnectionSignal()
{
     quint32 send_address;
     int a_port;
     bool ok;
     QString ipAddress = QInputDialog::getText(nullptr, "Server Details",
                                                "Enter IP Address:", QLineEdit::Normal,
                                                "", &ok);
        if (ok && !ipAddress.isEmpty()) {
        send_address =  QHostAddress(ipAddress).toIPv4Address();
        
        a_port = 42069;
        //a_port = QInputDialog::getInt(nullptr, "Server Details",
        //                               "Enter Port:", 0, 0, 65535, 1, &ok);
        if (ok) {
            qDebug() << "Requesting connection to server at " << send_address << ":" << a_port << " with username " << my_id;
            broker->requestConnection(send_address, a_port, this->my_id);
        }
    }
    
    //    emit requestConnection(address, port, username);
}

/**
 * @brief Emits a signal to request the current game state.
 *
 * This function emits the `requestStateSlot` signal to request the current
 * game state from the server.
 */
void  Client::emitRequestStateSlotSignal(){
    emit requestStateSlot();
}

void Client::emitSendConnectionRequestSignal(QString username)
{
    emit sendConnectionRequest(username);
}

void Client::emitValidUsernameSignal(){
    emit validUsername();
}

void Client::onNameEntered(QString name){
    qDebug() << "Name entered: " << name;
    //SIMON FUNCTION
    

    QString readtext = name;

    //flags for validating the incoming text
    QMessageBox msgBox;
    QMessageBox msgBox2;

    msgBox2.setText("Rules for creating a username");
    msgBox2.setIcon(QMessageBox::Information);
    msgBox2.setInformativeText("A username starts with your group number, underscore and then a name. If it’s an AI, it will "
                              "be group number1 followed by ”_” and ”AI” + a number (start at 1) eg. \"10_AI1\" For a "
                              "human player the ”_” is followed by a name that will be displayed eg. ”3_TheLegend27.");

    QString title_playerIDExamples ="Valid\n\n";
    QString good_playerIDExamples = "1_TheLegend27 (for a user)\n2_AI1 (for an AI) \n4_TheLegend27_AI1 (Custom AI name)\n\n";
    QString title_badPlayerIDExamples ="Invalid\n\n";
    QString bad_playerIDExamples = "TheLegend27\n 3_AI\n\n";
    QString sideNote = "Note that group numbers as part of usernames is a legacy requirement from when groups were required to be able to  play against other groups";
    QString combine = title_playerIDExamples + good_playerIDExamples + title_badPlayerIDExamples + bad_playerIDExamples + sideNote;
    msgBox2.setDetailedText(combine);

   
    bool is_emptytext = false; // assume there's text first.
    bool is_groupnumber = false; // if there's a group number at the beginning of the playerID
    bool is_underscore = false; // if there's underscore followed after the group number
    bool is_lastnumber = false; // if there's a unique number at the end of the playerID
    bool funnysymbol = false; // if there is any symbol except underscore, i.e. .#$@

    if(readtext.isEmpty())
        is_emptytext = true;


    // case 1: the playerID doesn't start with a group number

    if (!is_emptytext && readtext[0].isNumber())
        is_groupnumber = true;


    // case 2: The underscore is not followed after the group number while approaching the end of the input text
    // i indicates the prev char in the text, while j is for the current char
    for(int i = 0, j = 1; !is_underscore && j < readtext.length(); i++, j++)
    {
        if(readtext[i].isNumber() && readtext.at(j) == '_')
            is_underscore = true;

    }

    // case 3: checking if the ID lasts with a number while approaching the end of the input text.
    for(int i = 0; !is_lastnumber && i < readtext.length(); i++)
    {
        if(i == readtext.length()-1 && readtext[i].isNumber())
            is_lastnumber = true;
    }

    // case 4: check if there's no other symbol apart from the underscore
    for(int i = 0; !funnysymbol && i < readtext.length(); i++)
    {
        if(!readtext[i].isLetterOrNumber() && readtext.at(i) != '_')
            funnysymbol = true;
    }


    // after iterating and checking the input text, open a the loading page so that the user joins a game session.
    if(!is_emptytext && is_groupnumber && is_underscore && is_lastnumber && !funnysymbol)
    {
        //QMessageBox::information(this, "Message", "Login successful. You're joined in an active game session.");
        //        connect(QMessageBox:, QPushButton::clicked,this, &UsernameScreen::callLoadingPage);
        //        callLoadingPage();

        readtext.replace(" ", "");

        my_id = name;

        emit validUsername();
    }
    else if (is_emptytext)
    {

        //If there is no text, show an incomplete message
        //QMessageBox::warning(this, "Error", "Invalid playerID. Empty PlayerID. Please try again.");
        msgBox.setText("Invalid playerID");
        msgBox.setInformativeText("Empty PlayerID. Please try again.");
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.exec();

        msgBox2.exec();
    }
    else if(!is_groupnumber)
    {
        msgBox.setText("Invalid playerID");
        msgBox.setInformativeText("No group number in the beginning found.  Please try again.");
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.exec();
        //QMessageBox::warning(this, "Error", " Invalid playerID. No group number in the beginning.  Please try again.");
        msgBox2.exec();
    }
    else if(!is_underscore)
    {
        msgBox.setText("Invalid playerID");
        msgBox.setInformativeText("No undrscore followed after group number found.  Please try again.");
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.exec();

        //QMessageBox::warning(this, "Error", "Invalid playerID. No undrscore followed after group number.  Please try again.");
        msgBox2.exec();
    }
    else if(!is_lastnumber)
    {
        msgBox.setText("Invalid playerID");
        msgBox.setInformativeText("No last number found after playerID. Please try again.");
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.exec();

        msgBox2.exec();
        //QMessageBox::warning(this, "Error", "Invalid playerID. No last number after playerID.  Please try again.");
    }
    else if(funnysymbol)
    {
        msgBox.setText("Invalid playerID");
        msgBox.setInformativeText("Funny symbol in playerID - only underscore '_' allowed. Please try again.");
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.exec();
        msgBox2.exec();

        //QMessageBox::warning(this, "Error", "Invalid playerID. Funny symbol in playerID - only underscore '_' allowed. Please try again.");
    }

    // print examples of valid playerID



}

void Client::setPlayerTurn(int turn, int dice1, int dice2)
{
    currentPlayerTurn = turn;
    diceValue =  dice1 + dice2;
    qDebug() << "Dice value:" << diceValue;
}

void Client :: emitShowCardSignal(QString card){
    emit showCard(card);
}
void Client::onTurnEnded(){
    int nextTurn = currentPlayerTurn > 6 ? 1:(currentPlayerTurn % 7 + 1);

    //this->setPlayerTurn(nextTurn);
    qDebug()<<"TEST: Moving Player";
    this->updatePlayerPosition(nextTurn, (std::rand() % 1000) , (std::rand() % 700));
}

void Client::onAccusationMade(QString room,QString person, QString item)
{
    qDebug() << "Accusation" << person << room << item;
    emit    makeAccusation(person, item, room);
}
void Client::onSuggestionMade(QString room,QString person, QString item)
{
    qDebug() << "Suggestion" << person << room << item;
    broker->makeSuggestion(person, item, room);
}
void Client::testBox(QString in)
{
    // QMessageBox msgBox;
    // msgBox.setText("Testing Dialog Boxes");
    // msgBox.setInformativeText(in);
    // msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    // msgBox.setDefaultButton(QMessageBox::Save);
    // int ret = msgBox.exec();
}

void Client::onRequestAnswered(QString room, QString person, QString item)
{
    qDebug()<< "Answered Suggestion with: "  << person << room << item;
    // emit to broker here
}

void Client::onRequestReceived(){
    emit promptRequested();
}

QString Client::getPlayerID(int n){
    switch(n){
    case 1:
        return player1_id;
    case 2:
        return player2_id;
    case 3:
        return player3_id;
    case 4:
        return player4_id;
    case 5:
        return player5_id;
    case 6:
        return player6_id;
    default:
        break;
    }
    return "None";
}
void Client::onPlayerAccepted(QString username, QString person, int dice1, int dice2)
{
    qDebug()<<"Received From Server: " << username << " " << person << " " << dice1 << " " << dice2;
    int temp_number = 0;
    if (person == "Reverend Green") {
       player2_id = username;
       temp_number = 2;
    } else if (person == "Miss Scarlett") {
        player6_id = username;
        temp_number = 6;
    } else if (person == "Chef White") {
        player1_id = username;
        temp_number = 1;
    } else if (person == "Mrs. Peacock") {
        player4_id = username;
        temp_number = 4;
    } else if (person == "Professor Plum") {
        player5_id = username;
        temp_number = 5;
    } else if (person == "Colonel Mustard") {
        player3_id = username;
        temp_number = 3;
    }
    qDebug() << username << " " << this->my_id;     
    if (username == this->my_id)
    {
       my_player_number = temp_number; // this is the player as a number used in gui
       qDebug() << "Emited: Player " << temp_number;
       emit connectionAccepted();
    }
    return;
}

bool Client::isMyTurn() const
{
    return currentPlayerTurn == my_player_number;
}
void Client::emitConnectionAccepted(){
    emit connectionAccepted();    
}

void Client::emitConnectionRejected(){
    emit connectionRejected();
}

void Client::onCardShown(bool hasCard, QString asked, QString showed) // Multicast
{
    // {showed} has/hasn't shown a card to {asked}.
    if (hasCard == true)
    {
       QMessageBox msgBox;
       msgBox.setText(showed + "has shown a card" + asked);
       msgBox.setInformativeText(showed + "has shown a card" + asked);
       msgBox.setStandardButtons(QMessageBox::Ok);
       msgBox.setDefaultButton(QMessageBox::Ok);
       msgBox.exec();
    }
    else
    {
      QMessageBox msgBox;
      msgBox.setText(showed + "hasn't shown a card" + asked);
      msgBox.setInformativeText(showed + "has shown a card" + asked);
      msgBox.setStandardButtons(QMessageBox::Ok);
      msgBox.setDefaultButton(QMessageBox::Ok);
      msgBox.exec();
    }

}
void Client::onCardShownToPlayer(QString username, QString card)      // Unicast
{

       QMessageBox msgBox;
       msgBox.setText(username + "has shown a card" + card);
       msgBox.setInformativeText(username + "has shown a card" + card);
       msgBox.setStandardButtons(QMessageBox::Ok);
       msgBox.setDefaultButton(QMessageBox::Ok);
       msgBox.exec();

}

void Client::onGameEnded(){
       QMessageBox msgBox;
       msgBox.setText("Game has ended");
       msgBox.setInformativeText("Game has ended");
       msgBox.setStandardButtons(QMessageBox::Ok);
       msgBox.setDefaultButton(QMessageBox::Ok);
       msgBox.exec();
       
       emit gameEndedSignal();
}
