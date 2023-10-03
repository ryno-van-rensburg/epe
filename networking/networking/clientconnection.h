#ifndef CLIENTCONNECTION_H
#define CLIENTCONNECTION_H

#include <QObject>
#include <QTcpSocket>
#include <QTimer>
#include <QMap>
#include <message.h>
#include "player.h"

class ServerSession;

class ClientConnection : public QObject
{
    Q_OBJECT
private:
    QTcpSocket* connection;
    ServerSession* session;
    NetworkPlayer* playerObj;
    QTimer* minTimer;
    QTimer* timerOut;
    QString username;
    QHostAddress addr;//ip address of client, used to reestablish connections.
    quint16 port;// TCP port of client, used to reestablish connections.
    QMap<QString, int> violationCounts;
    bool isFirstTurn; // The first turn has a longer timeout period, hence this boolean.
    bool isPlaying; //Players who manage to connect.
    void checkViolationCounters();
    int  ackValue;
public:
    explicit ClientConnection(QObject *parent = nullptr);
    explicit ClientConnection(QTcpSocket &connection, NetworkPlayer &playerObj, ServerSession &session);
    explicit ClientConnection(QTcpSocket *connection, ServerSession* session);
    QString getUsername(); // temporary declarations.
    ~ClientConnection();
    void setUsername(QString username);
    void setPlaying(bool );
    QHostAddress getAddr(){
        return this->addr;
    }
    void setSession(ServerSession& session);
    void setPlayer(NetworkPlayer &playerObj);
    void incrementErrorTally(QString errorType);
    NetworkPlayer* getPlayer();
    void setConnection(QTcpSocket &connection);

public slots:
    void sendMessage(Message &msg);
    void handleIncomingData();

signals:
    void violationsExceeded(QString username, QString reason);
    void timeOut(QString userName);
    void messageReceived(Message &msg);
    void messageSent(Message &msg);
};

#endif // CLIENTCONNECTION_H
