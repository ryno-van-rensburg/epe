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
    QObject::connect(broker, SIGNAL(accusationResultSignal(QList,bool)));
    QObject::connect(broker, SIGNAL(cardRequestedSignal(QString,QList));
    QObject::connect(broker, SIGNAL(cardsDealt(QList)));
    QObject::connect(broker, SIGNAL(cardShown(bool,QString,QString));
    QObject::connect(broker, SIGNAL(cardShownToPlayer(QString,QString)));
    QObject::connect(broker, SIGNAL(playerAcceptedSignal(QString,QString,int,int)));
    QObject::connect(broker, SIGNAL(suggestionStateUpdate(QString,QString,QString,QString)));
    QObject::connect(broker, SIGNAL(connectionRejectedSignal(QString)));
    QObject::connect(broker, SIGNAL(errorSignal(ERROR_TYPE,QString)));
    QObject::connect(broker, SIGNAL(gameEndedSignal()));
    QObject::connect(broker, SIGNAL(gameStartedSignal(int,QJsonArray,int,int,QList)));
    QObject::connect(broker, SIGNAL(moveUpdate(QString,int)));
    QObject::connect(broker, SIGNAL(cardRequestedSignal(QString,QList)));
    QObject::connect(broker, SIGNAL(invalidMove()));
    QObject::connect(broker, SIGNAL(playerKicked()));
    QObject::connect(broker, SIGNAL(yourTurnSignal(int,int))); // make sure you store the dice value
    QObject::connect(broker, SIGNAL(playerResult(QString,QList,bool)));
    QObject::connect(broker, SIGNAL(gameStateSignal(int,QJsonArray,int,int,QJsonArray));// somewhere
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
