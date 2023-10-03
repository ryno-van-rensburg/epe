#ifndef SERVERMESSAGEBROKER_H
#define SERVERMESSAGEBROKER_H

#include <QObject>
#include "message.h"
#include "serversession.h"
#include "player.h"

class ServerMessageBroker : public QObject
{
    Q_OBJECT
public:
    explicit ServerMessageBroker(QObject *parent = nullptr);
    ~ServerMessageBroker();
private:
    ServerSession* session;
private slots:
    // these slots are connected to the server itself
    void extractMoveData(Message &msg);
    void extractAccusationData(Message &msg);
    void extractSuggestionData(Message &msg);
    void extractCardShownData(Message &msg);
    void processJoiningRequest(Message &msg);
public slots:
    void updateStateSlot(QString username, int position );
    void gameStateReplySlot(QString requesting,int diceRoll, QVector<QString> faceup, int currentTurn);
    void shownCardSlot(QString asking, QString showing, bool hasCard);
    void showCardSlot(Player& player, QString card);
    void dealCardsSlot(qint16 numPlayers, QVector<QVector<QString>> cards );
    void notifyPlayerMove(int dice1, int dice2, Player& player);
    void requestCardSlot(Player& askingPlayer, QString person, QString weapon, QString room);
    void playerResultSlot(QString playerName, QString person, QString weapon, QString room, bool win);
    void terminateGameSlot();
    void acceptPlayer(QString username, QString person, int dice1, int dice2);
    void gameStateSlot(int diceRoll, QVector<QString> faceup, int currentTurn);
    void connectionDenied(QString handle, QString reason);
    void suggestionUpdateSlot(QString username, QVector<QString> suggestion);
    void invalidMove(QString username);
    void outOfTurn(QString username);
signals:
    void suggestionReceivedSignal(Player &player, QString person, QString weapon, QString, );
    void accusationReceivedSignal(Player &player, QString person, QString weapon, QString, );
    void moveReceivedSignal(Player &player, quint32 position);
    void cardShownSignal(Player &player, QString card);
    void stateRequestSignal(QString requesting);
    void connectionRequest(QString handle);

};

#endif // SERVERMESSAGEBROKER_H
