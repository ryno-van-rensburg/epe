#ifndef MESSAGE_H
#define MESSAGE_H

enum MESSAGE_TYPE {
    REQUEST_CON,
    CLIENT_ACK,
    MAKE_MOVE,
    SHOW_CARD,
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
    SERVER_ACK,
    DEAL_CARDS,
    REQUEST_CARD,
    SHOW_CARD,
    GAME_STATE_REPLY,
    ERROR
};


class Message
{
private:
    int type;
    QJsonDocument messageContents;
public:
    Message(MESSAGE_TYPE type, QByteArray arr, int numBytes);
    ~Message();
    QByteArray getBytes();
};

#endif // MESSAGE_H
