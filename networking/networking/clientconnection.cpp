#include "clientconnection.h"
#include <iostream>
// This class should not delete any of the memory references passed to it!
/**
 * @brief Constructs a ClientConnection object.
 *
 * This constructor initializes a `ClientConnection` object with default values
 * for its member variables. The object does not own the memory references passed to it.
 *
 * @param parent The parent QObject (if any) for this object.
 */

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


/**
 * @brief Constructs a ClientConnection object with connection details.
 *
 * This constructor initializes a `ClientConnection` object with a QTcpSocket connection,
 * a Player object, and a ServerSession object. It sets the connection details and other
 * member variables accordingly.
 *
 * @param connection The QTcpSocket connection associated with the client.
 * @param playerObj The Player object associated with the client.
 * @param session The ServerSession object associated with the client.
 */
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


/**
 * @brief Sets the Player object associated with the client.
 *
 * This function sets the Player object associated with the client connection.
 *
 * @param playerObj The Player object associated with the client.
 */
void ClientConnection::setPlayer(Player &playerObj){
    this->playerObj = &playerObj;
}

/**
 * @brief Sets the QTcpSocket connection associated with the client.
 *
 * This function sets the QTcpSocket connection associated with the client.
 *
 * @param connection The QTcpSocket connection associated with the client.
 */
void ClientConnection::setConnection(QTcpSocket &connection){
    this->connection = &connection;
}

/**
 * @brief Sets the ServerSession object associated with the client.
 *
 * This function sets the ServerSession object associated with the client.
 *
 * @param session The ServerSession object associated with the client.
 */
void ClientConnection::setSession(ServerSession& session){
    this->session = &session;
}

/**
 * @brief Sends a message to the client.
 *
 * This function sends a message to the client through the associated QTcpSocket
 * connection. It also emits a signal if the message type requires acknowledgment.
 *
 * @param msg The message to send.
 */
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
/**
 * @brief Handles a received message from the client.
 *
 * This function is called when a message is received from the client. It processes
 * the received data and constructs a `Message` object for further handling.
 */
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


/**
 * @brief Gets the username associated with the client.
 *
 * @return The username associated with the client.
 */
QString ClientConnection::getUsername(){
    return this->username;
}


/**
 * @brief Sets the username associated with the client.
 *
 * This function sets the username associated with the client.
 *
 * @param username The username to set.
 */
void ClientConnection::setUsername(QString username){
    this->username = username;
    return;
}
