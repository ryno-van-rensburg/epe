#include "player.h"
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
#include "Suggestion.h"
#include "Accusation.h"

Player::Player(QObject *parent)
    : QObject{parent}
{

}

Player::~Player()
{

}

QString Player::GetUsername()
{
    return username;
}

Player::GetPosition()
{
    return position;
}

QVector<CharacterCard> Player::GetCharacCards()
{
    return heldCharacterCards;
}

QVector<RoomCard> Player::GetRoomCards()
{
    return heldRoomCards;
}

QVector<WeaponCard> Player::GetWeaponCards()
{
    return heldWeaponCards;
}

void Player::MakeMove(int destination)
{
    position = destination;
}

void Player::MakeSuggestion(CharacterCard inCharac, RoomCard inRoom, WeaponCard inWeapon)
{
    Suggestion x = Suggestion(inCharac,inRoom,inWeapon);
}

void Player::MakeAccusation(CharacterCard inCharac, RoomCard inRoom, WeaponCard inWeapon)
{
    Accusation x = Accusation(inCharac,inRoom,inWeapon);
}

int Player::RollDice()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    return std::rand() % 6 + 1;
}

void Player::SetMyTurn(){
    myTurn = true;
}

void Player::EndMyTurn(){
    myTurn = false;
}
