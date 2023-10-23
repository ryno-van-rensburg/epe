/****************************************************************************
** Meta object code from reading C++ file 'serversession.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../networking/serversession.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serversession.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServerSession_t {
    const uint offsetsAndSize[48];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ServerSession_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ServerSession_t qt_meta_stringdata_ServerSession = {
    {
QT_MOC_LITERAL(0, 13), // "ServerSession"
QT_MOC_LITERAL(14, 14), // "joiningRequest"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 8), // "Message&"
QT_MOC_LITERAL(39, 3), // "msg"
QT_MOC_LITERAL(43, 18), // "gameStateRequested"
QT_MOC_LITERAL(62, 14), // "suggestionMade"
QT_MOC_LITERAL(77, 14), // "accusationMade"
QT_MOC_LITERAL(92, 9), // "cardShown"
QT_MOC_LITERAL(102, 8), // "moveMade"
QT_MOC_LITERAL(111, 10), // "ackMessage"
QT_MOC_LITERAL(122, 8), // "username"
QT_MOC_LITERAL(131, 9), // "addPlayer"
QT_MOC_LITERAL(141, 14), // "NetworkPlayer*"
QT_MOC_LITERAL(156, 3), // "obj"
QT_MOC_LITERAL(160, 19), // "handleNewConnection"
QT_MOC_LITERAL(180, 16), // "broadCastMessage"
QT_MOC_LITERAL(197, 14), // "unicastMessage"
QT_MOC_LITERAL(212, 13), // "handleMessage"
QT_MOC_LITERAL(226, 10), // "kickPlayer"
QT_MOC_LITERAL(237, 6), // "reason"
QT_MOC_LITERAL(244, 32), // "handleDataFromPendingConnections"
QT_MOC_LITERAL(277, 16), // "rejectConnection"
QT_MOC_LITERAL(294, 6) // "handle"

    },
    "ServerSession\0joiningRequest\0\0Message&\0"
    "msg\0gameStateRequested\0suggestionMade\0"
    "accusationMade\0cardShown\0moveMade\0"
    "ackMessage\0username\0addPlayer\0"
    "NetworkPlayer*\0obj\0handleNewConnection\0"
    "broadCastMessage\0unicastMessage\0"
    "handleMessage\0kickPlayer\0reason\0"
    "handleDataFromPendingConnections\0"
    "rejectConnection\0handle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerSession[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x06,    1 /* Public */,
       5,    0,  107,    2, 0x06,    3 /* Public */,
       6,    1,  108,    2, 0x06,    4 /* Public */,
       7,    1,  111,    2, 0x06,    6 /* Public */,
       8,    1,  114,    2, 0x06,    8 /* Public */,
       9,    1,  117,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,  120,    2, 0x0a,   12 /* Public */,
      12,    1,  123,    2, 0x0a,   14 /* Public */,
      15,    0,  126,    2, 0x0a,   16 /* Public */,
      16,    1,  127,    2, 0x0a,   17 /* Public */,
      17,    2,  130,    2, 0x0a,   19 /* Public */,
      18,    1,  135,    2, 0x0a,   22 /* Public */,
      19,    2,  138,    2, 0x0a,   24 /* Public */,
      21,    0,  143,    2, 0x0a,   27 /* Public */,
      22,    2,  144,    2, 0x0a,   28 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   11,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   20,   23,

       0        // eod
};

void ServerSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ServerSession *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->joiningRequest((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 1: _t->gameStateRequested(); break;
        case 2: _t->suggestionMade((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 3: _t->accusationMade((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 4: _t->cardShown((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 5: _t->moveMade((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 6: _t->ackMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->addPlayer((*reinterpret_cast< std::add_pointer_t<NetworkPlayer*>>(_a[1]))); break;
        case 8: _t->handleNewConnection(); break;
        case 9: _t->broadCastMessage((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 10: _t->unicastMessage((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 11: _t->handleMessage((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 12: _t->kickPlayer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 13: _t->handleDataFromPendingConnections(); break;
        case 14: _t->rejectConnection((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NetworkPlayer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ServerSession::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerSession::joiningRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ServerSession::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerSession::gameStateRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ServerSession::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerSession::suggestionMade)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ServerSession::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerSession::accusationMade)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ServerSession::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerSession::cardShown)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ServerSession::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerSession::moveMade)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject ServerSession::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ServerSession.offsetsAndSize,
    qt_meta_data_ServerSession,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ServerSession_t
, QtPrivate::TypeAndForceComplete<ServerSession, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NetworkPlayer *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *ServerSession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerSession::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerSession.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ServerSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void ServerSession::joiningRequest(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ServerSession::gameStateRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ServerSession::suggestionMade(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ServerSession::accusationMade(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ServerSession::cardShown(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ServerSession::moveMade(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
