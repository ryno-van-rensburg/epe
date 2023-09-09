#ifndef GAMESERVER_H
#define GAMESERVER_H

#include <QObject>
#include "player.h"
#include "gameboard.h"
#include "envelope.h"
#include "suggestion.h"
#include "accusation.h"

class GameServer : public QObject
{
    Q_OBJECT
private:
    QString gameID;
    QVector<Player*> players;
    Envelope* winEnvelope;

public:
    explicit GameServer(QObject *parent = nullptr);
    GameServer();
    ~GameServer();
    QString GetGameID();
    QVector<Player*> GetPlayers();
    Envelope* GetEnvelopeCards();
    void SetPlayerTurn(Player myTurn);
    void EndPlayerTurn(Player endMyTurn);


signals:
    void UpdateStateSignal(Player* currPlayer, int boardPos);
    void GameStateReply(QVector<Player*> playersInGame, int, int, int, QVector<CharacterCard> faceUpCharacters, QVector<WeaponCard> faceUpWeapons, QVector<RoomCard> faceUpRooms);
    void SuggestionStateSignal(CharacterCard* suggestedCharac, WeaponCard* suggestedWeapon, RoomCard* suggestedRoom);
    void PlayerResultSignal(Player* playerMakingAccusation, Accusation* finalAccusation, bool result);
    void ShowCardSignal(Player* playerToShowCard, QString nameOfCardToShow);
    void RequestCardSignal(Suggestion* suggestionMade);
    void TerminateGameSignal();
    void NotifyPlayerMoveSignal(Player* playerToMove, int destination);
    void SendErrorSignal(QString ErrorEnum);
    void StartGameSignal();
    void DealCardsSignal(Player* playerToReceiveCards, QVector<CharacterCard> cCards, QVector<WeaponCard> wCards, QVector<RoomCard> rCards);
    void MovesAvailableSignal(QVector<int> optionsToMove);

public slots:
    void MoveRequestedSlot(Player* playerToMove, int destination);
    void SuggestionReceivedSlot(QString, QString, QString);
    void AccusationReceivedSlot(QString, QString, QString);
    void CardShownSlot(Player* playerShown, QString cardName);
    void AddPlayerSlot(Player* newPlayer);

};

#endif // GAMESERVER_H
