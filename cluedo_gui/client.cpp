#include "client.h"
#include <QDebug>

Client::Client(QObject *parent)
    : QObject{parent}, currentPlayerTurn(0)
{
    errorMessage.setIcon(QMessageBox::Critical);
    errorMessage.setWindowTitle("Error");
    errorMessage.setText("Invalid Player ID. Please enter 'KingZander'.");
    errorMessage.setStandardButtons(QMessageBox::Ok);
}
void Client::testReceiveMessage(QString& message){
    qDebug() << "Received message from broker: " << message;
    QString s("Hello from client");
    emit testSendMessageToBroker(s);
}

int Client::playerTurn() const
{
    return currentPlayerTurn;
}

void Client::setPlayerTurn(int turn)
{
    if(currentPlayerTurn != turn){
        currentPlayerTurn = turn;
        emit playerTurnChanged();
    }
}

void Client::onTurnEnded(){
    int nextTurn = currentPlayerTurn > 6 ? 1:(currentPlayerTurn + 1);
    this->setPlayerTurn(nextTurn);
}


void Client::onSuggestionMade(QString room,QString person, QString item)
{
    qDebug() << person << room << item;
}

void Client::checkPlayerID(const QString& playerID)
{
    if (playerID != "KingZander")
    {
        errorMessage.exec();
    }
}
