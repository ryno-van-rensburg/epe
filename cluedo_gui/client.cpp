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

void Client::emitMakeMoveSignal(int position){
    emit makeMove(position);
}

void Client::onSuggestionReceived(QString room,QString person, QString item)
{
    qDebug() << "Suggestion" << person << room << item;
    emit makeSuggestion(person, item, room);
}

void Client::updatePlayerPosition(int playerId, int newX, int newY)
{   
    emit playerPositionUpdated(playerId, newX, newY);
}

void Client::playerPositionSet(int playerId, int newX, int newY)
{
   
    qDebug() << "Player position set: " << playerId << newX << newY;
    //emit playerTurnChanged();
    emit makeMove(newX);
    this->onTurnEnded();
}

void Client::emitRequestConnectionSignal(quint32 address, quint16 port, QString username)
{
    emit requestConnection(address, port, username);
}
void  Client::emitRequestStateSlotSignal(){
    emit requestStateSlot();
}

void Client::emitSendConnectionRequestSignal(QString username)
{
    emit sendConnectionRequest(username);
}

void Client::emitValidUsernameSignal(){
    emit validUsername();
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

void Client :: emitShowCardSignal(QString card){
    emit showCard(card);
}
void Client::onTurnEnded(){
    int nextTurn = currentPlayerTurn > 6 ? 1:(currentPlayerTurn % 7 + 1);
    this->setPlayerTurn(nextTurn);
    qDebug()<<"TEST: Moving Player";
    this->updatePlayerPosition(nextTurn, (std::rand() % 1000) , (std::rand() % 700));
}

void Client::onAccusationMade(QString room,QString person, QString item)
{
    qDebug() << "Accusation" << person << room << item;
    emit    makeAccusation(person, item, room);
}
void Client::onSuggestionMade(QString room,QString person, QString item)
{
    qDebug() << "Suggestion" << person << room << item;
    emit makeSuggestion(person, item, room);
}
