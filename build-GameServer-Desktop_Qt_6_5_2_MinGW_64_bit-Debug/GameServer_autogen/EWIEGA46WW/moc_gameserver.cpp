/****************************************************************************
** Meta object code from reading C++ file 'gameserver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../GameServer/gameserver.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameserver.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGameServerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGameServerENDCLASS = QtMocHelpers::stringData(
    "GameServer",
    "UpdateStateSignal",
    "",
    "username",
    "position",
    "GameStateReply",
    "requesting",
    "diceRoll",
    "faceup",
    "currentTurn",
    "SuggestionStateSignal",
    "CharacterCard*",
    "suggestedCharac",
    "WeaponCard*",
    "suggestedWeapon",
    "RoomCard*",
    "suggestedRoom",
    "PlayerResultSignal",
    "Player*",
    "playerMakingAccusation",
    "Accusation*",
    "finalAccusation",
    "result",
    "ShowCardSignal",
    "playerToShowCard",
    "nameOfCardToShow",
    "RequestCardSignal",
    "Suggestion*",
    "suggestionMade",
    "TerminateGameSignal",
    "NotifyPlayerMoveSignal",
    "dice1",
    "dice2",
    "NetworkPlayer&",
    "playerToMove",
    "invalidMove",
    "gameStateSlot",
    "DealCardsSignal",
    "numPlayers",
    "QList<QList<QString>>",
    "cards",
    "MovesAvailableSignal",
    "QList<int>",
    "optionsToMove",
    "MoveRequestedSlot",
    "player",
    "SuggestionReceivedSlot",
    "inPlayer",
    "character",
    "room",
    "weapon",
    "AccusationReceivedSlot",
    "CardShownSlot",
    "playerShown",
    "cardName",
    "AddPlayerSlot",
    "newPlayer",
    "StateRequestSlot"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGameServerENDCLASS_t {
    uint offsetsAndSizes[116];
    char stringdata0[11];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[9];
    char stringdata5[15];
    char stringdata6[11];
    char stringdata7[9];
    char stringdata8[7];
    char stringdata9[12];
    char stringdata10[22];
    char stringdata11[15];
    char stringdata12[16];
    char stringdata13[12];
    char stringdata14[16];
    char stringdata15[10];
    char stringdata16[14];
    char stringdata17[19];
    char stringdata18[8];
    char stringdata19[23];
    char stringdata20[12];
    char stringdata21[16];
    char stringdata22[7];
    char stringdata23[15];
    char stringdata24[17];
    char stringdata25[17];
    char stringdata26[18];
    char stringdata27[12];
    char stringdata28[15];
    char stringdata29[20];
    char stringdata30[23];
    char stringdata31[6];
    char stringdata32[6];
    char stringdata33[15];
    char stringdata34[13];
    char stringdata35[12];
    char stringdata36[14];
    char stringdata37[16];
    char stringdata38[11];
    char stringdata39[22];
    char stringdata40[6];
    char stringdata41[21];
    char stringdata42[11];
    char stringdata43[14];
    char stringdata44[18];
    char stringdata45[7];
    char stringdata46[23];
    char stringdata47[9];
    char stringdata48[10];
    char stringdata49[5];
    char stringdata50[7];
    char stringdata51[23];
    char stringdata52[14];
    char stringdata53[12];
    char stringdata54[9];
    char stringdata55[14];
    char stringdata56[10];
    char stringdata57[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGameServerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGameServerENDCLASS_t qt_meta_stringdata_CLASSGameServerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "GameServer"
        QT_MOC_LITERAL(11, 17),  // "UpdateStateSignal"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 8),  // "username"
        QT_MOC_LITERAL(39, 8),  // "position"
        QT_MOC_LITERAL(48, 14),  // "GameStateReply"
        QT_MOC_LITERAL(63, 10),  // "requesting"
        QT_MOC_LITERAL(74, 8),  // "diceRoll"
        QT_MOC_LITERAL(83, 6),  // "faceup"
        QT_MOC_LITERAL(90, 11),  // "currentTurn"
        QT_MOC_LITERAL(102, 21),  // "SuggestionStateSignal"
        QT_MOC_LITERAL(124, 14),  // "CharacterCard*"
        QT_MOC_LITERAL(139, 15),  // "suggestedCharac"
        QT_MOC_LITERAL(155, 11),  // "WeaponCard*"
        QT_MOC_LITERAL(167, 15),  // "suggestedWeapon"
        QT_MOC_LITERAL(183, 9),  // "RoomCard*"
        QT_MOC_LITERAL(193, 13),  // "suggestedRoom"
        QT_MOC_LITERAL(207, 18),  // "PlayerResultSignal"
        QT_MOC_LITERAL(226, 7),  // "Player*"
        QT_MOC_LITERAL(234, 22),  // "playerMakingAccusation"
        QT_MOC_LITERAL(257, 11),  // "Accusation*"
        QT_MOC_LITERAL(269, 15),  // "finalAccusation"
        QT_MOC_LITERAL(285, 6),  // "result"
        QT_MOC_LITERAL(292, 14),  // "ShowCardSignal"
        QT_MOC_LITERAL(307, 16),  // "playerToShowCard"
        QT_MOC_LITERAL(324, 16),  // "nameOfCardToShow"
        QT_MOC_LITERAL(341, 17),  // "RequestCardSignal"
        QT_MOC_LITERAL(359, 11),  // "Suggestion*"
        QT_MOC_LITERAL(371, 14),  // "suggestionMade"
        QT_MOC_LITERAL(386, 19),  // "TerminateGameSignal"
        QT_MOC_LITERAL(406, 22),  // "NotifyPlayerMoveSignal"
        QT_MOC_LITERAL(429, 5),  // "dice1"
        QT_MOC_LITERAL(435, 5),  // "dice2"
        QT_MOC_LITERAL(441, 14),  // "NetworkPlayer&"
        QT_MOC_LITERAL(456, 12),  // "playerToMove"
        QT_MOC_LITERAL(469, 11),  // "invalidMove"
        QT_MOC_LITERAL(481, 13),  // "gameStateSlot"
        QT_MOC_LITERAL(495, 15),  // "DealCardsSignal"
        QT_MOC_LITERAL(511, 10),  // "numPlayers"
        QT_MOC_LITERAL(522, 21),  // "QList<QList<QString>>"
        QT_MOC_LITERAL(544, 5),  // "cards"
        QT_MOC_LITERAL(550, 20),  // "MovesAvailableSignal"
        QT_MOC_LITERAL(571, 10),  // "QList<int>"
        QT_MOC_LITERAL(582, 13),  // "optionsToMove"
        QT_MOC_LITERAL(596, 17),  // "MoveRequestedSlot"
        QT_MOC_LITERAL(614, 6),  // "player"
        QT_MOC_LITERAL(621, 22),  // "SuggestionReceivedSlot"
        QT_MOC_LITERAL(644, 8),  // "inPlayer"
        QT_MOC_LITERAL(653, 9),  // "character"
        QT_MOC_LITERAL(663, 4),  // "room"
        QT_MOC_LITERAL(668, 6),  // "weapon"
        QT_MOC_LITERAL(675, 22),  // "AccusationReceivedSlot"
        QT_MOC_LITERAL(698, 13),  // "CardShownSlot"
        QT_MOC_LITERAL(712, 11),  // "playerShown"
        QT_MOC_LITERAL(724, 8),  // "cardName"
        QT_MOC_LITERAL(733, 13),  // "AddPlayerSlot"
        QT_MOC_LITERAL(747, 9),  // "newPlayer"
        QT_MOC_LITERAL(757, 16)   // "StateRequestSlot"
    },
    "GameServer",
    "UpdateStateSignal",
    "",
    "username",
    "position",
    "GameStateReply",
    "requesting",
    "diceRoll",
    "faceup",
    "currentTurn",
    "SuggestionStateSignal",
    "CharacterCard*",
    "suggestedCharac",
    "WeaponCard*",
    "suggestedWeapon",
    "RoomCard*",
    "suggestedRoom",
    "PlayerResultSignal",
    "Player*",
    "playerMakingAccusation",
    "Accusation*",
    "finalAccusation",
    "result",
    "ShowCardSignal",
    "playerToShowCard",
    "nameOfCardToShow",
    "RequestCardSignal",
    "Suggestion*",
    "suggestionMade",
    "TerminateGameSignal",
    "NotifyPlayerMoveSignal",
    "dice1",
    "dice2",
    "NetworkPlayer&",
    "playerToMove",
    "invalidMove",
    "gameStateSlot",
    "DealCardsSignal",
    "numPlayers",
    "QList<QList<QString>>",
    "cards",
    "MovesAvailableSignal",
    "QList<int>",
    "optionsToMove",
    "MoveRequestedSlot",
    "player",
    "SuggestionReceivedSlot",
    "inPlayer",
    "character",
    "room",
    "weapon",
    "AccusationReceivedSlot",
    "CardShownSlot",
    "playerShown",
    "cardName",
    "AddPlayerSlot",
    "newPlayer",
    "StateRequestSlot"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGameServerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  122,    2, 0x06,    1 /* Public */,
       5,    4,  127,    2, 0x06,    4 /* Public */,
      10,    3,  136,    2, 0x06,    9 /* Public */,
      17,    3,  143,    2, 0x06,   13 /* Public */,
      23,    2,  150,    2, 0x06,   17 /* Public */,
      26,    1,  155,    2, 0x06,   20 /* Public */,
      29,    0,  158,    2, 0x06,   22 /* Public */,
      30,    3,  159,    2, 0x06,   23 /* Public */,
      35,    1,  166,    2, 0x06,   27 /* Public */,
      36,    3,  169,    2, 0x06,   29 /* Public */,
      37,    2,  176,    2, 0x06,   33 /* Public */,
      41,    1,  181,    2, 0x06,   36 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      44,    2,  184,    2, 0x0a,   38 /* Public */,
      46,    4,  189,    2, 0x0a,   41 /* Public */,
      51,    4,  198,    2, 0x0a,   46 /* Public */,
      52,    2,  207,    2, 0x0a,   51 /* Public */,
      55,    1,  212,    2, 0x0a,   54 /* Public */,
      57,    1,  215,    2, 0x0a,   56 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QStringList, QMetaType::Int,    6,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13, 0x80000000 | 15,   12,   14,   16,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 20, QMetaType::Bool,   19,   21,   22,
    QMetaType::Void, 0x80000000 | 18, QMetaType::QString,   24,   25,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 33,   31,   32,   34,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QStringList, QMetaType::Int,    7,    8,    9,
    QMetaType::Void, QMetaType::Short, 0x80000000 | 39,   38,   40,
    QMetaType::Void, 0x80000000 | 42,   43,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 33, QMetaType::UInt,   45,    4,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 11, 0x80000000 | 15, 0x80000000 | 13,   47,   48,   49,   50,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 11, 0x80000000 | 15, 0x80000000 | 13,   47,   48,   49,   50,
    QMetaType::Void, 0x80000000 | 18, QMetaType::QString,   53,   54,
    QMetaType::Void, 0x80000000 | 18,   56,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject GameServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSGameServerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGameServerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGameServerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GameServer, std::true_type>,
        // method 'UpdateStateSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'GameStateReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SuggestionStateSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<CharacterCard *, std::false_type>,
        QtPrivate::TypeAndForceComplete<WeaponCard *, std::false_type>,
        QtPrivate::TypeAndForceComplete<RoomCard *, std::false_type>,
        // method 'PlayerResultSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Player *, std::false_type>,
        QtPrivate::TypeAndForceComplete<Accusation *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'ShowCardSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Player *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'RequestCardSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Suggestion *, std::false_type>,
        // method 'TerminateGameSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'NotifyPlayerMoveSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<NetworkPlayer &, std::false_type>,
        // method 'invalidMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'gameStateSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'DealCardsSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint16, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<QVector<QString>>, std::false_type>,
        // method 'MovesAvailableSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>,
        // method 'MoveRequestedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<NetworkPlayer &, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'SuggestionReceivedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Player *, std::false_type>,
        QtPrivate::TypeAndForceComplete<CharacterCard *, std::false_type>,
        QtPrivate::TypeAndForceComplete<RoomCard *, std::false_type>,
        QtPrivate::TypeAndForceComplete<WeaponCard *, std::false_type>,
        // method 'AccusationReceivedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Player *, std::false_type>,
        QtPrivate::TypeAndForceComplete<CharacterCard *, std::false_type>,
        QtPrivate::TypeAndForceComplete<RoomCard *, std::false_type>,
        QtPrivate::TypeAndForceComplete<WeaponCard *, std::false_type>,
        // method 'CardShownSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Player *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'AddPlayerSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Player *, std::false_type>,
        // method 'StateRequestSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void GameServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UpdateStateSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->GameStateReply((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 2: _t->SuggestionStateSignal((*reinterpret_cast< std::add_pointer_t<CharacterCard*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<WeaponCard*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<RoomCard*>>(_a[3]))); break;
        case 3: _t->PlayerResultSignal((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Accusation*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 4: _t->ShowCardSignal((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->RequestCardSignal((*reinterpret_cast< std::add_pointer_t<Suggestion*>>(_a[1]))); break;
        case 6: _t->TerminateGameSignal(); break;
        case 7: _t->NotifyPlayerMoveSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<NetworkPlayer&>>(_a[3]))); break;
        case 8: _t->invalidMove((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->gameStateSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 10: _t->DealCardsSignal((*reinterpret_cast< std::add_pointer_t<qint16>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QList<QString>>>>(_a[2]))); break;
        case 11: _t->MovesAvailableSignal((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 12: _t->MoveRequestedSlot((*reinterpret_cast< std::add_pointer_t<NetworkPlayer&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint32>>(_a[2]))); break;
        case 13: _t->SuggestionReceivedSlot((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<CharacterCard*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<RoomCard*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<WeaponCard*>>(_a[4]))); break;
        case 14: _t->AccusationReceivedSlot((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<CharacterCard*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<RoomCard*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<WeaponCard*>>(_a[4]))); break;
        case 15: _t->CardShownSlot((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 16: _t->AddPlayerSlot((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1]))); break;
        case 17: _t->StateRequestSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CharacterCard* >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< RoomCard* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< WeaponCard* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Accusation* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Player* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Player* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Suggestion* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QList<QString>> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CharacterCard* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Player* >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< RoomCard* >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< WeaponCard* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CharacterCard* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Player* >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< RoomCard* >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< WeaponCard* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Player* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Player* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameServer::*)(QString , int );
            if (_t _q_method = &GameServer::UpdateStateSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(QString , int , QVector<QString> , int );
            if (_t _q_method = &GameServer::GameStateReply; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(CharacterCard * , WeaponCard * , RoomCard * );
            if (_t _q_method = &GameServer::SuggestionStateSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(Player * , Accusation * , bool );
            if (_t _q_method = &GameServer::PlayerResultSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(Player * , QString );
            if (_t _q_method = &GameServer::ShowCardSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(Suggestion * );
            if (_t _q_method = &GameServer::RequestCardSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GameServer::*)();
            if (_t _q_method = &GameServer::TerminateGameSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(int , int , NetworkPlayer & );
            if (_t _q_method = &GameServer::NotifyPlayerMoveSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(QString );
            if (_t _q_method = &GameServer::invalidMove; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(int , QVector<QString> , int );
            if (_t _q_method = &GameServer::gameStateSlot; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(qint16 , QVector<QVector<QString>> );
            if (_t _q_method = &GameServer::DealCardsSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(QVector<int> );
            if (_t _q_method = &GameServer::MovesAvailableSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
    }
}

const QMetaObject *GameServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGameServerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GameServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void GameServer::UpdateStateSignal(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameServer::GameStateReply(QString _t1, int _t2, QVector<QString> _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GameServer::SuggestionStateSignal(CharacterCard * _t1, WeaponCard * _t2, RoomCard * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GameServer::PlayerResultSignal(Player * _t1, Accusation * _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GameServer::ShowCardSignal(Player * _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GameServer::RequestCardSignal(Suggestion * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GameServer::TerminateGameSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void GameServer::NotifyPlayerMoveSignal(int _t1, int _t2, NetworkPlayer & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GameServer::invalidMove(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GameServer::gameStateSlot(int _t1, QVector<QString> _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GameServer::DealCardsSignal(qint16 _t1, QVector<QVector<QString>> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GameServer::MovesAvailableSignal(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
