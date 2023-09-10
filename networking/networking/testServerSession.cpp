#include <QObject>
#include <QTest>
#include <QTcpServer>
#include <QTcpSocket>
#include <message.h>
#include <iostream>
#include <serversession.h>
#include <QSignalSpy>
#include <client.h>
#include <clientmessagebroker.h>

class testServerSession : public QObject
{
    Q_OBJECT
private slots:
   void testserverandbroker(){
        ServerSession* session = new ServerSession();
        ClientMessageBroker* broker = new ClientMessageBroker();
        int port = 34445;
        quint32 ipAddr = QHostAddress(QHostAddress::LocalHost).toIPv4Address();
        //QSignalSpy spy = QSignalSpy(session, SIGNAL(joiningRequest(Message&)));
        QSignalSpy spy1 = QSignalSpy(broker, SIGNAL(playerAcceptedSignal()));
        session->startListening(port);
        broker->requestConnection(ipAddr, port, "frogge");
        QTest::qWait(1000);
        //broker->sendConnectionRequest("frogge");
        //QCOMPARE(spy.count(), 1);
        QCOMPARE(spy1.count(), 1);
        return;
   }

   //void testBroadcast();
   //void testUnicast();
   //void testHandleMessage();
   //void testKickPlayer();
};

QTEST_MAIN(testServerSession)
#include "testServerSession.moc"
