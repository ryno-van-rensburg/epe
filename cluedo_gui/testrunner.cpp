#include "testrunner.h"

#include <QtTest>
TestRunner::TestRunner()
{
}

void TestRunner::testRequestConnection()
{
    QSignalSpy spy(&client, SIGNAL(requestConnection(quint32, quint16, QString)));

    quint32 address = 123;
    quint16 port = 456;
    QString username = "testUser";

    client.emitRequestConnectionSignal(address, port, username);
    //client.requestConnection(address, port, username);

    QCOMPARE(spy.count(), 1);
    QList<QVariant> arguments = spy.takeFirst();
    QCOMPARE(arguments.at(0).toUInt(), address);
    QCOMPARE(arguments.at(1).toUInt(), port);
    QCOMPARE(arguments.at(2).toString(), username);
}

void TestRunner::testPlayerPositionSet(){
    Client client;
    QSignalSpy spy(&client, SIGNAL(playerTurnChanged())); // expecting playerTurnChanged signal to be emmitted

    client.playerPositionSet(1, 100, 200);

    QCOMPARE(spy.count(), 1);
}
void TestRunner::testOnMakeMove()
{
    QSignalSpy spy(&client, SIGNAL(makeMove(int)));

    int position = 42; // Example position value

    client.emitMakeMoveSignal(position);
    client.setPlayerTurn(1); // should not emit signal since the default player turn is 0

    QCOMPARE(spy.count(), 1); // SHOULD BE 1 instead of 2
    QList<QVariant> arguments = spy.takeFirst();
    QCOMPARE(arguments.at(0).toInt(), position);

    
}

void TestRunner::testOnShowCard()
{
    QSignalSpy spy(&client, SIGNAL(showCard(QString)));

    QString card = "Ace of Spades"; // Example card value

    client.emitShowCardSignal(card);

    QCOMPARE(spy.count(), 1);
    QList<QVariant> arguments = spy.takeFirst();
    QCOMPARE(arguments.at(0).toString(), card);
}

void TestRunner::testOnMakeAccusation()
{
    QSignalSpy spy(&client, SIGNAL(makeAccusation(QString, QString, QString)));

    QString person = "John";
    QString weapon = "Knife";
    QString room = "Study"; // Example values for person, weapon, and room

    client.onAccusationMade(room, person, weapon);

    QCOMPARE(spy.count(), 1);
    QList<QVariant> arguments = spy.takeFirst();
    QCOMPARE(arguments.at(0).toString(), person);
    QCOMPARE(arguments.at(1).toString(), weapon);
    QCOMPARE(arguments.at(2).toString(), room);
}

void TestRunner::testOnMakeSuggestion()
{
    QSignalSpy spy(&client, SIGNAL(makeSuggestion(QString, QString, QString)));

    QString person = "Alice";
    QString weapon = "Candlestick";
    QString room = "Library"; // Example values for person, weapon, and room

    client.onSuggestionMade(person, weapon, room);

    QCOMPARE(spy.count(), 1);
    QList<QVariant> arguments = spy.takeFirst();
    QCOMPARE(arguments.at(0).toString(), person);
    QCOMPARE(arguments.at(1).toString(), weapon);
    QCOMPARE(arguments.at(2).toString(), room);
}

void TestRunner::testOnRequestStateSlot()
{
    QSignalSpy spy(&client, SIGNAL(requestStateSlot()));

    client.emitRequestStateSlotSignal();

    QCOMPARE(spy.count(), 1);
}
void TestRunner::testValidUsername()
{
    QSignalSpy spy(&client, SIGNAL(validUsername()));

    client.emitValidUsernameSignal();

    QCOMPARE(spy.count(), 1);
}
void TestRunner::testOnSendConnectionRequest()
{
    QSignalSpy spy(&client, SIGNAL(sendConnectionRequest(QString)));

    QString username = "testUser"; // Example username value

    client.emitSendConnectionRequestSignal(username);

    QCOMPARE(spy.count(), 1);
    QList<QVariant> arguments = spy.takeFirst();
    QCOMPARE(arguments.at(0).toString(), username);
}
//QTEST_APPLESS_MAIN( TestRunner)
#include "testrunner.moc"
