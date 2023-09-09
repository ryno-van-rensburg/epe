#include "clientconnection.h"
#include <iostream>
// This class should not delete any of the memory references passed to it!
ClientConnection::ClientConnection(QObject *parent)
    : QObject{parent}
{
    this->connection = nullptr;
    this->session = nullptr;
    this->minTimer = new QTimer(this);
    this->timerOut = new QTimer(this);
    for (int i = 0; i < NUM_MESSAGE_TYPES; i++){
        this->violationCounts.insert((MESSAGE_TYPE)i, 0);
    }
    this->playerObj = nullptr;
    this->port = 0;
    this->isFirstTurn = false;
    this->isPlaying = false; // First need to check if the player is allowed into the lobby
}


ClientConnection::ClientConnection(QTcpSocket &connection, Player &playerObj, ServerSession &session)
{
    this->connection = &connection;
    this->session = &session;
    this->minTimer = new QTimer(this);
    this->timerOut = new QTimer(this);
    for (int i = 0; i < NUM_MESSAGE_TYPES; i++){
        this->violationCounts.insert((MESSAGE_TYPE)i, 0);
    }
    this->addr = connection.peerAddress();
    this->port = connection.peerPort();
    this->playerObj = &playerObj;
    this->isFirstTurn = false;
    this->isPlaying = true;
    return;
}



void ClientConnection::setPlayer(Player &playerObj){
    this->playerObj = &playerObj;
}

void ClientConnection::setConnection(QTcpSocket &connection){
    this->connection = &connection;
}

void ClientConnection::setSession(ServerSession& session){
    this->session = &session;
}

void ClientConnection::sendMessage(Message &msg)
{
    MESSAGE_TYPE type = msg.getType();
    QByteArray content = msg.getBytes();
    if (this->connection == nullptr){
        // TODO, tried sending message to nonexistent connection. This should never ever happen
        return;
    }
   // send message.
    qint64 bytesWritten = this->connection->write(content);
    // TODO handle error here
    if (bytesWritten < 0){
        if (1) {
            std::cout << "void Client::sendMessage could not send message" << std::endl;
        }
    } else {
        if (type != MESSAGE_TYPE::REQ_GAME_STATE && type != MESSAGE_TYPE::ACK && type != MESSAGE_TYPE::ERROR) {
            // this signal is used to add the message to the ack queue.
            emit messageSent(msg);
        }
    }
    return;
}

void ClientConnection::messageReceived()
{
    QByteArray incomingData = this->connection->readAll();
    if (incomingData.isEmpty()){
        return;
    } else {
        QJsonParseError* errPtr = nullptr;
        QJsonDocument contents = QJsonDocument::fromJson(incomingData, errPtr);
        if (!contents.isNull() && contents.isObject()){
            QJsonObject obj = contents.object();
            QJsonValue v = obj["Type"];
            if (v.isString()){
                Message* msg = new Message(v.toString(), contents);
                switch (msg->getType())
                {
                    case (MESSAGE_TYPE::REQ_GAME_STATE):
                        break;
                    case (MESSAGE_TYPE::ACK):{
                        break;
                    }
                };
            }
        }
    }
}


QString ClientConnection::getUsername(){
    return this->username;
}


void ClientConnection::setUsername(QString username){
    this->username = username;
    return;
}
