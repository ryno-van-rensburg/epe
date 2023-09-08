#include "clientconnection.h"

// This class should not delete any of the memory references passed to it!
ClientConnection::ClientConnection(QObject *parent)
    : QObject{parent}
{
    this->connection = nullptr;
    this->session = nullptr;
    this->minTimer = new QTimer(this);
    this->timeOut = new QTimer(this);
    this->violationCounts = new QMap();
    for (int i = 0; i < NUM_MESSAGE_TYPES; i++){
        this->violationCounts->insert((MESSAGE_TYPE)i, 0);
    }
    this->playerObj = nullptr;
    this->addr = nullptr;
    this->port = 0;
    this->isFirstTurn = False;
    this->isPlaying = False; // First need to check if the player is allowed into the lobby
}


ClientConnection::ClientConnection(QObject *parent, QTcpSocket &connection, Player &playerObj, ServerSession &sesion)
{
    this->connection = connection;
    this->session = session;
    this->minTimer = new QTimer(this);
    this->timeOut = new QTimer(this);
    this->violationCounts = new QMap();
    for (int i = 0; i < NUM_MESSAGE_TYPES; i++){
        this->violationCounts->insert((MESSAGE_TYPE)i, 0);
    }
    if (connection != nullptr) {
        this->addr = connection->peerAddress();
        this->port = connection->peerPort();
    }
    this->playerObj = playerObj;

    this->isFirstTurn = False;
    this->isPlaying = True;
    return;
}

void ClientConnection::setPlayer(Player &playerObj){
    this->playerObj = playerObj;
}

void ClientConnection::setConnection(QTcpSocket &connection){
    this->connection = socket;
}

void ClientConnection::setSession(ServerSession& session){
    this->session = session;
}

void ClientConnection::messageReceived()
{

}


