#include "suggestion.h"
#include <QtTest/QTest>

Suggestion::Suggestion(Player* player, CharacterCard* inCharac, RoomCard* inRoom, WeaponCard* inWeapon) : suggestedCharacter(nullptr), suggestedRoom(nullptr), suggestedWeapon(nullptr)
{
    int roomInt = -1;

    if (inRoom->GetCardName() == "Kitchen"){
        roomInt = 1;
    }
    else if (inRoom->GetCardName() == "Ballroom"){
        roomInt = 2;
    }
    else if (inRoom->GetCardName() == "Conservatory"){
        roomInt = 3;
    }
    else if (inRoom->GetCardName() == "Billiard Room"){
        roomInt = 4;
    }
    else if (inRoom->GetCardName() == "Library"){
        roomInt = 5;
    }
    else if (inRoom->GetCardName() == "Study"){
        roomInt = 6;
    }
    else if (inRoom->GetCardName() == "Hall"){
        roomInt = 7;
    }
    else if (inRoom->GetCardName() == "Lounge"){
        roomInt = 8;
    }
    else if (inRoom->GetCardName() == "Dining Room"){
        roomInt = 9;
    }

    bool characFine = false;
    if (inCharac->GetCardName() == "Scarlett"){
        characFine = true;
    }
    else if (inCharac->GetCardName() == "Mustard") {
        characFine = true;
    }
    else if (inCharac->GetCardName() == "White") {
        characFine = true;
    }
    else if (inCharac->GetCardName() == "Green") {
        characFine = true;
    }
    else if (inCharac->GetCardName() == "Peacock") {
        characFine = true;
    }
    else if (inCharac->GetCardName() == "Plum") {
        characFine = true;
    }


    bool weaponFine = false;

    if (inWeapon->GetCardName() == "Candlestick"){
        weaponFine = true;
    }
    else if (inWeapon->GetCardName() == "Dagger"){
        weaponFine = true;
    }
    else if (inWeapon->GetCardName() == "Lead Piping"){
        weaponFine = true;
    }
    else if (inWeapon->GetCardName() == "Revolver"){
        weaponFine = true;
    }
    else if (inWeapon->GetCardName() == "Rope"){
        weaponFine = true;
    }
    else if (inWeapon->GetCardName() == "Spanner"){
        weaponFine = true;
    }


    if (roomInt != -1 && characFine && weaponFine){
        this->suggestedCharacter = inCharac;
        this->suggestedRoom = inRoom;
        this->suggestedWeapon = inWeapon;
    }
    //possibly add an else to throw an error
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
