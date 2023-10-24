/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../client.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSClientENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSClientENDCLASS = QtMocHelpers::stringData(
    "Client",
    "connectionAccepted",
    "",
    "connectionRejected",
    "promptRequested",
    "testSendMessageToBroker",
    "QString&",
    "message",
    "validUsername",
    "playerPositionUpdated",
    "playerId",
    "newX",
    "newY",
    "requestConnection",
    "address",
    "port",
    "username",
    "makeMove",
    "position",
    "showCard",
    "card",
    "makeAccusation",
    "person",
    "weapon",
    "room",
    "makeSuggestion",
    "requestStateSlot",
    "sendConnectionRequest",
    "gameEndedSignal",
    "testReceiveMessage",
    "onNameEntered",
    "name",
    "onTurnEnded",
    "onGameStarted",
    "numPlayers",
    "players",
    "dice1",
    "currentTurn",
    "faceUpCards",
    "onPlayerAccepted",
    "dice2",
    "onAccusationMade",
    "item",
    "onSuggestionMade",
    "onSuggestionReceived",
    "onRequestAnswered",
    "emitConnectionAccepted",
    "emitConnectionRejected",
    "onCardShown",
    "hasCard",
    "asked",
    "showed",
    "onCardShownToPlayer",
    "onGameEnded",
    "getPlayerTurn",
    "isMyTurn",
    "getCurrentDiceValue",
    "playerPositionSet",
    "getPlayerID",
    "n",
    "getRoomNumber",
    "x",
    "y",
    "playerHasCard",
    "emitRequestConnectionSignal",
    "testBox",
    "in"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClientENDCLASS_t {
    uint offsetsAndSizes[134];
    char stringdata0[7];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[16];
    char stringdata5[24];
    char stringdata6[9];
    char stringdata7[8];
    char stringdata8[14];
    char stringdata9[22];
    char stringdata10[9];
    char stringdata11[5];
    char stringdata12[5];
    char stringdata13[18];
    char stringdata14[8];
    char stringdata15[5];
    char stringdata16[9];
    char stringdata17[9];
    char stringdata18[9];
    char stringdata19[9];
    char stringdata20[5];
    char stringdata21[15];
    char stringdata22[7];
    char stringdata23[7];
    char stringdata24[5];
    char stringdata25[15];
    char stringdata26[17];
    char stringdata27[22];
    char stringdata28[16];
    char stringdata29[19];
    char stringdata30[14];
    char stringdata31[5];
    char stringdata32[12];
    char stringdata33[14];
    char stringdata34[11];
    char stringdata35[8];
    char stringdata36[6];
    char stringdata37[12];
    char stringdata38[12];
    char stringdata39[17];
    char stringdata40[6];
    char stringdata41[17];
    char stringdata42[5];
    char stringdata43[17];
    char stringdata44[21];
    char stringdata45[18];
    char stringdata46[23];
    char stringdata47[23];
    char stringdata48[12];
    char stringdata49[8];
    char stringdata50[6];
    char stringdata51[7];
    char stringdata52[20];
    char stringdata53[12];
    char stringdata54[14];
    char stringdata55[9];
    char stringdata56[20];
    char stringdata57[18];
    char stringdata58[12];
    char stringdata59[2];
    char stringdata60[14];
    char stringdata61[2];
    char stringdata62[2];
    char stringdata63[14];
    char stringdata64[28];
    char stringdata65[8];
    char stringdata66[3];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSClientENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSClientENDCLASS_t qt_meta_stringdata_CLASSClientENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Client"
        QT_MOC_LITERAL(7, 18),  // "connectionAccepted"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 18),  // "connectionRejected"
        QT_MOC_LITERAL(46, 15),  // "promptRequested"
        QT_MOC_LITERAL(62, 23),  // "testSendMessageToBroker"
        QT_MOC_LITERAL(86, 8),  // "QString&"
        QT_MOC_LITERAL(95, 7),  // "message"
        QT_MOC_LITERAL(103, 13),  // "validUsername"
        QT_MOC_LITERAL(117, 21),  // "playerPositionUpdated"
        QT_MOC_LITERAL(139, 8),  // "playerId"
        QT_MOC_LITERAL(148, 4),  // "newX"
        QT_MOC_LITERAL(153, 4),  // "newY"
        QT_MOC_LITERAL(158, 17),  // "requestConnection"
        QT_MOC_LITERAL(176, 7),  // "address"
        QT_MOC_LITERAL(184, 4),  // "port"
        QT_MOC_LITERAL(189, 8),  // "username"
        QT_MOC_LITERAL(198, 8),  // "makeMove"
        QT_MOC_LITERAL(207, 8),  // "position"
        QT_MOC_LITERAL(216, 8),  // "showCard"
        QT_MOC_LITERAL(225, 4),  // "card"
        QT_MOC_LITERAL(230, 14),  // "makeAccusation"
        QT_MOC_LITERAL(245, 6),  // "person"
        QT_MOC_LITERAL(252, 6),  // "weapon"
        QT_MOC_LITERAL(259, 4),  // "room"
        QT_MOC_LITERAL(264, 14),  // "makeSuggestion"
        QT_MOC_LITERAL(279, 16),  // "requestStateSlot"
        QT_MOC_LITERAL(296, 21),  // "sendConnectionRequest"
        QT_MOC_LITERAL(318, 15),  // "gameEndedSignal"
        QT_MOC_LITERAL(334, 18),  // "testReceiveMessage"
        QT_MOC_LITERAL(353, 13),  // "onNameEntered"
        QT_MOC_LITERAL(367, 4),  // "name"
        QT_MOC_LITERAL(372, 11),  // "onTurnEnded"
        QT_MOC_LITERAL(384, 13),  // "onGameStarted"
        QT_MOC_LITERAL(398, 10),  // "numPlayers"
        QT_MOC_LITERAL(409, 7),  // "players"
        QT_MOC_LITERAL(417, 5),  // "dice1"
        QT_MOC_LITERAL(423, 11),  // "currentTurn"
        QT_MOC_LITERAL(435, 11),  // "faceUpCards"
        QT_MOC_LITERAL(447, 16),  // "onPlayerAccepted"
        QT_MOC_LITERAL(464, 5),  // "dice2"
        QT_MOC_LITERAL(470, 16),  // "onAccusationMade"
        QT_MOC_LITERAL(487, 4),  // "item"
        QT_MOC_LITERAL(492, 16),  // "onSuggestionMade"
        QT_MOC_LITERAL(509, 20),  // "onSuggestionReceived"
        QT_MOC_LITERAL(530, 17),  // "onRequestAnswered"
        QT_MOC_LITERAL(548, 22),  // "emitConnectionAccepted"
        QT_MOC_LITERAL(571, 22),  // "emitConnectionRejected"
        QT_MOC_LITERAL(594, 11),  // "onCardShown"
        QT_MOC_LITERAL(606, 7),  // "hasCard"
        QT_MOC_LITERAL(614, 5),  // "asked"
        QT_MOC_LITERAL(620, 6),  // "showed"
        QT_MOC_LITERAL(627, 19),  // "onCardShownToPlayer"
        QT_MOC_LITERAL(647, 11),  // "onGameEnded"
        QT_MOC_LITERAL(659, 13),  // "getPlayerTurn"
        QT_MOC_LITERAL(673, 8),  // "isMyTurn"
        QT_MOC_LITERAL(682, 19),  // "getCurrentDiceValue"
        QT_MOC_LITERAL(702, 17),  // "playerPositionSet"
        QT_MOC_LITERAL(720, 11),  // "getPlayerID"
        QT_MOC_LITERAL(732, 1),  // "n"
        QT_MOC_LITERAL(734, 13),  // "getRoomNumber"
        QT_MOC_LITERAL(748, 1),  // "x"
        QT_MOC_LITERAL(750, 1),  // "y"
        QT_MOC_LITERAL(752, 13),  // "playerHasCard"
        QT_MOC_LITERAL(766, 27),  // "emitRequestConnectionSignal"
        QT_MOC_LITERAL(794, 7),  // "testBox"
        QT_MOC_LITERAL(802, 2)   // "in"
    },
    "Client",
    "connectionAccepted",
    "",
    "connectionRejected",
    "promptRequested",
    "testSendMessageToBroker",
    "QString&",
    "message",
    "validUsername",
    "playerPositionUpdated",
    "playerId",
    "newX",
    "newY",
    "requestConnection",
    "address",
    "port",
    "username",
    "makeMove",
    "position",
    "showCard",
    "card",
    "makeAccusation",
    "person",
    "weapon",
    "room",
    "makeSuggestion",
    "requestStateSlot",
    "sendConnectionRequest",
    "gameEndedSignal",
    "testReceiveMessage",
    "onNameEntered",
    "name",
    "onTurnEnded",
    "onGameStarted",
    "numPlayers",
    "players",
    "dice1",
    "currentTurn",
    "faceUpCards",
    "onPlayerAccepted",
    "dice2",
    "onAccusationMade",
    "item",
    "onSuggestionMade",
    "onSuggestionReceived",
    "onRequestAnswered",
    "emitConnectionAccepted",
    "emitConnectionRejected",
    "onCardShown",
    "hasCard",
    "asked",
    "showed",
    "onCardShownToPlayer",
    "onGameEnded",
    "getPlayerTurn",
    "isMyTurn",
    "getCurrentDiceValue",
    "playerPositionSet",
    "getPlayerID",
    "n",
    "getRoomNumber",
    "x",
    "y",
    "playerHasCard",
    "emitRequestConnectionSignal",
    "testBox",
    "in"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClientENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  236,    2, 0x06,    1 /* Public */,
       3,    0,  237,    2, 0x06,    2 /* Public */,
       4,    0,  238,    2, 0x06,    3 /* Public */,
       5,    1,  239,    2, 0x06,    4 /* Public */,
       8,    0,  242,    2, 0x06,    6 /* Public */,
       9,    3,  243,    2, 0x06,    7 /* Public */,
      13,    3,  250,    2, 0x06,   11 /* Public */,
      17,    1,  257,    2, 0x06,   15 /* Public */,
      19,    1,  260,    2, 0x06,   17 /* Public */,
      21,    3,  263,    2, 0x06,   19 /* Public */,
      25,    3,  270,    2, 0x06,   23 /* Public */,
      26,    0,  277,    2, 0x06,   27 /* Public */,
      27,    1,  278,    2, 0x06,   28 /* Public */,
      28,    0,  281,    2, 0x06,   30 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      29,    1,  282,    2, 0x0a,   31 /* Public */,
      30,    1,  285,    2, 0x0a,   33 /* Public */,
      32,    0,  288,    2, 0x0a,   35 /* Public */,
      33,    5,  289,    2, 0x0a,   36 /* Public */,
      39,    4,  300,    2, 0x0a,   42 /* Public */,
      41,    3,  309,    2, 0x0a,   47 /* Public */,
      43,    3,  316,    2, 0x0a,   51 /* Public */,
      44,    3,  323,    2, 0x0a,   55 /* Public */,
      45,    3,  330,    2, 0x0a,   59 /* Public */,
      46,    0,  337,    2, 0x0a,   63 /* Public */,
      47,    0,  338,    2, 0x0a,   64 /* Public */,
      48,    3,  339,    2, 0x0a,   65 /* Public */,
      52,    2,  346,    2, 0x0a,   69 /* Public */,
      53,    0,  351,    2, 0x0a,   72 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      54,    0,  352,    2, 0x102,   73 /* Public | MethodIsConst  */,
      55,    0,  353,    2, 0x102,   74 /* Public | MethodIsConst  */,
      56,    0,  354,    2, 0x102,   75 /* Public | MethodIsConst  */,
      57,    3,  355,    2, 0x02,   76 /* Public */,
      58,    1,  362,    2, 0x02,   80 /* Public */,
      60,    2,  365,    2, 0x02,   82 /* Public */,
      63,    1,  370,    2, 0x02,   85 /* Public */,
      64,    0,  373,    2, 0x02,   87 /* Public */,
      65,    1,  374,    2, 0x02,   88 /* Public */,

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
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QJsonArray, QMetaType::Int, QMetaType::Int, QMetaType::QStringList,   34,   35,   36,   37,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,   16,   22,   36,   40,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   24,   22,   42,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   24,   22,   42,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   24,   22,   42,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   24,   22,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString,   49,   50,   51,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,   20,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::QString, QMetaType::Int,   59,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,   61,   62,
    QMetaType::Bool, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   66,

       0        // eod
};

