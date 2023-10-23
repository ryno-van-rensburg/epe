#include "envelope.h"

Envelope::Envelope(QObject *parent)
    : QObject{parent}, character(character), room(room), weapon(weapon)
{

}

Envelope::Envelope(CharacterCard* charac, RoomCard* ro, WeaponCard* weap)
{
    this->character = charac;
    this->room = ro;
    this->weapon = weap;
}

Envelope::~Envelope()
{

}

/* Function to verify if a guess made is correct compared to the winning envelope
 *
 * Inputs: inCharac: Character card that was guessed, inRoom: Room card guessed, inWeapon: Weapon card guessed
 * Output: bool indicating whether they match or not
 */
bool Envelope::CompareAccusation(CharacterCard* inCharac, RoomCard* inRoom, WeaponCard* inWeapon)
{
    if (inCharac->GetCardName() != character->GetCardName())
    {
        return false;
    }
    else if (inRoom->GetCardName() != room->GetCardName())
    {
        return false;
    }
    else if (inWeapon->GetCardName() != weapon->GetCardName())
    {
        return false;
    }
    return true;
}
