
#include "setup.h"
#include "client.h"
#include "QDebug"

void Setup::applicationAvailable()
{
    // custom code that does not require QQmlEngine

}

void Setup::qmlEngineAvailable(QQmlEngine *engine)
{
    // custom code that needs QQmlEngine, register QML types, add import paths,...

    Client* client = new Client();
    engine->rootContext()->setContextProperty("client",client); // expose client to QML
    qDebug() << "Testing";
}

void Setup::cleanupTestCase()
{
    // custom code to clean up before destruction starts
}

QUICK_TEST_MAIN_WITH_SETUP(demotests, Setup)

#include "setup.moc"
