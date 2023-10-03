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
signals:
    void testSendMessageToBroker(QString& message);
    void validUsername();
    void playerTurnChanged();
private:
    int currentPlayerTurn;
};

#endif // CLIENT_H
