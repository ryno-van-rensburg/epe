#include "envelope.h"

Envelope::Envelope()
{

}

Envelope::~Envelope()
{

}

bool Envelope::CompareAccusation(CharacterCard inCharac, RoomCard inRoom, WeaponCard inWeapon)
{
    if (inCharac.GetCardName() != character.GetCardName())
    {
        return false;
    }
    else if (inRoom.GetCardName() != room.GetCardName())
    {
        return false;
    }
    else if (inWeapon.GetCardName() != weapon.GetCardName())
    {
        return false;
    }
    return true;
}
