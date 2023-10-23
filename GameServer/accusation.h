#ifndef ACCUSATION_H
#define ACCUSATION_H
#include "charactercard.h"
#include "roomcard.h"
#include "weaponcard.h"

#include <QObject>

class Accusation : public QObject
{
    Q_OBJECT
private:
    CharacterCard* character;
    RoomCard* room;
    WeaponCard* weapon;
public:
    explicit Accusation(QObject *parent = nullptr);
    Accusation(CharacterCard* inCharac, RoomCard* inRoom, WeaponCard* inWeapon,QObject* parent = nullptr);
    ~Accusation();
    CharacterCard* GetCharacter();
    RoomCard* GetRoom();
    WeaponCard* GetWeapon();
};

#endif // ACCUSATION_H
