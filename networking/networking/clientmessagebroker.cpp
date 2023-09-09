#include "clientmessagebroker.h"



ClientMessageBroker::ClientMessageBroker(QObject *parent)
    : QObject{parent}
{
    this->client = new Client();
}

ClientMessageBroker::~ClientMessageBroker(){
    delete this->client;
}

void ClientMessageBroker::requestConnection(quint32 address, quint16 port, QString username) {
    this->client->connect(address, port);
    QJsonObject obj
    {
        {"Type", "REQUEST_CONNECTION"},
        {"ID", (int)this->client->getAckCount()},
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
        {"ID", (int)this->client->getAckCount()},
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
        {"ID", (int) this->client->getAckCount()},
        {"Card", card},
    };
    Message msg("SHOW_CARD", obj);
    this->client->sendMessage(msg);
}

void ClientMessageBroker::makeAccusation(QString person, QString weapon, QString room)
{
    QJsonObject accObj {
        {"Person", person},
        {"Weapon", weapon},
        {"Room", room},
    };
    QJsonObject obj
    {
        {"Type", "MAKE_ACCUSATION"},
        {"ID", (int)this->client->getAckCount()},
        {"Accusation", accObj}
    };

    Message msg("MAKE_ACCUSATION", obj);
    this->client->sendMessage(msg);
}

void ClientMessageBroker::makeSuggestion(QString person, QString weapon, QString room)
{
     QJsonObject suggestionObj {
        {"Person", person},
        {"Weapon", weapon},
        {"Room", room},
    };

    QJsonObject obj
    {
        {"Type", "MAKE_SUGGESTION"},
        {"ID", (int)this->client->getAckCount()},
        {"Suggestion", suggestionObj}
    };

    Message msg("MAKE_ACCUSATION", obj);
    this->client->sendMessage(msg);
}

void ClientMessageBroker::requestStateSlot()
{
    QJsonObject obj
    {
        {"Type", "REQUEST_GAME_STATE"},
        {"ID", (int) this->client->getAckCount()},
    };
}


void ClientMessageBroker::unpackGameState(Message &msg) {
    QJsonObject obj = msg.getObj();
    int numPlayers = obj["Number_Of_Players"].toInt();
    QJsonArray players = obj["Players"].toArray();
    int dice = obj["Current_Dice_Roll"].toInt();
    int currentTurn = obj["Current_Turn"].toInt();
    QJsonArray faceupCards = obj["Face_Up_Cards"].toArray();
    emit this->gameStateSignal(numPlayers,players,dice,currentTurn,faceupCards);
}
