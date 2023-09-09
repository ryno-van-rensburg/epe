#ifndef ROOM_H
#define ROOM_H

#include <QObject>
#include <QVector>
#include "player.h"

class Room : public QObject
{
private:
    QString roomName;
    QVector<Player*> occupants;

public:
    Room(QString inName);
    ~Room();
    QString GetRoomName();
    QVector<Player*> GetOccupants();
    void AddOccupants(Player* newPlayer);
    void RemoveOccupants(Player* outPlayer);
};

#endif // ROOM_H
