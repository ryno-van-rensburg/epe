#ifndef MESSAGE_H
#define MESSAGE_H
#include <map>

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
    SHOW_CARD,
    GAME_STATE_REPLY,
    ERROR
};


class Message
{
private:
    MESSAGE_TYPE type;
    QJsonDocument messageContents;
public:
    Message(MESSAGE_TYPE type, QByteArray arr );
    Message(QString messageType, QJsonDocument contents);
    ~Message();
    MESSAGE_TYPE getType();
    QByteArray getBytes();
};

#endif // MESSAGE_H
