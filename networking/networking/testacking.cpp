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
private:
    ClientMessageBroker* clientBroker;
    ServerMessageBroker* serverBroker;
    int accepted = 0;
public slots:
    void acceptJoin(QString handle) {
        serverBroker->acceptPlayer(handle, "Green", 1,1);
        accepted = 1;
        return;
    }
    void rejectJoin(QString handle) {
        serverBroker->connectionDenied(handle,  "Just Coz");
        return;
    }

    void acceptMove(QString username , int position) {
        serverBroker->updateStateSlot(username, position);
        return;
    }

    void playMove(int dice1, int dice2){
        clientBroker->makeMove(dice1+dice2);
        return;
    }
    //void accusationWinSlot();
    //void accusationLosesSlot();
private slots:
    void testJoin(){
        clientBroker = new ClientMessageBroker();
        serverBroker = new ServerMessageBroker();
        QObject::connect(this->serverBroker,SIGNAL(connectionRequest(QString)), this, SLOT(acceptJoin(QString)));
        QSignalSpy connectionSpy(this->serverBroker, SIGNAL(connectionRequest(QString)));
        QSignalSpy acceptedSpy(this->clientBroker, SIGNAL(playerAcceptedSignal(QString,QString,int,int)));
        serverBroker->listen(6444);
        quint32 address = QHostAddress(QHostAddress::LocalHost).toIPv4Address();
        clientBroker->requestConnection(address, 6444, "weirdAl");
        QTest::qWait(10000);
        QVERIFY(acceptedSpy.isValid());
        QCOMPARE(acceptedSpy.count(), 1);
        QList<QVariant> arguments = acceptedSpy.takeFirst();
        QCOMPARE(arguments.at(0).toString(), "weirdAl");
        QCOMPARE(arguments.at(1).toString(), "Green");
        QCOMPARE(arguments.at(2).toInt(), 1);
        QCOMPARE(arguments.at(3).toInt(), 1);
        QVERIFY(connectionSpy.isValid());
        QCOMPARE(connectionSpy.count(),1);
        delete clientBroker;
        delete serverBroker;
        return;
    }
    void testMove(){
        clientBroker = new ClientMessageBroker();
        serverBroker = new ServerMessageBroker();
        QObject::connect(this->serverBroker,SIGNAL(connectionRequest(QString)), this, SLOT(acceptJoin(QString)));
        QObject::connect(this->serverBroker,SIGNAL(moveReceivedSignal(NetworkPlayer&,quint32)), this, SLOT(acceptMove(QString,int)));
        QObject::connect(this->clientBroker, SIGNAL(yourTurnSignal(int,int)), this, SLOT(playMove(int,int)));
        QSignalSpy diceRollSpy(this->clientBroker, SIGNAL(yourTurnSignal(int,int)));
        QSignalSpy moverecievedSpy(this->serverBroker, SIGNAL(moveReceivedSignal(NetworkPlayer&,quint32)));
        serverBroker->listen(6444);
        quint32 address = QHostAddress(QHostAddress::LocalHost).toIPv4Address();
        clientBroker->requestConnection(address,6444, "weirdAl");
        QTest::qWait(1000);
        NetworkPlayer player;
        player.setPerson("Green");
        player.setUsername("weirdAl");
        serverBroker->notifyPlayerMove(1,1,player);
        QTest::qWait(1000);


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


};

QTEST_MAIN(testAcking)
#include "testacking.moc"
