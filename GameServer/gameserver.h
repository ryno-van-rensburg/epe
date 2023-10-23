#ifndef GAMESERVER_H
#define GAMESERVER_H

#include <QObject>
#include <QFile>
#include <QTextStream>
#include <QCoreApplication>
#include <vector>
#include <unordered_set>
#include "player.h"
#include "gameboard.h"
#include "envelope.h"
#include "suggestion.h"
#include "accusation.h"
#include "servermessagebroker.h"

class GameServer : public QObject
{
    Q_OBJECT
private:
    QString gameID;
    QVector<Player*> players;
    Envelope* winEnvelope;
    QVector<int> startDice;
    int numPlayers;
    int currentDice;
    QVector<CharacterCard*> characFaceUp;
    QVector<RoomCard*> roomFaceUp;
    QVector<WeaponCard*> weaponFaceUp;
    std::vector<std::vector<int>> data;
    QFile* log;


public:
    explicit GameServer(QObject *parent = nullptr);
    ~GameServer();
    QString GetGameID();
    QVector<Player*> GetPlayers();
    Envelope* GetEnvelopeCards();
    void SetPlayerTurn(Player* myTurn);
    void EndPlayerTurn(Player* endMyTurn);
    void DealCards();
    void setNumPlayers(int num);
    QVector<int> getStartDice();
    QVector<CharacterCard*> getCharacFaceUp();
    QVector<RoomCard*> getRoomFaceUp();
    QVector<WeaponCard*> getWeaponFaceUp();
    QVector<int> getAvailableMoves(int position, int diceRoll);
    void findPossiblePositions(int currentPosition, int diceRoll, std::vector<int>& possiblePositions, std::unordered_set<int>& visitedRooms, bool canEnterRoom);
    void logEvent(const QString& message);
    int GetCurrentDice();


signals:
    void UpdateStateSignal(QString username, int position);
    void GameStateReply(QString requesting,int diceRoll, QVector<QString> faceup, int currentTurn);
    void SuggestionStateSignal(CharacterCard* suggestedCharac, WeaponCard* suggestedWeapon, RoomCard* suggestedRoom);
    void PlayerResultSignal(QString playerName, QString person, QString weapon, QString room, bool win);
    void ShowCardSignal(NetworkPlayer* player, QString card);
    void RequestCardSignal(Suggestion* suggestionMade);
    void TerminateGameSignal();
    void NotifyPlayerMoveSignal(int dice1,int dice2, NetworkPlayer& playerToMove);
    void invalidMove(QString username);
    void gameStateSlot(int diceRoll, QVector<QString> faceup, int currentTurn);
    void DealCardsSignal(qint16 numPlayers, QVector<QVector<QString>> cards);
    void MovesAvailableSignal(QVector<int> optionsToMove);

public slots:
    void MoveRequestedSlot(NetworkPlayer &player, quint32 pos);
    void SuggestionReceivedSlot(NetworkPlayer &player, QString person, QString weapon, QString room);
    void AccusationReceivedSlot(NetworkPlayer &player, QString person, QString weapon, QString room);
    void CardShownSlot(NetworkPlayer &player, QString cardName);
    void AddPlayerSlot(QString username);
    void StateRequestSlot(QString requesting);

};

#endif // GAMESERVER_H


