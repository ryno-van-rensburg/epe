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
#include "networkplayer.h"


class ServerSession : public QObject
{
    Q_OBJECT
private:
    int numPlayers;
    int maxConnections;
    QVector<ClientConnection*> connections;
    QVector<QTcpSocket*> pendingConnections;
    QVector<Message> ackList; // performs a similar function to the acklist in the client class
    quint64 ackCounter;
    QTcpServer* serverConnection;
    void handleAck(Message &msg);
    bool isConnectionPending(QHostAddress address);

public:
    explicit ServerSession(QObject *parent = nullptr);
    ~ServerSession();
    void startListening(int port = -1);
    NetworkPlayer* getPlayer(QString playerName);
    NetworkPlayer* getPlayer(QHostAddress address);

    QVector<QString> getPlayerNames() {
        QVector<QString> names;
        for (auto i= 0; i < connections.size(); i++){
            names.append(connections.at(i)->getUsername());
        }
        return names;
    }
    QVector<NetworkPlayer*> getPlayers(){
        QVector<NetworkPlayer*> players;
        for (auto i= 0; i < connections.size(); i++){
            players.append(connections.at(i)->getPlayer());
        }
        return players;
    }

    quint64 getAckCount(){
        return this->ackCounter;
    }
public slots:
    void ackMessage(QString username);
    void addPlayer(NetworkPlayer* obj);
    void handleNewConnection();
    void broadCastMessage(Message &msg);
    void unicastMessage(Message &msg, QString username);
    void handleMessage(Message &msg);
    void kickPlayer(QString username, QString reason);
    void handleDataFromPendingConnections();
    void rejectConnection(QString reason, QString handle);
signals:
    void joiningRequest(Message &msg);
    void gameStateRequested();
    void suggestionMade(Message &msg);
    void accusationMade(Message &msg);
    void cardShown(Message &msg);
    void moveMade(Message &msg);
};

#endif // SERVERSESSION_H
