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
    const uint offsetsAndSize[26];
    char stringdata0[181];
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
QT_MOC_LITERAL(62, 19), // "handleNewConnection"
QT_MOC_LITERAL(82, 16), // "broadCastMessage"
QT_MOC_LITERAL(99, 14), // "unicastMessage"
QT_MOC_LITERAL(114, 8), // "username"
QT_MOC_LITERAL(123, 13), // "handleMessage"
QT_MOC_LITERAL(137, 10), // "kickPlayer"
QT_MOC_LITERAL(148, 32) // "handleDataFromPendingConnections"

    },
    "ServerSession\0joiningRequest\0\0Message&\0"
    "msg\0gameStateRequested\0handleNewConnection\0"
    "broadCastMessage\0unicastMessage\0"
    "username\0handleMessage\0kickPlayer\0"
    "handleDataFromPendingConnections"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerSession[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       5,    0,   65,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   66,    2, 0x0a,    4 /* Public */,
       7,    1,   67,    2, 0x0a,    5 /* Public */,
       8,    2,   70,    2, 0x0a,    7 /* Public */,
      10,    1,   75,    2, 0x0a,   10 /* Public */,
      11,    1,   78,    2, 0x0a,   12 /* Public */,
      12,    0,   81,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    9,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

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
        case 2: _t->handleNewConnection(); break;
        case 3: _t->broadCastMessage((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 4: _t->unicastMessage((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->handleMessage((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 6: _t->kickPlayer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->handleDataFromPendingConnections(); break;
        default: ;
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
    }
}

const QMetaObject ServerSession::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ServerSession.offsetsAndSize,
    qt_meta_data_ServerSession,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ServerSession_t
, QtPrivate::TypeAndForceComplete<ServerSession, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
