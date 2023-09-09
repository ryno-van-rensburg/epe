#include "room.h"
#include "player.h"
#include <QVector>

Room::Room(QString inName){
    roomName = inName;
}

Room::~Room(){

}

QString Room::GetRoomName(){
    return roomName;
}

QVector<Player*> Room::GetOccupants(){
    return occupants;
}

void Room::AddOccupants(Player* newPlayer){
    occupants.append(newPlayer);
}

void Room::RemoveOccupants(Player* outPlayer){
    int outPlayerIndex = -1;
    for (int i = 0; i < occupants.size(); i++){
        if (outPlayer -> GetUsername() == occupants[i] -> GetUsername()){
            outPlayerIndex = i;
        }
    }

    if (outPlayerIndex != -1){
        occupants.remove(outPlayerIndex);
    }
}

