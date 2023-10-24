/****************************************************************************
** Meta object code from reading C++ file 'clientmessagebroker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cluedo_gui/clientmessagebroker.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientmessagebroker.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSClientMessageBrokerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSClientMessageBrokerENDCLASS = QtMocHelpers::stringData(
    "ClientMessageBroker",
    "connectionStarted",
    "",
    "username",
    "gameStartedSignal",
    "numPlayers",
    "players",
    "dice1",
    "currentTurn",
    "faceUpCards",
    "playerAcceptedSignal",
    "person",
    "dice2",
    "connectionRejectedSignal",
    "reason",
    "suggestionStateUpdate",
    "weapon",
    "room",
    "accusationResultSignal",
    "cards",
    "win",
    "turnSignal",
    "cardsDealt",
    "cardShown",
    "hasCard",
    "asked",
    "showed",
    "cardShownToPlayer",
    "card",
    "playerKicked",
    "gameEndedSignal",
    "gameStateSignal",
    "dice",
    "faceupCards",
    "playerResult",
    "accusation",
    "errorSignal",
    "ERROR_TYPE",
    "err",
    "moveUpdate",
    "position",
    "cardRequestedSignal",
    "suggestion",
    "invalidMove",
    "requestConnection",
    "address",
    "port",
    "makeMove",
    "showCard",
    "makeAccusation",
    "makeSuggestion",
    "requestStateSlot",
    "sendConnectionRequest",
    "unpackGameState",
    "Message&",
    "msg",
    "unpackCardRequested",
    "unpackMove",
    "unpackConnectionAccepted",
    "unpackConnectionRejected",
    "unpackPlayerResult",
    "unpackGameTerminated",
    "unpackCardShown",
    "unpackCardsDealt",
    "unpackSuggestionStateUpdate",
    "unpackPlayerTurn",
    "unpackKick",
    "unpackShowCardToPlayer"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClientMessageBrokerENDCLASS_t {
    uint offsetsAndSizes[136];
    char stringdata0[20];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[18];
    char stringdata5[11];
    char stringdata6[8];
    char stringdata7[6];
    char stringdata8[12];
    char stringdata9[12];
    char stringdata10[21];
    char stringdata11[7];
    char stringdata12[6];
    char stringdata13[25];
    char stringdata14[7];
    char stringdata15[22];
    char stringdata16[7];
    char stringdata17[5];
    char stringdata18[23];
    char stringdata19[6];
    char stringdata20[4];
    char stringdata21[11];
    char stringdata22[11];
    char stringdata23[10];
    char stringdata24[8];
    char stringdata25[6];
    char stringdata26[7];
    char stringdata27[18];
    char stringdata28[5];
    char stringdata29[13];
    char stringdata30[16];
    char stringdata31[16];
    char stringdata32[5];
    char stringdata33[12];
    char stringdata34[13];
    char stringdata35[11];
    char stringdata36[12];
    char stringdata37[11];
    char stringdata38[4];
    char stringdata39[11];
    char stringdata40[9];
    char stringdata41[20];
    char stringdata42[11];
    char stringdata43[12];
    char stringdata44[18];
    char stringdata45[8];
    char stringdata46[5];
    char stringdata47[9];
    char stringdata48[9];
    char stringdata49[15];
    char stringdata50[15];
    char stringdata51[17];
    char stringdata52[22];
    char stringdata53[16];
    char stringdata54[9];
    char stringdata55[4];
    char stringdata56[20];
    char stringdata57[11];
    char stringdata58[25];
    char stringdata59[25];
    char stringdata60[19];
    char stringdata61[21];
    char stringdata62[16];
    char stringdata63[17];
    char stringdata64[28];
    char stringdata65[17];
    char stringdata66[11];
    char stringdata67[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSClientMessageBrokerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSClientMessageBrokerENDCLASS_t qt_meta_stringdata_CLASSClientMessageBrokerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "ClientMessageBroker"
        QT_MOC_LITERAL(20, 17),  // "connectionStarted"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 8),  // "username"
        QT_MOC_LITERAL(48, 17),  // "gameStartedSignal"
        QT_MOC_LITERAL(66, 10),  // "numPlayers"
        QT_MOC_LITERAL(77, 7),  // "players"
        QT_MOC_LITERAL(85, 5),  // "dice1"
        QT_MOC_LITERAL(91, 11),  // "currentTurn"
        QT_MOC_LITERAL(103, 11),  // "faceUpCards"
        QT_MOC_LITERAL(115, 20),  // "playerAcceptedSignal"
        QT_MOC_LITERAL(136, 6),  // "person"
        QT_MOC_LITERAL(143, 5),  // "dice2"
        QT_MOC_LITERAL(149, 24),  // "connectionRejectedSignal"
        QT_MOC_LITERAL(174, 6),  // "reason"
        QT_MOC_LITERAL(181, 21),  // "suggestionStateUpdate"
        QT_MOC_LITERAL(203, 6),  // "weapon"
        QT_MOC_LITERAL(210, 4),  // "room"
        QT_MOC_LITERAL(215, 22),  // "accusationResultSignal"
        QT_MOC_LITERAL(238, 5),  // "cards"
        QT_MOC_LITERAL(244, 3),  // "win"
        QT_MOC_LITERAL(248, 10),  // "turnSignal"
        QT_MOC_LITERAL(259, 10),  // "cardsDealt"
        QT_MOC_LITERAL(270, 9),  // "cardShown"
        QT_MOC_LITERAL(280, 7),  // "hasCard"
        QT_MOC_LITERAL(288, 5),  // "asked"
        QT_MOC_LITERAL(294, 6),  // "showed"
        QT_MOC_LITERAL(301, 17),  // "cardShownToPlayer"
        QT_MOC_LITERAL(319, 4),  // "card"
        QT_MOC_LITERAL(324, 12),  // "playerKicked"
        QT_MOC_LITERAL(337, 15),  // "gameEndedSignal"
        QT_MOC_LITERAL(353, 15),  // "gameStateSignal"
        QT_MOC_LITERAL(369, 4),  // "dice"
        QT_MOC_LITERAL(374, 11),  // "faceupCards"
        QT_MOC_LITERAL(386, 12),  // "playerResult"
        QT_MOC_LITERAL(399, 10),  // "accusation"
        QT_MOC_LITERAL(410, 11),  // "errorSignal"
        QT_MOC_LITERAL(422, 10),  // "ERROR_TYPE"
        QT_MOC_LITERAL(433, 3),  // "err"
        QT_MOC_LITERAL(437, 10),  // "moveUpdate"
        QT_MOC_LITERAL(448, 8),  // "position"
        QT_MOC_LITERAL(457, 19),  // "cardRequestedSignal"
        QT_MOC_LITERAL(477, 10),  // "suggestion"
        QT_MOC_LITERAL(488, 11),  // "invalidMove"
        QT_MOC_LITERAL(500, 17),  // "requestConnection"
        QT_MOC_LITERAL(518, 7),  // "address"
        QT_MOC_LITERAL(526, 4),  // "port"
        QT_MOC_LITERAL(531, 8),  // "makeMove"
        QT_MOC_LITERAL(540, 8),  // "showCard"
        QT_MOC_LITERAL(549, 14),  // "makeAccusation"
        QT_MOC_LITERAL(564, 14),  // "makeSuggestion"
        QT_MOC_LITERAL(579, 16),  // "requestStateSlot"
        QT_MOC_LITERAL(596, 21),  // "sendConnectionRequest"
        QT_MOC_LITERAL(618, 15),  // "unpackGameState"
        QT_MOC_LITERAL(634, 8),  // "Message&"
        QT_MOC_LITERAL(643, 3),  // "msg"
        QT_MOC_LITERAL(647, 19),  // "unpackCardRequested"
        QT_MOC_LITERAL(667, 10),  // "unpackMove"
        QT_MOC_LITERAL(678, 24),  // "unpackConnectionAccepted"
        QT_MOC_LITERAL(703, 24),  // "unpackConnectionRejected"
        QT_MOC_LITERAL(728, 18),  // "unpackPlayerResult"
        QT_MOC_LITERAL(747, 20),  // "unpackGameTerminated"
        QT_MOC_LITERAL(768, 15),  // "unpackCardShown"
        QT_MOC_LITERAL(784, 16),  // "unpackCardsDealt"
        QT_MOC_LITERAL(801, 27),  // "unpackSuggestionStateUpdate"
        QT_MOC_LITERAL(829, 16),  // "unpackPlayerTurn"
        QT_MOC_LITERAL(846, 10),  // "unpackKick"
        QT_MOC_LITERAL(857, 22)   // "unpackShowCardToPlayer"
    },
    "ClientMessageBroker",
    "connectionStarted",
    "",
    "username",
    "gameStartedSignal",
    "numPlayers",
    "players",
    "dice1",
    "currentTurn",
    "faceUpCards",
    "playerAcceptedSignal",
    "person",
    "dice2",
    "connectionRejectedSignal",
    "reason",
    "suggestionStateUpdate",
    "weapon",
    "room",
    "accusationResultSignal",
    "cards",
    "win",
    "turnSignal",
    "cardsDealt",
    "cardShown",
    "hasCard",
    "asked",
    "showed",
    "cardShownToPlayer",
    "card",
    "playerKicked",
    "gameEndedSignal",
    "gameStateSignal",
    "dice",
    "faceupCards",
    "playerResult",
    "accusation",
    "errorSignal",
    "ERROR_TYPE",
    "err",
    "moveUpdate",
    "position",
    "cardRequestedSignal",
    "suggestion",
    "invalidMove",
    "requestConnection",
    "address",
    "port",
    "makeMove",
    "showCard",
    "makeAccusation",
    "makeSuggestion",
    "requestStateSlot",
    "sendConnectionRequest",
    "unpackGameState",
    "Message&",
    "msg",
    "unpackCardRequested",
    "unpackMove",
    "unpackConnectionAccepted",
    "unpackConnectionRejected",
    "unpackPlayerResult",
    "unpackGameTerminated",
    "unpackCardShown",
    "unpackCardsDealt",
    "unpackSuggestionStateUpdate",
    "unpackPlayerTurn",
    "unpackKick",
    "unpackShowCardToPlayer"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClientMessageBrokerENDCLASS[] = {

 // content:
      11,       // revision
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
      21,    3,  282,    2, 0x06,   24 /* Public */,
      22,    1,  289,    2, 0x06,   28 /* Public */,
      23,    3,  292,    2, 0x06,   30 /* Public */,
      27,    2,  299,    2, 0x06,   34 /* Public */,
      29,    2,  304,    2, 0x06,   37 /* Public */,
      30,    0,  309,    2, 0x06,   40 /* Public */,
      31,    5,  310,    2, 0x06,   41 /* Public */,
      34,    3,  321,    2, 0x06,   47 /* Public */,
      36,    2,  328,    2, 0x06,   51 /* Public */,
      39,    2,  333,    2, 0x06,   54 /* Public */,
      41,    2,  338,    2, 0x06,   57 /* Public */,
      43,    0,  343,    2, 0x06,   60 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      44,    3,  344,    2, 0x0a,   61 /* Public */,
      47,    1,  351,    2, 0x0a,   65 /* Public */,
      48,    1,  354,    2, 0x0a,   67 /* Public */,
      49,    3,  357,    2, 0x0a,   69 /* Public */,
      50,    3,  364,    2, 0x0a,   73 /* Public */,
      51,    0,  371,    2, 0x0a,   77 /* Public */,
      52,    1,  372,    2, 0x0a,   78 /* Public */,
      53,    1,  375,    2, 0x08,   80 /* Private */,
      56,    1,  378,    2, 0x08,   82 /* Private */,
      57,    1,  381,    2, 0x08,   84 /* Private */,
      58,    1,  384,    2, 0x08,   86 /* Private */,
      59,    1,  387,    2, 0x08,   88 /* Private */,
      60,    1,  390,    2, 0x08,   90 /* Private */,
      61,    1,  393,    2, 0x08,   92 /* Private */,
      62,    1,  396,    2, 0x08,   94 /* Private */,
      63,    1,  399,    2, 0x08,   96 /* Private */,
      64,    1,  402,    2, 0x08,   98 /* Private */,
      65,    1,  405,    2, 0x08,  100 /* Private */,
      66,    1,  408,    2, 0x08,  102 /* Private */,
      67,    1,  411,    2, 0x08,  104 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QJsonArray, QMetaType::Int, QMetaType::Int, QMetaType::QStringList,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,   11,    7,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,   11,   16,   17,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Bool,   19,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,    7,   12,
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

