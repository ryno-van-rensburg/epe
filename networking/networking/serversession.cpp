#include "serversession.h"

ServerSession::ServerSession(QObject *parent)
    : QObject{parent}
{
    this->serverConnection = nullptr;
    this->ackCounter = 0;
    this->numPlayers = 0;
    this->maxConnections = 10;
}

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
    pendingConnections.push_back(sock);
    return;
}

void ServerSession::handleMessage(Message &msg)
{
   if (msg.getType() == MESSAGE_TYPE::REQUEST_CON ) {
        // player not in game yet.
      for  (int i = 0; i < this->pendingConnections.size(); i++){
            if (this->pendingConnections.at(i) ==  msg.getSource()) {
                emit joiningRequest(msg);
            }
        }
   } else if (msg.getType() == MESSAGE_TYPE::REQ_GAME_STATE){
        // REQ_GAME_STATE is an async message, so no ack is required for this.
       emit gameStateRequested();
   }
}

void ServerSession::unicastMessage(Message &msg, QString username){
    for (auto i = 0; i < this->connections.size(); i++) {
        ClientConnection* client = connections[i];
        if(client->getUsername() == username){
            client->sendMessage(msg);
            return;
        }
    }
}

void ServerSession::broadCastMessage(Message &msg){
    for (auto i = 0; i < this->connections.size(); i++){
        connections.at(i)->sendMessage(msg);
    }
    return;
}

void ServerSession::kickPlayer(QString username)
{
    for (auto i =0; i < this->connections.size(); i++){
        if (connections.at(i)->getUsername() == username) {
            // TODO handle disconnections properly;
            std::cout <<"Player: " << username.toStdString() << "kicked" << std::endl;
        }
    }
}
