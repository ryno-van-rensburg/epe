/****************************************************************************
** Meta object code from reading C++ file 'gameserver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../GameServer/gameserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameServer_t {
    const uint offsetsAndSize[116];
    char stringdata0[742];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_GameServer_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_GameServer_t qt_meta_stringdata_GameServer = {
    {
QT_MOC_LITERAL(0, 10), // "GameServer"
QT_MOC_LITERAL(11, 17), // "UpdateStateSignal"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 8), // "username"
QT_MOC_LITERAL(39, 8), // "position"
QT_MOC_LITERAL(48, 14), // "GameStateReply"
QT_MOC_LITERAL(63, 10), // "requesting"
QT_MOC_LITERAL(74, 8), // "diceRoll"
QT_MOC_LITERAL(83, 6), // "faceup"
QT_MOC_LITERAL(90, 11), // "currentTurn"
QT_MOC_LITERAL(102, 21), // "SuggestionStateSignal"
QT_MOC_LITERAL(124, 14), // "CharacterCard*"
QT_MOC_LITERAL(139, 15), // "suggestedCharac"
QT_MOC_LITERAL(155, 11), // "WeaponCard*"
QT_MOC_LITERAL(167, 15), // "suggestedWeapon"
QT_MOC_LITERAL(183, 9), // "RoomCard*"
QT_MOC_LITERAL(193, 13), // "suggestedRoom"
QT_MOC_LITERAL(207, 18), // "PlayerResultSignal"
QT_MOC_LITERAL(226, 10), // "playerName"
QT_MOC_LITERAL(237, 6), // "person"
QT_MOC_LITERAL(244, 6), // "weapon"
QT_MOC_LITERAL(251, 4), // "room"
QT_MOC_LITERAL(256, 3), // "win"
QT_MOC_LITERAL(260, 14), // "ShowCardSignal"
QT_MOC_LITERAL(275, 14), // "NetworkPlayer*"
QT_MOC_LITERAL(290, 6), // "player"
QT_MOC_LITERAL(297, 4), // "card"
QT_MOC_LITERAL(302, 17), // "RequestCardSignal"
QT_MOC_LITERAL(320, 11), // "Suggestion*"
QT_MOC_LITERAL(332, 14), // "suggestionMade"
QT_MOC_LITERAL(347, 19), // "TerminateGameSignal"
QT_MOC_LITERAL(367, 22), // "NotifyPlayerMoveSignal"
QT_MOC_LITERAL(390, 5), // "dice1"
QT_MOC_LITERAL(396, 5), // "dice2"
QT_MOC_LITERAL(402, 14), // "NetworkPlayer&"
QT_MOC_LITERAL(417, 12), // "playerToMove"
QT_MOC_LITERAL(430, 11), // "invalidMove"
QT_MOC_LITERAL(442, 13), // "gameStateSlot"
QT_MOC_LITERAL(456, 15), // "DealCardsSignal"
QT_MOC_LITERAL(472, 10), // "numPlayers"
QT_MOC_LITERAL(483, 21), // "QList<QList<QString>>"
QT_MOC_LITERAL(505, 5), // "cards"
QT_MOC_LITERAL(511, 20), // "MovesAvailableSignal"
QT_MOC_LITERAL(532, 10), // "QList<int>"
QT_MOC_LITERAL(543, 13), // "optionsToMove"
QT_MOC_LITERAL(557, 10), // "portSignal"
QT_MOC_LITERAL(568, 4), // "port"
QT_MOC_LITERAL(573, 22), // "suggestionUpdateSignal"
QT_MOC_LITERAL(596, 10), // "suggestion"
QT_MOC_LITERAL(607, 12), // "acceptPlayer"
QT_MOC_LITERAL(620, 17), // "MoveRequestedSlot"
QT_MOC_LITERAL(638, 3), // "pos"
QT_MOC_LITERAL(642, 22), // "SuggestionReceivedSlot"
QT_MOC_LITERAL(665, 22), // "AccusationReceivedSlot"
QT_MOC_LITERAL(688, 13), // "CardShownSlot"
QT_MOC_LITERAL(702, 8), // "cardName"
QT_MOC_LITERAL(711, 13), // "AddPlayerSlot"
QT_MOC_LITERAL(725, 16) // "StateRequestSlot"

    },
    "GameServer\0UpdateStateSignal\0\0username\0"
    "position\0GameStateReply\0requesting\0"
    "diceRoll\0faceup\0currentTurn\0"
    "SuggestionStateSignal\0CharacterCard*\0"
    "suggestedCharac\0WeaponCard*\0suggestedWeapon\0"
    "RoomCard*\0suggestedRoom\0PlayerResultSignal\0"
    "playerName\0person\0weapon\0room\0win\0"
    "ShowCardSignal\0NetworkPlayer*\0player\0"
    "card\0RequestCardSignal\0Suggestion*\0"
    "suggestionMade\0TerminateGameSignal\0"
    "NotifyPlayerMoveSignal\0dice1\0dice2\0"
    "NetworkPlayer&\0playerToMove\0invalidMove\0"
    "gameStateSlot\0DealCardsSignal\0numPlayers\0"
    "QList<QList<QString>>\0cards\0"
    "MovesAvailableSignal\0QList<int>\0"
    "optionsToMove\0portSignal\0port\0"
    "suggestionUpdateSignal\0suggestion\0"
    "acceptPlayer\0MoveRequestedSlot\0pos\0"
    "SuggestionReceivedSlot\0AccusationReceivedSlot\0"
    "CardShownSlot\0cardName\0AddPlayerSlot\0"
    "StateRequestSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameServer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  140,    2, 0x06,    1 /* Public */,
       5,    4,  145,    2, 0x06,    4 /* Public */,
      10,    3,  154,    2, 0x06,    9 /* Public */,
      17,    5,  161,    2, 0x06,   13 /* Public */,
      23,    2,  172,    2, 0x06,   19 /* Public */,
      27,    1,  177,    2, 0x06,   22 /* Public */,
      30,    0,  180,    2, 0x06,   24 /* Public */,
      31,    3,  181,    2, 0x06,   25 /* Public */,
      36,    1,  188,    2, 0x06,   29 /* Public */,
      37,    3,  191,    2, 0x06,   31 /* Public */,
      38,    2,  198,    2, 0x06,   35 /* Public */,
      42,    1,  203,    2, 0x06,   38 /* Public */,
      45,    1,  206,    2, 0x06,   40 /* Public */,
      47,    2,  209,    2, 0x06,   42 /* Public */,
      49,    4,  214,    2, 0x06,   45 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      50,    2,  223,    2, 0x0a,   50 /* Public */,
      52,    4,  228,    2, 0x0a,   53 /* Public */,
      53,    4,  237,    2, 0x0a,   58 /* Public */,
      54,    2,  246,    2, 0x0a,   63 /* Public */,
      56,    1,  251,    2, 0x0a,   66 /* Public */,
      57,    1,  254,    2, 0x0a,   68 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QStringList, QMetaType::Int,    6,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13, 0x80000000 | 15,   12,   14,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   18,   19,   20,   21,   22,
    QMetaType::Void, 0x80000000 | 24, QMetaType::QString,   25,   26,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 34,   32,   33,   35,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QStringList, QMetaType::Int,    7,    8,    9,
    QMetaType::Void, QMetaType::Short, 0x80000000 | 40,   39,   41,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,   48,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,   19,   32,   33,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 34, QMetaType::UInt,   25,   51,
    QMetaType::Void, 0x80000000 | 34, QMetaType::QString, QMetaType::QString, QMetaType::QString,   25,   19,   20,   21,
    QMetaType::Void, 0x80000000 | 34, QMetaType::QString, QMetaType::QString, QMetaType::QString,   25,   19,   20,   21,
    QMetaType::Void, 0x80000000 | 34, QMetaType::QString,   25,   55,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void GameServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UpdateStateSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->GameStateReply((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 2: _t->SuggestionStateSignal((*reinterpret_cast< std::add_pointer_t<CharacterCard*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<WeaponCard*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<RoomCard*>>(_a[3]))); break;
        case 3: _t->PlayerResultSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 4: _t->ShowCardSignal((*reinterpret_cast< std::add_pointer_t<NetworkPlayer*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->RequestCardSignal((*reinterpret_cast< std::add_pointer_t<Suggestion*>>(_a[1]))); break;
        case 6: _t->TerminateGameSignal(); break;
        case 7: _t->NotifyPlayerMoveSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<NetworkPlayer&>>(_a[3]))); break;
        case 8: _t->invalidMove((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->gameStateSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 10: _t->DealCardsSignal((*reinterpret_cast< std::add_pointer_t<qint16>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QList<QString>>>>(_a[2]))); break;
        case 11: _t->MovesAvailableSignal((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 12: _t->portSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->suggestionUpdateSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[2]))); break;
        case 14: _t->acceptPlayer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 15: _t->MoveRequestedSlot((*reinterpret_cast< std::add_pointer_t<NetworkPlayer&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint32>>(_a[2]))); break;
        case 16: _t->SuggestionReceivedSlot((*reinterpret_cast< std::add_pointer_t<NetworkPlayer&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 17: _t->AccusationReceivedSlot((*reinterpret_cast< std::add_pointer_t<NetworkPlayer&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 18: _t->CardShownSlot((*reinterpret_cast< std::add_pointer_t<NetworkPlayer&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 19: _t->AddPlayerSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->StateRequestSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
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
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NetworkPlayer* >(); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameServer::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameServer::UpdateStateSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(QString , int , QVector<QString> , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameServer::GameStateReply)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(CharacterCard * , WeaponCard * , RoomCard * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameServer::SuggestionStateSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(QString , QString , QString , QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameServer::PlayerResultSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(NetworkPlayer * , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameServer::ShowCardSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(Suggestion * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameServer::RequestCardSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GameServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameServer::TerminateGameSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(int , int , NetworkPlayer & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameServer::NotifyPlayerMoveSignal)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameServer::invalidMove)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(int , QVector<QString> , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameServer::gameStateSlot)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(qint16 , QVector<QVector<QString>> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameServer::DealCardsSignal)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameServer::MovesAvailableSignal)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameServer::portSignal)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(QString , QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameServer::suggestionUpdateSignal)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (GameServer::*)(QString , QString , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameServer::acceptPlayer)) {
                *result = 14;
                return;
            }
        }
    }
}

const QMetaObject GameServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GameServer.offsetsAndSize,
    qt_meta_data_GameServer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_GameServer_t
, QtPrivate::TypeAndForceComplete<GameServer, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<CharacterCard *, std::false_type>, QtPrivate::TypeAndForceComplete<WeaponCard *, std::false_type>, QtPrivate::TypeAndForceComplete<RoomCard *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NetworkPlayer *, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Suggestion *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<NetworkPlayer &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qint16, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QVector<QString>>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NetworkPlayer &, std::false_type>, QtPrivate::TypeAndForceComplete<quint32, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NetworkPlayer &, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NetworkPlayer &, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NetworkPlayer &, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *GameServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameServer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GameServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
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
void GameServer::PlayerResultSignal(QString _t1, QString _t2, QString _t3, QString _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GameServer::ShowCardSignal(NetworkPlayer * _t1, QString _t2)
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

// SIGNAL 12
void GameServer::portSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GameServer::suggestionUpdateSignal(QString _t1, QVector<QString> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void GameServer::acceptPlayer(QString _t1, QString _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
