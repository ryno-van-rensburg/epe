#include "client.h"
#define DEBUG 1
Client::Client()
{
    this->ackCounter = 0;
    this->serverConnection = new QTcpSocket(this);
    QObject::connect(this->serverConnection, SIGNAL(connected()), this, SLOT(connMade()));
    QObject::connect(this->serverConnection, SIGNAL(errorOccurred(QAbstractSocket::SocketError)), this, SLOT(connectionError()));
    QObject::connect(this->serverConnection, SIGNAL(readyRead()), this, SLOT(handleMessage()));
}

Client::~Client()
{
    // deallocate memory
    delete this->serverConnection;
}

quint64 Client::getAckCount(){
    return this->ackCounter;
}

/**
 * @brief Sends a message to the server over the network.
 *
 * This function sends a message to the server using the established
 * network connection. It extracts the JSON content from the provided
 * message and sends it as a QByteArray to the server. If the message
 * is successfully sent, the function returns; otherwise, it handles
 * errors and may add the message to the acknowledgment queue if it is
 * not one of the specified message types.
 *
 * @param msg The message to be sent to the server.
 *
 * @note This function assumes that the server connection (QTcpSocket)
 *       has been established and is valid.
 *
 * @warning If an error occurs during message transmission, this function
 *          will attempt to handle the error. If the message type is not
 *          REQ_GAME_STATE, ACK, or ERROR, it will be added to the
 *          acknowledgment queue.
 */
void Client::sendMessage(Message &msg)
{
    // extract json from message
    MESSAGE_TYPE type = msg.getType();
    QByteArray content = msg.getBytes();    // check if QTcpSocket is working.
      // send message.
    this->serverConnection->write(content);
    if (serverConnection->waitForBytesWritten()){
        return;
    }
    // TODO handle error here
    if (type != MESSAGE_TYPE::REQ_GAME_STATE && type != MESSAGE_TYPE::ACK && type != MESSAGE_TYPE::ERROR) {
        this->ackMessages.append(&msg);
    }
    return;
}

/**
 * @brief Establishes a network connection to a server.
 *
 * This function attempts to establish a network connection to a server
 * specified by the given IP address and port number. It sets up a TCP
 * socket connection to the specified server using the provided IP address
 * and port. The function waits for a connection to be established for up
 * to 20 seconds (20000 milliseconds) and returns once the connection is
 * established or the timeout is reached.
 *
 * @param ipAddr The IP address of the server to connect to.
 * @param port The port number of the server to connect to.
 *
 * @note If a valid server connection already exists, it will be replaced
 *       with a new connection.
 *
 * @warning This function may block for up to 20 seconds while waiting for
 *          the connection to be established. Ensure that it is called on a
 *          separate thread or in an asynchronous manner to avoid freezing
 *          the main application thread.
 */

void Client::connect(quint32 ipAddr, quint16 port)
{
    this->addr = QHostAddress(ipAddr);
    if (this->serverConnection == nullptr){
        this->serverConnection = new QTcpSocket();
    }
    this->serverConnection->connectToHost(addr, port);
    serverConnection->waitForConnected(20000);
    return;
}
/**
 * @brief Re-establishes a network connection to the previously configured server.
 *
 * This function attempts to re-establish a network connection to the server
 * that was previously configured with the IP address and port number. It
 * uses the existing configuration stored in the `addr` and `port` member
 * variables to reconnect to the server. If the server connection was
 * previously closed or never established, this function attempts to establish
 * a new connection.
 *
 * @note If a valid server connection already exists, it will be replaced with
 *       a new connection.
 */
void Client::reconnect()
{
    this->serverConnection->connectToHost(this->addr, this->port);
    return;
}


/**
 * @brief Extracts the acknowledgment ID from a JSON message.
 *
 * This function extracts the acknowledgment ID (ACK_ID) from a JSON message
 * represented by the provided `msg` parameter. It assumes that the message
 * contains a JSON object with an "ACK_ID" field. If the field exists and
 * contains a valid integer value, that value is returned as the acknowledgment
 * ID. If the field is undefined or does not contain a valid integer, -1 is
 * returned to indicate an error or absence of the acknowledgment ID.
 *
 * @param msg The JSON message from which to extract the acknowledgment ID.
 * @return The acknowledgment ID extracted from the message, or -1 if not found
 *         or not a valid integer.
 */
