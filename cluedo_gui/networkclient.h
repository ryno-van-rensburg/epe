#ifndef NETWORK_CLIENT_H
#define NETWORK_CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <iostream>
#include <QVector>
#include "message.h"
#include "networkplayer.h"


// TODO add comments
// TODO add signals to connect to clientbroker signals
// TODO unit tests

class NetworkClient : public QObject
{
    Q_OBJECT
private:
    quint64 ackCounter;
    NetworkPlayer* playerObj;
    QTcpSocket* serverConnection;
    QHostAddress addr;
    quint16 port;
    void reconnect();
    QVector<Message> ackMessages; // messages expecting an ack
    bool connected = false;
    void handleAck(Message &msg);
    void handleError(Message &msg);
public:
    NetworkClient();
    ~NetworkClient();
    void ack(quint64 id);
    void ack(Message &msg);
    quint64 getAckCount();
    quint16 getPort();
    quint32 getAddr();
    QString getUsername();
    void setPort(quint16 port);
    void setAddr(quint32 ipAddr);
    void connect(quint32 ipAddr, quint16 port);
public slots:
    //void QIODevice::readyRead()
    void sendMessage(Message &msg);
    void handleMessage();
    void connMade();
    void connectionError();
signals: // used to notify clientmessagebroker of new data,
    void connectedToServer();
    void connectedToGame();
    void gameStateReceived(Message &msg);
    void suggestionStateUpdate(Message &msg);
    void connectionDenied(Message &msg);
    void connectionAccepted(Message &msg);
    void moveUpdate(Message &msg);
    void gameTerminated(Message &msg);
    void cardRequested(Message &msg);
    void cardShown(Message &msg);
    void cardsDealt(Message &msg);
    void playerResult(Message &msg);
    void playerTurn(Message &msg);
    void playerKicked(Message &msg);
    void moveError();

};

#endif // CLIENT_H
