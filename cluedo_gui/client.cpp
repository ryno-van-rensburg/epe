#include "client.h"
#include <QDebug>

Client::Client(QObject *parent)
    : QObject{parent}, currentPlayerTurn(0)
{
}
void Client::testReceiveMessage(QString& message){
    qDebug() << "Received message from broker: " << message;
    QString s("Hello from client");
    emit testSendMessageToBroker(s);
}

std::tuple<int,int> Client::getPlayerPosition(int playerId){

} 

int Client::playerTurn() const
{
    return currentPlayerTurn;
}

void Client::updatePlayerPosition(int playerId, int newX, int newY)
{   
    emit playerPositionUpdated(playerId, newX, newY);
}

void Client::playerPositionSet(int playerId, int newX, int newY)
{
   
    qDebug() << "Player position set: " << playerId << newX << newY;
    //emit playerTurnChanged();
    this->onTurnEnded();
}

void Client::onNameEntered(QString name){
    qDebug() << "Name entered: " << name;
    //SIMON FUNCTION
    if(true){

    emit validUsername();
    }
}

void Client::setPlayerTurn(int turn)
{
    if(currentPlayerTurn != turn){
        currentPlayerTurn = turn;
        emit playerTurnChanged();
    }
}

void Client::onTurnEnded(){
    int nextTurn = currentPlayerTurn > 6 ? 1:(currentPlayerTurn % 7 + 1);
    this->setPlayerTurn(nextTurn);
    qDebug()<<"TEST: Moving Player";
    this->updatePlayerPosition(nextTurn, (std::rand() % 1000) , (std::rand() % 700));
}

void Client::onSuggestionMade(QString room,QString person, QString item)
{
    qDebug() << person << room << item;
}
