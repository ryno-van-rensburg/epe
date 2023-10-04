#include "testrunner.h"
#include "client.h"
#include "clientmessagebroker.h"
#include <QtTest>
TestRunner::TestRunner()
{

}
void TestRunner::testPlayerPositionSet(){
    Client client;
    QSignalSpy spy(&client, SIGNAL(playerTurnChanged()));

    client.playerPositionSet(1, 100, 200);

    QCOMPARE(spy.count(), 1);
}

//QTEST_APPLESS_MAIN( TestRunner)
#include "testrunner.moc"
