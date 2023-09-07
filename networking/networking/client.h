#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>

class Player;
class Message;

class Client : public QObject
{
private:
    quint64 ackCounter;
    Player playerObj;
    QTcpSocket serverConnection;
    QJsonDocument deserialize(QByteArray arr, int numBytes);
public:
    Client();
    ~Client();
    ack();
    void sendMessage(Message);
    bool connect(quint32 ipAddr, quint16 port);
public slots:
    //void QIODevice::readyRead()
    void handleMessage();
    void connMade();
    void connectionError();
};

#endif // CLIENT_H
