#include "serversession.h"

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
   while (this->ackList.count()){
       if (this->ackList.takeLast() != nullptr) {
           delete this->ackList.takeLast();
       }
   }
   while (this->connections.count()){
       if (this->connections.takeLast() != nullptr){
           delete this->connections.takeLast();
       }
   }
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
     // check if this client is already part of the session
     for (int i = 0; i < connections.size(); i++)
     {
         // TODO previous connections

     }
     // check if this client is already in pending connections.
     for (int i =0; i < pendingConnections.size(); i++){
         if (pendingConnections.at(i)->peerAddress() == sock->peerAddress()) {
            return;
         }
     }
    // check some prelim things before adding the connection to the pending connections list
    // this list is used to store connections that are not part of the game yet, i.e. has not been accepted
    // by the game server yet.
     if (this->connections.size() >= maxConnections) {
       // TODO, send a connection refused message back
        std::cout << "CONNECTION REJECTED LOBBY TOO FULL" << std::endl;
        return;
     }
     QObject::connect(sock, SIGNAL(readyRead()), this, SLOT(handleDataFromPendingConnections()));
     pendingConnections.push_back(sock);
    return;
}
/**
 * @brief Handles a message received from a client.
 *
 * This function processes messages received from clients and performs actions
 * based on the message type. It can handle requests for joining the game or
 * requesting the game state.
 *
 * @param msg The message received from a client.
 */
void ServerSession::handleMessage(Message &msg)
{
   //if (msg.getType() == MESSAGE_TYPE::REQUEST_CON ) {
    MESSAGE_TYPE t = msg.getType();
    switch (msg.getType()) {

        // player not in game yet.
    case (REQUEST_CON):
    {
        for  (int i = 0; i < this->pendingConnections.size(); i++)
        {
        if (this->pendingConnections.at(i) ==  msg.getSource())
        {
            if (1) {
            // TODO, delegate connection acception to game server
            //emit joiningRequest(*msg);
                QJsonObject obj  {
                    {"Type" ,"PLAYER_ACCEPTED"}};
                QJsonDocument doc;
                doc.setObject(obj);
                msg.getSource()->write(doc.toJson());
            } else {
                emit joiningRequest(msg);
            }
        }
        }

        break;
    }
    case (REQ_GAME_STATE):
        emit gameStateRequested();
    break;
    // REQ_GAME_STATE is an async message, so no ack is required for this.
    };
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
    Message* msg = new Message(MESSAGE_TYPE::REQUEST_CON, data);
    msg->setSource(*sock);
    this->handleMessage(*msg);
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
            client->sendMessage(msg);
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
void ServerSession::kickPlayer(QString username)
{
    for (auto i =0; i < this->connections.size(); i++){
        if (connections.at(i)->getUsername() == username) {
            // TODO handle disconnections properly;
            std::cout <<"Player: " << username.toStdString() << "kicked" << std::endl;
        }
    }
}
