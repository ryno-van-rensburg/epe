#include "player.h"

NetworkPlayer::NetworkPlayer(QObject *parent){
    return;
}

NetworkPlayer::NetworkPlayer(const NetworkPlayer &other){
    this->username = other.username;
    this->person = other.person;
    this->position = other.position;
    this->myTurn = other.myTurn;
    this->AI = other.AI;
}

NetworkPlayer::NetworkPlayer(QString username, QString person, bool isAi) {
    this->username = username;
    this->person = person;
    this->AI = isAi;
    return;
}

QString NetworkPlayer::getUsername(){
    return this->username;
}


void NetworkPlayer::setUsername(QString username) {
    this->username = username;
    return;
}

int NetworkPlayer::getPosition(){
    return this->position;
}

void NetworkPlayer::setPosition(int position) {
    this->position = position;
    return;
}

QString NetworkPlayer::getPerson(){
    return this->person;
}

void NetworkPlayer::setPerson(QString person){
    this->person = person;
    return;
}

int NetworkPlayer::isAi(){
    if (this->AI){
        return 1;
    } else {
        return 0;
    }
}
