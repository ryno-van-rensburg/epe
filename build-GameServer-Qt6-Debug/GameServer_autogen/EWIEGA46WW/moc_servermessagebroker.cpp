/****************************************************************************
** Meta object code from reading C++ file 'servermessagebroker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../GameServer/servermessagebroker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'servermessagebroker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServerMessageBroker_t {
    const uint offsetsAndSize[118];
    char stringdata0[747];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ServerMessageBroker_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ServerMessageBroker_t qt_meta_stringdata_ServerMessageBroker = {
    {
QT_MOC_LITERAL(0, 19), // "ServerMessageBroker"
QT_MOC_LITERAL(20, 24), // "suggestionReceivedSignal"
QT_MOC_LITERAL(45, 0), // ""
QT_MOC_LITERAL(46, 14), // "NetworkPlayer&"
QT_MOC_LITERAL(61, 6), // "player"
QT_MOC_LITERAL(68, 6), // "person"
QT_MOC_LITERAL(75, 6), // "weapon"
QT_MOC_LITERAL(82, 4), // "room"
QT_MOC_LITERAL(87, 24), // "accusationReceivedSignal"
QT_MOC_LITERAL(112, 18), // "moveReceivedSignal"
QT_MOC_LITERAL(131, 8), // "position"
QT_MOC_LITERAL(140, 15), // "cardShownSignal"
QT_MOC_LITERAL(156, 4), // "card"
QT_MOC_LITERAL(161, 18), // "stateRequestSignal"
QT_MOC_LITERAL(180, 10), // "requesting"
QT_MOC_LITERAL(191, 17), // "connectionRequest"
QT_MOC_LITERAL(209, 6), // "handle"
QT_MOC_LITERAL(216, 15), // "extractMoveData"
QT_MOC_LITERAL(232, 8), // "Message&"
QT_MOC_LITERAL(241, 3), // "msg"
QT_MOC_LITERAL(245, 21), // "extractAccusationData"
QT_MOC_LITERAL(267, 21), // "extractSuggestionData"
QT_MOC_LITERAL(289, 20), // "extractCardShownData"
QT_MOC_LITERAL(310, 21), // "processJoiningRequest"
QT_MOC_LITERAL(332, 6), // "listen"
QT_MOC_LITERAL(339, 4), // "port"
QT_MOC_LITERAL(344, 15), // "updateStateSlot"
QT_MOC_LITERAL(360, 8), // "username"
QT_MOC_LITERAL(369, 18), // "gameStateReplySlot"
QT_MOC_LITERAL(388, 8), // "diceRoll"
QT_MOC_LITERAL(397, 6), // "faceup"
QT_MOC_LITERAL(404, 11), // "currentTurn"
QT_MOC_LITERAL(416, 13), // "shownCardSlot"
QT_MOC_LITERAL(430, 6), // "asking"
QT_MOC_LITERAL(437, 7), // "showing"
QT_MOC_LITERAL(445, 7), // "hasCard"
QT_MOC_LITERAL(453, 12), // "showCardSlot"
QT_MOC_LITERAL(466, 14), // "NetworkPlayer*"
QT_MOC_LITERAL(481, 13), // "dealCardsSlot"
QT_MOC_LITERAL(495, 10), // "numPlayers"
QT_MOC_LITERAL(506, 21), // "QList<QList<QString>>"
QT_MOC_LITERAL(528, 5), // "cards"
QT_MOC_LITERAL(534, 16), // "notifyPlayerMove"
QT_MOC_LITERAL(551, 5), // "dice1"
QT_MOC_LITERAL(557, 5), // "dice2"
QT_MOC_LITERAL(563, 15), // "requestCardSlot"
QT_MOC_LITERAL(579, 12), // "askingPlayer"
QT_MOC_LITERAL(592, 16), // "playerResultSlot"
QT_MOC_LITERAL(609, 10), // "playerName"
QT_MOC_LITERAL(620, 3), // "win"
QT_MOC_LITERAL(624, 17), // "terminateGameSlot"
QT_MOC_LITERAL(642, 12), // "acceptPlayer"
QT_MOC_LITERAL(655, 13), // "gameStateSlot"
QT_MOC_LITERAL(669, 16), // "connectionDenied"
QT_MOC_LITERAL(686, 6), // "reason"
QT_MOC_LITERAL(693, 20), // "suggestionUpdateSlot"
QT_MOC_LITERAL(714, 10), // "suggestion"
QT_MOC_LITERAL(725, 11), // "invalidMove"
QT_MOC_LITERAL(737, 9) // "outOfTurn"

    },
    "ServerMessageBroker\0suggestionReceivedSignal\0"
    "\0NetworkPlayer&\0player\0person\0weapon\0"
    "room\0accusationReceivedSignal\0"
    "moveReceivedSignal\0position\0cardShownSignal\0"
    "card\0stateRequestSignal\0requesting\0"
    "connectionRequest\0handle\0extractMoveData\0"
    "Message&\0msg\0extractAccusationData\0"
    "extractSuggestionData\0extractCardShownData\0"
    "processJoiningRequest\0listen\0port\0"
    "updateStateSlot\0username\0gameStateReplySlot\0"
    "diceRoll\0faceup\0currentTurn\0shownCardSlot\0"
    "asking\0showing\0hasCard\0showCardSlot\0"
    "NetworkPlayer*\0dealCardsSlot\0numPlayers\0"
    "QList<QList<QString>>\0cards\0"
    "notifyPlayerMove\0dice1\0dice2\0"
    "requestCardSlot\0askingPlayer\0"
    "playerResultSlot\0playerName\0win\0"
    "terminateGameSlot\0acceptPlayer\0"
    "gameStateSlot\0connectionDenied\0reason\0"
    "suggestionUpdateSlot\0suggestion\0"
    "invalidMove\0outOfTurn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerMessageBroker[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,  176,    2, 0x06,    1 /* Public */,
       8,    4,  185,    2, 0x06,    6 /* Public */,
       9,    2,  194,    2, 0x06,   11 /* Public */,
      11,    2,  199,    2, 0x06,   14 /* Public */,
      13,    1,  204,    2, 0x06,   17 /* Public */,
      15,    1,  207,    2, 0x06,   19 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      17,    1,  210,    2, 0x08,   21 /* Private */,
      20,    1,  213,    2, 0x08,   23 /* Private */,
      21,    1,  216,    2, 0x08,   25 /* Private */,
      22,    1,  219,    2, 0x08,   27 /* Private */,
      23,    1,  222,    2, 0x08,   29 /* Private */,
      24,    1,  225,    2, 0x0a,   31 /* Public */,
      26,    2,  228,    2, 0x0a,   33 /* Public */,
      28,    4,  233,    2, 0x0a,   36 /* Public */,
      32,    3,  242,    2, 0x0a,   41 /* Public */,
      36,    2,  249,    2, 0x0a,   45 /* Public */,
      38,    2,  254,    2, 0x0a,   48 /* Public */,
      42,    3,  259,    2, 0x0a,   51 /* Public */,
      45,    4,  266,    2, 0x0a,   55 /* Public */,
      47,    5,  275,    2, 0x0a,   60 /* Public */,
      50,    0,  286,    2, 0x0a,   66 /* Public */,
      51,    4,  287,    2, 0x0a,   67 /* Public */,
      52,    3,  296,    2, 0x0a,   72 /* Public */,
      53,    2,  303,    2, 0x0a,   76 /* Public */,
      55,    2,  308,    2, 0x0a,   79 /* Public */,
      57,    1,  313,    2, 0x0a,   82 /* Public */,
      58,    1,  316,    2, 0x0a,   84 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,    4,   10,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   27,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QStringList, QMetaType::Int,   14,   29,   30,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   33,   34,   35,
    QMetaType::Void, 0x80000000 | 37, QMetaType::QString,    4,   12,
    QMetaType::Void, QMetaType::Short, 0x80000000 | 40,   39,   41,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 3,   43,   44,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString,   46,    5,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   48,    5,    6,    7,   49,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,   27,    5,   43,   44,
    QMetaType::Void, QMetaType::Int, QMetaType::QStringList, QMetaType::Int,   29,   30,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,   54,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   27,   56,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   27,

       0        // eod
};

