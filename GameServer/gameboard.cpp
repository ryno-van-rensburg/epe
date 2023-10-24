#include "gameboard.h"
#include "room.h"

GameBoard::GameBoard(QObject *parent)
    : QObject{parent}
{

}

//private:
//QVector<Room*> rooms;
//QVector<CharacterCard*> unknownCharacs;
//QVector<RoomCard*> unknownRooms;
//QVector<WeaponCard*> unknownWeapons;

//public:
//explicit GameBoard(QObject *parent = nullptr);
//GameBoard();
//~GameBoard();
//Room* GetRoom(Room* checkRoom);
//QVector<CharacterCard*> GetUnknownCharacs();
//QVector<RoomCard*> GetUnknownRooms();
//QVector<WeaponCard*> GetUnknownWeapons();
//QVector<CharacterCard*> UpdateUnknownCharacs(CharacterCard* seenCard);
//QVector<RoomCard*> UpdateUnknownRooms(RoomCard* seenCard);
//QVector<WeaponCard*> UpdateUnknownWeapons(WeaponCard* seenCard);
//};

GameBoard::GameBoard(){

}

GameBoard::~GameBoard(){

}

//find the room with the matching name and return it
Room* GameBoard::GetRoom(Room *checkRoom){
    int roomIndex = -1;

    for (int i = 0; i < rooms.size(); i++){
        if (checkRoom -> GetRoomName() == rooms[i] -> GetRoomName()){
            roomIndex = i;
        }
    }

    return rooms[roomIndex];
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
    int removeIndex = -1;

    for (int i = 0; i < unknownCharacs.size(); i++){
        if (seenCard -> GetCardName() == unknownCharacs[i] -> GetCardName()){
            removeIndex = i;
        }
    }

    if (removeIndex != 1){
        unknownCharacs.remove(removeIndex);
        return unknownCharacs;
    }
    else{
        return unknownCharacs;
    }
}

QVector<RoomCard*> GameBoard::UpdateUnknownRooms(RoomCard* seenCard){
    int removeIndex = -1;

    for (int i = 0; i < unknownRooms.size(); i++){
        if (seenCard -> GetCardName() == unknownRooms[i] -> GetCardName()){
            removeIndex = i;
        }
    }

    if (removeIndex != 1){
        unknownRooms.remove(removeIndex);
        return unknownRooms;
    }
    else{
        return unknownRooms;
    }
}

QVector<WeaponCard*> GameBoard::UpdateUnknownWeapons(WeaponCard* seenCard){
    int removeIndex = -1;

    for (int i = 0; i < unknownWeapons.size(); i++){
        if (seenCard -> GetCardName() == unknownWeapons[i] -> GetCardName()){
            removeIndex = i;
        }
    }

    if (removeIndex != 1){
        unknownWeapons.remove(removeIndex);
        return unknownWeapons;
    }
    else{
        return unknownWeapons;
    }
}





