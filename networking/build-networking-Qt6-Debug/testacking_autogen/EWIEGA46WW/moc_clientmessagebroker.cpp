/****************************************************************************
** Meta object code from reading C++ file 'clientmessagebroker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../networking/clientmessagebroker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientmessagebroker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientMessageBroker_t {
    const uint offsetsAndSize[134];
    char stringdata0[872];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ClientMessageBroker_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ClientMessageBroker_t qt_meta_stringdata_ClientMessageBroker = {
    {
QT_MOC_LITERAL(0, 19), // "ClientMessageBroker"
QT_MOC_LITERAL(20, 17), // "connectionStarted"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 8), // "username"
QT_MOC_LITERAL(48, 17), // "gameStartedSignal"
QT_MOC_LITERAL(66, 10), // "numPlayers"
QT_MOC_LITERAL(77, 7), // "players"
QT_MOC_LITERAL(85, 5), // "dice1"
QT_MOC_LITERAL(91, 11), // "currentTurn"
QT_MOC_LITERAL(103, 11), // "faceUpCards"
QT_MOC_LITERAL(115, 20), // "playerAcceptedSignal"
QT_MOC_LITERAL(136, 6), // "person"
QT_MOC_LITERAL(143, 5), // "dice2"
QT_MOC_LITERAL(149, 24), // "connectionRejectedSignal"
QT_MOC_LITERAL(174, 6), // "reason"
QT_MOC_LITERAL(181, 21), // "suggestionStateUpdate"
QT_MOC_LITERAL(203, 5), // "cards"
QT_MOC_LITERAL(209, 22), // "accusationResultSignal"
QT_MOC_LITERAL(232, 3), // "win"
QT_MOC_LITERAL(236, 14), // "yourTurnSignal"
QT_MOC_LITERAL(251, 10), // "cardsDealt"
QT_MOC_LITERAL(262, 9), // "cardShown"
QT_MOC_LITERAL(272, 7), // "hasCard"
QT_MOC_LITERAL(280, 5), // "asked"
QT_MOC_LITERAL(286, 6), // "showed"
QT_MOC_LITERAL(293, 17), // "cardShownToPlayer"
QT_MOC_LITERAL(311, 4), // "card"
QT_MOC_LITERAL(316, 12), // "playerKicked"
QT_MOC_LITERAL(329, 15), // "gameEndedSignal"
QT_MOC_LITERAL(345, 15), // "gameStateSignal"
QT_MOC_LITERAL(361, 4), // "dice"
QT_MOC_LITERAL(366, 11), // "faceupCards"
QT_MOC_LITERAL(378, 12), // "playerResult"
QT_MOC_LITERAL(391, 10), // "accusation"
QT_MOC_LITERAL(402, 11), // "errorSignal"
QT_MOC_LITERAL(414, 10), // "ERROR_TYPE"
QT_MOC_LITERAL(425, 3), // "err"
QT_MOC_LITERAL(429, 10), // "moveUpdate"
QT_MOC_LITERAL(440, 8), // "position"
QT_MOC_LITERAL(449, 19), // "cardRequestedSignal"
QT_MOC_LITERAL(469, 10), // "suggestion"
QT_MOC_LITERAL(480, 17), // "requestConnection"
QT_MOC_LITERAL(498, 7), // "address"
QT_MOC_LITERAL(506, 4), // "port"
QT_MOC_LITERAL(511, 8), // "makeMove"
QT_MOC_LITERAL(520, 8), // "showCard"
QT_MOC_LITERAL(529, 14), // "makeAccusation"
QT_MOC_LITERAL(544, 6), // "weapon"
QT_MOC_LITERAL(551, 4), // "room"
QT_MOC_LITERAL(556, 14), // "makeSuggestion"
QT_MOC_LITERAL(571, 16), // "requestStateSlot"
QT_MOC_LITERAL(588, 21), // "sendConnectionRequest"
QT_MOC_LITERAL(610, 15), // "unpackGameState"
QT_MOC_LITERAL(626, 8), // "Message&"
QT_MOC_LITERAL(635, 3), // "msg"
QT_MOC_LITERAL(639, 19), // "unpackCardRequested"
QT_MOC_LITERAL(659, 10), // "unpackMove"
QT_MOC_LITERAL(670, 24), // "unpackConnectionAccepted"
QT_MOC_LITERAL(695, 24), // "unpackConnectionRejected"
QT_MOC_LITERAL(720, 18), // "unpackPlayerResult"
QT_MOC_LITERAL(739, 20), // "unpackGameTerminated"
QT_MOC_LITERAL(760, 15), // "unpackCardShown"
QT_MOC_LITERAL(776, 16), // "unpackCardsDealt"
QT_MOC_LITERAL(793, 27), // "unpackSuggestionStateUpdate"
QT_MOC_LITERAL(821, 16), // "unpackPlayerTurn"
QT_MOC_LITERAL(838, 10), // "unpackKick"
QT_MOC_LITERAL(849, 22) // "unpackShowCardToPlayer"

    },
    "ClientMessageBroker\0connectionStarted\0"
    "\0username\0gameStartedSignal\0numPlayers\0"
    "players\0dice1\0currentTurn\0faceUpCards\0"
    "playerAcceptedSignal\0person\0dice2\0"
    "connectionRejectedSignal\0reason\0"
    "suggestionStateUpdate\0cards\0"
    "accusationResultSignal\0win\0yourTurnSignal\0"
    "cardsDealt\0cardShown\0hasCard\0asked\0"
    "showed\0cardShownToPlayer\0card\0"
    "playerKicked\0gameEndedSignal\0"
    "gameStateSignal\0dice\0faceupCards\0"
    "playerResult\0accusation\0errorSignal\0"
    "ERROR_TYPE\0err\0moveUpdate\0position\0"
    "cardRequestedSignal\0suggestion\0"
    "requestConnection\0address\0port\0makeMove\0"
    "showCard\0makeAccusation\0weapon\0room\0"
    "makeSuggestion\0requestStateSlot\0"
    "sendConnectionRequest\0unpackGameState\0"
    "Message&\0msg\0unpackCardRequested\0"
    "unpackMove\0unpackConnectionAccepted\0"
    "unpackConnectionRejected\0unpackPlayerResult\0"
    "unpackGameTerminated\0unpackCardShown\0"
    "unpackCardsDealt\0unpackSuggestionStateUpdate\0"
    "unpackPlayerTurn\0unpackKick\0"
    "unpackShowCardToPlayer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientMessageBroker[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  236,    2, 0x06,    1 /* Public */,
       4,    5,  239,    2, 0x06,    3 /* Public */,
      10,    4,  250,    2, 0x06,    9 /* Public */,
      13,    1,  259,    2, 0x06,   14 /* Public */,
      15,    2,  262,    2, 0x06,   16 /* Public */,
      17,    2,  267,    2, 0x06,   19 /* Public */,
      19,    2,  272,    2, 0x06,   22 /* Public */,
      20,    1,  277,    2, 0x06,   25 /* Public */,
      21,    3,  280,    2, 0x06,   27 /* Public */,
      25,    2,  287,    2, 0x06,   31 /* Public */,
      27,    2,  292,    2, 0x06,   34 /* Public */,
      28,    0,  297,    2, 0x06,   37 /* Public */,
      29,    5,  298,    2, 0x06,   38 /* Public */,
      32,    3,  309,    2, 0x06,   44 /* Public */,
      34,    2,  316,    2, 0x06,   48 /* Public */,
      37,    2,  321,    2, 0x06,   51 /* Public */,
      39,    2,  326,    2, 0x06,   54 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      41,    3,  331,    2, 0x0a,   57 /* Public */,
      44,    1,  338,    2, 0x0a,   61 /* Public */,
      45,    1,  341,    2, 0x0a,   63 /* Public */,
      46,    3,  344,    2, 0x0a,   65 /* Public */,
      49,    3,  351,    2, 0x0a,   69 /* Public */,
      50,    0,  358,    2, 0x0a,   73 /* Public */,
      51,    1,  359,    2, 0x0a,   74 /* Public */,
      52,    1,  362,    2, 0x08,   76 /* Private */,
      55,    1,  365,    2, 0x08,   78 /* Private */,
      56,    1,  368,    2, 0x08,   80 /* Private */,
      57,    1,  371,    2, 0x08,   82 /* Private */,
      58,    1,  374,    2, 0x08,   84 /* Private */,
      59,    1,  377,    2, 0x08,   86 /* Private */,
      60,    1,  380,    2, 0x08,   88 /* Private */,
      61,    1,  383,    2, 0x08,   90 /* Private */,
      62,    1,  386,    2, 0x08,   92 /* Private */,
      63,    1,  389,    2, 0x08,   94 /* Private */,
      64,    1,  392,    2, 0x08,   96 /* Private */,
      65,    1,  395,    2, 0x08,   98 /* Private */,
      66,    1,  398,    2, 0x08,  100 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QJsonArray, QMetaType::Int, QMetaType::Int, QMetaType::QStringList,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,   11,    7,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,   16,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Bool,   16,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,   12,
    QMetaType::Void, QMetaType::QStringList,   16,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString,   22,   23,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QJsonArray, QMetaType::Int, QMetaType::Int, QMetaType::QJsonArray,    5,    6,   30,    8,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, QMetaType::Bool,    3,   33,   18,
    QMetaType::Void, 0x80000000 | 35, QMetaType::QString,   36,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   23,   40,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort, QMetaType::QString,   42,   43,    3,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   47,   48,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   47,   48,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 53,   54,

       0        // eod
};

