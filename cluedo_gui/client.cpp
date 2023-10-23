#include <QInputDialog>
#include "client.h"
#include <QDebug>
#include <QMessageBox>
#include <QApplication>

Client::Client(QObject *parent)
    : QObject{parent}, currentPlayerTurn(0)
{
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
int Client::playerTurn() const
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
    emit makeSuggestion(person, item, room);
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
void Client::emitRequestConnectionSignal(quint32 address, quint16 port, QString username)
{
  
    bool ok1;
    QString ip = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                         tr("Enter IP:"), QLineEdit::Normal,
                                         "192.168.0.0.0", &ok1);


    if (ok1 && !ip.isEmpty()){
    emit requestConnection(address, port, username);

    }
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
    bool is_emptytext = false; // assume there's text first.
    QMessageBox msgBox;
    msgBox.setText("Warning");
    if(readtext.isEmpty()){
        is_emptytext = true;
    }

    if(!is_emptytext)
    {
        emit validUsername();
    }
    else if (is_emptytext)
    {
        msgBox.setInformativeText("Empty! add plz");
        msgBox.exec();
    }
}

void Client::setPlayerTurn(int turn)
{
    if(currentPlayerTurn != turn){
        currentPlayerTurn = turn;
        diceValue =  std::rand()%6 +1 ;//dice;
        qDebug() << "Dice value:" << diceValue;
        emit playerTurnChanged();
    }
}

void Client :: emitShowCardSignal(QString card){
    emit showCard(card);
}
void Client::onTurnEnded(){
    int nextTurn = currentPlayerTurn > 6 ? 1:(currentPlayerTurn % 7 + 1);

    this->setPlayerTurn(nextTurn);
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
    emit makeSuggestion(person, item, room);
}
void Client::testBox(QString in)
{
    QMessageBox msgBox;
    msgBox.setText("Testing Dialog Boxes");
    msgBox.setInformativeText(in);
    msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();
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
}

void Client::emitConnectionAccepted(){
    emit connectionAccepted();    
}

void Client::emitConnectionRejected(){
    emit connectionRejected();
}
