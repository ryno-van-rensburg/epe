/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../cluedo_gui/client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Client_t {
    const uint offsetsAndSize[140];
    char stringdata0[839];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Client_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Client_t qt_meta_stringdata_Client = {
    {
QT_MOC_LITERAL(0, 6), // "Client"
QT_MOC_LITERAL(7, 18), // "connectionAccepted"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 18), // "connectionRejected"
QT_MOC_LITERAL(46, 15), // "promptRequested"
QT_MOC_LITERAL(62, 23), // "testSendMessageToBroker"
QT_MOC_LITERAL(86, 8), // "QString&"
QT_MOC_LITERAL(95, 7), // "message"
QT_MOC_LITERAL(103, 13), // "validUsername"
QT_MOC_LITERAL(117, 21), // "playerPositionUpdated"
QT_MOC_LITERAL(139, 8), // "playerId"
QT_MOC_LITERAL(148, 4), // "newX"
QT_MOC_LITERAL(153, 4), // "newY"
QT_MOC_LITERAL(158, 17), // "requestConnection"
QT_MOC_LITERAL(176, 7), // "address"
QT_MOC_LITERAL(184, 4), // "port"
QT_MOC_LITERAL(189, 8), // "username"
QT_MOC_LITERAL(198, 8), // "makeMove"
QT_MOC_LITERAL(207, 8), // "position"
QT_MOC_LITERAL(216, 8), // "showCard"
QT_MOC_LITERAL(225, 4), // "card"
QT_MOC_LITERAL(230, 14), // "makeAccusation"
QT_MOC_LITERAL(245, 6), // "person"
QT_MOC_LITERAL(252, 6), // "weapon"
QT_MOC_LITERAL(259, 4), // "room"
QT_MOC_LITERAL(264, 14), // "makeSuggestion"
QT_MOC_LITERAL(279, 16), // "requestStateSlot"
QT_MOC_LITERAL(296, 21), // "sendConnectionRequest"
QT_MOC_LITERAL(318, 15), // "gameEndedSignal"
QT_MOC_LITERAL(334, 14), // "setPlayerCards"
QT_MOC_LITERAL(349, 5), // "cards"
QT_MOC_LITERAL(355, 18), // "testReceiveMessage"
QT_MOC_LITERAL(374, 13), // "onNameEntered"
QT_MOC_LITERAL(388, 4), // "name"
QT_MOC_LITERAL(393, 11), // "onTurnEnded"
QT_MOC_LITERAL(405, 13), // "onGameStarted"
QT_MOC_LITERAL(419, 10), // "numPlayers"
QT_MOC_LITERAL(430, 7), // "players"
QT_MOC_LITERAL(438, 5), // "dice1"
QT_MOC_LITERAL(444, 11), // "currentTurn"
QT_MOC_LITERAL(456, 11), // "faceUpCards"
QT_MOC_LITERAL(468, 16), // "onPlayerAccepted"
QT_MOC_LITERAL(485, 5), // "dice2"
QT_MOC_LITERAL(491, 16), // "onAccusationMade"
QT_MOC_LITERAL(508, 4), // "item"
QT_MOC_LITERAL(513, 16), // "onSuggestionMade"
QT_MOC_LITERAL(530, 20), // "onSuggestionReceived"
QT_MOC_LITERAL(551, 12), // "onCardsDealt"
QT_MOC_LITERAL(564, 17), // "onRequestAnswered"
QT_MOC_LITERAL(582, 22), // "emitConnectionAccepted"
QT_MOC_LITERAL(605, 22), // "emitConnectionRejected"
QT_MOC_LITERAL(628, 11), // "onCardShown"
QT_MOC_LITERAL(640, 7), // "hasCard"
QT_MOC_LITERAL(648, 5), // "asked"
QT_MOC_LITERAL(654, 6), // "showed"
QT_MOC_LITERAL(661, 19), // "onCardShownToPlayer"
QT_MOC_LITERAL(681, 11), // "onGameEnded"
QT_MOC_LITERAL(693, 13), // "getPlayerTurn"
QT_MOC_LITERAL(707, 8), // "isMyTurn"
QT_MOC_LITERAL(716, 19), // "getCurrentDiceValue"
QT_MOC_LITERAL(736, 17), // "playerPositionSet"
QT_MOC_LITERAL(754, 11), // "getPlayerID"
QT_MOC_LITERAL(766, 1), // "n"
QT_MOC_LITERAL(768, 13), // "getRoomNumber"
QT_MOC_LITERAL(782, 1), // "x"
QT_MOC_LITERAL(784, 1), // "y"
QT_MOC_LITERAL(786, 13), // "playerHasCard"
QT_MOC_LITERAL(800, 27), // "emitRequestConnectionSignal"
QT_MOC_LITERAL(828, 7), // "testBox"
QT_MOC_LITERAL(836, 2) // "in"

    },
    "Client\0connectionAccepted\0\0"
    "connectionRejected\0promptRequested\0"
    "testSendMessageToBroker\0QString&\0"
    "message\0validUsername\0playerPositionUpdated\0"
    "playerId\0newX\0newY\0requestConnection\0"
    "address\0port\0username\0makeMove\0position\0"
    "showCard\0card\0makeAccusation\0person\0"
    "weapon\0room\0makeSuggestion\0requestStateSlot\0"
    "sendConnectionRequest\0gameEndedSignal\0"
    "setPlayerCards\0cards\0testReceiveMessage\0"
    "onNameEntered\0name\0onTurnEnded\0"
    "onGameStarted\0numPlayers\0players\0dice1\0"
    "currentTurn\0faceUpCards\0onPlayerAccepted\0"
    "dice2\0onAccusationMade\0item\0"
    "onSuggestionMade\0onSuggestionReceived\0"
    "onCardsDealt\0onRequestAnswered\0"
    "emitConnectionAccepted\0emitConnectionRejected\0"
    "onCardShown\0hasCard\0asked\0showed\0"
    "onCardShownToPlayer\0onGameEnded\0"
    "getPlayerTurn\0isMyTurn\0getCurrentDiceValue\0"
    "playerPositionSet\0getPlayerID\0n\0"
    "getRoomNumber\0x\0y\0playerHasCard\0"
    "emitRequestConnectionSignal\0testBox\0"
    "in"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Client[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  248,    2, 0x06,    1 /* Public */,
       3,    0,  249,    2, 0x06,    2 /* Public */,
       4,    0,  250,    2, 0x06,    3 /* Public */,
       5,    1,  251,    2, 0x06,    4 /* Public */,
       8,    0,  254,    2, 0x06,    6 /* Public */,
       9,    3,  255,    2, 0x06,    7 /* Public */,
      13,    3,  262,    2, 0x06,   11 /* Public */,
      17,    1,  269,    2, 0x06,   15 /* Public */,
      19,    1,  272,    2, 0x06,   17 /* Public */,
      21,    3,  275,    2, 0x06,   19 /* Public */,
      25,    3,  282,    2, 0x06,   23 /* Public */,
      26,    0,  289,    2, 0x06,   27 /* Public */,
      27,    1,  290,    2, 0x06,   28 /* Public */,
      28,    0,  293,    2, 0x06,   30 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      29,    1,  294,    2, 0x0a,   31 /* Public */,
      31,    1,  297,    2, 0x0a,   33 /* Public */,
      32,    1,  300,    2, 0x0a,   35 /* Public */,
      34,    0,  303,    2, 0x0a,   37 /* Public */,
      35,    5,  304,    2, 0x0a,   38 /* Public */,
      41,    4,  315,    2, 0x0a,   44 /* Public */,
      43,    3,  324,    2, 0x0a,   49 /* Public */,
      45,    3,  331,    2, 0x0a,   53 /* Public */,
      46,    3,  338,    2, 0x0a,   57 /* Public */,
      47,    1,  345,    2, 0x0a,   61 /* Public */,
      48,    3,  348,    2, 0x0a,   63 /* Public */,
      49,    0,  355,    2, 0x0a,   67 /* Public */,
      50,    0,  356,    2, 0x0a,   68 /* Public */,
      51,    3,  357,    2, 0x0a,   69 /* Public */,
      55,    2,  364,    2, 0x0a,   73 /* Public */,
      56,    0,  369,    2, 0x0a,   76 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      57,    0,  370,    2, 0x102,   77 /* Public | MethodIsConst  */,
      58,    0,  371,    2, 0x102,   78 /* Public | MethodIsConst  */,
      59,    0,  372,    2, 0x102,   79 /* Public | MethodIsConst  */,
      60,    3,  373,    2, 0x02,   80 /* Public */,
      61,    1,  380,    2, 0x02,   84 /* Public */,
      63,    2,  383,    2, 0x02,   86 /* Public */,
      66,    1,  388,    2, 0x02,   89 /* Public */,
      67,    0,  391,    2, 0x02,   91 /* Public */,
      68,    1,  392,    2, 0x02,   92 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort, QMetaType::QString,   14,   15,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   22,   23,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   22,   23,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,   30,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QJsonArray, QMetaType::Int, QMetaType::Int, QMetaType::QStringList,   36,   37,   38,   39,   40,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,   16,   22,   38,   42,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   24,   22,   44,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   24,   22,   44,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   24,   22,   44,
    QMetaType::Void, QMetaType::QStringList,   30,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   24,   22,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString,   52,   53,   54,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,   20,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::QString, QMetaType::Int,   62,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,   64,   65,
    QMetaType::Bool, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   69,

       0        // eod
};

void Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Client *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connectionAccepted(); break;
        case 1: _t->connectionRejected(); break;
        case 2: _t->promptRequested(); break;
        case 3: _t->testSendMessageToBroker((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1]))); break;
        case 4: _t->validUsername(); break;
        case 5: _t->playerPositionUpdated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 6: _t->requestConnection((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 7: _t->makeMove((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->showCard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->makeAccusation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 10: _t->makeSuggestion((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 11: _t->requestStateSlot(); break;
        case 12: _t->sendConnectionRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->gameEndedSignal(); break;
        case 14: _t->setPlayerCards((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1]))); break;
        case 15: _t->testReceiveMessage((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1]))); break;
        case 16: _t->onNameEntered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->onTurnEnded(); break;
        case 18: _t->onGameStarted((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[5]))); break;
        case 19: _t->onPlayerAccepted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 20: _t->onAccusationMade((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 21: _t->onSuggestionMade((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 22: _t->onSuggestionReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 23: _t->onCardsDealt((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1]))); break;
        case 24: _t->onRequestAnswered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 25: _t->emitConnectionAccepted(); break;
        case 26: _t->emitConnectionRejected(); break;
        case 27: _t->onCardShown((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 28: _t->onCardShownToPlayer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 29: _t->onGameEnded(); break;
        case 30: { int _r = _t->getPlayerTurn();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 31: { bool _r = _t->isMyTurn();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: { int _r = _t->getCurrentDiceValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 33: _t->playerPositionSet((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 34: { QString _r = _t->getPlayerID((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 35: { int _r = _t->getRoomNumber((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 36: { bool _r = _t->playerHasCard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->emitRequestConnectionSignal(); break;
        case 38: _t->testBox((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::connectionAccepted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::connectionRejected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::promptRequested)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::testSendMessageToBroker)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::validUsername)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Client::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::playerPositionUpdated)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Client::*)(quint32 , quint16 , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::requestConnection)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Client::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::makeMove)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::showCard)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::makeAccusation)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::makeSuggestion)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::requestStateSlot)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::sendConnectionRequest)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gameEndedSignal)) {
                *result = 13;
                return;
            }
        }
    }
}

const QMetaObject Client::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Client.offsetsAndSize,
    qt_meta_data_Client,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Client_t
, QtPrivate::TypeAndForceComplete<Client, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<quint32, std::false_type>, QtPrivate::TypeAndForceComplete<quint16, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>

>,
    nullptr
} };


const QMetaObject *Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Client.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void Client::connectionAccepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Client::connectionRejected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Client::promptRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Client::testSendMessageToBroker(QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Client::validUsername()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Client::playerPositionUpdated(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Client::requestConnection(quint32 _t1, quint16 _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Client::makeMove(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Client::showCard(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Client::makeAccusation(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Client::makeSuggestion(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Client::requestStateSlot()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Client::sendConnectionRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Client::gameEndedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
