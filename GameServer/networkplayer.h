#ifndef NETWORK_PLAYER_H
#define NETWORK_PLAYER_H
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
    NetworkPlayer(const NetworkPlayer &other);
    QString getUsername();
    void setUsername(QString username);
    int getPosition();
    void setPosition(int position);
    int isAi();
    QString getPerson();
    void setPerson(QString person);
};

#endif // PLAYER_H
