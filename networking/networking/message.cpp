#include "message.h"

Message::Message(MESSAGE_TYPE type, QByteArray &arr, int numBytes)
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

QByteArray Message::getBytes() {
    return this->messageContents.toJson();
}
