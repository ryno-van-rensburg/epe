#include "player.h"
#include <cstdlib> // For rand() and srand()
#include <time.h>
#include "suggestion.h"
#include "accusation.h"

Player::Player(QObject *parent)
    : QObject{parent}
{

}

Player::Player(QString username)
{
    this->username = username;
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

QString Player::GetPerson()
{
    return this->person;
}

int Player::GetPosition()
{
    return position;
}


bool Player::GetAI()
{
    return AI;
}

bool Player::GetMyTurn()
{
    return myTurn;
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

void Player::SetPosition(int pos)
{
    this->position = pos;
}

void Player::MakeMove(int destination)
{
    position = destination;
}

//Creates a suggestion based on chosen cards
void Player::MakeSuggestion(Player* inPlayer, CharacterCard* inCharac, RoomCard* inRoom, WeaponCard* inWeapon)
{
    Suggestion* x = new Suggestion(inPlayer, inCharac,inRoom,inWeapon);
}

//Creates an accusation based on chosen cards
void Player::MakeAccusation(Player* inPlayer, CharacterCard* inCharac, RoomCard* inRoom, WeaponCard* inWeapon)
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

// Produces a random value between 1-6
int Player::RollDice()
{

    return std::rand() % 6 + 1;
}

void Player::SetPerson(QString person)
{
    this->person = person;
}
