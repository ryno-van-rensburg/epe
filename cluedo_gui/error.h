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



#endif // ERROR_H
