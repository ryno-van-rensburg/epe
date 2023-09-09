#ifndef CHARACTERCARD_H
#define CHARACTERCARD_H

#include <QObject>

class CharacterCard : public QObject
{
    Q_OBJECT
private:
    QString cardName;
public:
    explicit CharacterCard(QString& name,QObject *parent = nullptr);
    CharacterCard(QString name);
    ~CharacterCard();
    QString GetCardName();
};

#endif // CHARACTERCARD_H
