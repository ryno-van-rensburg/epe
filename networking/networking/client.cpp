#include "client.h"

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
    // Disconnect signals
    // deallocate memory
    delete this->serverConnection;
    delete this->addr;
}

void Client::sendMessage(Message)
{
    // extract json from message
    MESSAGE_TYPE type = Message.getType();
    QByteArray content = Message.getBytes();
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
            if (const QJsonValue v = obj['type']; v.isString()) {
                Message* msg = new Message(v, contents);
                // pass this off to the ClientMessageBroker based on the type

            } else {
                // TODO handle error
                return;
            }
        }
    }
}

void Client::ack(int id){
    this->ackCounter++;

    return;
}

void Client::connMade() {
    this->connected = True;
}

void Client::connectionError() {
    // handle error, probably have to emit some signal
    this->connected = False;

}
