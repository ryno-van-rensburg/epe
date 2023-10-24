#include "servermessagebroker.h"
#include "networkplayer.h"

ServerMessageBroker::ServerMessageBroker(QObject *parent)
    : QObject{parent}
{
    this->session = new ServerSession();
    // intermediary connections
    QObject::connect(this->session, SIGNAL(suggestionMade(Message&)), this, SLOT(extractSuggestionData(Message&)));
    QObject::connect(this->session, SIGNAL(accusationMade(Message&)), this, SLOT(extractAccusationData(Message&)));
    QObject::connect(this->session, SIGNAL(moveMade(Message&)), this, SLOT(extractMoveData(Message&)));
    QObject::connect(this->session, SIGNAL(cardShown(Message&)), this, SLOT(extractCardShownData(Message&)));
    QObject::connect(this->session, SIGNAL(joiningRequest(Message&)), this, SLOT(processJoiningRequest(Message&)));
    // connections between servermessagebroker and serversession
}
void ServerMessageBroker::listen(int port = -1){
    this->session->startListening(port);
    return;
}

ServerMessageBroker::~ServerMessageBroker(){
    delete this->session;
}



/**
 * @brief Extracts move data from a received message and processes it.
 *
 * This function extracts move data (position) from a JSON message
 * and performs validation checks on the extracted data. If the data is valid,
 * it emits a signal to notify the application of the received move.
 *
 * @param msg The Message object containing the move data.
 */
