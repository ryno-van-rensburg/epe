#include "player.h"
#include <cstdlib> // For rand() and srand()
#include <time.h>
#include "Suggestion.h"
#include "Accusation.h"


Player::Player(QObject *parent)
    : QObject{parent}
{

}

Player::Player(QString username, QVector<CharacterCard*> heldCharacterCards, QVector<RoomCard*> heldRoomCards, QVector<WeaponCard*> heldWeaponCards, int position, bool AI)
{
    this->username = username;
    this->heldCharacterCards = heldCharacterCards;
    this->heldRoomCards = heldRoomCards;
    this->heldWeaponCards = heldWeaponCards;
    this->position = position;
    this->AI = AI;
}

Player::~Player()
{

}

QString Player::GetUsername()
{
    return username;
}

int Player::GetPosition()
{
    return position;
}

QVector<CharacterCard*> Player::GetCharacCards()
{
    return heldCharacterCards;
}

QVector<RoomCard*> Player::GetRoomCards()
{
    return heldRoomCards;
}

QVector<WeaponCard*> Player::GetWeaponCards()
{
    return heldWeaponCards;
}


void Player::SetCharacCards(QVector<CharacterCard*> charac)
{
    this->heldCharacterCards = charac;
}

void Player::SetRoomCards(QVector<RoomCard*> room)
{
    this->heldRoomCards = room;
}

void Player::SetWeaponCards(QVector<WeaponCard*> weap)
{
    this->heldWeaponCards = weap;
}

void Player::MakeMove(int destination)
{
    position = destination;
}

void Player::MakeSuggestion(CharacterCard* inCharac, RoomCard* inRoom, WeaponCard* inWeapon)
{
    Suggestion* x = new Suggestion(inCharac,inRoom,inWeapon);
}

void Player::MakeAccusation(CharacterCard* inCharac, RoomCard* inRoom, WeaponCard* inWeapon)
{
    Accusation* x = new Accusation(inCharac,inRoom,inWeapon);
}

void Player::SetMyTurn()
{
    myTurn = true;
}

void Player::EndMyTurn()
{
    myTurn = false;
}

int Player::RollDice()
{

    return std::rand() % 6 + 1;
}
