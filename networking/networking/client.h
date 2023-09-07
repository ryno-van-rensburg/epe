#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include "message.h"

class Player;


class Client : public QObject
{
    Q_OBJECT
private:
    quint64 ackCounter;
    const Player* playerObj;
    QTcpSocket* serverConnection;
    QHostAddress* addr;
    quint16 port;
    void reconnect();
    bool connected = False;
public:
    Client();
    ~Client();
    ack();
    void sendMessage(Message);
    quint16 getPort();
    quint32 getAddr();
    void setPort(quint16 port);
    void setAddr(quint32 ipAddr);
    void connect(quint32 ipAddr, quint16 port);
public slots:
    //void QIODevice::readyRead()
    void handleMessage();
    void connMade();
    void connectionError();
signals:
    void
};

#endif // CLIENT_H
