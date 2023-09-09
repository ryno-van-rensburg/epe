#include "suggestion.h"

Suggestion::Suggestion(CharacterCard* inCharac, RoomCard* inRoom, WeaponCard* inWeapon) : suggestedCharacter(nullptr), suggestedRoom(nullptr), suggestedWeapon(nullptr)
{
    this->suggestedCharacter = inCharac;
    this->suggestedRoom = inRoom;
    this->suggestedWeapon = inWeapon;
}

Suggestion::Suggestion(QObject *parent)
    : QObject(parent), suggestedCharacter(nullptr), suggestedRoom(nullptr), suggestedWeapon(nullptr)
{

}

Suggestion::~Suggestion()
{

}

CharacterCard* Suggestion::GetCharacter()
{
    return suggestedCharacter;
}

RoomCard* Suggestion::GetRoom()
{
    return suggestedRoom;
}

WeaponCard* Suggestion::GetWeapon()
{
    return suggestedWeapon;
}