void ServerMessageBroker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ServerMessageBroker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->suggestionReceivedSignal((*reinterpret_cast< std::add_pointer_t<NetworkPlayer&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 1: _t->accusationReceivedSignal((*reinterpret_cast< std::add_pointer_t<NetworkPlayer&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 2: _t->moveReceivedSignal((*reinterpret_cast< std::add_pointer_t<NetworkPlayer&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint32>>(_a[2]))); break;
        case 3: _t->cardShownSignal((*reinterpret_cast< std::add_pointer_t<NetworkPlayer&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->stateRequestSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->connectionRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->extractMoveData((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 7: _t->extractAccusationData((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 8: _t->extractSuggestionData((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 9: _t->extractCardShownData((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 10: _t->processJoiningRequest((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 11: _t->listen((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->updateStateSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 13: _t->gameStateReplySlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 14: _t->shownCardSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 15: _t->showCardSlot((*reinterpret_cast< std::add_pointer_t<NetworkPlayer*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 16: _t->dealCardsSlot((*reinterpret_cast< std::add_pointer_t<qint16>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QList<QString>>>>(_a[2]))); break;
        case 17: _t->notifyPlayerMove((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<NetworkPlayer&>>(_a[3]))); break;
        case 18: _t->requestCardSlot((*reinterpret_cast< std::add_pointer_t<NetworkPlayer&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 19: _t->playerResultSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 20: _t->terminateGameSlot(); break;
        case 21: _t->acceptPlayer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 22: _t->gameStateSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 23: _t->connectionDenied((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 24: _t->suggestionUpdateSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[2]))); break;
        case 25: _t->invalidMove((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->outOfTurn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NetworkPlayer* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QList<QString>> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ServerMessageBroker::*)(NetworkPlayer & , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerMessageBroker::suggestionReceivedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ServerMessageBroker::*)(NetworkPlayer & , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerMessageBroker::accusationReceivedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ServerMessageBroker::*)(NetworkPlayer & , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerMessageBroker::moveReceivedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ServerMessageBroker::*)(NetworkPlayer & , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerMessageBroker::cardShownSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ServerMessageBroker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerMessageBroker::stateRequestSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ServerMessageBroker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerMessageBroker::connectionRequest)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject ServerMessageBroker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ServerMessageBroker.offsetsAndSize,
    qt_meta_data_ServerMessageBroker,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ServerMessageBroker_t
, QtPrivate::TypeAndForceComplete<ServerMessageBroker, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NetworkPlayer &, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NetworkPlayer &, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NetworkPlayer &, std::false_type>, QtPrivate::TypeAndForceComplete<quint32, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NetworkPlayer &, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NetworkPlayer *, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qint16, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QVector<QString>>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<NetworkPlayer &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NetworkPlayer &, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *ServerMessageBroker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerMessageBroker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerMessageBroker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ServerMessageBroker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void ServerMessageBroker::suggestionReceivedSignal(NetworkPlayer & _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ServerMessageBroker::accusationReceivedSignal(NetworkPlayer & _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ServerMessageBroker::moveReceivedSignal(NetworkPlayer & _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ServerMessageBroker::cardShownSignal(NetworkPlayer & _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ServerMessageBroker::stateRequestSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ServerMessageBroker::connectionRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
