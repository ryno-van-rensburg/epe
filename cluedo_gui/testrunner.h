#ifndef TESTRUNNER_H
#define TESTRUNNER_H
#include <QtTest>
#include "client.h"

class TestRunner : public QObject
{
    Q_OBJECT
public:
    TestRunner();
private slots:
    void testPlayerPositionSet();
};
#endif // TESTRUNNER_H
