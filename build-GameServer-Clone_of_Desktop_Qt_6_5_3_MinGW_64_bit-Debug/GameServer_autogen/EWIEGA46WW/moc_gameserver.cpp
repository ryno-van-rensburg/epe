/****************************************************************************
** Meta object code from reading C++ file 'gameserver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
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
struct qt_meta_stringdata_CLASSGameServerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGameServerENDCLASS = QtMocHelpers::stringData(
    "GameServer",
    "UpdateStateSignal",
    "",
    "Player*",
    "currPlayer",
    "boardPos",
    "GameStateReply",
    "QList<Player*>",
    "playersInGame",
    "QList<CharacterCard*>",
    "faceUpCharacters",
    "QList<WeaponCard*>",
    "faceUpWeapons",
    "QList<RoomCard*>",
    "faceUpRooms",
    "SuggestionStateSignal",
    "CharacterCard*",
    "suggestedCharac",
    "WeaponCard*",
    "suggestedWeapon",
    "RoomCard*",
    "suggestedRoom",
    "PlayerResultSignal",
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
    "playerToMove",
    "destination",
    "SendErrorSignal",
    "ErrorEnum",
    "StartGameSignal",
    "DealCardsSignal",
    "playerToReceiveCards",
    "cCards",
    "wCards",
    "rCards",
    "MovesAvailableSignal",
    "QList<int>",
    "optionsToMove",
    "MoveRequestedSlot",
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
    uint offsetsAndSizes[122];
    char stringdata0[11];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[11];
    char stringdata5[9];
    char stringdata6[15];
    char stringdata7[15];
    char stringdata8[14];
    char stringdata9[22];
    char stringdata10[17];
    char stringdata11[19];
    char stringdata12[14];
    char stringdata13[17];
    char stringdata14[12];
    char stringdata15[22];
    char stringdata16[15];
    char stringdata17[16];
    char stringdata18[12];
    char stringdata19[16];
    char stringdata20[10];
    char stringdata21[14];
    char stringdata22[19];
    char stringdata23[23];
    char stringdata24[12];
    char stringdata25[16];
    char stringdata26[7];
    char stringdata27[15];
    char stringdata28[17];
    char stringdata29[17];
    char stringdata30[18];
    char stringdata31[12];
    char stringdata32[15];
    char stringdata33[20];
    char stringdata34[23];
    char stringdata35[13];
    char stringdata36[12];
    char stringdata37[16];
    char stringdata38[10];
    char stringdata39[16];
    char stringdata40[16];
    char stringdata41[21];
    char stringdata42[7];
    char stringdata43[7];
    char stringdata44[7];
    char stringdata45[21];
    char stringdata46[11];
    char stringdata47[14];
    char stringdata48[18];
    char stringdata49[23];
    char stringdata50[9];
    char stringdata51[10];
    char stringdata52[5];
    char stringdata53[7];
    char stringdata54[23];
    char stringdata55[14];
    char stringdata56[12];
    char stringdata57[9];
    char stringdata58[14];
    char stringdata59[10];
    char stringdata60[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGameServerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGameServerENDCLASS_t qt_meta_stringdata_CLASSGameServerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "GameServer"
        QT_MOC_LITERAL(11, 17),  // "UpdateStateSignal"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 7),  // "Player*"
        QT_MOC_LITERAL(38, 10),  // "currPlayer"
        QT_MOC_LITERAL(49, 8),  // "boardPos"
        QT_MOC_LITERAL(58, 14),  // "GameStateReply"
        QT_MOC_LITERAL(73, 14),  // "QList<Player*>"
        QT_MOC_LITERAL(88, 13),  // "playersInGame"
        QT_MOC_LITERAL(102, 21),  // "QList<CharacterCard*>"
        QT_MOC_LITERAL(124, 16),  // "faceUpCharacters"
        QT_MOC_LITERAL(141, 18),  // "QList<WeaponCard*>"
        QT_MOC_LITERAL(160, 13),  // "faceUpWeapons"
        QT_MOC_LITERAL(174, 16),  // "QList<RoomCard*>"
        QT_MOC_LITERAL(191, 11),  // "faceUpRooms"
        QT_MOC_LITERAL(203, 21),  // "SuggestionStateSignal"
        QT_MOC_LITERAL(225, 14),  // "CharacterCard*"
        QT_MOC_LITERAL(240, 15),  // "suggestedCharac"
        QT_MOC_LITERAL(256, 11),  // "WeaponCard*"
        QT_MOC_LITERAL(268, 15),  // "suggestedWeapon"
        QT_MOC_LITERAL(284, 9),  // "RoomCard*"
        QT_MOC_LITERAL(294, 13),  // "suggestedRoom"
        QT_MOC_LITERAL(308, 18),  // "PlayerResultSignal"
        QT_MOC_LITERAL(327, 22),  // "playerMakingAccusation"
        QT_MOC_LITERAL(350, 11),  // "Accusation*"
        QT_MOC_LITERAL(362, 15),  // "finalAccusation"
        QT_MOC_LITERAL(378, 6),  // "result"
        QT_MOC_LITERAL(385, 14),  // "ShowCardSignal"
        QT_MOC_LITERAL(400, 16),  // "playerToShowCard"
        QT_MOC_LITERAL(417, 16),  // "nameOfCardToShow"
        QT_MOC_LITERAL(434, 17),  // "RequestCardSignal"
        QT_MOC_LITERAL(452, 11),  // "Suggestion*"
        QT_MOC_LITERAL(464, 14),  // "suggestionMade"
        QT_MOC_LITERAL(479, 19),  // "TerminateGameSignal"
        QT_MOC_LITERAL(499, 22),  // "NotifyPlayerMoveSignal"
        QT_MOC_LITERAL(522, 12),  // "playerToMove"
        QT_MOC_LITERAL(535, 11),  // "destination"
        QT_MOC_LITERAL(547, 15),  // "SendErrorSignal"
        QT_MOC_LITERAL(563, 9),  // "ErrorEnum"
        QT_MOC_LITERAL(573, 15),  // "StartGameSignal"
        QT_MOC_LITERAL(589, 15),  // "DealCardsSignal"
        QT_MOC_LITERAL(605, 20),  // "playerToReceiveCards"
        QT_MOC_LITERAL(626, 6),  // "cCards"
        QT_MOC_LITERAL(633, 6),  // "wCards"
        QT_MOC_LITERAL(640, 6),  // "rCards"
        QT_MOC_LITERAL(647, 20),  // "MovesAvailableSignal"
        QT_MOC_LITERAL(668, 10),  // "QList<int>"
        QT_MOC_LITERAL(679, 13),  // "optionsToMove"
        QT_MOC_LITERAL(693, 17),  // "MoveRequestedSlot"
        QT_MOC_LITERAL(711, 22),  // "SuggestionReceivedSlot"
        QT_MOC_LITERAL(734, 8),  // "inPlayer"
        QT_MOC_LITERAL(743, 9),  // "character"
        QT_MOC_LITERAL(753, 4),  // "room"
        QT_MOC_LITERAL(758, 6),  // "weapon"
        QT_MOC_LITERAL(765, 22),  // "AccusationReceivedSlot"
        QT_MOC_LITERAL(788, 13),  // "CardShownSlot"
        QT_MOC_LITERAL(802, 11),  // "playerShown"
        QT_MOC_LITERAL(814, 8),  // "cardName"
        QT_MOC_LITERAL(823, 13),  // "AddPlayerSlot"
        QT_MOC_LITERAL(837, 9),  // "newPlayer"
        QT_MOC_LITERAL(847, 16)   // "StateRequestSlot"
    },
    "GameServer",
    "UpdateStateSignal",
    "",
    "Player*",
    "currPlayer",
    "boardPos",
    "GameStateReply",
    "QList<Player*>",
    "playersInGame",
    "QList<CharacterCard*>",
    "faceUpCharacters",
    "QList<WeaponCard*>",
    "faceUpWeapons",
    "QList<RoomCard*>",
    "faceUpRooms",
    "SuggestionStateSignal",
    "CharacterCard*",
    "suggestedCharac",
    "WeaponCard*",
    "suggestedWeapon",
    "RoomCard*",
    "suggestedRoom",
    "PlayerResultSignal",
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
    "playerToMove",
    "destination",
    "SendErrorSignal",
    "ErrorEnum",
    "StartGameSignal",
    "DealCardsSignal",
    "playerToReceiveCards",
    "cCards",
    "wCards",
    "rCards",
    "MovesAvailableSignal",
    "QList<int>",
    "optionsToMove",
    "MoveRequestedSlot",
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
       6,    7,  127,    2, 0x06,    4 /* Public */,
      15,    3,  142,    2, 0x06,   12 /* Public */,
      22,    3,  149,    2, 0x06,   16 /* Public */,
      27,    2,  156,    2, 0x06,   20 /* Public */,
      30,    1,  161,    2, 0x06,   23 /* Public */,
      33,    0,  164,    2, 0x06,   25 /* Public */,
      34,    2,  165,    2, 0x06,   26 /* Public */,
      37,    1,  170,    2, 0x06,   29 /* Public */,
      39,    0,  173,    2, 0x06,   31 /* Public */,
      40,    4,  174,    2, 0x06,   32 /* Public */,
      45,    1,  183,    2, 0x06,   37 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      48,    2,  186,    2, 0x0a,   39 /* Public */,
      49,    4,  191,    2, 0x0a,   42 /* Public */,
      54,    4,  200,    2, 0x0a,   47 /* Public */,
      55,    2,  209,    2, 0x0a,   52 /* Public */,
      58,    1,  214,    2, 0x0a,   55 /* Public */,
      60,    0,  217,    2, 0x0a,   57 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 9, 0x80000000 | 11, 0x80000000 | 13,    8,    2,    2,    2,   10,   12,   14,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 18, 0x80000000 | 20,   17,   19,   21,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 24, QMetaType::Bool,   23,   25,   26,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,   28,   29,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,   35,   36,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 9, 0x80000000 | 11, 0x80000000 | 13,   41,   42,   43,   44,
    QMetaType::Void, 0x80000000 | 46,   47,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,   35,   36,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 16, 0x80000000 | 20, 0x80000000 | 18,   50,   51,   52,   53,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 16, 0x80000000 | 20, 0x80000000 | 18,   50,   51,   52,   53,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,   56,   57,
    QMetaType::Void, 0x80000000 | 3,   59,
    QMetaType::Void,

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
        QtPrivate::TypeAndForceComplete<Player *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'GameStateReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<Player*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<CharacterCard*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<WeaponCard*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<RoomCard*>, std::false_type>,
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
        QtPrivate::TypeAndForceComplete<Player *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SendErrorSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'StartGameSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DealCardsSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Player *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<CharacterCard*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<WeaponCard*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<RoomCard*>, std::false_type>,
        // method 'MovesAvailableSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>,
        // method 'MoveRequestedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Player *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
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
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GameServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UpdateStateSignal((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->GameStateReply((*reinterpret_cast< std::add_pointer_t<QList<Player*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QList<CharacterCard*>>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QList<WeaponCard*>>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QList<RoomCard*>>>(_a[7]))); break;
        case 2: _t->SuggestionStateSignal((*reinterpret_cast< std::add_pointer_t<CharacterCard*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<WeaponCard*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<RoomCard*>>(_a[3]))); break;
        case 3: _t->PlayerResultSignal((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Accusation*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 4: _t->ShowCardSignal((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->RequestCardSignal((*reinterpret_cast< std::add_pointer_t<Suggestion*>>(_a[1]))); break;
        case 6: _t->TerminateGameSignal(); break;
        case 7: _t->NotifyPlayerMoveSignal((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->SendErrorSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->StartGameSignal(); break;
        case 10: _t->DealCardsSignal((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<CharacterCard*>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<WeaponCard*>>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QList<RoomCard*>>>(_a[4]))); break;
        case 11: _t->MovesAvailableSignal((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 12: _t->MoveRequestedSlot((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 13: _t->SuggestionReceivedSlot((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<CharacterCard*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<RoomCard*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<WeaponCard*>>(_a[4]))); break;
        case 14: _t->AccusationReceivedSlot((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<CharacterCard*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<RoomCard*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<WeaponCard*>>(_a[4]))); break;
        case 15: _t->CardShownSlot((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 16: _t->AddPlayerSlot((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1]))); break;
        case 17: _t->StateRequestSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Player* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<CharacterCard*> >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<Player*> >(); break;
            case 6:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<RoomCard*> >(); break;
            case 5:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<WeaponCard*> >(); break;
            }
            break;
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
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Player* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Player* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<CharacterCard*> >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<RoomCard*> >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<WeaponCard*> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Player* >(); break;
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
            using _t = void (GameServer::*)(Player * , int );
            if (_t _q_method = &GameServer::UpdateStateSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(QVector<Player*> , int , int , int , QVector<CharacterCard*> , QVector<WeaponCard*> , QVector<RoomCard*> );
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
            using _t = void (GameServer::*)(Player * , int );
            if (_t _q_method = &GameServer::NotifyPlayerMoveSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(QString );
            if (_t _q_method = &GameServer::SendErrorSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GameServer::*)();
            if (_t _q_method = &GameServer::StartGameSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(Player * , QVector<CharacterCard*> , QVector<WeaponCard*> , QVector<RoomCard*> );
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
void GameServer::UpdateStateSignal(Player * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameServer::GameStateReply(QVector<Player*> _t1, int _t2, int _t3, int _t4, QVector<CharacterCard*> _t5, QVector<WeaponCard*> _t6, QVector<RoomCard*> _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
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
void GameServer::NotifyPlayerMoveSignal(Player * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GameServer::SendErrorSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GameServer::StartGameSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void GameServer::DealCardsSignal(Player * _t1, QVector<CharacterCard*> _t2, QVector<WeaponCard*> _t3, QVector<RoomCard*> _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GameServer::MovesAvailableSignal(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
