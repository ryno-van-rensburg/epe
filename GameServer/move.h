#ifndef MOVE_H
#define MOVE_H

#include <QObject>

class Move : public QObject
{
    Q_OBJECT
private:
    int destination;
public:
    Move();
    ~Move();
    void SetDestination(int goTo);
};

#endif // MOVE_H
