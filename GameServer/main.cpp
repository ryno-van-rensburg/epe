#include <QCoreApplication>
#include <QtTest/QTest>
#include "gameserver.h"
#include <iostream>



//class TestClass : public QObject
//{
//    Q_OBJECT

//private slots:
//    void testReturn()
//    {
//        WeaponCard* w = new WeaponCard("Candlestick");
//        QString result = w->GetCardName();
//        QCOMPARE(result,"Candlestick");
//    }
//};

int main(int argc, char *argv[])
{
    QCoreApplication app(argc,argv);

    int temp = 1;
    GameServer g = GameServer();

    return app.exec();
}


