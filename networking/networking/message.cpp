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

Message::Message(QString messageType, QJsonDocument contents)
{
    if (messageType == "REQUEST_CONNECTION") {
        this->type = MESSAGE_TYPE::REQUEST_CON;

    }else if (messageType == "ACKNOWLEDGE"){
        this->type = MESSAGE_TYPE::ACK;

    }else if (messageType == "MAKE_MOVE") {
        this->type = MESSAGE_TYPE::MAKE_MOVE;

    }else if (messageType == "MAKE_SUGGESTION"){
        this->type = MESSAGE_TYPE::MAKE_SUGGESTION;

    }else if (messageType == "SHOW_CARD"){
        this->type = MESSAGE_TYPE::SHOW_CARD;

    }else if (messageType == "MAKE_ACCUSATION"){
        this->type = MESSAGE_TYPE::MAKE_ACC;

    }else if (messageType == "REQUEST_GAME_STATE"){
        this->type = MESSAGE_TYPE::REQ_GAME_STATE;

    }else if (messageType == "PLAYER_ACCEPTED"){
        this->type = MESSAGE_TYPE::PLAYER_ACCEPTED;

    }else if (messageType == "GAME_STATE"){
        this->type = MESSAGE_TYPE::GAME_STATE;

    }else if (messageType == "GAME_STATE_UPDATE"){
        this->type = MESSAGE_TYPE::GAME_STATE_UPDATE;

    }else if (messageType == "SUGGESTION_STATE_UPDATE"){
        this->type = MESSAGE_TYPE::SUGGESTION_STATE_UPDATE;

    }else if (messageType == "DICE_ROLL"){
        this->type = MESSAGE_TYPE::DICE_ROLL;

    }else if (messageType == "PLAYER_RESULT"){
        this->type = MESSAGE_TYPE::PLAYER_RESULT;

    }else if (messageType == "PLAYER_KICKED"){
        this->type = MESSAGE_TYPE::PLAYER_KICKED;

    }else if (messageType == "CARD_SHOWN"){
        this->type = MESSAGE_TYPE::CARD_SHOWN;

    }else if (messageType == "DEAL_CARDS"){
        this->type = MESSAGE_TYPE::DEAL_CARDS;

    }else if (messageType == "REQUEST_CARD"){
        this->type = MESSAGE_TYPE::REQUEST_CARD;

    }else if (messageType == "SHOW_CARD"){
        this->type = MESSAGE_TYPE::SHOW_CARD;

    }else if (messageType == "GAME_STATE_REPLY"){
        this->type = MESSAGE_TYPE::GAME_STATE_REPLY;
    }else {
        this->type = MESSAGE_TYPE::ERROR;
    }
    this->contents = contents;
}

QByteArray Message::getBytes() {
return this->messageContents.toJson();
}