void ClientMessageBroker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientMessageBroker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connectionStarted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->gameStartedSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[5]))); break;
        case 2: _t->playerAcceptedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 3: _t->connectionRejectedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->suggestionStateUpdate((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[2]))); break;
        case 5: _t->accusationResultSignal((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 6: _t->yourTurnSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->cardsDealt((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1]))); break;
        case 8: _t->cardShown((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 9: _t->cardShownToPlayer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->playerKicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 11: _t->gameEndedSignal(); break;
        case 12: _t->gameStateSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[5]))); break;
        case 13: _t->playerResult((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 14: _t->errorSignal((*reinterpret_cast< std::add_pointer_t<ERROR_TYPE>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 15: _t->moveUpdate((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 16: _t->cardRequestedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[2]))); break;
        case 17: _t->requestConnection((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 18: _t->makeMove((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->showCard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->makeAccusation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 21: _t->makeSuggestion((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 22: _t->requestStateSlot(); break;
        case 23: _t->sendConnectionRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->unpackGameState((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 25: _t->unpackCardRequested((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 26: _t->unpackMove((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 27: _t->unpackConnectionAccepted((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 28: _t->unpackConnectionRejected((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 29: _t->unpackPlayerResult((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 30: _t->unpackGameTerminated((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 31: _t->unpackCardShown((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 32: _t->unpackCardsDealt((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 33: _t->unpackSuggestionStateUpdate((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 34: _t->unpackPlayerTurn((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 35: _t->unpackKick((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 36: _t->unpackShowCardToPlayer((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientMessageBroker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::connectionStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(int , QJsonArray , int , int , QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::gameStartedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString , QString , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::playerAcceptedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::connectionRejectedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString , QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::suggestionStateUpdate)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QVector<QString> , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::accusationResultSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::yourTurnSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::cardsDealt)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(bool , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::cardShown)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::cardShownToPlayer)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::playerKicked)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::gameEndedSignal)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(int , QJsonArray , int , int , QJsonArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::gameStateSignal)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString , QVector<QString> , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::playerResult)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(ERROR_TYPE , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::errorSignal)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::moveUpdate)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString , QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::cardRequestedSignal)) {
                *result = 16;
                return;
            }
        }
    }
}

const QMetaObject ClientMessageBroker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ClientMessageBroker.offsetsAndSize,
    qt_meta_data_ClientMessageBroker,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ClientMessageBroker_t
, QtPrivate::TypeAndForceComplete<ClientMessageBroker, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ERROR_TYPE, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<quint32, std::false_type>, QtPrivate::TypeAndForceComplete<quint16, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>


>,
    nullptr
} };


const QMetaObject *ClientMessageBroker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientMessageBroker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientMessageBroker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientMessageBroker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void ClientMessageBroker::connectionStarted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientMessageBroker::gameStartedSignal(int _t1, QJsonArray _t2, int _t3, int _t4, QVector<QString> _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClientMessageBroker::playerAcceptedSignal(QString _t1, QString _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClientMessageBroker::connectionRejectedSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ClientMessageBroker::suggestionStateUpdate(QString _t1, QVector<QString> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ClientMessageBroker::accusationResultSignal(QVector<QString> _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ClientMessageBroker::yourTurnSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ClientMessageBroker::cardsDealt(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ClientMessageBroker::cardShown(bool _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ClientMessageBroker::cardShownToPlayer(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ClientMessageBroker::playerKicked(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ClientMessageBroker::gameEndedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void ClientMessageBroker::gameStateSignal(int _t1, QJsonArray _t2, int _t3, int _t4, QJsonArray _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void ClientMessageBroker::playerResult(QString _t1, QVector<QString> _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void ClientMessageBroker::errorSignal(ERROR_TYPE _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void ClientMessageBroker::moveUpdate(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void ClientMessageBroker::cardRequestedSignal(QString _t1, QVector<QString> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
