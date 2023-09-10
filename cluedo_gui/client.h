#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>

class Client : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int playerTurn READ playerTurn WRITE setPlayerTurn NOTIFY playerTurnChanged)
public slots:
    void onTurnEnded();
    void onSuggestionMade(QString room,QString person, QString item);
public:
    explicit Client(QObject *parent = nullptr);
    int playerTurn() const;
    void setPlayerTurn(int turn);
signals:
    void playerTurnChanged();
private:
    int currentPlayerTurn;
};

#endif // CLIENT_H
