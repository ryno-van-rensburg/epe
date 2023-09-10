// Copyright (C) 2020 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QTimer>
#include "client.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    Client client;
    engine.rootContext()->setContextProperty("client",&client); // expose client to QML

    client.setPlayerTurn(2);
    engine.addImportPath(":/imports");
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    QTimer timer; // = new QTimer();
    timer.setInterval(9000); // milliseconds
    QObject::connect(&timer, &QTimer::timeout, [&client]() {
        int currentTurn = client.playerTurn();
        int nextTurn = currentTurn > 6 ? 1:(currentTurn + 1);
        client.setPlayerTurn(nextTurn);
    });
    timer.start();
    return app.exec();
}