void ServerMessageBroker::extractMoveData(Message &msg){
    NetworkPlayer* player;
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


/**
 * @brief Extracts accusation data from a received message and processes it.
 *
 * This function extracts accusation data (weapon, person, room) from a JSON message
 * and performs validation checks on the extracted data. If the data is valid, it emits
 * a signal to notify the application of the received accussation.
 *
 * @param msg The Message object containing the accusation data.
 */


void ServerMessageBroker::extractAccusationData(Message &msg){
    NetworkPlayer* player;
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
    if (roomJson.toString() == ""){
        valid = false;
    } else {
        room = roomJson.toString();
    }
    QHostAddress address = msg.getSource()->peerAddress();
    player = this->session->getPlayer(address);
    if (player == nullptr){
        valid = false;
        QJsonObject obj;
        obj["Type"] = "ERROR";
        obj["ID_ACK"] = d["ID"].toInt();
        obj["Error"] = "NOT_GAME_PARTICIPANT";
        obj["Message"] = "Not game participant";
        Message errMsg(ERROR, obj);
        session->unicastMessage(errMsg,player->getUsername());

    }

    if (!isRoomValid(room)){
        // room is invalid
        QJsonObject obj;
        obj["Type"] = "ERROR";
        obj["ID_ACK"] = d["ID"].toInt();
        obj["Error"] = "INVALID_ROOM";
        obj["Message"] = "Invalid room name";
        Message errMsg(ERROR, obj);
        session->unicastMessage(errMsg,player->getUsername());
        // increment error tally
    }
    if (!isPersonValid(person)){
        // person is invalid
        QJsonObject obj;
        obj["Type"] = "ERROR";
        obj["ID_ACK"] = d["ID"].toInt();
        obj["Error"] = "INVALID_PERSON";
        obj["Message"] = "Invalid person name";
        Message errMsg(ERROR, obj);
        session->unicastMessage(errMsg,player->getUsername());
    }
    if (!isWeaponValid(weapon)){
        // weapon invalid
        QJsonObject obj;
        obj["Type"] = "ERROR";
        obj["ID_ACK"] = d["ID"].toInt();
        obj["Error"] = "INVALID_PERSON";
        obj["Message"] = "Invalid weapon name";
        Message errMsg(ERROR, obj);
        session->unicastMessage(errMsg,player->getUsername());
    }
    if (valid) {
        emit accusationReceivedSignal(*player, person, weapon, room);
    } else {
        // send error message and increase error tally
        QJsonObject obj;
        obj["Type"] = "ERROR";
        obj["ID_ACK"] = d["ID"].toInt();
        obj["Error"] = "INVALID_MESSAGE_FORMAT";
        obj["Message"] = "Message malformed";
        Message errMsg(ERROR, obj);
        session->unicastMessage(errMsg,player->getUsername());
    }

}


/**
 * @brief Extracts suggestion data from a received message and processes it.
 *
 * This function extracts suggestion data (weapon, person, room) from a JSON message
 * and performs validation checks on the extracted data. If the data is valid, it emits
 * a signal to notify the application of the received suggestion.
 *
 * @param msg The Message object containing the suggestion data.
 */

void ServerMessageBroker::extractSuggestionData(Message &msg){
    NetworkPlayer* player;
    QString weapon;
    QString person;
    QString room;
    bool valid = true;
     QJsonObject d = msg.getObj();
     QJsonObject suggestionObj = d["Suggestion"].toObject();
    if (d.isEmpty()){
        valid = false;
    }
    QJsonValue weaponJson = suggestionObj["Weapon"];
    if (!weaponJson.isString()){
        valid = false;
    } else {
        weapon = weaponJson.toString();
    }

    QJsonValue personJson = suggestionObj["Person"];
    if (!weaponJson.isString()){
        valid = false;
    } else {
        person = personJson.toString();
    }

    QJsonValue roomJson = suggestionObj["Room"];
    if (!roomJson.isString()){
        valid = false;
    } else {
        room = roomJson.toString();
    }
    QHostAddress address = msg.getSource()->peerAddress();
    player = this->session->getPlayer(address);
    if (player == nullptr){
        valid = false;
        // player is not in game, send error
        QJsonObject obj;
        obj["Type"] = "ERROR";
        obj["ID_ACK"] = d["ID"].toInt();
        obj["Error"] = "NOT_GAME_PARTICIPANT";
        obj["Message"] = "Not game participant";
        Message errMsg(ERROR, obj);
        session->unicastMessage(errMsg,player->getUsername());

    }
     if (!isRoomValid(room)){
        // room is invalid
        QJsonObject obj;
        obj["Type"] = "ERROR";
        obj["ID_ACK"] = d["ID"].toInt();
        obj["Error"] = "INVALID_ROOM";
        obj["Message"] = "Invalid room name";
        Message errMsg(ERROR, obj);
        session->unicastMessage(errMsg,player->getUsername());
        // increment error tally
    }
    if (!isPersonValid(person)){
        // person is invalid
        QJsonObject obj;
        obj["Type"] = "ERROR";
        obj["ID_ACK"] = d["ID"].toInt();
        obj["Error"] = "INVALID_PERSON";
        obj["Message"] = "Invalid person name";
        Message errMsg(ERROR, obj);
        session->unicastMessage(errMsg,player->getUsername());
    }
    if (!isWeaponValid(weapon)){
        // weapon invalid
        QJsonObject obj;
        obj["Type"] = "ERROR";
        obj["ID_ACK"] = d["ID"].toInt();
        obj["Error"] = "INVALID_PERSON";
        obj["Message"] = "Invalid weapon name";
        Message errMsg(ERROR, obj);
        session->unicastMessage(errMsg,player->getUsername());
    }

    if (valid) {
        emit suggestionReceivedSignal(*player, person, weapon,room );
    } else {
        // send error message and increase error tally
        QJsonObject obj;
        obj["Type"] = "ERROR";
        obj["ID_ACK"] = d["ID"].toInt();
        obj["Error"] = "INVALID_MESSAGE_FORMAT";
        obj["Message"] = "Message malformed";
        Message errMsg(ERROR, obj);
        session->unicastMessage(errMsg,player->getUsername());
    }
}


void ServerMessageBroker::extractCardShownData(Message &msg){
    NetworkPlayer* player;
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
        QJsonObject obj;
        obj["Type"] = "ERROR";
        obj["ID_ACK"] = d["ID"].toInt();
        obj["Error"] = "NOT_GAME_PARTICIPANT";
        obj["Message"] = "Not game participant";
        Message errMsg(ERROR, obj);
        session->unicastMessage(errMsg,player->getUsername());
        return;
    }
    if (valid) {
        emit cardShownSignal(*player, card);
    } else {
        // send error message and increase error tally
        QJsonObject obj;
        obj["Type"] = "ERROR";
        obj["ID_ACK"] = d["ID"].toInt();
        obj["Error"] = "INVALID_MESSAGE_FORMAT";
        obj["Message"] = "Message malformed";
        Message errMsg(ERROR, obj);
        session->unicastMessage(errMsg,player->getUsername());
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
    this->session->ackMessage(username);
    this->session->broadCastMessage(msg);
    return;
}
/**
 * @brief Extracts card shown data from a received message and processes it.
 *
 * This function extracts card data from a JSON message and performs validation checks on the extracted data.
 * If the data is valid, it emits a signal to notify the application of the card shown event.
 *
 * @param msg The Message object containing the card shown data.
 */

void ServerMessageBroker::gameStateReplySlot(QString requesting, int diceRoll, QVector<QString> faceup, int currentTurn){
    QJsonArray playerArr;
    QVector<NetworkPlayer*> players = session->getPlayers();
    for (auto i =0; i < players.size(); i++) {
        NetworkPlayer* p = players.at(i);
        QString username = p->getUsername();
        QString person = p->getPerson();
        int position = p->getPosition();
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
    session->ackMessage(requesting);
    session->unicastMessage(msg, requesting);
    return;
}


/**
 * @brief Handles the game state update and broadcasts it to all players.
 *
 * This function constructs a JSON representation of the game state, including player information,
 * face-up cards, dice roll, and the current turn. It then creates a message and broadcasts it to all players.
 *
 * @param diceRoll The current dice roll value.
 * @param faceup A QVector of face-up cards.
 * @param currentTurn The current turn number.
 */

void ServerMessageBroker::gameStateSlot( int diceRoll, QVector<QString> faceup, int currentTurn){
    QJsonArray playerArr;
    QVector<NetworkPlayer*> players = session->getPlayers();
    for (auto i =0; i < players.size(); i++) {
        NetworkPlayer* p = players.at(i);
        QString username = p->getUsername();
        QString person = p->getPerson();
        int position = p->getPosition();
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


/**
 * @brief Handles and broadcasts the result of a player's accusation or solution suggestion.
 *
 * This function constructs a JSON message to convey the result of a player's accusation or solution suggestion.
 * It includes the player's username, the suggested person, weapon, and room, and whether the player won or lost.
 * The message is then broadcast to all players in the session.
 *
 * @param playerName The username of the player.
 * @param person The suggested person in the accusation/suggestion.
 * @param weapon The suggested weapon in the accusation/suggestion.
 * @param room The suggested room in the accusation/suggestion.
 * @param win A flag indicating whether the player won (true) or lost (false).
 */
void ServerMessageBroker::playerResultSlot(QString playerName, QString person, QString weapon, QString room, bool win){
    QJsonObject obj;
    obj["Type"] = "PLAYER_RESULT";
    obj["Username"] = playerName;
    obj["Person"] = person;
    obj["Weapon"] = weapon;
    obj["Room"] = room;
    if (win) {
        obj["Win"] = 1;
    } else {
        obj["Win"] = 0;
    }
    session->ackMessage(playerName);
    Message msg(PLAYER_RESULT, obj);
    session->broadCastMessage(msg);
    return;
}


/**
 * @brief Notifies a player about an invalid move request.
 *
 * This function sends an error message to a specific player to notify them that their move request
 * is invalid because they cannot reach the requested position with the current dice roll.
 *
 * @param username The username of the player who made the invalid move request.
 */
void ServerMessageBroker::invalidMove(QString username)
{
    QJsonObject errObj;
    errObj["Type"] = "ERROR";
    errObj["Error"] = "INVALID_MOVE";
    errObj["Message"] = "Cannot reach the requested position with the current dice roll";
    Message msg(ERROR, errObj);
    session->unicastMessage(msg, username);
    return;
}



void ServerMessageBroker::outOfTurn(QString username){
    QJsonObject errObj;
    errObj["Type"] = "ERROR";
    errObj["Error"] = "OUT_OF_TURN";
    errObj["Message"] = "Not your turn";
    Message msg(ERROR, errObj);
    session->unicastMessage(msg, username);
    return;
}

/**
 * @brief Notifies a player that they are out of turn.
 *
 * This function sends an error message to a specific player to notify them that it is not their turn
 * to perform a game action.
 *
 * @param username The username of the player who is out of turn.
 */
void ServerMessageBroker::suggestionUpdateSlot(QString username, QVector<QString> suggestion)
{
    // Ack user first

    QJsonObject obj;
    obj["Type"] = "SUGGESTION_STATE_UPDATE";
    obj["Username"] = username;
    obj["Person"] = suggestion.at(0);
    obj["Weapon"] = suggestion.at(1);
    obj["Room"] = suggestion.at(2);
    Message msg(SUGGESTION_STATE_UPDATE, obj);
    session->ackMessage(username);
    session->broadCastMessage(msg);
    return;
}
/**
 * @brief Notifies players about a card shown during the game.
 *
 * This function sends a message to all players in the game to notify them about a card that has been shown.
 * It includes information about the asking player, the card being shown, and whether the showing player has the card.
 *
 * @param asking The username of the player who asked to see the card.
 * @param showing The username of the player who is showing the card.
 * @param hasCard A flag indicating whether the showing player has the card (true) or not (false).
 */
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
    session->ackMessage(showing);
    session->broadCastMessage(msg);
    return;
}

/**
 * @brief Notifies all players about a player's move and dice roll.
 *
 * This function sends a message to all players in the game to notify them about a player's move and the result of two dice rolls.
 * It includes information about the player who made the move, the values of the two dice, and a unique message ID.
 *
 * @param dice1 The value of the first dice roll.
 * @param dice2 The value of the second dice roll.
 * @param player The player who made the move.
 */
void ServerMessageBroker::notifyPlayerMove(int dice1, int dice2, NetworkPlayer &player){
    QJsonObject root;
    root["Type"] = "DICE_ROLL";
    root["ID"] = (int) session->getAckCount();
    root["Username"] = player.getUsername();
    root["Dice1"] = dice1;
    root["Dice2"] = dice2;
    Message msg(DICE_ROLL,root);
    session->broadCastMessage(msg);
    return;
}

/**
 * @brief Denies a connection request from a client.
 *
 * This function is used to reject a connection request from a client and
 * provides a reason for the rejection.
 *
 * @param handle The handle or identifier of the client making the connection request.
 * @param reason The reason for denying the connection request.
 */
void ServerMessageBroker::connectionDenied(QString handle, QString reason){
   session->rejectConnection(reason, handle);
   return;
}
/**
 * @brief Deals cards to players and sends the card information to each player.
 *
 * This function is responsible for dealing cards to players and sending the card
 * information to each player individually.
 *
 * @param numPlayers The number of players in the game.
 * @param cards A two-dimensional vector containing the cards to be dealt to each player.
 */

void ServerMessageBroker::dealCardsSlot(qint16 numPlayers, QVector<QVector<QString> > cards){
    QVector<QString> usernames = session->getPlayerNames();
    for (int i = 0; i < usernames.size(); i++){
        QJsonObject root;
        root["Type"] = "DEAL_CARDS";
        root["ID"] = (int) session->getAckCount();
        root["Number_Of_Cards"] = (int) cards.at(i).size();
        QJsonObject cardsObj;
        for (auto j = 0; j < cards.at(i).size(); j++){
            QString key = "Card" + QString::number(j);
            cardsObj[key] = cards.at(i).at(j);
        }
        root["Cards"] = cardsObj;
        Message msg(DEAL_CARDS, root);
        session->unicastMessage(msg, usernames.at(i));
    }
    return;
}
/**
 * @brief Sends a request for a card suggestion to a specific player.
 *
 * This function sends a request for a card suggestion to a specific player in the game.
 *
 * @param askingPlayer The player requesting the card suggestion.
 * @param person The suggested person card.
 * @param weapon The suggested weapon card.
 * @param room The suggested room card.
 */

void ServerMessageBroker::requestCardSlot(NetworkPlayer& askingPlayer, QString person, QString weapon, QString room){
    QJsonObject root;
    root["Type"] = "REQUEST_CARD";
    root["ID"] = (int) session->getAckCount();
    root["Asked_Card"] = askingPlayer.getUsername();
    QJsonObject suggestion;
    suggestion["Person"] = person;
    suggestion["Weapon"]= weapon;
    suggestion["Room"] = room;
    root["Suggestion"] = suggestion;
    Message msg(REQUEST_CARD, root);
    session->unicastMessage(msg, askingPlayer.getUsername());
    return;
}

/**
 * @brief Terminates the ongoing game.
 *
 * This function is used to terminate the ongoing game and notify all players about
 * the game termination.
 */

void ServerMessageBroker::terminateGameSlot(){
    QJsonObject root;
    root["Type"] = "GAME_TERMINATION";
    Message msg(GAME_TERMINATION, root);
    session->broadCastMessage(msg);
    return;
}


/**
 * @brief Notifies a player about a card shown during the game.
 *
 * This function is responsible for notifying a specific player about a card that
 * has been shown during the game.
 *
 * @param player The player to be notified.
 * @param card The card that has been shown.
 */

void ServerMessageBroker::showCardSlot(NetworkPlayer* player, QString card){
    QJsonObject obj {
        {"Type",  "SHOW_CARD" },
        {"ID" , (int) session->getAckCount()},
        {"Username", player->getUsername()},
        {"Card", card},
    };
    Message msg(SHOW_CARD, obj);
    session->unicastMessage(msg, player->getUsername());
    return;
}


/**
 * @brief Accepts a player into the game and notifies other players.
 *
 * This function adds a player to the game, notifies other players about the new
 * player's acceptance, and provides information about the player's username, chosen
 * person card, and dice rolls.
 *
 * @param username The username of the player being accepted.
 * @param person The person card chosen by the player.
 * @param dice1 The value of the first dice roll.
 * @param dice2 The value of the second dice roll.
 */

void ServerMessageBroker::acceptPlayer(QString username, QString person, int dice1, int dice2)
{
    // add player to listoperator overloading c++
    NetworkPlayer* playerObj = new NetworkPlayer(username, person, false);
    session->addPlayer(playerObj);
    QJsonObject obj  {
        {"Type" , "PLAYER_ACCEPTED" },
        {"Username", username},
        {"Person", person},
        {"Dice1", dice1},
        {"Dice2", dice2},
    };
    Message msg(PLAYER_ACCEPTED, obj);
    session->ackMessage(username);
    session->broadCastMessage(msg);
    return;
}


/**
 * @brief Processes a joining request message.
 *
 * This function processes a joining request message received from a client. It extracts
 * the username from the message and emits a signal to handle the connection request.
 *
 * @param msg The joining request message to be processed.
 */
void ServerMessageBroker::processJoiningRequest(Message &msg)
{
    qDebug("Connection requested, joining request processed (servermesssagebroker.cpp: 693)");
    QJsonObject obj = msg.getObj();
    QString username = obj["Username"].toString();
    emit this->connectionRequest(username);
    return;
}
