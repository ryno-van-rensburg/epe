#include "clientmessagebroker.h"



ClientMessageBroker::ClientMessageBroker(QObject *parent)
    : QObject{parent}
{
    this->client = new Client();
}

void ClientMessageBroker::requestConnection(quint32 address, quint16 port, QString username) {
    this->client->connect(addr, port);
    QJsonObject obj
    {
        {"Type", "REQUEST_CONNECTION"},
        {"ID", this->client->getAckCount()},
        {"Username", username}
    };
    Message msg("REQUEST_CONNECTION", obj);
    this->client->sendMessage(msg);
    // Now I have to wait for the signal to be emitted
    return;
}

void ClientMessageBroker::makeMove(int position){
    QJsonObject obj
    {
        {"Type" , "MAKE_MOVE"},
        {"ID", this->client->getAckCount()},
        {"Position", position}
    };
    Message msg("MAKE_MOVE", obj);
    this->client->sendMessage(msg);
    return;
}

void ClientMessageBroker::showCard(QString card){
    // TODO, get card header file
    QJsonObject obj
    {
        {"Type", "SHOW_CARD"},
        {"ID", this->client->getAckCount()},
        {"Card", card},
    };
    Message msg("SHOW_CARD", obj);
    this->client->sendMessage(msg);
}

void ClientMessageBroker::makeAccusation(QString person, QString weapon, QString room)
{
    QJsonObject obj
    {
        {"Type", "MAKE_ACCUSATION"},
        {"ID", this->client->getAckCount()},
        {"Accusation", {{"Person" , person}, {"Weapon", weapon}, {"Room", room}}}
    };

    Message msg("MAKE_ACCUSATION", obj);
    this->client->sendMessage(msg);
}

void ClientMessageBroker::makeSuggestion(QString person, QString weapon, QString room)
{
    QJsonObject obj
    {
        {"Type", "MAKE_SUGGESTION"},
        {"ID", this->client->getAckCount()},
        {"Suggestion", {{"Person" , person}, {"Weapon", weapon}, {"Room", room}}}
    };

    Message msg("MAKE_ACCUSATION", obj);
    this->client->sendMessage(msg);
}

void ClientMessageBroker::requestStateSlot()
{
    QJsonObject obj
    {
        {"Type", "REQUEST_GAME_STATE"},
        {"ID", this->client->getAckCount()},
    };
}


void ClientMessageBroker::unpackGameState(Message &msg) {
    QJsonObject obj = QJsonObject(msg.getBytes());
    int numPlayers = obj['Number_Of_Players'];
    QJsonArray players = obj['Players'];
    int dice = obj['Current_Dice_Roll'];
    int currentTurn = obj['Current_Turn'];
    QJsonArray faceupCards = obj["Face_Up_Cards"];
    emit this->gameStateSignal(numPlayers,players,dice,currentTurn,faceupCards);
}
