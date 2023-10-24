#ifndef PLAYER_H
#define PLAYER_H
#include <QString>
#include <QObject>
#include <QVector>
#include "charactercard.h"
#include "roomcard.h"
#include "weaponcard.h"




class Player : public QObject
{
    Q_OBJECT
private:
    QString username;
    QString person;
    int position;
    bool myTurn;
    QVector<CharacterCard*> heldCharacterCards;
    QVector<RoomCard*> heldRoomCards;
    QVector<WeaponCard*> heldWeaponCards;
    bool AI;
    //GameBoard viewOfGameBoard;
public:
    explicit Player(QObject *parent = nullptr);
    Player(QString username);
    Player(QString username,QVector<CharacterCard*> heldCharacterCards, QVector<RoomCard*> heldRoomCards, QVector<WeaponCard*> heldWeaponCards, int position, bool AI);
    ~Player();
    QString GetUsername();
    QString GetPerson();
    int GetPosition();
    bool GetAI();
    bool GetMyTurn();
    QVector<CharacterCard*> GetCharacCards();
    QVector<RoomCard*> GetRoomCards();
    QVector<WeaponCard*> GetWeaponCards();
    void SetCharacCards(QVector<CharacterCard*> charac);
    void SetRoomCards(QVector<RoomCard*> room);
    void SetWeaponCards(QVector<WeaponCard*> weap);
    void SetPosition(int pos);
    void MakeMove(int destination);
    void MakeSuggestion(Player* inPlayer, CharacterCard* inCharac, RoomCard* inRoom, WeaponCard* inWeapon);
    void MakeAccusation(Player* inPlayer, CharacterCard* inCharac, RoomCard* inRoom, WeaponCard* inWeapon);
    void SetMyTurn();
    void EndMyTurn();
    int RollDice();
    void SetPerson(QString person);

signals:

};

#endif // PLAYER_H
