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
    const uint offsetsAndSize[78];
    char stringdata0[486];
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
QT_MOC_LITERAL(66, 20), // "playerAcceptedSignal"
QT_MOC_LITERAL(87, 24), // "connectionRejectedSignal"
QT_MOC_LITERAL(112, 6), // "reason"
QT_MOC_LITERAL(119, 21), // "suggestionStateUpdate"
QT_MOC_LITERAL(141, 22), // "accusationResultSignal"
QT_MOC_LITERAL(164, 14), // "yourTurnSignal"
QT_MOC_LITERAL(179, 15), // "gameEndedSignal"
QT_MOC_LITERAL(195, 15), // "gameStateSignal"
QT_MOC_LITERAL(211, 10), // "numPlayers"
QT_MOC_LITERAL(222, 7), // "players"
QT_MOC_LITERAL(230, 4), // "dice"
QT_MOC_LITERAL(235, 11), // "currentTurn"
QT_MOC_LITERAL(247, 11), // "faceupCards"
QT_MOC_LITERAL(259, 11), // "errorSignal"
QT_MOC_LITERAL(271, 10), // "ERROR_TYPE"
QT_MOC_LITERAL(282, 3), // "err"
QT_MOC_LITERAL(286, 19), // "cardRequestedSignal"
QT_MOC_LITERAL(306, 17), // "requestConnection"
QT_MOC_LITERAL(324, 7), // "address"
QT_MOC_LITERAL(332, 4), // "port"
QT_MOC_LITERAL(337, 8), // "makeMove"
QT_MOC_LITERAL(346, 8), // "position"
QT_MOC_LITERAL(355, 8), // "showCard"
QT_MOC_LITERAL(364, 4), // "card"
QT_MOC_LITERAL(369, 14), // "makeAccusation"
QT_MOC_LITERAL(384, 6), // "person"
QT_MOC_LITERAL(391, 6), // "weapon"
QT_MOC_LITERAL(398, 4), // "room"
QT_MOC_LITERAL(403, 14), // "makeSuggestion"
QT_MOC_LITERAL(418, 16), // "requestStateSlot"
QT_MOC_LITERAL(435, 21), // "sendConnectionRequest"
QT_MOC_LITERAL(457, 15), // "unpackGameState"
QT_MOC_LITERAL(473, 8), // "Message*"
QT_MOC_LITERAL(482, 3) // "msg"

    },
    "ClientMessageBroker\0connectionStarted\0"
    "\0username\0gameStartedSignal\0"
    "playerAcceptedSignal\0connectionRejectedSignal\0"
    "reason\0suggestionStateUpdate\0"
    "accusationResultSignal\0yourTurnSignal\0"
    "gameEndedSignal\0gameStateSignal\0"
    "numPlayers\0players\0dice\0currentTurn\0"
    "faceupCards\0errorSignal\0ERROR_TYPE\0"
    "err\0cardRequestedSignal\0requestConnection\0"
    "address\0port\0makeMove\0position\0showCard\0"
    "card\0makeAccusation\0person\0weapon\0"
    "room\0makeSuggestion\0requestStateSlot\0"
    "sendConnectionRequest\0unpackGameState\0"
    "Message*\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientMessageBroker[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  128,    2, 0x06,    1 /* Public */,
       4,    0,  131,    2, 0x06,    3 /* Public */,
       5,    0,  132,    2, 0x06,    4 /* Public */,
       6,    1,  133,    2, 0x06,    5 /* Public */,
       8,    0,  136,    2, 0x06,    7 /* Public */,
       9,    0,  137,    2, 0x06,    8 /* Public */,
      10,    0,  138,    2, 0x06,    9 /* Public */,
      11,    0,  139,    2, 0x06,   10 /* Public */,
      12,    5,  140,    2, 0x06,   11 /* Public */,
      18,    2,  151,    2, 0x06,   17 /* Public */,
      21,    0,  156,    2, 0x06,   20 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      22,    3,  157,    2, 0x0a,   21 /* Public */,
      25,    1,  164,    2, 0x0a,   25 /* Public */,
      27,    1,  167,    2, 0x0a,   27 /* Public */,
      29,    3,  170,    2, 0x0a,   29 /* Public */,
      33,    3,  177,    2, 0x0a,   33 /* Public */,
      34,    0,  184,    2, 0x0a,   37 /* Public */,
      35,    1,  185,    2, 0x0a,   38 /* Public */,
      36,    1,  188,    2, 0x08,   40 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QJsonArray, QMetaType::Int, QMetaType::Int, QMetaType::QJsonArray,   13,   14,   15,   16,   17,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QString,   20,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort, QMetaType::QString,   23,   24,    3,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   30,   31,   32,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   30,   31,   32,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 37,   38,

       0        // eod
};

void ClientMessageBroker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientMessageBroker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connectionStarted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->gameStartedSignal(); break;
        case 2: _t->playerAcceptedSignal(); break;
        case 3: _t->connectionRejectedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->suggestionStateUpdate(); break;
        case 5: _t->accusationResultSignal(); break;
        case 6: _t->yourTurnSignal(); break;
        case 7: _t->gameEndedSignal(); break;
        case 8: _t->gameStateSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[5]))); break;
        case 9: _t->errorSignal((*reinterpret_cast< std::add_pointer_t<ERROR_TYPE>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->cardRequestedSignal(); break;
        case 11: _t->requestConnection((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 12: _t->makeMove((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->showCard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->makeAccusation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 15: _t->makeSuggestion((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 16: _t->requestStateSlot(); break;
        case 17: _t->sendConnectionRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->unpackGameState((*reinterpret_cast< std::add_pointer_t<Message*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Message* >(); break;
            }
            break;
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
            using _t = void (ClientMessageBroker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::gameStartedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)();
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
            using _t = void (ClientMessageBroker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::suggestionStateUpdate)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::accusationResultSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::yourTurnSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::gameEndedSignal)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(int , QJsonArray , int , int , QJsonArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::gameStateSignal)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)(ERROR_TYPE , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::errorSignal)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ClientMessageBroker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientMessageBroker::cardRequestedSignal)) {
                *result = 10;
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
, QtPrivate::TypeAndForceComplete<ClientMessageBroker, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ERROR_TYPE, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<quint32, std::false_type>, QtPrivate::TypeAndForceComplete<quint16, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message *, std::false_type>


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
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
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
void ClientMessageBroker::gameStartedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ClientMessageBroker::playerAcceptedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ClientMessageBroker::connectionRejectedSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ClientMessageBroker::suggestionStateUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ClientMessageBroker::accusationResultSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ClientMessageBroker::yourTurnSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ClientMessageBroker::gameEndedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ClientMessageBroker::gameStateSignal(int _t1, QJsonArray _t2, int _t3, int _t4, QJsonArray _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ClientMessageBroker::errorSignal(ERROR_TYPE _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ClientMessageBroker::cardRequestedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
