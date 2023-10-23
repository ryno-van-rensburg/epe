#include "accusation.h"
#include "charactercard.h"

Accusation::Accusation(CharacterCard* inCharac, RoomCard* inRoom, WeaponCard* inWeapon, QObject* parent) : QObject(parent), character(nullptr), room(nullptr), weapon(nullptr)
{
    this->character = inCharac;
    this->room = inRoom;
    this->weapon = inWeapon;
}

Accusation::Accusation(QObject* parent)
    : QObject(parent), character(nullptr), room(nullptr), weapon(nullptr) {

}


Accusation::~Accusation()
{

}

CharacterCard* Accusation::GetCharacter()
{
    return character;
}

RoomCard* Accusation::GetRoom()
{
    return room;
}

WeaponCard* Accusation::GetWeapon()
{
    return weapon;
}
