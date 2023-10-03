#ifndef CLIENTMESSAGEBROKER_H
#define CLIENTMESSAGEBROKER_H
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QObject>
class ClientMessageBroker : public QObject
{
    Q_OBJECT
private:
public:
    explicit ClientMessageBroker(QObject *parent = nullptr);
    ~ClientMessageBroker();

signals:
    void testSendMessageToClient(QString& message);
    
    void connectionStarted(QString username);
    void gameStartedSignal(int numPlayers, QJsonArray players, int dice1,int currentTurn, QVector<QString> faceUpCards);
    void playerAcceptedSignal(QString username, QString person, int dice1, int dice2);
    void connectionRejectedSignal(QString reason);
    void suggestionStateUpdate(QString username, QVector<QString> cards);
    void accusationResultSignal(QVector<QString> cards, bool win);
    void yourTurnSignal(int dice1, int dice2);
    void cardsDealt(QVector<QString> cards);
    void cardShown(bool hasCard, QString asked, QString showed);
    void cardShownToPlayer(QString username, QString card);
    void playerKicked(QString username, QString reason);
    void gameEndedSignal();
    void gameStateSignal(int numPlayers, QJsonArray players, int dice, int currentTurn, QJsonArray faceupCards);
    void playerResult(QString username, QVector<QString> accusation,bool win);
    void moveUpdate(QString username, int position);
    void cardRequestedSignal(QString asked, QVector<QString> suggestion );

public slots:
    void testReceiveMessageFromClient(QString& message);
    
    void requestConnection(quint32 address, quint16 port, QString username);
    void makeMove(int position);
    void showCard(QString card);
    void makeAccusation(QString person, QString weapon, QString room);
    void makeSuggestion(QString person, QString weapon, QString room);
    void requestStateSlot();
    void sendConnectionRequest(QString username);

private slots:
  };

#endif // CLIENTMESSAGEBROKER_H
