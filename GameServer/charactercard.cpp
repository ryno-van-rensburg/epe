#include "charactercard.h"


CharacterCard::CharacterCard(QString& name,QObject *parent)
    : QObject{parent}, cardName(name)
{

}

CharacterCard::CharacterCard(QString name)
{
    this->cardName = name;
}

CharacterCard::~CharacterCard()
{

}

QString CharacterCard::GetCardName()
{
    return cardName;
}
