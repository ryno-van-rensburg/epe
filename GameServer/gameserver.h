#ifndef GAMESERVER_H
#define GAMESERVER_H

#include <QObject>
#include "player.h"
#include "gameboard.h"
#include "envelope.h"

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

};

#endif // GAMESERVER_H
