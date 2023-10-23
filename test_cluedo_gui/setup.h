
#ifndef SETUP_H
#define SETUP_H

#include <QtQuickTest>
#include <QQmlEngine>
#include <QQmlContext>
#include <QtGui/QGuiApplication>


class Setup : public QObject
{
    Q_OBJECT
public:
    Setup() {};

public slots:
    void applicationAvailable();
    void qmlEngineAvailable(QQmlEngine *engine);
    void cleanupTestCase();
};

#endif // SETUP_H
