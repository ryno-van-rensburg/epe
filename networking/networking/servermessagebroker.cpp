#include "servermessagebroker.h"

ServerMessageBroker::ServerMessageBroker(QObject *parent)
    : QObject{parent}
{
    this->session = new ServerSession();
    // intermediary connections
    QObject::connect(this->session, SIGNAL(suggestionMade(Message&)), this, SLOT(extractSuggestionData(Message&)));
    QObject::connect(this->session, SIGNAL(accusationMade(Message&)), this, SLOT(extractAccusationData(Message&)));
    QObject::connect(this->session, SIGNAL(moveMade(Message&)), this, SLOT(extractMoveData(Message&)));
    QObject::connect(this->session, SIGNAL(cardShown(Message&)), this, SLOT(extractCardShownData(Message&)));

    // connections between servermessagebroker and serversession
}

ServerMessageBroker::~ServerMessageBroker(){

}


void ServerMessageBroker::extractMoveData(Message &msg){
    Player* player;
    int move;
    QJsonObject d = msg.getObj();
    bool valid = true;
    if (d.isEmpty()){
        valid = false;
    }
    QJsonValue moveJson = d["Position"];
    qint32 position = moveJson.toInt(-1);
    if (position == -1) {
        valid = false;
    }
    // get player
    QHostAddress address = msg.getSource()->peerAddress();
    player = this->session->getPlayer(address);
    if (player == nullptr){
        valid = false;
    }
    if (valid) {
        emit moveReceivedSignal(*player, position );
    } else {
        // send error message and update error counter
    }
}


void ServerMessageBroker::extractAccusationData(Message &msg){
    Player* player;
    QString weapon;
    QString person;
    QString room;
    bool valid = true;
    QJsonObject d = msg.getObj();
    if (d.isEmpty()){
        valid = false;
    }
    QJsonValue weaponJson = d["Weapon"];
    if (!weaponJson.isString()){
        valid = false;
    } else {
        weapon = weaponJson.toString();
    }

    QJsonValue personJson = d["Person"];
    if (!weaponJson.isString()){
        valid = false;
    } else {
        person = personJson.toString();
    }

    QJsonValue roomJson = d["Room"];
    if (!roomJson.toString()){
        valid = false;
    } else {
        room = roomJson.toString();
    }
    QHostAddress address = msg.getSource()->peerAddress();
    player = this->session->getPlayer(address);
    if (player == nullptr){
        valid = false;
    }
    if (valid) {
        emit accusationReceivedSignal(*player, person, weapon, room);
    } else {
        // send error message and increase error tally
    }

}


void ServerMessageBroker::extractSuggestionData(Message &msg){
    Player* player;
    QString weapon;
    QString person;
    QString room;
     QJsonObject d = msg.getObj();
    if (d.isEmpty()){
        valid = false;
    }
    QJsonValue weaponJson = d["Weapon"];
    if (!weaponJson.isString()){
        valid = false;
    } else {
        weapon = weaponJson.toString();
    }

    QJsonValue personJson = d["Person"];
    if (!weaponJson.isString()){
        valid = false;
    } else {
        person = personJson.toString();
    }

    QJsonValue roomJson = d["Room"];
    if (!roomJson.toString()){
        valid = false;
    } else {
        room = roomJson.toString();
    }
    QHostAddress address = msg.getSource()->peerAddress();
    player = this->session->getPlayer(address);
    if (player == nullptr){
        valid = false;
    }
    if (valid) {
        emit suggestionReceivedSignal(*player, person, weapon,room );
    } else {
        // send error message and increase error tally
    }
}


void ServerMessageBroker::extractCardShownData(Message &msg){
    Player* player;
    QString card;
    bool valid = true;
    QJsonObject d = msg.getObj();
    if (d.isEmpty()){
        valid = false;
    }

    QJsonValue cardJson = d["Card"];
    if (!cardJson.isString()){
        valid = false;
    }
    QHostAddress address = msg.getSource()->peerAddress();
    player = this->session->getPlayer(address);
    if (player == nullptr){
        valid = false;
    }
    if (valid) {
        emit cardShownSignal(player, card);
    } else {
        // send error message and increase error tally
    }
}

void ServerMessageBroker::updateStateSlot(QString username, int position){
    QJsonObject obj {
        {"Type", "GAME_STATE_UPDATE"},
        {"ID", (int) this->session->getAckCount()},
        {"Username", username },
        {"Position", position},
    };
    Message msg(GAME_STATE_UPDATE, obj);
    this->session->broadCastMessage(msg);
    return;
}

void ServerMessageBroker::gameStateReplySlot(QString requesting, int diceRoll, QVector<QString> faceup, int currentTurn){
    QJsonArray playerArr;
    QVector<Player*> players = session->getPlayers();
    for (auto i =0; i < players.size(); i++) {
        Player* p = players.at(i);
        QString username = p->GetUsername();
        QString person = p->getPerson();
        QString position = p->GetPosition();
        int ai = p->isAi();
        QJsonObject e;
        e["Username"] = username;
        e["Person"] = person;
        e["Position"] = position;
        e["AI"]= p->isAi();
        playerArr.append(e);
    }
    QJsonObject cards;
    for (auto i =0; i < faceup.size(); i++){
        QString key = "Card" + QString::number(i);
        cards[key] = faceup.at(i);
    }

    QJsonObject root;
    root["Type"] = "GAME_STATE_REPLY";
    root["Number_Of_Players"] = (int)players.size();
    root["Current_Dice_Roll"] = diceRoll;
    root["Current_Turn"] = currentTurn;
    root["Players"] = playerArr;
    root["Face_Up_Cards"] = cards;
    Message msg(GAME_STATE_REPLY, root);
    session->unicastMessage(msg, requesting);
    return;
}


