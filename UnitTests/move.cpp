#include "move.h"

Move::Move(QObject *parent)
    : QObject{parent}
{

}

Move::~Move()
{

}

void Move::SetDestination(int goTo)
{
    this->destination = goTo;
}

int Move::GetDestination()
{
    return destination;
}
