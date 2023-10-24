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
    const uint offsetsAndSize[126];
    char stringdata0[779];
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
QT_MOC_LITERAL(158, 17), // "playerTurnChanged"
QT_MOC_LITERAL(176, 17), // "requestConnection"
QT_MOC_LITERAL(194, 7), // "address"
QT_MOC_LITERAL(202, 4), // "port"
QT_MOC_LITERAL(207, 8), // "username"
QT_MOC_LITERAL(216, 8), // "makeMove"
QT_MOC_LITERAL(225, 8), // "position"
QT_MOC_LITERAL(234, 8), // "showCard"
QT_MOC_LITERAL(243, 4), // "card"
QT_MOC_LITERAL(248, 14), // "makeAccusation"
QT_MOC_LITERAL(263, 6), // "person"
QT_MOC_LITERAL(270, 6), // "weapon"
QT_MOC_LITERAL(277, 4), // "room"
QT_MOC_LITERAL(282, 14), // "makeSuggestion"
QT_MOC_LITERAL(297, 16), // "requestStateSlot"
QT_MOC_LITERAL(314, 21), // "sendConnectionRequest"
QT_MOC_LITERAL(336, 15), // "gameEndedSignal"
QT_MOC_LITERAL(352, 13), // "playerHasCard"
QT_MOC_LITERAL(366, 14), // "setPlayerCards"
QT_MOC_LITERAL(381, 5), // "cards"
QT_MOC_LITERAL(387, 18), // "testReceiveMessage"
QT_MOC_LITERAL(406, 13), // "onNameEntered"
QT_MOC_LITERAL(420, 4), // "name"
QT_MOC_LITERAL(425, 11), // "onTurnEnded"
QT_MOC_LITERAL(437, 16), // "onPlayerAccepted"
QT_MOC_LITERAL(454, 5), // "dice1"
QT_MOC_LITERAL(460, 5), // "dice2"
QT_MOC_LITERAL(466, 16), // "onAccusationMade"
QT_MOC_LITERAL(483, 4), // "item"
QT_MOC_LITERAL(488, 16), // "onSuggestionMade"
QT_MOC_LITERAL(505, 20), // "onSuggestionReceived"
QT_MOC_LITERAL(526, 12), // "onCardsDealt"
QT_MOC_LITERAL(539, 17), // "onRequestAnswered"
QT_MOC_LITERAL(557, 22), // "emitConnectionAccepted"
QT_MOC_LITERAL(580, 22), // "emitConnectionRejected"
QT_MOC_LITERAL(603, 11), // "onCardShown"
QT_MOC_LITERAL(615, 7), // "hasCard"
QT_MOC_LITERAL(623, 5), // "asked"
QT_MOC_LITERAL(629, 6), // "showed"
QT_MOC_LITERAL(636, 19), // "onCardShownToPlayer"
QT_MOC_LITERAL(656, 11), // "onGameEnded"
QT_MOC_LITERAL(668, 10), // "playerTurn"
QT_MOC_LITERAL(679, 8), // "isMyTurn"
QT_MOC_LITERAL(688, 19), // "getCurrentDiceValue"
QT_MOC_LITERAL(708, 17), // "playerPositionSet"
QT_MOC_LITERAL(726, 11), // "getPlayerID"
QT_MOC_LITERAL(738, 1), // "n"
QT_MOC_LITERAL(740, 27), // "emitRequestConnectionSignal"
QT_MOC_LITERAL(768, 7), // "testBox"
QT_MOC_LITERAL(776, 2) // "in"

    },
    "Client\0connectionAccepted\0\0"
    "connectionRejected\0promptRequested\0"
    "testSendMessageToBroker\0QString&\0"
    "message\0validUsername\0playerPositionUpdated\0"
    "playerId\0newX\0newY\0playerTurnChanged\0"
    "requestConnection\0address\0port\0username\0"
    "makeMove\0position\0showCard\0card\0"
    "makeAccusation\0person\0weapon\0room\0"
    "makeSuggestion\0requestStateSlot\0"
    "sendConnectionRequest\0gameEndedSignal\0"
    "playerHasCard\0setPlayerCards\0cards\0"
    "testReceiveMessage\0onNameEntered\0name\0"
    "onTurnEnded\0onPlayerAccepted\0dice1\0"
    "dice2\0onAccusationMade\0item\0"
    "onSuggestionMade\0onSuggestionReceived\0"
    "onCardsDealt\0onRequestAnswered\0"
    "emitConnectionAccepted\0emitConnectionRejected\0"
    "onCardShown\0hasCard\0asked\0showed\0"
    "onCardShownToPlayer\0onGameEnded\0"
    "playerTurn\0isMyTurn\0getCurrentDiceValue\0"
    "playerPositionSet\0getPlayerID\0n\0"
    "emitRequestConnectionSignal\0testBox\0"
    "in"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Client[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       1,  374, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  242,    2, 0x06,    2 /* Public */,
       3,    0,  243,    2, 0x06,    3 /* Public */,
       4,    0,  244,    2, 0x06,    4 /* Public */,
       5,    1,  245,    2, 0x06,    5 /* Public */,
       8,    0,  248,    2, 0x06,    7 /* Public */,
       9,    3,  249,    2, 0x06,    8 /* Public */,
      13,    0,  256,    2, 0x06,   12 /* Public */,
      14,    3,  257,    2, 0x06,   13 /* Public */,
      18,    1,  264,    2, 0x06,   17 /* Public */,
      20,    1,  267,    2, 0x06,   19 /* Public */,
      22,    3,  270,    2, 0x06,   21 /* Public */,
      26,    3,  277,    2, 0x06,   25 /* Public */,
      27,    0,  284,    2, 0x06,   29 /* Public */,
      28,    1,  285,    2, 0x06,   30 /* Public */,
      29,    0,  288,    2, 0x06,   32 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      30,    1,  289,    2, 0x0a,   33 /* Public */,
      31,    1,  292,    2, 0x0a,   35 /* Public */,
      33,    1,  295,    2, 0x0a,   37 /* Public */,
      34,    1,  298,    2, 0x0a,   39 /* Public */,
      36,    0,  301,    2, 0x0a,   41 /* Public */,
      37,    4,  302,    2, 0x0a,   42 /* Public */,
      40,    3,  311,    2, 0x0a,   47 /* Public */,
      42,    3,  318,    2, 0x0a,   51 /* Public */,
      43,    3,  325,    2, 0x0a,   55 /* Public */,
      44,    1,  332,    2, 0x0a,   59 /* Public */,
      45,    3,  335,    2, 0x0a,   61 /* Public */,
      46,    0,  342,    2, 0x0a,   65 /* Public */,
      47,    0,  343,    2, 0x0a,   66 /* Public */,
      48,    3,  344,    2, 0x0a,   67 /* Public */,
      52,    2,  351,    2, 0x0a,   71 /* Public */,
      53,    0,  356,    2, 0x0a,   74 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      54,    0,  357,    2, 0x102,   75 /* Public | MethodIsConst  */,
      55,    0,  358,    2, 0x102,   76 /* Public | MethodIsConst  */,
      56,    0,  359,    2, 0x102,   77 /* Public | MethodIsConst  */,
      57,    3,  360,    2, 0x02,   78 /* Public */,
      58,    1,  367,    2, 0x02,   82 /* Public */,
      60,    0,  370,    2, 0x02,   84 /* Public */,
      61,    1,  371,    2, 0x02,   85 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort, QMetaType::QString,   15,   16,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   23,   24,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   23,   24,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QStringList,   32,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,   17,   23,   38,   39,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   25,   23,   41,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   25,   23,   41,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   25,   23,   41,
    QMetaType::Void, QMetaType::QStringList,   32,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   25,   23,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString,   49,   50,   51,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   17,   21,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::QString, QMetaType::Int,   59,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   62,

 // properties: name, type, flags
      54, QMetaType::Int, 0x00015103, uint(6), 0,

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
        case 6: _t->playerTurnChanged(); break;
        case 7: _t->requestConnection((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 8: _t->makeMove((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->showCard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->makeAccusation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 11: _t->makeSuggestion((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 12: _t->requestStateSlot(); break;
        case 13: _t->sendConnectionRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->gameEndedSignal(); break;
        case 15: { bool _r = _t->playerHasCard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->setPlayerCards((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1]))); break;
        case 17: _t->testReceiveMessage((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1]))); break;
        case 18: _t->onNameEntered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->onTurnEnded(); break;
        case 20: _t->onPlayerAccepted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 21: _t->onAccusationMade((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 22: _t->onSuggestionMade((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 23: _t->onSuggestionReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 24: _t->onCardsDealt((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1]))); break;
        case 25: _t->onRequestAnswered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 26: _t->emitConnectionAccepted(); break;
        case 27: _t->emitConnectionRejected(); break;
        case 28: _t->onCardShown((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 29: _t->onCardShownToPlayer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 30: _t->onGameEnded(); break;
        case 31: { int _r = _t->playerTurn();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->isMyTurn();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { int _r = _t->getCurrentDiceValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 34: _t->playerPositionSet((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 35: { QString _r = _t->getPlayerID((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 36: _t->emitRequestConnectionSignal(); break;
        case 37: _t->testBox((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
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
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::playerTurnChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Client::*)(quint32 , quint16 , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::requestConnection)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Client::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::makeMove)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::showCard)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::makeAccusation)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::makeSuggestion)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::requestStateSlot)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::sendConnectionRequest)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gameEndedSignal)) {
                *result = 14;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Client *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->playerTurn(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Client *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlayerTurn(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Client::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Client.offsetsAndSize,
    qt_meta_data_Client,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Client_t
, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<Client, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<quint32, std::false_type>, QtPrivate::TypeAndForceComplete<quint16, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>

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
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 38;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
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
void Client::playerTurnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Client::requestConnection(quint32 _t1, quint16 _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Client::makeMove(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Client::showCard(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Client::makeAccusation(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Client::makeSuggestion(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Client::requestStateSlot()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Client::sendConnectionRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Client::gameEndedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