void ServerMessageBroker::gameStateSlot( int diceRoll, QVector<QString> faceup, int currentTurn){
    QJsonArray playerArr;
    QVector<Player*> players = session->getPlayers();
    for (auto i =0; i < players.size(); i++) {
        Player* p = players.at(i);
        QString username = p->GetUsername();
        QString person = p->getPerson();
        QString position = p->GetPosition();
        int ai = p->isAi();
        QJsonObject e;
        e["Username"] = username;
        e["Person"] = person;
        e["Position"] = position;
        e["AI"]= p->isAi();
        playerArr.append(e);
    }
    QJsonObject cards;
    for (auto i =0; i < faceup.size(); i++){
        QString key = "Card" + QString::number(i);
        cards[key] = faceup.at(i);
    }

    QJsonObject root;
    root["Type"] = "GAME_STATE";
    root["Number_Of_Players"] = (int)players.size();
    root["Current_Dice_Roll"] = diceRoll;
    root["Current_Turn"] = currentTurn;
    root["Players"] = playerArr;
    root["Face_Up_Cards"] = cards;
    Message msg(GAME_STATE, root);
    session->broadCastMessage(msg);
    return;
}

void ServerMessageBroker::playerResultSlot(QString playerName, QString person, QString weapon, QString room, bool win){
    QJsonObject obj;
    obj["Username"] = playerName;
    obj["Person"] = person;
    obj["Weapon"] = weapon;
    obj["Room"] = room;
    if (win) {
        obj["Win"] = 1;
    } else {
        obj["Win"] = 0;
    }
}


void ServerMessageBroker::sendErrorSlot(QString username, ERROR_TYPE error){

    return;
}

void ServerMessageBroker::suggestionUpdateSlot(QString username, QVector<QString> suggestion)
{
    QJsonObject obj;
    obj["Type"] = "SUGGESTION_STATE_UPDATE";
    obj["Username"] = username;
    obj["Person"] = suggestion.at(0);
    obj["Weapon"] = suggestion.at(1);
    obj["Room"] = suggestion.at(2);
    Message msg(SUGGESTION_STATE_UPDATE, obj);
    session->broadCastMessage(msg);
}

void ServerMessageBroker::shownCardSlot(QString asking, QString showing, bool hasCard){
    QJsonObject root;
    root["Type"]= "CARD_SHOWN";
    root["Asked_Card"] = asking;
    root["Showed_Card"] = showing;
    if (hasCard) {
        root["Has_Card"] = 1;
    } else {
        root["Has_Card"] = 0;
    }
    Message msg(CARD_SHOWN, root);
    session->unicastMessage(msg, asking);
    return;
}

void ServerMessageBroker::notifyPlayerMove(int dice1, int dice2, Player &player){
    QJsonObject root;
    root["Type"] = "DICE_ROLL";
    root["ID"] = session->getAckCount();
    root["Username"] = player.GetUsername();
    root["Dice1"] = dice1;
    root["Dice2"] = dice2;
    Message msg(DICE_ROLL,root);
    session->broadCastMessage(msg);
    return;
}

void connectionDenied(QString handle, QString reason){
   QJsonObject err;
   err["Type"] = "CONNECTION_DENIED";
   err["ID"] = (int) this->session->getAckcount();
   err["REASON"] = reason;
   Message msg(CONNECTION_DENIED, err);
   session->rejectConnection(msg, handle);
   return;
}

void ServerMessageBroker::dealCardsSlot(qint16 numPlayers, QVector<QVector<QString> > cards){
    QVector<QString> usernames = session->getPlayerNames();
    for (int i = 0; i < usernames.size(); i++){
        QJsonObject root;
        root["Type"] = "DEAL_CARDS";
        root["ID"] = session->getAckCount();
        root["Number_Of_Cards"] = (int) cards.at(i).size();
        QJsonObject cardsObj;
        for (auto j = 0; j < cards.at(i).size(); j++){
            QString key = "Card" + QString::number(j);
            cardsObj[key] = cards.at(j);
        }
        root["Cards"] = cardsObj;
        Message msg(DEAL_CARDS, root);
        session->unicastMessage(msg, usernames.at(i));
    }
    return;
}

void ServerMessageBroker::requestCardSlot(Player& askingPlayer, QString Perseon, QString weapon, QString room){
    QJsonObject root;
    root["Type"] = "REQUEST_CARD";
    root["ID"] = (int) session->getAckCount();
    root["Asked_Card"] = askingPlayer.GetUsername();
    QJsonObject suggestion;
    suggestion["Person"] = person;
    suggestion["Weapon"]= weapon;
    suggestion["Room"] = room;
    root["Suggestion"] = suggestion;
    Message msg(REQUEST_CARD, root);
    session->unicastMessage(msg, askingPlayer.GetUsername());
    return;
}

void ServerMessageBroker::terminateGameSlot(){

    return;
}

void ServerMessageBroker::showCardSlot(Player &player, QString card){
    QJsonObject obj {
        {"Type",  "SHOW_CARD" },
        {"ID" , (int) session->getAckCount()},
        {"Username", player.GetUsername()},
        {"Card", card},
    };
    Messsage msg(SHOW_CARD, obj);
    session->unicastMessage(msg, player.GetUsername());
    return;
}

void ServerMessageBroker::acceptPlayer(QString username, QString Person, int dice1, int dice2)
{
    QJsonObject obj  {
        {"Type" , "PLAYER_ACCEPTED" },
        {"Username", username},
        {"Person", person},
        {"Dice1", dice1},
        {"Dice2", dice2},
    };

    Message msg(PLAYER_ACCEPTED, obj);
    session->unicastMessage(msg, username);
    return;
}
