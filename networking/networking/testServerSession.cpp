#include <QObject>
#include <QTest>
#include <QTcpServer>
#include <QTcpSocket>
#include <message.h>
#include <iostream>
#include <client.h>

class testServerSession : public QObjectCompatProperty{
    Q_OBJECT
private slots:
   void testlistening();
   void testnewconnection();
   void testBroadcast();
   void testUnicast();
   void testHandleMessage();
   void testKickPlayer();
};
