#include "message.h"
/**
 * @brief Constructs a Message object from a QByteArray.
 *
 * This constructor initializes a `Message` object by converting a QByteArray
 * into a QJsonDocument. It processes the JSON data and sets the message type,
 * contents, and source accordingly.
 *
 * @param type The message type.
 * @param arr The QByteArray containing the JSON data.
 */
Message::Message(MESSAGE_TYPE type, QByteArray &arr)
{
    // convert QByteArray to a string, strip whitespace
    QJsonParseError* errPtr = nullptr;
    QJsonDocument messageJson = QJsonDocument::fromJson(arr, errPtr) ;
    // TODO, send error to server.
    if (!messageJson.isNull()){
        this->messageContents = messageJson;
        this->type = type;
        this->source = nullptr;
    }
}

Message::Message(MESSAGE_TYPE type, QJsonObject obj)
{
    // convert QByteArray to a string, strip whitespace

    this->type = type;
    this->source = nullptr;
    this->status = MESSAGE_STATUS::MESSAGE_UNACKED;
    this->messageContents = QJsonDocument(obj);
}

bool shouldMessageBeAcked(MESSAGE_TYPE type) {
    switch (type) {
        case CONNECTION_DENIED:
            return true;
            break;
        case REQUEST_CON:
            return true;
            break;
        case ACK:
            return  false;
            break;
        case MAKE_MOVE:
            return true;
            break;
        case SHOW_CARD:
            return true;
            break;
        case MAKE_SUGGESTION:
            return true;
            break;
        case MAKE_ACC:
            return true;
            break;
        case	REQ_GAME_STATE:
            return false;
            break;
        case    GAME_STATE:
            return false;
            break;
        case    DICE_ROLL:
            return true;
            break;
        case    PLAYER_ACCEPTED:
            return false;
            break;
        case    GAME_STATE_UPDATE:
            return true;
            break;
        case    SUGGESTION_STATE_UPDATE:
            return false;
            break;
        case    PLAYER_RESULT:
            return false;
            break;
        case    PLAYER_KICKED:
            return false;
            break;
        case    CARD_SHOWN:
            return true;
            break;
        case    GAME_TERMINATION:
            return false;
            break;
        case    DEAL_CARDS:
            return true;
            break;
        case    REQUEST_CARD:
            return true;
            break;
        case    GAME_STATE_REPLY:
            return true;
            break;
        case    ERROR:
           return false;
            break;

    };
    return false;
}

bool isWeaponValid(QString weapon){
    QVector<QString> weapons = {
        "Candlestick", "Dagger", "Lead Pipe", "Pistol", "Rope", "Wrench"
    };


    for (auto i =0; i < weapons.size(); i++){
        if (weapons.at(i) == weapon) {
            return true;
        }
    }
    return false;
}


bool isPersonValid(QString person){
    QVector<QString> people = {
        "Green", "Mustard", "Peacock", "Plum", "Scarlet", "White"
    };
    for (auto i = 0; i < people.size(); i++){
        if (people.at(i) == person){
            return true;
        }
    }
    return false;
}


bool isRoomValid(QString room){
    QVector<QString> rooms = {
        "Courtyard",
        "Garage",
        "Game Room",
        "Bedroom",
        "Bathroom",
        "Study",
        "Kitchen",
        "Dining Room",
        "Living Room"
    } ;
    for (auto i =0 ; i < rooms.size(); i++){
        if (rooms.at(i) == room){
            return true;
        }
    }
    return false;
}
/**
 * @brief Converts a string to a MESSAGE_TYPE enumeration.
 *
 * This function converts a string representation of a message type to the
 * corresponding MESSAGE_TYPE enumeration value.
 *
 * @param messageType The string representation of the message type.
 * @return The corresponding MESSAGE_TYPE enumeration value.
 */
