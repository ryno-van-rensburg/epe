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
    CharacterCard* character;
    RoomCard* room;
    WeaponCard* weapon;
public:
    explicit Envelope(QObject *parent = nullptr);
    Envelope(CharacterCard* charac, RoomCard* ro, WeaponCard* weap);
    ~Envelope();
    bool CompareAccusation(CharacterCard* inCharac, RoomCard* inRoom, WeaponCard* inWeapon);
    QString GetCharacter();
    QString GetWeapon();
    QString GetRoom();
};

#endif // ENVELOPE_H



