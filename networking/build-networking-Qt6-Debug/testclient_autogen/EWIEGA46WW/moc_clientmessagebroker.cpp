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
    const uint offsetsAndSize[74];
    char stringdata0[446];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ClientMessageBroker_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ClientMessageBroker_t qt_meta_stringdata_ClientMessageBroker = {
    {
QT_MOC_LITERAL(0, 19), // "ClientMessageBroker"
QT_MOC_LITERAL(20, 17), // "gameStartedSignal"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 20), // "playerAcceptedSignal"
QT_MOC_LITERAL(60, 24), // "connectionRejectedSignal"
QT_MOC_LITERAL(85, 6), // "reason"
QT_MOC_LITERAL(92, 21), // "suggestionStateUpdate"
QT_MOC_LITERAL(114, 22), // "accusationResultSignal"
QT_MOC_LITERAL(137, 14), // "yourTurnSignal"
QT_MOC_LITERAL(152, 15), // "gameEndedSignal"
QT_MOC_LITERAL(168, 15), // "gameStateSignal"
QT_MOC_LITERAL(184, 10), // "numPlayers"
QT_MOC_LITERAL(195, 7), // "players"
QT_MOC_LITERAL(203, 4), // "dice"
QT_MOC_LITERAL(208, 11), // "currentTurn"
QT_MOC_LITERAL(220, 11), // "faceupCards"
QT_MOC_LITERAL(232, 11), // "errorSignal"
QT_MOC_LITERAL(244, 10), // "ERROR_TYPE"
QT_MOC_LITERAL(255, 3), // "err"
QT_MOC_LITERAL(259, 8), // "username"
QT_MOC_LITERAL(268, 19), // "cardRequestedSignal"
QT_MOC_LITERAL(288, 17), // "requestConnection"
QT_MOC_LITERAL(306, 7), // "address"
QT_MOC_LITERAL(314, 4), // "port"
QT_MOC_LITERAL(319, 8), // "makeMove"
QT_MOC_LITERAL(328, 8), // "position"
QT_MOC_LITERAL(337, 8), // "showCard"
QT_MOC_LITERAL(346, 4), // "card"
QT_MOC_LITERAL(351, 14), // "makeAccusation"
QT_MOC_LITERAL(366, 6), // "person"
QT_MOC_LITERAL(373, 6), // "weapon"
QT_MOC_LITERAL(380, 4), // "room"
QT_MOC_LITERAL(385, 14), // "makeSuggestion"
QT_MOC_LITERAL(400, 16), // "requestStateSlot"
QT_MOC_LITERAL(417, 15), // "unpackGameState"
QT_MOC_LITERAL(433, 8), // "Message&"
QT_MOC_LITERAL(442, 3) // "msg"

    },
    "ClientMessageBroker\0gameStartedSignal\0"
    "\0playerAcceptedSignal\0connectionRejectedSignal\0"
    "reason\0suggestionStateUpdate\0"
    "accusationResultSignal\0yourTurnSignal\0"
    "gameEndedSignal\0gameStateSignal\0"
    "numPlayers\0players\0dice\0currentTurn\0"
    "faceupCards\0errorSignal\0ERROR_TYPE\0"
    "err\0username\0cardRequestedSignal\0"
    "requestConnection\0address\0port\0makeMove\0"
    "position\0showCard\0card\0makeAccusation\0"
    "person\0weapon\0room\0makeSuggestion\0"
    "requestStateSlot\0unpackGameState\0"
    "Message&\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientMessageBroker[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x06,    1 /* Public */,
       3,    0,  117,    2, 0x06,    2 /* Public */,
       4,    1,  118,    2, 0x06,    3 /* Public */,
       6,    0,  121,    2, 0x06,    5 /* Public */,
       7,    0,  122,    2, 0x06,    6 /* Public */,
       8,    0,  123,    2, 0x06,    7 /* Public */,
       9,    0,  124,    2, 0x06,    8 /* Public */,
      10,    5,  125,    2, 0x06,    9 /* Public */,
      16,    2,  136,    2, 0x06,   15 /* Public */,
      20,    0,  141,    2, 0x06,   18 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      21,    3,  142,    2, 0x0a,   19 /* Public */,
      24,    1,  149,    2, 0x0a,   23 /* Public */,
      26,    1,  152,    2, 0x0a,   25 /* Public */,
      28,    3,  155,    2, 0x0a,   27 /* Public */,
      32,    3,  162,    2, 0x0a,   31 /* Public */,
      33,    0,  169,    2, 0x0a,   35 /* Public */,
      34,    1,  170,    2, 0x08,   36 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QJsonArray, QMetaType::Int, QMetaType::Int, QMetaType::QJsonArray,   11,   12,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QString,   18,   19,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort, QMetaType::QString,   22,   23,   19,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   29,   30,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   29,   30,   31,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35,   36,

       0        // eod
};

void ClientMessageBroker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientMessageBroker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->gameStartedSignal(); break;
        case 1: _t->playerAcceptedSignal(); break;
        case 2: _t->connectionRejectedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->suggestionStateUpdate(); break;
        case 4: _t->accusationResultSignal(); break;
        case 5: _t->yourTurnSignal(); break;
        case 6: _t->gameEndedSignal(); break;
        case 7: _t->gameStateSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[5]))); break;
        case 8: _t->errorSignal((*reinterpret_cast< std::add_pointer_t<ERROR_TYPE>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->cardRequestedSignal(); break;
        case 10: _t->requestConnection((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 11: _t->makeMove((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->showCard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->makeAccusation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 14: _t->makeSuggestion((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 15: _t->requestStateSlot(); break;
        case 16: _t->unpackGameState((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientMessageBroker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::gameStartedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::playerAcceptedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::connectionRejectedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::suggestionStateUpdate)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::accusationResultSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::yourTurnSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::gameEndedSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(int , QJsonArray , int , int , QJsonArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::gameStateSignal)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(ERROR_TYPE , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::errorSignal)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::cardRequestedSignal)) {
                *result = 9;
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
, QtPrivate::TypeAndForceComplete<ClientMessageBroker, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ERROR_TYPE, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<quint32, std::false_type>, QtPrivate::TypeAndForceComplete<quint16, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>


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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void ClientMessageBroker::gameStartedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ClientMessageBroker::playerAcceptedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ClientMessageBroker::connectionRejectedSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClientMessageBroker::suggestionStateUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ClientMessageBroker::accusationResultSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ClientMessageBroker::yourTurnSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ClientMessageBroker::gameEndedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ClientMessageBroker::gameStateSignal(int _t1, QJsonArray _t2, int _t3, int _t4, QJsonArray _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ClientMessageBroker::errorSignal(ERROR_TYPE _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ClientMessageBroker::cardRequestedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
