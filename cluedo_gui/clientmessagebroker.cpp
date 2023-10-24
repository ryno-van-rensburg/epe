#include "clientmessagebroker.h"

/**
 * @brief Constructs a ClientMessageBroker object.
 *
 * This constructor initializes a `ClientMessageBroker` object and creates an
 * internal `Client` instance. It also establishes connections between signals
 * and slots for handling various events.
 *
 * @param parent The parent QObject (if any) for this object.
 */


ClientMessageBroker::ClientMessageBroker(QObject *parent)
    : QObject{parent}
{
    this->client = new NetworkClient();
    // todo verification of data
    QObject::connect(this->client, SIGNAL(connectionAccepted(Message&)), this, SLOT(unpackConnectionAccepted(Message&)));
    QObject::connect(this->client,SIGNAL(gameStateReceived(Message&)), this, SLOT(unpackGameState(Message&)));
    QObject::connect(this->client, SIGNAL(suggestionStateUpdate(Message&)), this, SLOT(unpackSuggestionStateUpdate(Message&)));
    QObject::connect(this->client, SIGNAL(connectionDenied(Message&)), this, SLOT(unpackConnectionRejected(Message&)));
    QObject::connect(this->client, SIGNAL(cardRequested(Message&)), this, SLOT(unpackCardRequested(Message&)));
    QObject::connect(this->client, SIGNAL(cardShown(Message&)), this, SLOT(unpackCardShown(Message&)));
    QObject::connect(this->client, SIGNAL(moveUpdate(Message&)), this, SLOT(unpackMove(Message&)));
    QObject::connect(this->client, SIGNAL(suggestionStateUpdate(Message&)), this, SLOT(unpackSuggestionStateUpdate(Message&)));
    QObject::connect(this->client, SIGNAL(playerKicked(Message&)), this, SLOT(unpackKick(Message&)));
    QObject::connect(this->client, SIGNAL(cardsDealt(Message&)), this, SLOT(unpackCardsDealt(Message&)));
    QObject::connect(this->client, SIGNAL(playerTurn(Message&)), this, SLOT(unpackPlayerTurn(Message&)));
    QObject::connect(this->client, SIGNAL(playerResult(Message&)), this, SLOT(unpackPlayerResult(Message&)));
    QObject::connect(this->client, SIGNAL(gameTerminated(Message&)), this, SLOT(unpackGameTerminated(Message&)));
    QObject::connect(this->client, SIGNAL(moveError()), this, SIGNAL(invalidMove()));
}


ClientMessageBroker::~ClientMessageBroker(){
    delete this->client;
}

/**
 * @brief Sends a connection request to the server.
 *
 * This function sends a connection request to the server with the provided
 * username. It constructs a `Message` object representing the request and
 * sends it using the internal `Client` instance.
 *
 * @param username The username for the connection request.
 */
void ClientMessageBroker::sendConnectionRequest(QString username){
     QJsonObject obj
    {
        {"Type", "REQUEST_CONNECTION"},
        {"ID", (int)this->client->getAckCount()},
        {"Username", username}
    };
    Message msg("REQUEST_CONNECTION", obj);
    this->client->sendMessage(msg);
    return;
}
/**
 * @brief Initiates a connection request to the server.
 *
 * This function initiates a connection request to the server with the provided
 * address, port, and username. It triggers the connection process and waits for
 * signals to emit the connection request.
 *
 * @param address The IP address of the server to connect to.
 * @param port The port number of the server to connect to.
 * @param username The username for the connection request.
 */
void ClientMessageBroker::requestConnection(quint32 address, quint16 port, QString username) {
    this->client->connect(address, port);

 //   QObject::connect(this, SIGNAL(connectionStarted(QString)), this, SLOT(sendConnectionRequest(QString)));
    sendConnectionRequest(username);
    return;
}

/**
 * @brief Sends a move request to the server.
 *
 * This function sends a move request to the server with the specified position.
 * It constructs a `Message` object representing the move request and sends it
 * using the internal `Client` instance.
 *
 * @param position The position to move to.
 */
void ClientMessageBroker::makeMove(int position){
    QJsonObject obj
    {
        {"Type" , "MAKE_MOVE"},
        {"ID", (int)this->client->getAckCount()},
        {"Position", position}
    };
    Message* msg = new Message("MAKE_MOVE", obj);
    this->client->sendMessage(*msg);
    return;
}

