#include "client.h"
#include <QDebug>

Client::Client(QObject *parent)
    : QObject{parent}, currentPlayerTurn(0)
{

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
