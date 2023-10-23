#ifndef TESTRUNNER_H
#define TESTRUNNER_H
#include <QtTest>
#include "client.h"
#include "clientmessagebroker.h"

class TestRunner : public QObject
{
    Q_OBJECT
    private:
        Client client;
        ClientMessageBroker broker;
public:
    TestRunner();
private slots:
    void testPlayerPositionSet();
    void testRequestConnection();
    void testOnMakeMove();
    void testOnShowCard();
    void testOnMakeAccusation();
    void testOnMakeSuggestion();
    void testOnRequestStateSlot();
    void testOnSendConnectionRequest();
    void testValidUsername();
};
#endif // TESTRUNNER_H
