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


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QQmlApplicationEngine engine;
    Client* client = new Client;

    engine.rootContext()->setContextProperty("client",client); // expose client to QML
    if (app.arguments().contains("--runtests")) { // for running tests when given run arguments
        qDebug() <<"TESTING";
        engine.addImportPath(QStringLiteral("qrc:/tests"));
        TestRunner testRunner;
        int result = QTest::qExec(&testRunner); // runs tests
        return 0;
    }
    engine.addImportPath(":/imports");
    engine.load("main.qml"); // For the Linux machine
    //engine.load("C:/Users/SIGMA Pro/Documents/University of Pretoria/2023/EPE 321/Cluedo Group projectGitlab/group-6/cluedo_gui/main.qml"); // for the Windows machine
    engine.load("C:/Users/dunca/EPE integrate/group-6/cluedo_gui/main.qml");
    if (engine.rootObjects().isEmpty())
        return -1;


    int app_code = app.exec();
    delete client;

    return app_code;
}
