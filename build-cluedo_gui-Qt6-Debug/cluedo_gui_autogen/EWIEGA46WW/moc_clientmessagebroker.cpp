/****************************************************************************
** Meta object code from reading C++ file 'clientmessagebroker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../cluedo_gui/clientmessagebroker.h"
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
    const uint offsetsAndSize[136];
    char stringdata0[884];
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
QT_MOC_LITERAL(203, 6), // "weapon"
QT_MOC_LITERAL(210, 4), // "room"
QT_MOC_LITERAL(215, 22), // "accusationResultSignal"
QT_MOC_LITERAL(238, 5), // "cards"
QT_MOC_LITERAL(244, 3), // "win"
QT_MOC_LITERAL(248, 14), // "yourTurnSignal"
QT_MOC_LITERAL(263, 10), // "cardsDealt"
QT_MOC_LITERAL(274, 9), // "cardShown"
QT_MOC_LITERAL(284, 7), // "hasCard"
QT_MOC_LITERAL(292, 5), // "asked"
QT_MOC_LITERAL(298, 6), // "showed"
QT_MOC_LITERAL(305, 17), // "cardShownToPlayer"
QT_MOC_LITERAL(323, 4), // "card"
QT_MOC_LITERAL(328, 12), // "playerKicked"
QT_MOC_LITERAL(341, 15), // "gameEndedSignal"
QT_MOC_LITERAL(357, 15), // "gameStateSignal"
QT_MOC_LITERAL(373, 4), // "dice"
QT_MOC_LITERAL(378, 11), // "faceupCards"
QT_MOC_LITERAL(390, 12), // "playerResult"
QT_MOC_LITERAL(403, 10), // "accusation"
QT_MOC_LITERAL(414, 11), // "errorSignal"
QT_MOC_LITERAL(426, 10), // "ERROR_TYPE"
QT_MOC_LITERAL(437, 3), // "err"
QT_MOC_LITERAL(441, 10), // "moveUpdate"
QT_MOC_LITERAL(452, 8), // "position"
QT_MOC_LITERAL(461, 19), // "cardRequestedSignal"
QT_MOC_LITERAL(481, 10), // "suggestion"
QT_MOC_LITERAL(492, 11), // "invalidMove"
QT_MOC_LITERAL(504, 17), // "requestConnection"
QT_MOC_LITERAL(522, 7), // "address"
QT_MOC_LITERAL(530, 4), // "port"
QT_MOC_LITERAL(535, 8), // "makeMove"
QT_MOC_LITERAL(544, 8), // "showCard"
QT_MOC_LITERAL(553, 14), // "makeAccusation"
QT_MOC_LITERAL(568, 14), // "makeSuggestion"
QT_MOC_LITERAL(583, 16), // "requestStateSlot"
QT_MOC_LITERAL(600, 21), // "sendConnectionRequest"
QT_MOC_LITERAL(622, 15), // "unpackGameState"
QT_MOC_LITERAL(638, 8), // "Message&"
QT_MOC_LITERAL(647, 3), // "msg"
QT_MOC_LITERAL(651, 19), // "unpackCardRequested"
QT_MOC_LITERAL(671, 10), // "unpackMove"
QT_MOC_LITERAL(682, 24), // "unpackConnectionAccepted"
QT_MOC_LITERAL(707, 24), // "unpackConnectionRejected"
QT_MOC_LITERAL(732, 18), // "unpackPlayerResult"
QT_MOC_LITERAL(751, 20), // "unpackGameTerminated"
QT_MOC_LITERAL(772, 15), // "unpackCardShown"
QT_MOC_LITERAL(788, 16), // "unpackCardsDealt"
QT_MOC_LITERAL(805, 27), // "unpackSuggestionStateUpdate"
QT_MOC_LITERAL(833, 16), // "unpackPlayerTurn"
QT_MOC_LITERAL(850, 10), // "unpackKick"
QT_MOC_LITERAL(861, 22) // "unpackShowCardToPlayer"

    },
    "ClientMessageBroker\0connectionStarted\0"
    "\0username\0gameStartedSignal\0numPlayers\0"
    "players\0dice1\0currentTurn\0faceUpCards\0"
    "playerAcceptedSignal\0person\0dice2\0"
    "connectionRejectedSignal\0reason\0"
    "suggestionStateUpdate\0weapon\0room\0"
    "accusationResultSignal\0cards\0win\0"
    "yourTurnSignal\0cardsDealt\0cardShown\0"
    "hasCard\0asked\0showed\0cardShownToPlayer\0"
    "card\0playerKicked\0gameEndedSignal\0"
    "gameStateSignal\0dice\0faceupCards\0"
    "playerResult\0accusation\0errorSignal\0"
    "ERROR_TYPE\0err\0moveUpdate\0position\0"
    "cardRequestedSignal\0suggestion\0"
    "invalidMove\0requestConnection\0address\0"
    "port\0makeMove\0showCard\0makeAccusation\0"
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
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  242,    2, 0x06,    1 /* Public */,
       4,    5,  245,    2, 0x06,    3 /* Public */,
      10,    4,  256,    2, 0x06,    9 /* Public */,
      13,    1,  265,    2, 0x06,   14 /* Public */,
      15,    4,  268,    2, 0x06,   16 /* Public */,
      18,    2,  277,    2, 0x06,   21 /* Public */,
      21,    2,  282,    2, 0x06,   24 /* Public */,
      22,    1,  287,    2, 0x06,   27 /* Public */,
      23,    3,  290,    2, 0x06,   29 /* Public */,
      27,    2,  297,    2, 0x06,   33 /* Public */,
      29,    2,  302,    2, 0x06,   36 /* Public */,
      30,    0,  307,    2, 0x06,   39 /* Public */,
      31,    5,  308,    2, 0x06,   40 /* Public */,
      34,    3,  319,    2, 0x06,   46 /* Public */,
      36,    2,  326,    2, 0x06,   50 /* Public */,
      39,    2,  331,    2, 0x06,   53 /* Public */,
      41,    2,  336,    2, 0x06,   56 /* Public */,
      43,    0,  341,    2, 0x06,   59 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      44,    3,  342,    2, 0x0a,   60 /* Public */,
      47,    1,  349,    2, 0x0a,   64 /* Public */,
      48,    1,  352,    2, 0x0a,   66 /* Public */,
      49,    3,  355,    2, 0x0a,   68 /* Public */,
      50,    3,  362,    2, 0x0a,   72 /* Public */,
      51,    0,  369,    2, 0x0a,   76 /* Public */,
      52,    1,  370,    2, 0x0a,   77 /* Public */,
      53,    1,  373,    2, 0x08,   79 /* Private */,
      56,    1,  376,    2, 0x08,   81 /* Private */,
      57,    1,  379,    2, 0x08,   83 /* Private */,
      58,    1,  382,    2, 0x08,   85 /* Private */,
      59,    1,  385,    2, 0x08,   87 /* Private */,
      60,    1,  388,    2, 0x08,   89 /* Private */,
      61,    1,  391,    2, 0x08,   91 /* Private */,
      62,    1,  394,    2, 0x08,   93 /* Private */,
      63,    1,  397,    2, 0x08,   95 /* Private */,
      64,    1,  400,    2, 0x08,   97 /* Private */,
      65,    1,  403,    2, 0x08,   99 /* Private */,
      66,    1,  406,    2, 0x08,  101 /* Private */,
      67,    1,  409,    2, 0x08,  103 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QJsonArray, QMetaType::Int, QMetaType::Int, QMetaType::QStringList,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,   11,    7,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,   11,   16,   17,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Bool,   19,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,   12,
    QMetaType::Void, QMetaType::QStringList,   19,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString,   24,   25,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   28,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QJsonArray, QMetaType::Int, QMetaType::Int, QMetaType::QJsonArray,    5,    6,   32,    8,   33,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, QMetaType::Bool,    3,   35,   20,
    QMetaType::Void, 0x80000000 | 37, QMetaType::QString,   38,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,   40,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   25,   42,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort, QMetaType::QString,   45,   46,    3,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   16,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   16,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 54,   55,

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
        case 4: _t->suggestionStateUpdate((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
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
        case 17: _t->invalidMove(); break;
        case 18: _t->requestConnection((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 19: _t->makeMove((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->showCard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->makeAccusation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 22: _t->makeSuggestion((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 23: _t->requestStateSlot(); break;
        case 24: _t->sendConnectionRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->unpackGameState((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 26: _t->unpackCardRequested((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 27: _t->unpackMove((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 28: _t->unpackConnectionAccepted((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 29: _t->unpackConnectionRejected((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 30: _t->unpackPlayerResult((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 31: _t->unpackGameTerminated((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 32: _t->unpackCardShown((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 33: _t->unpackCardsDealt((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 34: _t->unpackSuggestionStateUpdate((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 35: _t->unpackPlayerTurn((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 36: _t->unpackKick((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 37: _t->unpackShowCardToPlayer((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
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
            using _t = void (ClientMessageBroker::*)(QString , QString , QString , QString );
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
        {
            using _t = void (ClientMessageBroker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::invalidMove)) {
                *result = 17;
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
, QtPrivate::TypeAndForceComplete<ClientMessageBroker, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ERROR_TYPE, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
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
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 38;
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
void ClientMessageBroker::suggestionStateUpdate(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
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

// SIGNAL 17
void ClientMessageBroker::invalidMove()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
