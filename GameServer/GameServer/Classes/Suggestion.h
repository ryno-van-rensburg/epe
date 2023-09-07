#ifndef SUGGESTION_H
#define SUGGESTION_H
#include "CharacterCard.h"
#include "RoomCard.h"
#include "WeaponCard.h"

#include <QObject>

class Suggestion : public QObject
{
    Q_OBJECT
private:
    CharacterCard suggestedCharacter;
    RoomCard suggestedRoom;
    WeaponCard suggestedWeapon;
public:
    Suggestion();
    Suggestion(CharacterCard inCharac, RoomCard inRoom, WeaponCard inWeapon);
    ~Suggestion();
    CharacterCard GetCharacter();
    RoomCard GetRoom();
    WeaponCard GetWeapon();
};

#endif // SUGGESTION_H
