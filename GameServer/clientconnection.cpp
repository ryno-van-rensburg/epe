#include "clientconnection.h"
#include "serversession.h"
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
    this->violationCounts.insert("INVALID_ROOM", 0);
    this->violationCounts.insert("INVALID_WEAPON", 0);
    this->violationCounts.insert("INVALID_PERSON", 0);
    this->violationCounts.insert("OUT_OF_TURN", 0);
    this->violationCounts.insert("INVALID_MESSAGE_FORMAT", 0);
    this->violationCounts.insert("INVALID_MOVE", 0);

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
ClientConnection::ClientConnection(QTcpSocket &connection, NetworkPlayer &playerObj, ServerSession &session){
    //DANGER, DO NOT USE THIS FUNCTION
    this->connection = &connection;
    this->minTimer = new QTimer(this);
    this->timerOut = new QTimer(this);
    this->violationCounts.insert("INVALID_ROOM", 0);
    this->violationCounts.insert("INVALID_WEAPON", 0);
    this->violationCounts.insert("INVALID_PERSON", 0);
    this->violationCounts.insert("OUT_OF_TURN", 0);
    this->violationCounts.insert("INVALID_MESSAGE_FORMAT", 0);
    this->violationCounts.insert("INVALID_MOVE", 0);
    this->addr = connection.peerAddress();
    this->ackValue = 0;
    this->playerObj = &playerObj;
    QObject::connect(this->connection, SIGNAL(readyRead()), this, SLOT(handleIncomingData()));
    this->port = 0;
    this->isPlaying = false; // First need to check if the player is allowed into the lobby
}

ClientConnection::ClientConnection(QTcpSocket *connection, ServerSession *session){
    this->session = session;
    this->connection = connection;
    this->violationCounts.insert("INVALID_ROOM", 0);
    this->violationCounts.insert("INVALID_WEAPON", 0);
    this->violationCounts.insert("INVALID_PERSON", 0);
    this->violationCounts.insert("OUT_OF_TURN", 0);
    this->violationCounts.insert("INVALID_MESSAGE_FORMAT", 0);
    this->violationCounts.insert("INVALID_MOVE", 0);
    this->playerObj =nullptr;
    this->addr = connection->peerAddress();
    this->isPlaying = false;
    this->ackValue = 0;
    QObject::connect(this->connection, SIGNAL(readyRead()), this, SLOT(handleIncomingData()));
}

ClientConnection::~ClientConnection(){
    if (this->playerObj != nullptr) {
        delete this->playerObj;
    }
}
void ClientConnection::incrementErrorTally(QString errorType){
    this->violationCounts[errorType] += 1;
    this->checkViolationCounters();
}

void ClientConnection::checkViolationCounters(){
    QMap<QString, int>::iterator it;
    for (it = this->violationCounts.begin(); it != violationCounts.end(); ++it){
        if (it.value() > 3) {
            QString errorType = it.key();
            // kick player
            emit this->violationsExceeded(this->username, errorType);
            return;
        }
    }
}

/**
 * @brief Sets the Player object associated with the client.
 *
 * This function sets the Player object associated with the client connection.
 *
 * @param playerObj The Player object associated with the client.
 */
void ClientConnection::setPlayer(NetworkPlayer &playerObj){
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


NetworkPlayer* ClientConnection::getPlayer(){
    return this->playerObj;
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
    qDebug("Message sent");
    qDebug() << msg.getType();
    QByteArray content = msg.getBytes();
    if (this->connection == nullptr){
        // TODO, tried sending message to nonexistent connection. This should never ever happen
        return;
    }
    // TODO if the message is an error or an ack you should add the ackID here.
    if (type == ACK || type == ERROR) {
        QJsonObject data = msg.getObj();
        data["ACK_ID"] = this->ackValue;
        QJsonDocument doc(data);
        content = doc.toJson();
    }
   // send message.
    qint64 bytesWritten = this->connection->write(content);
    // TODO handle error here
    if (bytesWritten < 0){
        if (1) {
            std::cout << "void Client::sendMessage could not send message" << std::endl;
        }
    } else {
        if (shouldMessageBeAcked(msg.getType())) {
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
void ClientConnection::handleIncomingData(){
    qDebug("data received");
    QByteArray incomingData = this->connection->readAll();

    QByteArray buffer;
    QJsonParseError* errPtr = nullptr;
    qDebug() << incomingData;
    if (incomingData.isEmpty()) {
        qDebug("empty");
        return;
    }
    for (int i = 0; i < incomingData.size(); i++) {
        buffer.append(incomingData[i]);
        QJsonDocument contents = QJsonDocument::fromJson(buffer, errPtr);
        qDebug() << buffer;
    if (!contents.isNull() && contents.isObject()){
        buffer.clear();
        QJsonObject obj = contents.object();
        QJsonValue v = obj["Type"];
        if (v.isString()){
        Message msg(v.toString(), contents);
        if (msg.getType() == REQUEST_CON){
            qDebug("Connection requested");
            this->username = obj["Username"].toString();
            this->isPlaying = false;
        }
        msg.setSource(this->connection);
        this->ackValue = obj["ID"].toInt();
        //emit messageReceived(msg);
        session->handleMessage(msg);
        }
        return;
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


void ClientConnection::setPlaying(bool playing){
    this->isPlaying = playing;
    return;
}
