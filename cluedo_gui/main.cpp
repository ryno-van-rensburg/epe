// Copyright (C) 2020 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QTimer>
#include <QtQuickTest/QtQuickTest>
#include <QDebug>

#include "testrunner.h"
#include "client.h"
#include "clientmessagebroker.h"

/*
    * Connects the signals from the client to the signals of the broker
    * @param client the client to connect
    * @param broker the broker to connect    
*/
// void connectClientNetworkSignals(Client &client,ClientMessageBroker &broker){
//     QObject::connect(client, SIGNAL(testSendMessageToBroker()), broker, SLOT(testReceiveMessageFromClient()) );
//     QObject::connect(broker, SIGNAL(testSendMessageToClient()), client, SLOT(testReceiveMessage()) );
// }

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    Client& client = new Client;
    ClientMessageBroker& broker = new ClientMessageBroker;
    //connectClientNetworkSignals(&client,&broker);

    emit client->testSendMessageToBroker("Hello from client");
    //emit broker->testSendMessageToClient("Hello from broker");

    engine.rootContext()->setContextProperty("client",client); // expose client to QML


    if (app.arguments().contains("--runtests")) { // for running tests
        qDebug() <<"TESTING";
        engine.addImportPath(QStringLiteral("qrc:/tests"));
        TestRunner testObject;
        //QTest::qExec(&testObject, app.arguments());
        return 0;
    }
    engine.addImportPath(":/imports");
    engine.load("main.qml");
    if (engine.rootObjects().isEmpty())
        return -1;
    return app.exec();
}
