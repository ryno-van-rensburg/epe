#ifndef SUGGESTION_H
#define SUGGESTION_H
#include "charactercard.h"
#include "roomcard.h"
#include "weaponcard.h"
#include "player.h"

#include <QObject>

class Suggestion : public QObject
{
    Q_OBJECT
private:
    CharacterCard* suggestedCharacter;
    RoomCard* suggestedRoom;
    WeaponCard* suggestedWeapon;
public:
    explicit Suggestion(QObject *parent = nullptr);
    Suggestion(Player* player, CharacterCard* inCharac, RoomCard* inRoom, WeaponCard* inWeapon);
    ~Suggestion();
    CharacterCard* GetCharacter();
    RoomCard* GetRoom();
    WeaponCard* GetWeapon();
};

#endif // SUGGESTION_H
