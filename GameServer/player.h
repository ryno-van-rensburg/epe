#ifndef PLAYER_H
#define PLAYER_H
#include <QString>
#include <QObject>
#include <QVector>
#include "CharacterCard.h"
#include "RoomCard.h"
#include "WeaponCard.h"




class Player : public QObject
{
    Q_OBJECT
private:
    QString username;
    int position;
    QVector<CharacterCard*> heldCharacterCards;
    QVector<RoomCard*> heldRoomCards;
    QVector<WeaponCard*> heldWeaponCards;
    bool AI;
    //GameBoard viewOfGameBoard;
public:
    explicit Player(QObject *parent = nullptr);
    Player(QString username,QVector<CharacterCard*> heldCharacterCards, QVector<RoomCard*> heldRoomCards, QVector<WeaponCard*> heldWeaponCards, int position, bool AI);
    ~Player();
    QString GetUsername();
    int GetPosition();
    QVector<CharacterCard*> GetCharacCards();
    QVector<RoomCard*> GetRoomCards();
    QVector<WeaponCard*> GetWeaponCards();
    void SetCharacCards(QVector<CharacterCard*> charac);
    void SetRoomCards(QVector<RoomCard*> room);
    void SetWeaponCards(QVector<WeaponCard*> weap);
    void MakeMove(int destination);
    void MakeSuggestion(CharacterCard* inCharac, RoomCard* inRoom, WeaponCard* inWeapon);
    void MakeAccusation(CharacterCard* inCharac, RoomCard* inRoom, WeaponCard* inWeapon);
    void SetMyTurn();
    void EndMyTurn();
    int RollDice();

signals:

};

#endif // PLAYER_H