MESSAGE_TYPE strToMessageType(QString messageType) {
    if (messageType == "REQUEST_CONNECTION") {
        return  MESSAGE_TYPE::REQUEST_CON;

    }else if (messageType == "ACK" || messageType == "ACKNOWLEDGE"){
        return  MESSAGE_TYPE::ACK;

    }else if (messageType == "MAKE_MOVE") {
        return  MESSAGE_TYPE::MAKE_MOVE;

    }else if (messageType == "MAKE_SUGGESTION"){
        return  MESSAGE_TYPE::MAKE_SUGGESTION;

    }else if (messageType == "SHOW_CARD"){
        return  MESSAGE_TYPE::SHOW_CARD;

    }else if (messageType == "MAKE_ACCUSATION"){
        return  MESSAGE_TYPE::MAKE_ACC;

    }else if (messageType == "REQUEST_GAME_STATE"){
        return  MESSAGE_TYPE::REQ_GAME_STATE;

    }else if (messageType == "PLAYER_ACCEPTED"){
        return  MESSAGE_TYPE::PLAYER_ACCEPTED;

    }else if (messageType == "GAME_STATE"){
        return  MESSAGE_TYPE::GAME_STATE;

    }else if (messageType == "GAME_STATE_UPDATE"){
        return  MESSAGE_TYPE::GAME_STATE_UPDATE;

    }else if (messageType == "SUGGESTION_STATE_UPDATE"){
        return  MESSAGE_TYPE::SUGGESTION_STATE_UPDATE;

    }else if (messageType == "DICE_ROLL"){
        return  MESSAGE_TYPE::DICE_ROLL;

    }else if (messageType == "PLAYER_RESULT"){
        return  MESSAGE_TYPE::PLAYER_RESULT;

    }else if (messageType == "PLAYER_KICKED"){
        return  MESSAGE_TYPE::PLAYER_KICKED;

    }else if (messageType == "CARD_SHOWN"){
        return  MESSAGE_TYPE::CARD_SHOWN;

    }else if (messageType == "DEAL_CARDS"){
        return  MESSAGE_TYPE::DEAL_CARDS;

    }else if (messageType == "REQUEST_CARD"){
        return  MESSAGE_TYPE::REQUEST_CARD;

    }else if (messageType == "SHOW_CARD"){
        return  MESSAGE_TYPE::SHOW_CARD;

    }else if (messageType == "GAME_STATE_REPLY"){
        return  MESSAGE_TYPE::GAME_STATE_REPLY;
    }else if (messageType == "GAME_TERMINATION"){
        return MESSAGE_TYPE::GAME_TERMINATION;
    }else {
        return  MESSAGE_TYPE::ERROR;
    }
}

ERROR_TYPE strtoError(QString error) {
    if (error == "CONNECTION_DENIED") {
        return ERR_CONNECTION_DENIED;
    } else if (error == "INVALID_MOVE") {
        return INVALID_MOVE;
    } else if (error == "OUT_OF_TURN") {
        return OUT_OF_TURN;
    } else if (error == "NOT_GAME_PARTICIPANT") {
        return NOT_GAME_PARTICIPANT;
    } else if (error == "INVALID_MESSAGE_FORMAT") {
        return INVALID_MESSAGE_FORMAT;
    } else if (error == "INVALID_PERSON_NAME") {
        return INVALID_PERSON_NAME;
    } else if (error == "INVALID_WEAPON_NAME") {
        return INVALID_WEAPON_NAME;
    } else {
        return INVALID_ROOM_NAME;
    }
}

/**
 * @brief Constructs a Message object from a message type and QJsonDocument.
 *
 * This constructor initializes a `Message` object using the provided message
 * type and QJsonDocument contents.
 *
 * @param messageType The message type.
 * @param contents The QJsonDocument containing message contents.
 */
Message::Message(QString messageType, QJsonDocument contents)
{
    this->type = strToMessageType(messageType);
    this->source = nullptr;
    this->status = MESSAGE_STATUS::MESSAGE_UNACKED;
    this->messageContents = contents;
}
/**
 * @brief Constructs a Message object from a message type and QJsonObject.
 *
 * This constructor initializes a `Message` object using the provided message
 * type and QJsonObject contents.
 *
 * @param messageType The message type.
 * @param contents The QJsonObject containing message contents.
 */
Message::Message(QString messageType, QJsonObject &contents){
    this->type = strToMessageType(messageType);
    this->source = nullptr;
    this->status = MESSAGE_STATUS::MESSAGE_UNACKED;
    this->messageContents = QJsonDocument(contents);
}
/**
 * @brief Copy constructor for Message objects.
 *
 * This constructor creates a copy of a `Message` object by copying its type,
 * status, contents, and source.
 *
 * @param t The `Message` object to copy.
 */
Message::Message(Message &t){
    this->type = t.type;
    this->status = t.status;
    this->messageContents = t.messageContents;
    this->source = t.source;
}
/**
 * @brief Gets the status of the message.
 *
 * This function returns the status of the message, which can be MESSAGE_STATUS::MESSAGE_ACKED
 * or MESSAGE_STATUS::MESSAGE_UNACKED.
 *
 * @return The status of the message.
 * @warning Message status will be removed
 */
MESSAGE_STATUS Message::getStatus() {
    return this->status;
}
/**
 * @brief Sets the status of the message.
 *
 * This function sets the status of the message to the provided value.
 *
 * @param status The new status for the message.
 * @warning Message status will be removed
 */

void Message::setStatus(MESSAGE_STATUS status){
    this->status = status;
    return;
 }


QJsonObject Message::getObj()
{
    return this->messageContents.object();
}

/**
 * @brief Gets the message type.
 *
 * This function returns the type of the message, which is an enumeration value
 * representing the message type.
 *
 * @return The type of the message.
 */
MESSAGE_TYPE Message::getType()
{
    return this->type;
}
/**
 * @brief Gets the message contents as a QByteArray.
 *
 * This function returns the message contents as a QByteArray, which can be used
 * for transmission or serialization.
 *
 * @return The message contents as a QByteArray.
 */
QByteArray Message::getBytes() {
    return this->messageContents.toJson();
}
