#include "weaponcard.h"

WeaponCard::WeaponCard(QObject *parent)
    : QObject{parent}
{

}

WeaponCard::WeaponCard(QString name)
{
    this->cardName = name;
}

WeaponCard::~WeaponCard()
{

}

QString WeaponCard::GetCardName()
{
    return cardName;
}
