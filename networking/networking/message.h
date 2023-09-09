#ifndef MESSAGE_H
#define MESSAGE_H
const int NUM_MESSAGE_TYPES = 23;
#include <QTcpSocket>
#include <QJsonDocument>
#include <QJsonObject>

enum MESSAGE_TYPE {
    REQUEST_CON,
    ACK,
    MAKE_MOVE,
    SHOW_CARD,
    MAKE_SUGGESTION,
    MAKE_ACC,
    REQ_GAME_STATE,
    GAME_STATE,
    DICE_ROLL,
    PLAYER_ACCEPTED,
    GAME_STATE_UPDATE,
    SUGGESTION_STATE_UPDATE,
    PLAYER_RESULT,
    PLAYER_KICKED,
    CARD_SHOWN,
    GAME_TERMINATION,
    DEAL_CARDS,
    REQUEST_CARD,
    GAME_STATE_REPLY,
    ERROR
};

enum MESSAGE_STATUS {
    MESSAGE_UNACKED,
    MESSAGE_ERRORED,
    MESSAGE_ACKED,
};
class Message: public QObject
{
    Q_OBJECT
private:
    MESSAGE_TYPE type;
    MESSAGE_STATUS status;
    QJsonDocument messageContents;
    QTcpSocket* source;

public:
    Message(MESSAGE_TYPE type, QByteArray &arr );

    QTcpSocket* getSource(){
        return this->source;
    }
    void setSource(QTcpSocket &source){
        this->source = &source;
        return;
    }
    Message(Message& t);
    MESSAGE_STATUS getStatus();
    void setStatus(MESSAGE_STATUS status);
    Message(QString messageType, QJsonDocument contents);
    Message(QString messageType, QJsonObject contents);
    MESSAGE_TYPE getType();
    QByteArray getBytes();
    QJsonObject getObj();
};

#endif // MESSAGE_H
