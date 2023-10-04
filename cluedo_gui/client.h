#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>

class Client : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int playerTurn READ playerTurn WRITE setPlayerTurn NOTIFY playerTurnChanged)
public slots:
    void testReceiveMessage(QString& message);
    void onNameEntered(QString name);
    void onTurnEnded();
    void onSuggestionMade(QString room,QString person, QString item);
public:
    explicit Client(QObject *parent = nullptr);
    int playerTurn() const;
    void setPlayerTurn(int turn);
    Q_INVOKABLE void playerPositionSet(int playerId, int newX, int newY);
    void updatePlayerPosition(int playerId, int newX, int newY); //  will be network slot in future
    std::tuple<int,int> getPlayerPosition(int playerId); // will be network slot in future
signals:
    void testSendMessageToBroker(QString& message);
    void validUsername();
    void playerPositionUpdated(int playerId, int newX, int newY);
    void playerTurnChanged();
private:
    int currentPlayerTurn;
};

#endif // CLIENT_H
