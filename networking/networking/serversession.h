#ifndef SERVERSESSION_H
#define SERVERSESSION_H

#include <QObject>
#include <QVector>
#include <QTcpServer>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <iostream>
#include <clientconnection.h>
#include <message.h>

class ServerSession : public QObject
{
    Q_OBJECT
private:
    int numPlayers;
    int maxConnections;
    QVector<ClientConnection*> connections;
    QVector<QTcpSocket*> pendingConnections;
    QVector<Message*> ackList; // performs a similar function to the acklist in the client class
    quint64 ackCounter;
    QTcpServer* serverConnection;
public:
    explicit ServerSession(QObject *parent = nullptr);
    ~ServerSession();
    void startListening(int port = -1);
public slots:
    void handleNewConnection();
    void broadCastMessage(Message &msg);
    void unicastMessage(Message &msg, QString username);
    void handleMessage(Message &msg);
    void kickPlayer(QString username);
signals:
    void joiningRequest(Message &msg);
    void gameStateRequested();
};

#endif // SERVERSESSION_H
