

#include <QObject>
#include <QTest>
#include <QTcpServer>
#include <QJsonObject>
#include <iostream>
#include <QSignalSpy>
#include "message.h"
#include "client.h"

// todo finish client tests
class testClient : public QObject
{
    Q_OBJECT
private slots:
    void testConnect() {
       QTcpServer* dummyServer = new QTcpServer(this);
       dummyServer->listen();
       quint16 port = dummyServer->serverPort();
       Client* client = new Client();
       quint32 ipAddr = QHostAddress(QHostAddress::LocalHost).toIPv4Address();

       QSignalSpy spy1(dummyServer, SIGNAL(newConnection()));
       QSignalSpy spy2(client, SIGNAL(connectedToServer()));
       client->connect(ipAddr, port);
       // check that a conection was made
       while(!dummyServer->waitForNewConnection()){}
       QTcpSocket* sock = dummyServer->nextPendingConnection();
       //std::cout << sock->peerAddress().toString().toStdString() << std::endl;
       //std::cout << (int) sock->peerPort() << std::endl;
       sock->write("hello");
       delete client;
       delete dummyServer;
       return;
    }
    void testSendMessage()
    {
        QTcpServer* dummyServer = new QTcpServer(this);
        dummyServer->listen();
        Client* client = new Client();
        quint16 port  = dummyServer->serverPort();
        quint32 ipAddr = QHostAddress(QHostAddress::LocalHost).toIPv4Address();
        client->connect(ipAddr, port);
        QTcpSocket* serverSocket;
        if (dummyServer->waitForNewConnection(1000)) {
            serverSocket = dummyServer->nextPendingConnection();
        }
        QJsonObject obj {
           {"Type", "REQUEST_GAME_STATE"},
            {"ID", 10},
        };
        Message msgSend("REQUEST_GAME_STATE", obj);
        client->sendMessage(msgSend);
        serverSocket->waitForReadyRead();
        QByteArray data = serverSocket->readAll();
        QJsonDocument contents = QJsonDocument::fromJson(data);
        QJsonObject obj2 = contents.object();
        QCOMPARE(obj2["Type"], "REQUEST_GAME_STATE");
        QCOMPARE(obj2["ID"], 10);
        delete client;
        delete dummyServer;
        return;

    }
    void testHandleMessage(){
        QTcpServer* dummyServer = new QTcpServer(this);
        dummyServer->listen();
        Client* client = new Client();
        quint16 port  = dummyServer->serverPort();
        quint32 ipAddr = QHostAddress(QHostAddress::LocalHost).toIPv4Address();
        client->connect(ipAddr, port);
        QTcpSocket* serverSocket;
        if (dummyServer->waitForNewConnection(1000)) {
            serverSocket = dummyServer->nextPendingConnection();
        }
        QJsonObject obj {
           {"Type", "GAME_STATE"},
           {"ID", 10},
        };
        Message msgSend("GAME_STATE", obj);
        QSignalSpy spy(client, SIGNAL(gameStateReceived(Message*)));
        serverSocket->write(msgSend.getBytes());
        serverSocket->waitForBytesWritten();
        QTest::qWait(100);
        QCOMPARE(spy.count(), 1);
        return;
    }
    void testAck(){
        return;
    }
};

QTEST_MAIN(testClient)
#include "testclient.moc"
