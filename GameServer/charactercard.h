#ifndef CHARACTERCARD_H
#define CHARACTERCARD_H

#include <QObject>

class CharacterCard
{
private:
    QString cardName;
public:
    CharacterCard();
    ~CharacterCard();
    QString GetCardName();
};

#endif // CHARACTERCARD_H
