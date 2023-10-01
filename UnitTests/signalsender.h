#ifndef SIGNALSENDER_H
#define SIGNALSENDER_H

#include <QObject>
#include "player.h"

class signalsender : public QObject
{
    Q_OBJECT
public:
    explicit signalsender(QObject *parent = nullptr);

signals:
    void AddPlayerSignal(Player* newPlayer);
    void moveRequestSignal(Player* playerToMove,int destination);
    void StateRequestSignal();
};

#endif // SIGNALSENDER_H
