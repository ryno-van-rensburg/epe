#ifndef ENVELOPE_H
#define ENVELOPE_H
#include "CharacterCard.h"
#include "RoomCard.h"
#include "WeaponCard.h"

#include <QObject>

class Envelope : public QObject
{
    Q_OBJECT
private:
    CharacterCard character;
    RoomCard room;
    WeaponCard weapon;
public:
    Envelope();
    ~Envelope();
    bool CompareAccusation(CharacterCard inCharac, RoomCard inRoom, WeaponCard inWeapon);
};

#endif // ENVELOPE_H
