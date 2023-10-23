#ifndef CLIENTMESSAGEBROKER_H
#define CLIENTMESSAGEBROKER_H

#include <QObject>
#include "networkclient.h"
#include "message.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>


class ClientMessageBroker : public QObject
{
    Q_OBJECT
private:
    NetworkClient* client = nullptr;
public:
    explicit ClientMessageBroker(QObject *parent = nullptr);
    ~ClientMessageBroker();

signals:
    void connectionStarted(QString username);
    void gameStartedSignal(int numPlayers, QJsonArray players, int dice1,int currentTurn, QVector<QString> faceUpCards);
    void playerAcceptedSignal(QString username, QString person, int dice1, int dice2); // All the players, check if username === me
    void connectionRejectedSignal(QString reason);
    void suggestionStateUpdate(QString username, QString person, QString weapon, QString room);
    void accusationResultSignal(QVector<QString> cards, bool win);
    void turnSignal(QString username, int dice1, int dice2);
    void cardsDealt(QVector<QString> cards);
    void cardShown(bool hasCard, QString asked, QString showed); // Multicast
    void cardShownToPlayer(QString username, QString card);      // Unicast
    void playerKicked(QString username, QString reason);
    void gameEndedSignal();
    void gameStateSignal(int numPlayers, QJsonArray players, int dice, int currentTurn, QJsonArray faceupCards);
    void playerResult(QString username, QVector<QString> accusation,bool win);
    // error signal can be sent in response to ANY message you send, so make sure you handle all of them 
    // in a single slot. 
    void errorSignal(ERROR_TYPE err, QString username);
    void moveUpdate(QString username, int position);
    void cardRequestedSignal(QString asked, QVector<QString> suggestion );
    void invalidMove();
public slots:
    void requestConnection(quint32 address, quint16 port, QString username);
    void makeMove(int position);
    void showCard(QString card);
    void makeAccusation(QString person, QString weapon, QString room);
    void makeSuggestion(QString person, QString weapon, QString room);
    void requestStateSlot();
    void sendConnectionRequest(QString username);

private slots:
    void unpackGameState(Message &msg);
    void unpackCardRequested(Message &msg);
    void unpackMove(Message &msg);
    void unpackConnectionAccepted(Message &msg);
    void unpackConnectionRejected(Message &msg);
    void unpackPlayerResult(Message &msg);
    void unpackGameTerminated(Message& msg);
    void unpackCardShown(Message &msg);
    void unpackCardsDealt(Message &msg);
    void unpackSuggestionStateUpdate(Message &msg);
    void unpackPlayerTurn(Message &msg);
    void unpackKick(Message &msg);
    void unpackShowCardToPlayer(Message &msg);
};

#endif // CLIENTMESSAGEBROKER_H
