#include "charactercard.h"


CharacterCard::CharacterCard(QObject *parent)
    : QObject{parent}
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
