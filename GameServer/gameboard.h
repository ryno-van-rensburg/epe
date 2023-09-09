#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QObject>
#include "room.h"
#include "charactercard.h"
#include "roomcard.h"
#include "weaponcard.h"

class GameBoard : public QObject
{
    Q_OBJECT
private:
    QVector<Room*> rooms;
    QVector<CharacterCard*> unknownCharacs;
    QVector<RoomCard*> unknownRooms;
    QVector<WeaponCard*> unknownWeapons;

public:
    explicit GameBoard(QObject *parent = nullptr);
    GameBoard();
    ~GameBoard();
    Room* GetRoom(Room* checkRoom));
    QVector<CharacterCard*> GetUnknownCharacs();
    QVector<RoomCard*> GetUnknownRooms();
    QVector<WeaponCard*> GetUnknownWeapons();
    QVector<CharacterCard*> UpdateUnknownCharacs(CharacterCard* seenCard);
    QVector<RoomCard*> UpdateUnknownRooms(RoomCard* seenCard);
    QVector<WeaponCard*> UpdateUnknownWeapons(WeaponCard* seenCard);
};

#endif // GAMEBOARD_H