int extractAckId(Message &msg) {
    QJsonObject obj = QJsonObject(msg.getObj());
    QJsonValue id = obj["ACK_ID"];
    if (!id.isUndefined()){
        return id.toInt();
    } else {
        return -1;
    }
}


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
quint32 extractId(Message &msg){
    QJsonObject obj = QJsonObject(msg.getObj());
    QJsonValue id = obj["ID"];
    if (!id.isUndefined()){
        return (quint32) id.toInt();
    } else {
        return 0;
    }
}




void Client::handleError(Message &msg)
{
    int id = extractAckId(msg);

    for (int i = 0; i < this->ackMessages.size(); i++){
        // find the msg we want
        Message m = this->ackMessages.at(i);
        int itr_id = extractAckId(m);
        if (itr_id == id){
            // check error type
            QJsonObject obj(msg.getObj());
            switch(strtoError(obj["Error"].toString())) {
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
                // resend the message
                this->sendMessage(*m);
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

/**
 * @brief Handles error messages received from the server (INCOMPLETE - NOT YET IMPLEMENTED).
 *
 * WARNING: This function is not finished and should not be used until it is
 * completed and tested. It is provided here as a placeholder and is not
 * functional.
 *
 * This function is intended to handle error messages received from the server.
 * It extracts the acknowledgment ID from the provided message and looks for
 * a matching ID in the acknowledgment queue. If a matching ID is found, it
 * processes the error message based on its type. Depending on the error type,
 * different actions or signals to the GUI may be required.
 *
 * @param msg The error message received from the server (if implemented).
 *
 * @note The behavior of this function is undefined until it is fully implemented.
 */

void Client::handleAck(Message &msg)
{
    // Extract the ack id in order to find the message that has been acknowledged.
    int id = extractAckId(msg);
    for (int i = 0; i < this->ackMessages.size(); i++){
        Message m = this->ackMessages.at(i);
        int itr_id = extractAckId(m);

        if (itr_id == id){
            // remove message from list
            this->ackCounter++;
            this->ackMessages.remove(i);
            return;
        }
    }
    return;
}


/**
 * @brief Handles incoming messages from the server.
 *
 * This function processes incoming messages received from the server via the
 * established network connection. It reads the incoming data, constructs a
 * `Message` object from the JSON content, and performs specific actions based
 * on the message type. The function emits signals to communicate with the GUI
 * or handles acknowledgment and error messages accordingly.
 *
 * @note This function is responsible for deserializing incoming JSON data into
 *       `Message` objects and determining the appropriate action based on the
 *       message type.
 */

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
        QJsonValue v = obj["Type"];
        if (v.isString()) {
        Message msg(v.toString(), contents);

        switch (msg.getType())
        {
        case (MESSAGE_TYPE::GAME_STATE) : {
            // Extract game state from data and send it on to gui
            emit this->gameStateReceived(msg);
            break;
        }
        case (MESSAGE_TYPE::PLAYER_ACCEPTED):{
            emit this->connectedToGame();
            break;
        }
        case (MESSAGE_TYPE::ACK):
        {
            // get message id and remove from ack list
            this->handleAck(msg);
            break;
        }
        case (MESSAGE_TYPE::ERROR):
        {
            this->handleError(msg);
            break;
        }
        };
        if (shouldMessageBeAcked(msg.getType())){
           QJsonValue v = msg.getObj()["ID"];
           qint64 id = v.toInt(-1);
           if ( id != -1 ){
               this->ack(id);
           } else {
               return;
           }
        }
        } else {
        // TODO handle error
        return;
        }
    }
    }
    return;
}

/**
 * @brief Sends an acknowledgment message to the server.
 *
 * This function sends an acknowledgment message to the server with the specified
 * acknowledgment ID. The function increments the internal acknowledgment counter
 * and constructs an acknowledgment message containing the ID to acknowledge. The
 * acknowledgment message is then sent to the server using the `sendMessage` method.
 *
 * @param id The acknowledgment ID to include in the acknowledgment message.
 */
void Client::ack(qint64 id){
    QJsonObject obj
    {
        {"Type", "ACKNOWLEDGE"},
        {"ID_ACK", (int)id},
    };

    Message msg("ACKNOWLEDGE", obj);
    this->sendMessage(msg);
    return;
}

void Client::connMade() {
    // TODO notify gui of connection
    this->connected = true;
    std::cout << "Connected" << std::endl;
    emit connectedToServer();
}

void Client::connectionError() {
    // TODO handle error, probably have to emit some signal
    this->connected = false;
    std::cout << "Error occurred" << std::endl;
}