Q_CONSTINIT const QMetaObject ClientMessageBroker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSClientMessageBrokerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClientMessageBrokerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClientMessageBrokerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ClientMessageBroker, std::true_type>,
        // method 'connectionStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'gameStartedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>,
        // method 'playerAcceptedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'connectionRejectedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'suggestionStateUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'accusationResultSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'turnSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cardsDealt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>,
        // method 'cardShown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'cardShownToPlayer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'playerKicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'gameEndedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gameStateSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>,
        // method 'playerResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'errorSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ERROR_TYPE, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'moveUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cardRequestedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>,
        // method 'invalidMove'
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
        // method 'unpackGameState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>,
        // method 'unpackCardRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>,
        // method 'unpackMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>,
        // method 'unpackConnectionAccepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>,
        // method 'unpackConnectionRejected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>,
        // method 'unpackPlayerResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>,
        // method 'unpackGameTerminated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>,
        // method 'unpackCardShown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>,
        // method 'unpackCardsDealt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>,
        // method 'unpackSuggestionStateUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>,
        // method 'unpackPlayerTurn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>,
        // method 'unpackKick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>,
        // method 'unpackShowCardToPlayer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>
    >,
    nullptr
} };

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
        case 6: _t->turnSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
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
            if (_t _q_method = &ClientMessageBroker::connectionStarted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(int , QJsonArray , int , int , QVector<QString> );
            if (_t _q_method = &ClientMessageBroker::gameStartedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString , QString , int , int );
            if (_t _q_method = &ClientMessageBroker::playerAcceptedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString );
            if (_t _q_method = &ClientMessageBroker::connectionRejectedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString , QString , QString , QString );
            if (_t _q_method = &ClientMessageBroker::suggestionStateUpdate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QVector<QString> , bool );
            if (_t _q_method = &ClientMessageBroker::accusationResultSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString , int , int );
            if (_t _q_method = &ClientMessageBroker::turnSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QVector<QString> );
            if (_t _q_method = &ClientMessageBroker::cardsDealt; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(bool , QString , QString );
            if (_t _q_method = &ClientMessageBroker::cardShown; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString , QString );
            if (_t _q_method = &ClientMessageBroker::cardShownToPlayer; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString , QString );
            if (_t _q_method = &ClientMessageBroker::playerKicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)();
            if (_t _q_method = &ClientMessageBroker::gameEndedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(int , QJsonArray , int , int , QJsonArray );
            if (_t _q_method = &ClientMessageBroker::gameStateSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString , QVector<QString> , bool );
            if (_t _q_method = &ClientMessageBroker::playerResult; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(ERROR_TYPE , QString );
            if (_t _q_method = &ClientMessageBroker::errorSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString , int );
            if (_t _q_method = &ClientMessageBroker::moveUpdate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString , QVector<QString> );
            if (_t _q_method = &ClientMessageBroker::cardRequestedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)();
            if (_t _q_method = &ClientMessageBroker::invalidMove; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
    }
}

const QMetaObject *ClientMessageBroker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientMessageBroker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSClientMessageBrokerENDCLASS.stringdata0))
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
void ClientMessageBroker::turnSignal(QString _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
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
