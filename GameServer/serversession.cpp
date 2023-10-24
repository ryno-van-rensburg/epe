#include "serversession.h"



/**
 * @brief Extracts an ID from a JSON message.
 *
 * This function extracts an ID from a JSON message represented by the provided
 * `msg` parameter. It assumes that the message contains a JSON object with an
 * "ID" field. If the field exists and contains a valid integer value, that
 * value is returned as the extracted ID. If the field is undefined or does not
 * contain a valid integer, 0 is returned to indicate an absence of the ID or
 * an error condition.
 *
 * @param msg The JSON message from which to extract the ID.
 * @return The extracted ID from the message, or 0 if not found or not a valid
 *         integer.
 */
quint32 extractIdServer(Message &msg){
    QJsonObject obj = QJsonObject(msg.getObj());
    QJsonValue id = obj["ID"];
    if (!id.isUndefined()){
        return (quint32) id.toInt();
    } else {
        return 0;
    }
}


/**
 * @brief Constructs a ServerSession object.
 *
 * This constructor initializes a `ServerSession` object and sets the initial
 * values for server connection, acknowledgment counter, number of players, and
 * maximum connections allowed.
 *
 * @param parent The parent QObject (if any) for this object.
 */
ServerSession::ServerSession(QObject *parent)
    : QObject{parent}
{
    this->serverConnection = new QTcpServer();
    this->ackCounter = 0;
    this->numPlayers = 0;
    this->maxConnections = 10;
}
/**
 * @brief Destructs a ServerSession object.
 *
 * This destructor cleans up resources associated with the `ServerSession` object,
 * including deleting the server connection, acknowledgment list, and client connections.
 */
ServerSession::~ServerSession() {
   if (this->serverConnection != nullptr) {
       delete this->serverConnection;
   }
   //while (this->ackList.count()){
   //    if (this->ackList.takeLast() != nullptr) {
   //        delete this->ackList.takeLast();
   //    }
   //}

}

bool ServerSession::isConnectionPending(QHostAddress address){
    for (auto i =0; i < this->pendingConnections.size(); i++){
        QTcpSocket* sock = pendingConnections.at(i);
        if (sock->peerAddress() == address) {
            return true;
        }
    }
    return false;
}

/**
 * @brief Starts listening for incoming connections on the specified port.
 *
 * This function starts listening for incoming connections on the specified port
 * using the internal `QTcpServer` instance. It establishes a connection to the
 * `newConnection` signal to handle new incoming connections.
 *
 * @param port The port number to listen on.
 */
void ServerSession::startListening(int port){
    if (this->serverConnection == nullptr){
        this->serverConnection = new QTcpServer(this);
    }
    if (this->serverConnection->isListening() == false){
        this->serverConnection->listen(QHostAddress::Any, port);
    }
    QObject::connect(this->serverConnection, SIGNAL(newConnection()), this, SLOT(handleNewConnection()));
    return;
}

void ServerSession::ackMessage(QString username){
    QJsonObject obj {
        {"Type" , "ACK"},{"ID_ACK" , 0}
    };
    Message ack(ACK, obj);
    this->unicastMessage(ack, username);

}

NetworkPlayer* ServerSession::getPlayer(QHostAddress address){
    for (int i =0; i < this->connections.size(); i++) {
        ClientConnection* conn = this->connections.at(i);
        if (conn)
        {
            if (conn->getAddr() == address){
                return conn->getPlayer();
            }
        }
    }
    return nullptr;
}

void ServerSession::addPlayer(NetworkPlayer *obj){
    if (obj == nullptr ){
       return;
    }
    QString username = obj->getUsername();
    for (int i =0; i < connections.size(); i++){
        ClientConnection* conn = connections.at(i);
        if (conn->getUsername() == username){
            conn->setPlayer(*obj);
            conn->setPlaying(true);
            return;
        }
    }
    return;
}

NetworkPlayer* ServerSession::getPlayer(QString playerName){
    for (int i =0; i < this->connections.size(); i++) {
        ClientConnection* conn = this->connections.at(i);
        if (conn)
        {
            if (conn->getUsername() == playerName){
                return conn->getPlayer();
            }
        }
    }
    return nullptr;
}

/**
 * @brief Handles a new incoming connection.
 *
 * This function is called when a new client connection is accepted. It checks
 * whether the client is already part of the session and adds it to the pending
 * connections list if not. It also performs preliminary checks, such as ensuring
 * the lobby is not full, before accepting the connection.
 */
void ServerSession::handleNewConnection(){
     QTcpSocket* sock = this->serverConnection->nextPendingConnection();
     // check if this client is already connected
     //QHostAddress addr = sock->peerAddress();
     //for (int i =0; i < this->connections.size(); i++){
     //    if (this->connections.at(i)->getAddr() == addr){
     //       return;
     //    }
    // }
     // create a new clientconnection without a player connection, and set not playing
     ClientConnection* connection = new ClientConnection(sock, this );
     this->connections.append(connection);
     qDebug() << this->connections.size();
     QObject::connect(sock, SIGNAL(readyRead()), connection, SLOT(handleIncomingData()));
     QObject::connect(connection, SIGNAL(messageReceived(Message&)), this, SLOT(handleMessage(Message&)));
     QObject::connect(connection, SIGNAL(violationsExceeded(QString,QString)), this, SLOT(kickPlayer(QString,QString)));
     return;
}

