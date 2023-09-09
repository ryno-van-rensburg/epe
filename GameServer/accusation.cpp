#include "accusation.h"
#include "CharacterCard.h"

Accusation::Accusation(CharacterCard inCharac, RoomCard inRoom, WeaponCard inWeapon)
{
    this->character = inCharac;
    this->room = inRoom;
    this->weapon = inWeapon;
}

Accusation::Accusation()
{

}

Accusation::~Accusation()
{

}

CharacterCard Accusation::GetCharacter()
{
    return character;
}

RoomCard Accusation::GetRoom()
{
    return room;
}

WeaponCard Accusation::GetWeapon()
{
    return weapon;
}
