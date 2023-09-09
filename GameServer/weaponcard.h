#ifndef WEAPONCARD_H
#define WEAPONCARD_H

#include <QObject>

class WeaponCard : public QObject
{
    Q_OBJECT
private:
    QString cardName;
public:
    explicit WeaponCard(QObject *parent = nullptr);
    WeaponCard(QString name);
    ~WeaponCard();
    QString GetCardName();
};

#endif // WEAPONCARD_H