/**
 * @brief Handles a message received from a client.
 *
 * This function processes messages received from clients and performs actions
 * based on the message type. *
 * @param msg The message received from a client.
 */
void ServerSession::handleMessage(Message &msg)
{
   //if (msg.getType() == MESSAGE_TYPE::REQUEST_CON ) {
    MESSAGE_TYPE t = msg.getType();
    bool playerInGame = true;
    QHostAddress address = msg.getSource()->peerAddress();
    if (isConnectionPending(address) && getPlayer(address) == nullptr){
        playerInGame = false;
    }

    switch (msg.getType()) {
    // player not in game yet.
    case (REQUEST_CON):
    {
        emit joiningRequest(msg);
        break;
    }
    case (REQ_GAME_STATE):
        if (!playerInGame) {
            // send error message
        }
        emit gameStateRequested();
    break;
    // REQ_GAME_STATE is an async message, so no ack is required for this.
    case (ACK):
        this->handleAck(msg);
        break;
    case (MAKE_MOVE):
        // extract move information
        emit moveMade(msg);
        break;
    case(SHOW_CARD):
        // extract card information

        if (!playerInGame) {
            // send error message
            return;
        } else {
            emit cardShown(msg);
        }
        break;
    case (MAKE_ACC):
        if (!playerInGame) {
            // send error message
            return;
        } else {
            emit accusationMade(msg);
        }
        break;

    case (MAKE_SUGGESTION):
        if (!playerInGame) {
            return;
        } else {
            emit suggestionMade(msg);
        }
        break;
    };
    return;
}

void ServerSession::handleAck(Message &msg) {
    int id = extractIdServer(msg);
    for (int i = 0; i < this->ackList.size(); i++) {
        Message m = this->ackList.at(i);
        int itr_id = extractIdServer(m);
        if (itr_id == id) {
            this->ackCounter++;
            this->ackList.remove(i);
            return;
        }
    }
    return;
}

/**
 * @brief Handles data received from pending connections.
 *
 * This function is called when data is received from pending connections
 * (clients who are not yet part of the game). It processes the received data
 * and constructs a `Message` object for further handling.
 */
void ServerSession::handleDataFromPendingConnections()
{
    QTcpSocket* sock = (QTcpSocket*) QObject::sender();
    QByteArray data = sock->readAll();
    Message msg(MESSAGE_TYPE::REQUEST_CON, data);
    msg.setSource(sock);
    this->handleMessage(msg);
    return;
 }


/**
 * @brief Sends a unicast message to a specific client.
 *
 * This function sends a message to a specific client identified by their username.
 *
 * @param msg The message to send.
 * @param username The username of the target client.
 */
void ServerSession::unicastMessage(Message &msg, QString username){
    for (auto i = 0; i < this->connections.size(); i++) {
        ClientConnection* client = connections[i];
        if(client->getUsername() == username){
            if (msg.getType() == ERROR) {
               QString errorMessage = msg.getObj()["Error"].toString();
                // create a new message with the correct ackId
               if (errorMessage != "NOT_GAME_PARTICIPANT" && errorMessage != "CONNECTION_DENIED" ){
                    client->incrementErrorTally(errorMessage);
               }
            }
            client->sendMessage(msg);
            if (shouldMessageBeAcked(msg.getType())) {
                this->ackList.append(msg);
            }
            return;
        }
    }
}
/**
 * @brief Broadcasts a message to all connected clients.
 *
 * This function broadcasts a message to all connected clients.
 *
 * @param msg The message to broadcast.
 */
void ServerSession::broadCastMessage(Message &msg){
    if (shouldMessageBeAcked(msg.getType())){
        this->ackList.append(msg);
    }
    for (auto i = 0; i < this->connections.size(); i++){
        connections.at(i)->sendMessage(msg);
    }
    return;
}
/**
 * @brief Kicks a player from the game.
 *
 * This function kicks a player from the game based on their username. It should
 * handle disconnections and clean up resources accordingly.
 *
 * @param username The username of the player to kick.
 */
void ServerSession::kickPlayer(QString username, QString reason)
{
    for (auto i =0; i < this->connections.size(); i++){
        if (connections.at(i)->getUsername() == username) {
            // broadcast player_kicked message
            QJsonObject obj;
            obj["Type"] = "PLAYER_KICKED";
            obj["Kicked_Player"] = username;
            obj["Reason"] = reason;
            Message kickMessage(PLAYER_KICKED, obj);
            this->broadCastMessage(kickMessage);
            // remove connection from list
            this->connections.remove(i);
            std::cout <<"Player: " << username.toStdString() << "kicked" << std::endl;
        }
    }
}

void ServerSession::rejectConnection(QString reason, QString handle){
    this->ackMessage(handle);
    QJsonObject obj {
        {"Type" , "CONNECTION_DENIED"},
        {"ID", (int) this->getAckCount()} ,
        {"REASON", reason}
    } ;
    Message rejectionMessage(CONNECTION_DENIED, obj);
    this->unicastMessage(rejectionMessage, handle);
    return;
}
