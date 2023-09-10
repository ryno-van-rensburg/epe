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
    this->client = new Client();
    QObject::connect(this->client, SIGNAL(connectedToGame()), this, SIGNAL(playerAcceptedSignal()) );
    QObject::connect(this->client,SIGNAL(gameStateReceived(Message*)), this, SLOT(unpackGameState(Message*)));
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
    Message* msg = new Message("REQUEST_CONNECTION", obj);
    this->client->sendMessage(*msg);
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
     // Now I have to wait for the signal to be emitted
    QObject::connect(this, SIGNAL(connectionStarted(QString)), this, SLOT(sendConnectionRequest(QString)));
    emit this->connectionStarted(username);
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
    Message* msg = new Message ("MAKE_MOVE", obj);
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
 * This function unpacks and processes the game state information received
 * from the server in the form of a `Message`. It extracts relevant data
 * such as the number of players, player information, dice roll, current
 * turn, and face-up cards. The processed data is then emitted through
 * the `gameStateSignal`.
 *
 * @param msg The game state message received from the server.
 */
void ClientMessageBroker::unpackGameState(Message *msg) {
    QJsonObject obj = msg->getObj();
    int numPlayers = obj["Number_Of_Players"].toInt();
    QJsonArray players = obj["Players"].toArray();
    int dice = obj["Current_Dice_Roll"].toInt();
    int currentTurn = obj["Current_Turn"].toInt();
    QJsonArray faceupCards = obj["Face_Up_Cards"].toArray();
    // TODO ack this message
    delete msg;
    emit this->gameStateSignal(numPlayers,players,dice,currentTurn,faceupCards);
}
