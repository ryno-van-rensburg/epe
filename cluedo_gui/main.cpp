// Copyright (C) 2020 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

//#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QTimer>
#include <QtQuickTest/QtQuickTest>
#include <QDebug>
#include <QObject>
#include <QTest>
#include <QApplication>

#include "testrunner.h"
#include "client.h"
#include "clientmessagebroker.h"

/*
    * Connects the signals from the client to the signals of the broker
    * @param client the client to connect
    * @param broker the broker to connect    
*/
 void connectClientBroker(Client* client,ClientMessageBroker* broker){
    QObject::connect(client, SIGNAL(testSendMessageToBroker(QString&)),broker,SLOT(testReceiveMessageFromClient(QString&)));
    QObject::connect(broker, SIGNAL(testSendMessageToClient(QString&)), client, SLOT(testReceiveMessage(QString&)) );
    QObject::connect(client, SIGNAL(requestConnection(quint32, quint16, QString)), broker, SLOT(onRequestConnection(quint32, quint16, QString)));
    QObject::connect(client, SIGNAL(makeMove(int)), broker, SLOT(onMakeMove(int)));
    QObject::connect(client, SIGNAL(showCard(QString)), broker, SLOT(onShowCard(QString)));
    QObject::connect(client, SIGNAL(makeAccusation(QString, QString, QString)), broker, SLOT(onMakeAccusation(QString, QString, QString)));
    QObject::connect(client, SIGNAL(makeSuggestion(QString, QString, QString)), broker, SLOT(onMakeSuggestion(QString, QString, QString)));
    QObject::connect(client, SIGNAL(requestStateSlot()), broker, SLOT(onRequestStateSlot()));
    QObject::connect(client, SIGNAL(sendConnectionRequest(QString)), broker, SLOT(onSendConnectionRequest(QString)));
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QQmlApplicationEngine engine;
    Client* client = new Client;
    ClientMessageBroker* broker = new ClientMessageBroker;
    connectClientBroker(client,broker);
    
    engine.rootContext()->setContextProperty("client",client); // expose client to QML
    if (app.arguments().contains("--runtests")) { // for running tests when given run arguments
        qDebug() <<"TESTING";
        engine.addImportPath(QStringLiteral("qrc:/tests"));
        TestRunner testRunner;
        int result = QTest::qExec(&testRunner); // runs tests
        return 0;
    }
    engine.addImportPath(":/imports");
    engine.load("main.qml");
    if (engine.rootObjects().isEmpty())
        return -1;


    int app_code = app.exec();
    delete client;
    delete broker;
    return app_code;
}
