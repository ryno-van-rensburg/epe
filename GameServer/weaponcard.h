#ifndef WEAPONCARD_H
#define WEAPONCARD_H

#include <QObject>

class WeaponCard
{
private:
    QString cardName;
public:
    WeaponCard();
    ~WeaponCard();
    QString GetCardName();
};

#endif // CHARACTERCARD_H
