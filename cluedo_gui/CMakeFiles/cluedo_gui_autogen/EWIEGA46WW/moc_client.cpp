/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
    "playerTurnChanged",
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
    "onPlayerAccepted",
    "dice1",
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
    "playerTurn",
    "isMyTurn",
    "getCurrentDiceValue",
    "playerPositionSet",
    "getPlayerID",
    "n",
    "emitRequestConnectionSignal",
    "testBox",
    "in"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClientENDCLASS_t {
    uint offsetsAndSizes[118];
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
    char stringdata14[18];
    char stringdata15[8];
    char stringdata16[5];
    char stringdata17[9];
    char stringdata18[9];
    char stringdata19[9];
    char stringdata20[9];
    char stringdata21[5];
    char stringdata22[15];
    char stringdata23[7];
    char stringdata24[7];
    char stringdata25[5];
    char stringdata26[15];
    char stringdata27[17];
    char stringdata28[22];
    char stringdata29[16];
    char stringdata30[19];
    char stringdata31[14];
    char stringdata32[5];
    char stringdata33[12];
    char stringdata34[17];
    char stringdata35[6];
    char stringdata36[6];
    char stringdata37[17];
    char stringdata38[5];
    char stringdata39[17];
    char stringdata40[21];
    char stringdata41[18];
    char stringdata42[23];
    char stringdata43[23];
    char stringdata44[12];
    char stringdata45[8];
    char stringdata46[6];
    char stringdata47[7];
    char stringdata48[20];
    char stringdata49[12];
    char stringdata50[11];
    char stringdata51[9];
    char stringdata52[20];
    char stringdata53[18];
    char stringdata54[12];
    char stringdata55[2];
    char stringdata56[28];
    char stringdata57[8];
    char stringdata58[3];
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
        QT_MOC_LITERAL(158, 17),  // "playerTurnChanged"
        QT_MOC_LITERAL(176, 17),  // "requestConnection"
        QT_MOC_LITERAL(194, 7),  // "address"
        QT_MOC_LITERAL(202, 4),  // "port"
        QT_MOC_LITERAL(207, 8),  // "username"
        QT_MOC_LITERAL(216, 8),  // "makeMove"
        QT_MOC_LITERAL(225, 8),  // "position"
        QT_MOC_LITERAL(234, 8),  // "showCard"
        QT_MOC_LITERAL(243, 4),  // "card"
        QT_MOC_LITERAL(248, 14),  // "makeAccusation"
        QT_MOC_LITERAL(263, 6),  // "person"
        QT_MOC_LITERAL(270, 6),  // "weapon"
        QT_MOC_LITERAL(277, 4),  // "room"
        QT_MOC_LITERAL(282, 14),  // "makeSuggestion"
        QT_MOC_LITERAL(297, 16),  // "requestStateSlot"
        QT_MOC_LITERAL(314, 21),  // "sendConnectionRequest"
        QT_MOC_LITERAL(336, 15),  // "gameEndedSignal"
        QT_MOC_LITERAL(352, 18),  // "testReceiveMessage"
        QT_MOC_LITERAL(371, 13),  // "onNameEntered"
        QT_MOC_LITERAL(385, 4),  // "name"
        QT_MOC_LITERAL(390, 11),  // "onTurnEnded"
        QT_MOC_LITERAL(402, 16),  // "onPlayerAccepted"
        QT_MOC_LITERAL(419, 5),  // "dice1"
        QT_MOC_LITERAL(425, 5),  // "dice2"
        QT_MOC_LITERAL(431, 16),  // "onAccusationMade"
        QT_MOC_LITERAL(448, 4),  // "item"
        QT_MOC_LITERAL(453, 16),  // "onSuggestionMade"
        QT_MOC_LITERAL(470, 20),  // "onSuggestionReceived"
        QT_MOC_LITERAL(491, 17),  // "onRequestAnswered"
        QT_MOC_LITERAL(509, 22),  // "emitConnectionAccepted"
        QT_MOC_LITERAL(532, 22),  // "emitConnectionRejected"
        QT_MOC_LITERAL(555, 11),  // "onCardShown"
        QT_MOC_LITERAL(567, 7),  // "hasCard"
        QT_MOC_LITERAL(575, 5),  // "asked"
        QT_MOC_LITERAL(581, 6),  // "showed"
        QT_MOC_LITERAL(588, 19),  // "onCardShownToPlayer"
        QT_MOC_LITERAL(608, 11),  // "onGameEnded"
        QT_MOC_LITERAL(620, 10),  // "playerTurn"
        QT_MOC_LITERAL(631, 8),  // "isMyTurn"
        QT_MOC_LITERAL(640, 19),  // "getCurrentDiceValue"
        QT_MOC_LITERAL(660, 17),  // "playerPositionSet"
        QT_MOC_LITERAL(678, 11),  // "getPlayerID"
        QT_MOC_LITERAL(690, 1),  // "n"
        QT_MOC_LITERAL(692, 27),  // "emitRequestConnectionSignal"
        QT_MOC_LITERAL(720, 7),  // "testBox"
        QT_MOC_LITERAL(728, 2)   // "in"
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
    "playerTurnChanged",
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
    "onPlayerAccepted",
    "dice1",
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
    "playerTurn",
    "isMyTurn",
    "getCurrentDiceValue",
    "playerPositionSet",
    "getPlayerID",
    "n",
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
      35,   14, // methods
       1,  347, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  224,    2, 0x06,    2 /* Public */,
       3,    0,  225,    2, 0x06,    3 /* Public */,
       4,    0,  226,    2, 0x06,    4 /* Public */,
       5,    1,  227,    2, 0x06,    5 /* Public */,
       8,    0,  230,    2, 0x06,    7 /* Public */,
       9,    3,  231,    2, 0x06,    8 /* Public */,
      13,    0,  238,    2, 0x06,   12 /* Public */,
      14,    3,  239,    2, 0x06,   13 /* Public */,
      18,    1,  246,    2, 0x06,   17 /* Public */,
      20,    1,  249,    2, 0x06,   19 /* Public */,
      22,    3,  252,    2, 0x06,   21 /* Public */,
      26,    3,  259,    2, 0x06,   25 /* Public */,
      27,    0,  266,    2, 0x06,   29 /* Public */,
      28,    1,  267,    2, 0x06,   30 /* Public */,
      29,    0,  270,    2, 0x06,   32 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      30,    1,  271,    2, 0x0a,   33 /* Public */,
      31,    1,  274,    2, 0x0a,   35 /* Public */,
      33,    0,  277,    2, 0x0a,   37 /* Public */,
      34,    4,  278,    2, 0x0a,   38 /* Public */,
      37,    3,  287,    2, 0x0a,   43 /* Public */,
      39,    3,  294,    2, 0x0a,   47 /* Public */,
      40,    3,  301,    2, 0x0a,   51 /* Public */,
      41,    3,  308,    2, 0x0a,   55 /* Public */,
      42,    0,  315,    2, 0x0a,   59 /* Public */,
      43,    0,  316,    2, 0x0a,   60 /* Public */,
      44,    3,  317,    2, 0x0a,   61 /* Public */,
      48,    2,  324,    2, 0x0a,   65 /* Public */,
      49,    0,  329,    2, 0x0a,   68 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      50,    0,  330,    2, 0x102,   69 /* Public | MethodIsConst  */,
      51,    0,  331,    2, 0x102,   70 /* Public | MethodIsConst  */,
      52,    0,  332,    2, 0x102,   71 /* Public | MethodIsConst  */,
      53,    3,  333,    2, 0x02,   72 /* Public */,
      54,    1,  340,    2, 0x02,   76 /* Public */,
      56,    0,  343,    2, 0x02,   78 /* Public */,
      57,    1,  344,    2, 0x02,   79 /* Public */,

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
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,   17,   23,   35,   36,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   25,   23,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   25,   23,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   25,   23,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   25,   23,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString,   45,   46,   47,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   17,   21,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::QString, QMetaType::Int,   55,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   58,

 // properties: name, type, flags
      50, QMetaType::Int, 0x00015103, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Client::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSClientENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClientENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClientENDCLASS_t,
        // property 'playerTurn'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
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
        // method 'playerTurnChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
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
        // method 'playerTurn'
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
        case 6: _t->playerTurnChanged(); break;
        case 7: _t->requestConnection((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 8: _t->makeMove((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->showCard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->makeAccusation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 11: _t->makeSuggestion((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 12: _t->requestStateSlot(); break;
        case 13: _t->sendConnectionRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->gameEndedSignal(); break;
        case 15: _t->testReceiveMessage((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1]))); break;
        case 16: _t->onNameEntered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->onTurnEnded(); break;
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
        case 28: { int _r = _t->playerTurn();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->isMyTurn();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: { int _r = _t->getCurrentDiceValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 31: _t->playerPositionSet((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 32: { QString _r = _t->getPlayerID((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 33: _t->emitRequestConnectionSignal(); break;
        case 34: _t->testBox((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
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
            using _t = void (Client::*)();
            if (_t _q_method = &Client::playerTurnChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Client::*)(quint32 , quint16 , QString );
            if (_t _q_method = &Client::requestConnection; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Client::*)(int );
            if (_t _q_method = &Client::makeMove; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString );
            if (_t _q_method = &Client::showCard; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString , QString , QString );
            if (_t _q_method = &Client::makeAccusation; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString , QString , QString );
            if (_t _q_method = &Client::makeSuggestion; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (_t _q_method = &Client::requestStateSlot; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString );
            if (_t _q_method = &Client::sendConnectionRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (_t _q_method = &Client::gameEndedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
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
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 35;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
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
