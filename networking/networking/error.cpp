#include "error.h"

ERROR_TYPE strtoError(QString error) {
    if (error == "CONNECTION_DENIED") {
        return ERR_CONNECTION_DENIED;
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
    } else {
        return INVALID_ROOM_NAME;
    }
}
