#ifndef ROOMCARD_H
#define ROOMCARD_H

#include <QObject>

class RoomCard : public QObject
{
    Q_OBJECT
private:
    QString cardName;
public:
    explicit RoomCard(QObject *parent = nullptr);
    RoomCard(QString name);
    ~RoomCard();
    QString GetCardName();
};

#endif // ROOMCARD_H
