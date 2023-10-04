// Copyright (C) 2020 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QTimer>
#include <QtQuickTest/QtQuickTest>
#include <QDebug>
#include <QObject>
#include <QTest>

#include "testrunner.h"
#include "client.h"
#include "clientmessagebroker.h"

/*
    * Connects the signals from the client to the signals of the broker
    * @param client the client to connect
    * @param broker the broker to connect    
*/
 void connectClientNetworkSignals(Client* client,ClientMessageBroker* broker){
     QObject::connect(client, SIGNAL(testSendMessageToBroker(QString&)),broker,SLOT(testReceiveMessageFromClient(QString&)));
     QObject::connect(broker, SIGNAL(testSendMessageToClient(QString&)), client, SLOT(testReceiveMessage(QString&)) );

}

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    Client* client = new Client;
    ClientMessageBroker* broker = new ClientMessageBroker;
    connectClientNetworkSignals(client,broker);
    QString s("Hello from client");
    emit client->testSendMessageToBroker(s);
    QString a("Hello from main");
    emit broker->testSendMessageToClient(a);

    engine.rootContext()->setContextProperty("client",client); // expose client to QML
    if (app.arguments().contains("--runtests")) { // for running tests
        qDebug() <<"TESTING";
        engine.addImportPath(QStringLiteral("qrc:/tests"));
        TestRunner testRunner;
        int result = QTest::qExec(&testRunner);
        return 0;
    }
    engine.addImportPath(":/imports");
    engine.load("main.qml");
    if (engine.rootObjects().isEmpty())
        return -1;

    // client->updatePlayerPosition(1, 5, 5);
    // client->updatePlayerPosition(3, 5, 5);
    // client->updatePlayerPosition(6, 5, 5);

    int app_code = app.exec();
    delete client;
    delete broker;
    return app_code;
}
