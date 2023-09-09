#include "roomcard.h"

RoomCard::RoomCard(QObject *parent)
    : QObject{parent}
{

}

RoomCard::RoomCard(QString name)
{
    this->cardName = name;
}

RoomCard::~RoomCard()
{

}

QString RoomCard::GetCardName()
{
    return cardName;
}
