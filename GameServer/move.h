#ifndef MOVE_H
#define MOVE_H

#include <QObject>

class Move : public QObject
{
    Q_OBJECT
private:
    int destination;
public:
    explicit Move(QObject *parent = nullptr);
    ~Move();
    void SetDestination(int goTo);
    int GetDestination();
};

#endif // MOVE_H
