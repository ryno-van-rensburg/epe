#ifndef CLIENTMESSAGEBROKER_H
#define CLIENTMESSAGEBROKER_H

#include <QObject>
#include <client.h>
#include <message.h>
class ClientMessageBroker : public QObject
{
    Q_OBJECT
private:
    Client* client = nullptr;
public:
    explicit ClientMessageBroker(QObject *parent = nullptr);
    ~ClientMessageBroker();
signals:
    void gameStartedSignal();
    void playerAcceptedSignal();
    void connectionRejectedSignal(QString reason);
    void suggestionStateUpdate();
    void accusationResultSignal();
    void yourTurnSignal();
    void gameEndedSignal();
    void gameStateSignal(int numPlayers, QJsonArray players, int dice, int currentTurn, QJsonArray faceupCards);
    void errorSignal(ERROR_ENUM err, QString username);
    void cardRequestedSignal();
public slots:
    void requestConnection(quint32 address, quint16 port, QString username);
    void makeMove(int position);
    void showCard(QString card);
    void makeAccusation(QString person, QString weapon, QString room);
    void makeSuggestion(QString person, QString weapon, QString room);
    void requestStateSlot();
private slots:
    void unpackGameState(Message &msg);
};

#endif // CLIENTMESSAGEBROKER_H
