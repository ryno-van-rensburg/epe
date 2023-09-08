#ifndef CLIENTCONNECTION_H
#define CLIENTCONNECTION_H

#include <QObject>
#include <QTcpSocket>
#include <QTimer>
#include <QMap>
#include <message.h>

class Player;
class ServerSession;

class ClientConnection : public QObject
{
    Q_OBJECT
private:
    QTcpSocket* connection;
    ServerSession* session;
    Player* playerObj;
    QTimer* minTimer;
    QTimer* timeOut;
    QHostAddress* addr;//ip address of client, used to reestablish connections.
    quint16 port;// TCP port of client, used to reestablish connections.
    QMap<MESSAGE_TYPE, int> violationCounts;
    bool isFirstTurn; // The first turn has a longer timeout period, hence this boolean.
    bool isPlaying; //Players who manage to connect.
    void checkViolationCounters();
public:
    explicit ClientConnection(QObject *parent = nullptr);
    explicit ClientConnection(QObject *parent = nullptr, QTcpSocket &connection, Player &playerObj, ServerSession &sesion);

    void setSession(ServerSession& session);
    void setPlayer(Player &playerObj);
    void setConnection(QTcpSocket &connection);

public slots:
    void sendMessage(Message);
    void messageReceived();
signals:
    void violationsExceeded(MESSAGE_TYPE type, QString errorMessage);
    void timeOut(QString userName);
};

#endif // CLIENTCONNECTION_H
