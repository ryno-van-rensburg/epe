#include "client.h"

Client::Client()
{
    this->ackCounter = 0;
    QObject::connect(this->serverConnection,&QTcpSocket::connect, this, &Client::connMade);
    QObject::connect(this->serverConnection,&QTcpSocket::errorOccurred, this, &Client::connectionError);
}

Client::~Client()
{

}

void Client::sendMessage(Message)
{

}

bool Client::connect(quint32 ipAddr, quint16 port)
{
    QHostAddress addr(ipAddr);
    this->serverConnection.connectToHost(addr, port);

}

QJsonDocument Client::deserialize(QByteArray arr, int numBytes)
{
    return QJsonDocument;
}

void Client::handleMessage(){
    Message
}

void Client::ack(){
    this->ackCounter++;
    return;
}

void Client::connMade() {

}

void Client::connectionError() {
    // handle error, probably have to emit some signal
}
