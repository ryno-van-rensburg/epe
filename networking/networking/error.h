#ifndef ERROR_H
#define ERROR_H

#include <QObject>

enum ERROR_TYPE {
    CONNECTION_DENIED,
    INVALID_MOVE,
    OUT_OF_TURN,
    NOT_GAME_PARTICIPANT,
    INVALID_MESSAGE_FORMAT,
    INVALID_PERSON_NAME,
    INVALID_WEAPON_NAME,
    INVALID_ROOM_NAME
};

ERROR_TYPE strtoError(QString error) {
    if (error == "CONNECTION_DENIED") {
        return CONNECTION_DENIED;
    } else if (error == "INVALID_MOVE") {
        return INVALID_MOVE;
    } else if (error == "OUT_OF_TURN") {
        return OUT_OF_TURN;
    } else if (error == "NOT_GAME_PARTICIPANT") {
        return NOT_GAME_PARTICIPANT;
    } else if (error == "INVALID_MESSAGE_FORMAT") {
        return INVALID_MESSAGE_FORMAT;
    } else if (error == "INVALID_PERSON_NAME") {
        return INVALID_PERSON_NAME;
    } else if (error == "INVALID_WEAPON_NAME") {
        return INVALID_WEAPON_NAME;
    } else if (error == "INVALID_ROOM_NAME"){
        return INVALID_ROOM_NAME;
    }
}
#endif // ERROR_H
