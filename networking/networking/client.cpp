#include "client.h"
#include "error.h"

#define DEBUG 1
Client::Client()
{
    this->ackCounter = 0;
    QObject::connect(this->serverConnection, SIGNAL(connected()), this, SLOT(connMade()));
    QObject::connect(this->serverConnection, SIGNAL(errorOccurred(SocketError)), this, SLOT(connectionError(SocketError)));
    QObject::connect(this->serverConnection, SIGNAL(readyRead()), this, SLOT(handleMessage()));
    this->serverConnection = nullptr;
    this->addr = nullptr;
}

Client::~Client()
{
    // deallocate memory
    delete this->serverConnection;
    delete this->addr;
    //delete messages referenced by ackMessages
    if (this->ackMessages) {
    }
}

quint64 getAckCount(){
    return this->ackCounter;
}

void Client::sendMessage(Message &msg)
{
    // extract json from message
    MESSAGE_TYPE type = msg.getType();
    QByteArray content = msg.getBytes();
    if (this->serverConnection = nullptr){
        // TODO, tried sending message to nonexistent connection;
        return;
    }
    // check if QTcpSocket is working.
    if (!this->serverConnection->isOpen()) {
        // reattempt connection
        this->reconnect();
    }
    // send message.
    qint64 bytesWritten = this->serverConnection->write(content);
    // TODO handle error here
    if (bytesWritten < 0){
        if (DEBUG) {
            std::cout << "void Client::sendMessage could not send message" << std::endl;
        }
    } else {
        if (type != MESSAGE_TYPE::REQ_GAME_STATE && type != MESSAGE_TYPE::ACK && type != MESSAGE_TYPE::ERROR) {
            this->ackMessages.append(msg);
        }
    }
    return;
}

void Client::connect(quint32 ipAddr, quint16 port)
{
    this->addr = new QHostAddress(ipAddr);
    if (this->serverConnection == nullptr){
        this->serverConnection = new QTcpSocket();
    }
    this->serverConnection->connectToHost(addr, port);
}
bool Client::reconnect(){
    this->connect(this->addr, this->port);
}

int extractAckId(Message &msg) {
    QJsonObject obj = QJsonObject(msg.getBytes());
    id = obj['ACK_ID'];
    return id;
}

void Client::handleError(Message &msg)
{
    int id = extractAckId(msg);

    for (int i = 0; i < this->ackMessages.size(); i++){
        // find the msg we want
        Message* m = &(this->ackMessages.at(i));
        int itr_id = extractAckId(m);
        if (itr_id == id){
            // check error type
            QJsonObject obj(msg.getBytes());
            switch(strtoError(obj["Error"])) {

            case(ERROR_TYPE::CONNECTION_DENIED):
                // TODO signal gui that the connection has been denied
                std::cout << "Connection with server denied" << std::endl;
                break;

            case(ERROR_TYPE::INVALID_MOVE):
                // TODO request a new move from the GUI with the dice roll in the old message
                std::cout << "Invalid move" << std::endl;
                break;

            case(ERROR_TYPE::NOT_GAME_PARTICIPANT):
                // TODO The system should never send move updates or suggestions.
                std::cout << "Not game participant" << std::endl;
                break;

            case(ERROR_TYPE::OUT_OF_TURN):
                // TODO handle this correctly
                std::cout << "Out of turn" << std::endl;
                break;

            case(ERROR_TYPE::INVALID_PERSON_NAME):
                // TODO handle this
                std::cout << "Invalid person name" << std::endl;
                break;

            case (ERROR_TYPE::INVALID_MESSAGE_FORMAT):
                std::cout << "Malformed message, resend" << std::endl;
                break;
            case (ERROR_TYPE::INVALID_ROOM_NAME):
                std::cout << "Invalid room name" << std::endl;
                break;
            case (ERROR_TYPE::INVALID_WEAPON_NAME):
                std::cout << "Invalid weapon name" << std::endl;
                break;
            };
            return;
        }
    }

    // do what it takes to resend the message, probably going to call a slot again.
}

void Client::handleAck(Message &msg)
{
    // Extract the ack id in order to find the message that has been acknowledged.
    int id = extractAckId(msg);
    for (int i = 0; i < this->ackMessages.size(); i++){
        Message* m = &(this->ackMessages.at(i));
        int itr_id = extractAckId(m);
        if (itr_id == id){
            // remove message from list
            this->ackMessages.remove(i);
            return;
        }
    }
    return;
}

// TODO apply factory design pattern to messages.
void Client::handleMessage(){
    QByteArray incomingData = this->serverConnection->readAll();
    if (incomingData.isEmpty()){
    return;
    } else {
    // construct the Message class
    QJsonParseError* errPtr = nullptr;
    QJsonDocument contents = QJsonDocument::fromJson(incomingData, errPtr);
    if (!contents.isNull() && contents.isObject()){
        // get the message type and construct a new message.
        QJsonObject obj = contents.object();
        QJsonValue v = obj['Type'];
        if (v.isString()) {
        Message* msg = new Message(v, contents);

        switch (msg->getType())
        {
        case (MESSAGE_TYPE::GAME_STATE) : {
            // Extract game state from data and send it on to gui
                       emit this->gameStateReceived(msg);
        }
        case (MESSAGE_TYPE::ACK):
        {
            // get message id and remove from ack list
            this->handleAck(msg);
            break;
        }
        case (MESSAGE_TYPE::ERROR):
        {
            //
            this->handleError(msg);
            break;
        }
        };
        } else {
        // TODO handle error
        return;
        }
    }
    }
    return;
}

void Client::ack(int id){
    this->ackCounter++;
        QJsonObject obj
    {
        {"Type", "ACKNOWLEDGE"},
        {"ID_ACK", id},
    };

    Message msg("ACKNOWLEDGE", obj);
    this->client->sendMessage(msg);
    return;
}

void Client::connMade() {
    // TODO notify gui of connection
    this->connected = True;
}

void Client::connectionError() {
    // TODO handle error, probably have to emit some signal
    this->connected = False;
}