/**
 * @brief Shows a card to the server.
 *
 * This function sends a message to the server to show a card with the specified
 * name. It constructs a `Message` object representing the card showing and sends
 * it using the internal `Client` instance.
 *
 * @param card The name of the card to show.
 */
void ClientMessageBroker::showCard(QString card){
    // TODO, get card header file
    QJsonObject obj
    {
        {"Type", "SHOW_CARD"},
        {"ID", (int) this->client->getAckCount()},
        {"Card", card},
    };
    Message* msg = new Message("SHOW_CARD", obj);
    this->client->sendMessage(*msg);
}

/**
 * @brief Makes an accusation to the server.
 *
 * This function sends an accusation message to the server with the specified
 * person, weapon, and room. It constructs a `Message` object representing the
 * accusation and sends it using the internal `Client` instance.
 *
 * @param person The accused person.
 * @param weapon The accused weapon.
 * @param room The accused room.
 */
void ClientMessageBroker::makeAccusation(QString person, QString weapon, QString room)
{
    QJsonObject accObj {
        {"Person", person},
        {"Weapon", weapon},
        {"Room", room},
    };
    QJsonObject obj
    {
        {"Type", "MAKE_ACCUSATION"},
        {"ID", (int)this->client->getAckCount()},
        {"Accusation", accObj}
    };

    Message* msg = new Message("MAKE_ACCUSATION", obj);
    this->client->sendMessage(*msg);
}

/**
 * @brief Makes a suggestion to the server.
 *
 * This function sends a suggestion message to the server with the specified
 * person, weapon, and room. It constructs a `Message` object representing the
 * suggestion and sends it using the internal `Client` instance.
 *
 * @param person The suggested person.
 * @param weapon The suggested weapon.
 * @param room The suggested room.
 */
void ClientMessageBroker::makeSuggestion(QString person, QString weapon, QString room)
{
     QJsonObject suggestionObj {
        {"Person", person},
        {"Weapon", weapon},
        {"Room", room},
    };

    QJsonObject obj
    {
        {"Type", "MAKE_SUGGESTION"},
        {"ID", (int)this->client->getAckCount()},
        {"Suggestion", suggestionObj}
    };

    Message* msg = new Message("MAKE_ACCUSATION", obj);
    this->client->sendMessage(*msg);
}

/**
 * @brief Requests the game state from the server.
 *
 * This function sends a request to the server for the current game state. It
 * constructs a `Message` object representing the request and sends it using
 * the internal `Client` instance.
 */
void ClientMessageBroker::requestStateSlot()
{
    QJsonObject obj
    {
        {"Type", "REQUEST_GAME_STATE"},
        {"ID", (int) this->client->getAckCount()},
    };
    Message* msg = new Message("REQUEST_GAME_STATE", obj);
    this->client->sendMessage(*msg);
}



/**
 * @brief Unpacks and processes the received game state message.
 *
 this->isPlaying = false
 * This function unpacks and processes the game state information received
 * from the server in the form of a `Message`. It extracts relevant data
 * such as the number of players, player information, dice roll, current
 * turn, and face-up cards. The processed data is then emitted through
 * the `gameStateSignal`.
 *
 * @param msg The game state message received from the server.
 */
void ClientMessageBroker::unpackGameState(Message &msg) {
    QJsonObject obj = msg.getObj();
    MESSAGE_TYPE type = msg.getType();
    int numPlayers = obj["Number_Of_Players"].toInt();
    QJsonArray players = obj["Players"].toArray();
    int dice = obj["Current_Dice_Roll"].toInt();
    int currentTurn = obj["Current_Turn"].toInt();
    QJsonArray faceupCards = obj["Face_Up_Cards"].toArray();
    // TODO ack this message
    if (type == GAME_STATE_REPLY){
        client->ack(msg);
        emit this->gameStateSignal(numPlayers,players,dice,currentTurn,faceupCards);
    } else if (type == GAME_STATE){
       // emit this->gameStartedSignal(numPlayers,players,dice,currentTurn,faceupCards);
    }
    return; 
}

void ClientMessageBroker::unpackPlayerTurn(Message &msg){
    // TODO error checking
    QJsonObject obj = msg.getObj();
    QString username = obj["Username"].toString();
    if (username == client->getUsername()) {
        client->ack(msg);
    }
    emit this->turnSignal(username,obj["Dice1"].toInt(), obj["Dice2"].toInt());
}

