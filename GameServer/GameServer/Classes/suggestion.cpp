#include "suggestion.h"

Suggestion::Suggestion(CharacterCard inCharac, RoomCard inRoom, WeaponCard inWeapon)
{
    this->suggestedCharacter = inCharac;
    this->suggestedRoom = inRoom;
    this->suggestedWeapon = inWeapon;
}

Suggestion::Suggestion()
{

}

Suggestion::~Suggestion()
{

}

CharacterCard Suggestion::GetCharacter()
{
    return suggestedCharacter;
}

RoomCard Suggestion::GetRoom()
{
    return suggestedRoom;
}

WeaponCard Suggestion::GetWeapon()
{
    return suggestedWeapon;
}
