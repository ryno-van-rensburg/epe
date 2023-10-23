#ifndef MESSAGE_H
#define MESSAGE_H
const int NUM_MESSAGE_TYPES = 23;
#include <QTcpSocket>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVector>

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
    CONNECTION_DENIED,
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

enum ERROR_TYPE {
    ERR_CONNECTION_DENIED,
    INVALID_MOVE,
    OUT_OF_TURN,
    NOT_GAME_PARTICIPANT,
    INVALID_MESSAGE_FORMAT,
    INVALID_PERSON_NAME,
    INVALID_ROOM_NAME,
    INVALID_WEAPON_NAME
};

ERROR_TYPE strtoError(QString error);
bool isWeaponValid(QString weapon);
bool isPersonValid(QString person);
bool isRoomValid(QString room);

bool shouldMessageBeAcked(MESSAGE_TYPE type);


class Message: public QObject
{
    Q_OBJECT
private:
    MESSAGE_TYPE type;
    MESSAGE_STATUS status;
    QJsonDocument messageContents;
    QTcpSocket* source; // Message objects do not own the source

public:
    Message(MESSAGE_TYPE type, QByteArray &arr );
    Message(MESSAGE_TYPE type, QJsonObject obj );
    Message& operator=(const Message& other){
        if (this == &other){
            return *this;
        }
        this->type = other.type;
        this->messageContents = other.messageContents;
        this->source = other.source;
        this->status = other.status;
        return *this;
    }
    Message(const Message &other) {
        this->type = other.type;
        this->status = other.status;
        this->messageContents = other.messageContents;
        this->source = other.source;
        return;
    }
    QTcpSocket* getSource(){
        return this->source;
    }
    void setSource(QTcpSocket *source){
        this->source = source;
        return;
    }
    Message(Message& t);
    MESSAGE_STATUS getStatus();
    void setStatus(MESSAGE_STATUS status);
    Message(QString messageType, QJsonDocument contents);
    Message(QString messageType, QJsonObject& contents);
    MESSAGE_TYPE getType();
    QByteArray getBytes();
    QJsonObject getObj();
};

#endif // MESSAGE_H