Q_CONSTINIT const QMetaObject Client::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSClientENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClientENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClientENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Client, std::true_type>,
        // method 'connectionAccepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectionRejected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'promptRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testSendMessageToBroker'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'validUsername'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playerPositionUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'requestConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'makeMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showCard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'makeAccusation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'makeSuggestion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'requestStateSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendConnectionRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'gameEndedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testReceiveMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'onNameEntered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onTurnEnded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onGameStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>,
        // method 'onPlayerAccepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onAccusationMade'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onSuggestionMade'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onSuggestionReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onRequestAnswered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'emitConnectionAccepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emitConnectionRejected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCardShown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onCardShownToPlayer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onGameEnded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getPlayerTurn'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'isMyTurn'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getCurrentDiceValue'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'playerPositionSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getPlayerID'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getRoomNumber'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'playerHasCard'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'emitRequestConnectionSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testBox'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

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
        case 14: _t->testReceiveMessage((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1]))); break;
        case 15: _t->onNameEntered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->onTurnEnded(); break;
        case 17: _t->onGameStarted((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[5]))); break;
        case 18: _t->onPlayerAccepted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 19: _t->onAccusationMade((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 20: _t->onSuggestionMade((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 21: _t->onSuggestionReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 22: _t->onRequestAnswered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 23: _t->emitConnectionAccepted(); break;
        case 24: _t->emitConnectionRejected(); break;
        case 25: _t->onCardShown((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 26: _t->onCardShownToPlayer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 27: _t->onGameEnded(); break;
        case 28: { int _r = _t->getPlayerTurn();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->isMyTurn();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: { int _r = _t->getCurrentDiceValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 31: _t->playerPositionSet((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 32: { QString _r = _t->getPlayerID((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 33: { int _r = _t->getRoomNumber((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 34: { bool _r = _t->playerHasCard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: _t->emitRequestConnectionSignal(); break;
        case 36: _t->testBox((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Client::*)();
            if (_t _q_method = &Client::connectionAccepted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (_t _q_method = &Client::connectionRejected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (_t _q_method = &Client::promptRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString & );
            if (_t _q_method = &Client::testSendMessageToBroker; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (_t _q_method = &Client::validUsername; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Client::*)(int , int , int );
            if (_t _q_method = &Client::playerPositionUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Client::*)(quint32 , quint16 , QString );
            if (_t _q_method = &Client::requestConnection; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Client::*)(int );
            if (_t _q_method = &Client::makeMove; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString );
            if (_t _q_method = &Client::showCard; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString , QString , QString );
            if (_t _q_method = &Client::makeAccusation; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString , QString , QString );
            if (_t _q_method = &Client::makeSuggestion; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (_t _q_method = &Client::requestStateSlot; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString );
            if (_t _q_method = &Client::sendConnectionRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (_t _q_method = &Client::gameEndedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
    }
}

const QMetaObject *Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSClientENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
