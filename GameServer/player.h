#ifndef PLAYER_H
#define PLAYER_H
#include <QString>
#include "CharacterCard.h"
#include "RoomCard.h"
#include "WeaponCard.h"
#include "gameboard.h"
#include "room.h"

#include <QObject>

class Player : public QObject
{
    Q_OBJECT
private:
    QString username;
    int position;
    bool myTurn = false;
    QVector<CharacterCard> heldCharacterCards;
    QVector<RoomCard> heldRoomCards;
    QVector<WeaponCard> heldWeaponCards;
    GameBoard* viewOfGameBoard;
public:
    explicit Player(QObject *parent = nullptr);
    Player();
    ~Player();
    QString GetUsername();
    int GetPosition();
    QVector<CharacterCard> GetCharacCards();
    QVector<RoomCard> GetRoomCards();
    QVector<WeaponCard> GetWeaponCards();
    void MakeMove(int destination);
    void MakeSuggestion(CharacterCard inCharac, RoomCard inRoom, WeaponCard inWeapon);
    void MakeAccusation(CharacterCard inCharac, RoomCard inRoom, WeaponCard inWeapon);
    int RollDice();
    void SetMyTurn();
    void EndMyTurn();

signals:

};

#endif // PLAYER_H
