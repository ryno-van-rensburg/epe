#ifndef CLIENTMESSAGEBROKER_H
#define CLIENTMESSAGEBROKER_H

#include <QObject>
#include <networkclient.h>
#include <message.h>
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
    void playerAcceptedSignal(QString username, QString person, int dice1, int dice2);
    void connectionRejectedSignal(QString reason);
    void suggestionStateUpdate(QString username, QString person, QString weapon, QString room);
    void accusationResultSignal(QVector<QString> cards, bool win);
    void yourTurnSignal(int dice1, int dice2);
    void cardsDealt(QVector<QString> cards);
    void cardShown(bool hasCard, QString asked, QString showed);
    void cardShownToPlayer(QString username, QString card);
    void playerKicked(QString username, QString reason);
    void gameEndedSignal();
    void gameStateSignal(int numPlayers, QJsonArray players, int dice, int currentTurn, QJsonArray faceupCards);
    void playerResult(QString username, QVector<QString> accusation,bool win);
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
