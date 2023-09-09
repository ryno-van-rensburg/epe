#include "gameboard.h"


#include <QObject>

GameBoard::GameBoard(QObject *parent)
    : QObject{parent}
{

}

Room* GameBoard::GetRoom(Room* checkRoom){

}

QVector<CharacterCard*> GameBoard::GetUnknownCharacs(){
    return unknownCharacs;
}

QVector<RoomCard*> GameBoard::GetUnknownRooms(){
    return unknownRooms;
}

QVector<WeaponCard*> GameBoard::GetUnknownWeapons(){
    return unknownWeapons;
}

QVector<CharacterCard*> GameBoard::UpdateUnknownCharacs(CharacterCard* seenCard){
    int cardIndex = -1;

    for (int i = 0; i < unknownCharacs.size(); i++){

    }
}