void ClientMessageBroker::unpackCardsDealt(Message &msg){
    QJsonObject obj = msg.getObj();
    int numberOfCards = obj["Number_Of_Cards"].toInt();
    QVector<QString> cards;
    QJsonObject cardsObject = obj["Cards"].toObject();
    for (int i = 0 ; i < numberOfCards; i++) {
        QString key = "Card" + QString::number(i);
        cards.append(cardsObject[key].toString());
    }

    client->ack(msg);
    emit this->cardsDealt(cards);
    return;
}

void ClientMessageBroker::unpackCardRequested(Message &msg){
    QJsonObject obj = msg.getObj();
    QString askedCard = obj["Asked_Card"].toString();
    QJsonObject suggestionObj = obj["Suggestion"].toObject();
    QString weapon = suggestionObj["Weapon"].toString();
    QString room = suggestionObj["Room"].toString();
    QString person = suggestionObj["Person"].toString();
    QVector<QString> suggestion = {person, weapon, room};
    client->ack(msg);
    emit this->cardRequestedSignal(askedCard, suggestion);
    return;
}

void ClientMessageBroker::unpackGameTerminated(Message &msg)
{
    emit gameEndedSignal();
    return;
}

void ClientMessageBroker::unpackCardShown(Message &msg){
    QString asked, showed;
    bool hasCard;
    QJsonObject o = msg.getObj();
    asked = o["Asked_Card"].toString();
    showed = o["Showed_Card"].toString();
    int temp = o["Has_Card"].toInt(-1);
    if (temp == 1 ){
        hasCard = true;
    } else {
        hasCard = false;
    }
    emit this->cardShown(hasCard, asked, showed);
}

void ClientMessageBroker::unpackMove(Message &msg){
    QString username;
    int position;
    QJsonObject o;
    username = o["Username"].toString();
    position = o["Position"].toInt();
    emit this->moveUpdate(username, position);
    if (username == client->getUsername()){
        client->ack(msg);
    }
    return;
}

void ClientMessageBroker::unpackShowCardToPlayer(Message &msg){
    QJsonObject obj = msg.getObj();
    QString user = obj["Username"].toString();
    QString card = obj["Card"].toString();
    emit this->cardShownToPlayer(user, card);
    client->ack(msg);
    return;
}

void ClientMessageBroker::unpackPlayerResult(Message &msg)
{
    QVector<QString> accusation;
    QJsonObject root = msg.getObj();
    bool hasWon = false;
    QJsonObject accObj = root["Accusation"].toObject();
    QString username = root["Username"].toString();
    accusation.append(accObj["Person"].toString()) ;
    accusation.append(accObj["Weapon"].toString());
    accusation.append(accObj["Room"].toString());
    int win = root["Win"].toInt();
    if (win == 1){
        hasWon = true;
    } else {
        hasWon = false;
    }
    emit this->playerResult(username, accusation, hasWon);
    return;
}


void ClientMessageBroker::unpackConnectionAccepted(Message &msg)
{
    QString username;
    QString person;
    int dice1 ;
    int dice2 ;
    QJsonObject obj = msg.getObj();
    username = obj["Username"].toString();
    person = obj["Person"].toString();
    dice1 = obj["Dice1"].toInt();
    dice2 = obj["Dice2"].toInt();
    emit this->playerAcceptedSignal(username, person, dice1, dice2);
    return;
}

void ClientMessageBroker::unpackKick(Message &msg){
    QString username;
    QString reason;
    QJsonObject obj = msg.getObj();
    username = obj["Username"].toString();
    reason = obj["Reason"].toString();
    emit this->playerKicked(username, reason);
    return;
}

void ClientMessageBroker::unpackConnectionRejected(Message &msg){
    QJsonObject obj = msg.getObj();
    QString reason =  obj["REASON"].toString();
    client->ack(msg);
    emit this->connectionRejectedSignal(reason);
    return;
}

void ClientMessageBroker::unpackSuggestionStateUpdate(Message &msg){
        QJsonObject obj = msg.getObj();
        QString username = obj["Username"].toString();
        QString weapon = obj["Weapon"].toString();
        QString person = obj["Person"].toString();
        QString room = obj["Room"].toString();
        emit this->suggestionStateUpdate(username, person, weapon, room);
        return;
}
