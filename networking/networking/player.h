#ifndef PLAYER_H
#define PLAYER_H
#include <QString>
#include <QObject>
#include <QVector>



class NetworkPlayer : public QObject
{
    Q_OBJECT
private:
    QString username;
    QString person;
    int position;
    bool myTurn;
    bool AI;
public:
    explicit NetworkPlayer(QObject *parent = nullptr);
    explicit NetworkPlayer(QString username, QString person, bool isAi);
    QString getUsername();
    void setUsername(QString username);
    int getPosition();
    void setPosition(int position);
    int isAi();
    QString getPerson();
    void setPerson(QString person);
};

#endif // PLAYER_H
