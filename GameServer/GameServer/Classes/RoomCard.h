#ifndef ROOMCARD_H
#define ROOMCARD_H

#include <QObject>

class RoomCard
{
private:
    QString cardName;
public:
    RoomCard();
    ~RoomCard();
    QString GetCardName();
};

#endif // ROOMCARD_H
