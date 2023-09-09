/****************************************************************************
** Meta object code from reading C++ file 'clientconnection.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../networking/clientconnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientConnection_t {
    const uint offsetsAndSize[26];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ClientConnection_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ClientConnection_t qt_meta_stringdata_ClientConnection = {
    {
QT_MOC_LITERAL(0, 16), // "ClientConnection"
QT_MOC_LITERAL(17, 18), // "violationsExceeded"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 12), // "MESSAGE_TYPE"
QT_MOC_LITERAL(50, 4), // "type"
QT_MOC_LITERAL(55, 12), // "errorMessage"
QT_MOC_LITERAL(68, 7), // "timeOut"
QT_MOC_LITERAL(76, 8), // "userName"
QT_MOC_LITERAL(85, 11), // "messageSent"
QT_MOC_LITERAL(97, 8), // "Message&"
QT_MOC_LITERAL(106, 3), // "msg"
QT_MOC_LITERAL(110, 11), // "sendMessage"
QT_MOC_LITERAL(122, 15) // "messageReceived"

    },
    "ClientConnection\0violationsExceeded\0"
    "\0MESSAGE_TYPE\0type\0errorMessage\0timeOut\0"
    "userName\0messageSent\0Message&\0msg\0"
    "sendMessage\0messageReceived"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientConnection[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x06,    1 /* Public */,
       6,    1,   49,    2, 0x06,    4 /* Public */,
       8,    1,   52,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   55,    2, 0x0a,    8 /* Public */,
      12,    0,   58,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void ClientConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientConnection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->violationsExceeded((*reinterpret_cast< std::add_pointer_t<MESSAGE_TYPE>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->timeOut((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->messageSent((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 3: _t->sendMessage((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 4: _t->messageReceived(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientConnection::*)(MESSAGE_TYPE , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientConnection::violationsExceeded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientConnection::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientConnection::timeOut)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientConnection::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientConnection::messageSent)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ClientConnection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ClientConnection.offsetsAndSize,
    qt_meta_data_ClientConnection,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ClientConnection_t
, QtPrivate::TypeAndForceComplete<ClientConnection, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<MESSAGE_TYPE, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ClientConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientConnection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ClientConnection::violationsExceeded(MESSAGE_TYPE _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientConnection::timeOut(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClientConnection::messageSent(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
