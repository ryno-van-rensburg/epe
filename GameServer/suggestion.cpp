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
    else {
        QFAIL("Room does not exist");
    }

    if (player -> GetPosition() != roomInt || roomInt == -1){
        QFAIL("Invalid player position with respect to player position");
    }

    //    CharacterCard* character = new CharacterCard("Miss Scarlett");
    //    CharacterCard* character = new CharacterCard("Colonel Mustard");
    //    CharacterCard* character = new CharacterCard("Chef White");
    //    CharacterCard* character = new CharacterCard("Reverend Green");
    //    CharacterCard* character = new CharacterCard("Mrs. Peacock");
    //    CharacterCard* character = new CharacterCard("Professor Plum");
    bool characFine = false;
    if (inCharac->GetCardName() == "Miss Scarlett"){
        characFine = true;
    }
    else if (inCharac->GetCardName() == "Colonel Mustard") {
        characFine = true;
    }
    else if (inCharac->GetCardName() == "Chef White") {
        characFine = true;
    }
    else if (inCharac->GetCardName() == "Reverend Green") {
        characFine = true;
    }
    else if (inCharac->GetCardName() == "Mrs. Peacock") {
        characFine = true;
    }
    else if (inCharac->GetCardName() == "Professor Plumt") {
        characFine = true;
    }
    else {
        QFAIL("Character selected does not exist");
    }

    //    WeaponCard* weapon = new WeaponCard("Candlestick");
    //    WeaponCard* weapon = new WeaponCard("Dagger");
    //    WeaponCard* weapon = new WeaponCard("Lead Piping");
    //    WeaponCard* weapon = new WeaponCard("Revolver");
    //    WeaponCard* weapon = new WeaponCard("Rope");
    //    WeaponCard* weapon = new WeaponCard("Spanner");

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
    else {
        QFAIL("Weapon chosen does not exist");
    }

    if (roomInt != -1 && characFine && weaponFine){
        this->suggestedCharacter = inCharac;
        this->suggestedRoom = inRoom;
        this->suggestedWeapon = inWeapon;
    }
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
