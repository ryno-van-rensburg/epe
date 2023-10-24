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
    std::cout<<"Enter number of players:"<<std::endl;
    int temp;
    std::cin>>temp;
    GameServer g = GameServer(temp);
    QCoreApplication app(argc,argv);

    return app.exec();
}


