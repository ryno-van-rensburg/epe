#include "testacking.h"


#include <QObject>
#include <QTest>
#include <QTcpServer>
#include <QJsonObject>
#include <iostream>
#include <QSignalSpy>
#include "message.h"
#include "clientmessagebroker.h"
#include "servermessagebroker.h"



class testAcking : public QObject
{
    Q_OBJECT
private slots:
    void testJoin(){
        ClientMessageBroker clientBroker;
        ServerMessageBroker serverBroker;
        serverBroker.listen(6444);
        clientBroker.requestConnection(QHostAddress::LocalHost, 6444, "weirdAl");
        QTest::qWait(100);
        return;
    }
    void testMove(){
        return;
    }
    void testKick(){
        return;
    }
    void testTerminate(){
        return;
    }
    void testSuggestionStateUpdate(){
        return;
    }
    void testAccusationStateUpdate(){
        return;
    }
    void test


};

QTEST_MAIN(testAcking)
#include "testacking.moc"
