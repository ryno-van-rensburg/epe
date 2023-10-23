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
    int moved = 0;
    int suggestionMade = 0;
    int memdice1, memdice2;
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

    void acceptMove(NetworkPlayer &player , quint32 position) {
        serverBroker->updateStateSlot(player.getUsername(), position);
        return;
    }
    void rejectMove(NetworkPlayer &player, quint32 position) {
        serverBroker->invalidMove(player.getUsername());
        return;
    }

    void goodSuggestion(NetworkPlayer &player, QString room, QString weapon, QString person){
        QVector<QString> suggestion = {room, weapon, person};
        serverBroker->suggestionUpdateSlot(player.getUsername(), suggestion );
        suggestionMade = 1;
        return;
    }

    void retryMove() {
        playMove();
        return;
    }
    void playMove(int dice1=-1, int dice2=-1){
        if (dice1 != -1 && dice2 != -1){
            memdice1 = dice1;
            memdice2 = dice2;
        }
        clientBroker->makeMove(memdice1+memdice2);
        moved = 1;
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
        QSignalSpy moveReceived(this->serverBroker, SIGNAL(moveReceivedSignal(NetworkPlayer&,quint32)));
        serverBroker->listen(6444);
        quint32 address = QHostAddress(QHostAddress::LocalHost).toIPv4Address();
        clientBroker->requestConnection(address,6444, "weirdAl");
        QTest::qWait(1000);
        NetworkPlayer player;
        player.setPerson("Green");
        player.setUsername("weirdAl");
        serverBroker->notifyPlayerMove(1,1,player);
        QTest::qWait(10000);
        QVERIFY(diceRollSpy.isValid());
        QCOMPARE(diceRollSpy.count(), 1);
        QVERIFY(moveReceived.isValid());
        QCOMPARE(moveReceived.count(), 1);
        QCOMPARE(this->moved, 1);
        QList<QVariant> arguments = moveReceived.takeFirst();
        QCOMPARE(arguments.at(1), 2);
        delete clientBroker;
        delete serverBroker;
        return;
    }

    void testKick(){
        clientBroker = new ClientMessageBroker();
        serverBroker = new ServerMessageBroker();
        QObject::connect(this->serverBroker,SIGNAL(connectionRequest(QString)), this, SLOT(acceptJoin(QString)));
        QObject::connect(this->serverBroker,SIGNAL(moveReceivedSignal(NetworkPlayer&,quint32)), this, SLOT(rejectMove(NetworkPlayer&,quint32)));
        QObject::connect(this->clientBroker, SIGNAL(yourTurnSignal(int,int)), this, SLOT(playMove(int,int)));
        QSignalSpy diceRollSpy(this->clientBroker, SIGNAL(yourTurnSignal(int,int)));
        QSignalSpy moveReceived(this->serverBroker, SIGNAL(moveReceivedSignal(NetworkPlayer&,quint32)));
        QSignalSpy invalidMoveSpy(this->clientBroker, SIGNAL(invalidMove()));
        QSignalSpy kickedSpy(this->clientBroker, SIGNAL(playerKicked(QString,QString)));
        QObject::connect(this->clientBroker, SIGNAL(invalidMove()), this, SLOT(retryMove()));
        serverBroker->listen(6444);
        quint32 address = QHostAddress(QHostAddress::LocalHost).toIPv4Address();
        clientBroker->requestConnection(address,6444, "weirdAl");
        QTest::qWait(1000);
        NetworkPlayer player;
        player.setPerson("Green");
        player.setUsername("weirdAl");
        serverBroker->notifyPlayerMove(1,1,player);
        QTest::qWait(1000);
        QVERIFY(invalidMoveSpy.isValid());
        QVERIFY(diceRollSpy.isValid());
        QVERIFY(kickedSpy.isValid());
        QVERIFY(moveReceived.isValid());
        QCOMPARE(invalidMoveSpy.count(),4);
        QCOMPARE(diceRollSpy.count(), 1);
        QCOMPARE(moveReceived.count(),4);
        QCOMPARE(kickedSpy.count(), 1);
        delete clientBroker;
        delete serverBroker;
        return;
    }
    void testTerminate(){
        clientBroker = new ClientMessageBroker();
        serverBroker = new ServerMessageBroker();
        QObject::connect(this->serverBroker,SIGNAL(connectionRequest(QString)), this, SLOT(acceptJoin(QString)));
        QSignalSpy termSpy(this->clientBroker, SIGNAL(gameEndedSignal()));
        serverBroker->listen(6444);
        quint32 address = QHostAddress(QHostAddress::LocalHost).toIPv4Address();
        clientBroker->requestConnection(address,6444, "weirdAl");
        QTest::qWait(1000);
        NetworkPlayer player;
        player.setPerson("Green");
        player.setUsername("weirdAl");
        serverBroker->terminateGameSlot();
        QTest::qWait(1000);
        QVERIFY(termSpy.isValid());
        QCOMPARE(termSpy.count(), 1);
        delete clientBroker;
        delete serverBroker;
        return;
    }
    void testSuggestionStateUpdate(){
        clientBroker = new ClientMessageBroker();
        serverBroker = new ServerMessageBroker();
        QObject::connect(this->serverBroker,SIGNAL(connectionRequest(QString)), this, SLOT(acceptJoin(QString)));

        QObject::connect(this->serverBroker, SIGNAL(suggestionReceivedSignal(NetworkPlayer&,QString,QString,QString)), this, SLOT(goodSuggestion(NetworkPlayer&,QString,QString,QString)));
        QSignalSpy suggestionMadeSpy(this->serverBroker, SIGNAL(suggestionReceivedSignal(NetworkPlayer&,QString,QString,QString)));
        QSignalSpy stateUpdateSpy(this->clientBroker, SIGNAL(suggestionStateUpdate(QString, QString, QString, QString)));
        serverBroker->listen(6444);
        quint32 address = QHostAddress(QHostAddress::LocalHost).toIPv4Address();
        clientBroker->requestConnection(address,6444, "weirdAl");
        QTest::qWait(1000);
        NetworkPlayer player;
        player.setPerson("Green");
        player.setUsername("weirdAl");
        clientBroker->makeSuggestion("Green", "Dagger", "Courtyard");
        QTest::qWait(1000);
        QVERIFY(suggestionMadeSpy.isValid());
        QCOMPARE(suggestionMadeSpy.count(), 1);
        QVERIFY(stateUpdateSpy.isValid());
        QCOMPARE(stateUpdateSpy.count(), 2);
        delete clientBroker;
        delete serverBroker;
        return;
    }
};

QTEST_MAIN(testAcking)
#include "testacking.moc"
