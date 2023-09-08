#include "message.h"

Message::Message(MESSAGE_TYPE type, QByteArray &arr)
{
    // convert QByteArray to a string, strip whitespace
    QJsonParseError* errPtr = nullptr;
    QJsonDocument messageJson = QJsonDocument::fromJson(arr, errPtr) ;
    if (messageJson == nullptr){
        // Error
        // TODO, send error to server.
    } else {
        this->messageContents = messageJson;
        this->type = type;
    }

}

MESSAGE_TYPE strToMessageType(QString messageType) {
    if (messageType == "REQUEST_CONNECTION") {
        return  MESSAGE_TYPE::REQUEST_CON;

    }else if (messageType == "ACKNOWLEDGE"){
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
    }else {
        return  MESSAGE_TYPE::ERROR;
    }
}

Message::Message(QString messageType, QJsonDocument contents)
{
    this->type = strToMessageType(messageType);
    this->status = MESSAGE_STATUS::MESSAGE_UNACKED;
    this->contents = contents;
}

Message::Message(QString messageType, QJsonObject contents){
    this->type = strToMessageType(messageType);
    this->status = MESSAGE_STATUS::MESSAGE_UNACKED;
    this->contents = QJsonDocument(contents);
}

MESSAGE_STATUS Message::getStatus() {
    return this->status;
}
void Message::setStatus(MESSAGE_STATUS status){
    this->status = status;
    return;
 }

QByteArray Message::getBytes() {
    return this->messageContents.toJson();
}
