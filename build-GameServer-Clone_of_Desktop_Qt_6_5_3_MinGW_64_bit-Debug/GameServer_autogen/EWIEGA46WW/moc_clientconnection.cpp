/****************************************************************************
** Meta object code from reading C++ file 'clientconnection.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../GameServer/clientconnection.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientconnection.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSClientConnectionENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSClientConnectionENDCLASS = QtMocHelpers::stringData(
    "ClientConnection",
    "violationsExceeded",
    "",
    "username",
    "reason",
    "timeOut",
    "userName",
    "messageReceived",
    "Message&",
    "msg",
    "messageSent",
    "sendMessage",
    "handleIncomingData"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClientConnectionENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[17];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[7];
    char stringdata5[8];
    char stringdata6[9];
    char stringdata7[16];
    char stringdata8[9];
    char stringdata9[4];
    char stringdata10[12];
    char stringdata11[12];
    char stringdata12[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSClientConnectionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSClientConnectionENDCLASS_t qt_meta_stringdata_CLASSClientConnectionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "ClientConnection"
        QT_MOC_LITERAL(17, 18),  // "violationsExceeded"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 8),  // "username"
        QT_MOC_LITERAL(46, 6),  // "reason"
        QT_MOC_LITERAL(53, 7),  // "timeOut"
        QT_MOC_LITERAL(61, 8),  // "userName"
        QT_MOC_LITERAL(70, 15),  // "messageReceived"
        QT_MOC_LITERAL(86, 8),  // "Message&"
        QT_MOC_LITERAL(95, 3),  // "msg"
        QT_MOC_LITERAL(99, 11),  // "messageSent"
        QT_MOC_LITERAL(111, 11),  // "sendMessage"
        QT_MOC_LITERAL(123, 18)   // "handleIncomingData"
    },
    "ClientConnection",
    "violationsExceeded",
    "",
    "username",
    "reason",
    "timeOut",
    "userName",
    "messageReceived",
    "Message&",
    "msg",
    "messageSent",
    "sendMessage",
    "handleIncomingData"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClientConnectionENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,
       5,    1,   55,    2, 0x06,    4 /* Public */,
       7,    1,   58,    2, 0x06,    6 /* Public */,
      10,    1,   61,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   64,    2, 0x0a,   10 /* Public */,
      12,    0,   67,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ClientConnection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSClientConnectionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClientConnectionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClientConnectionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ClientConnection, std::true_type>,
        // method 'violationsExceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'timeOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'messageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>,
        // method 'messageSent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>,
        // method 'sendMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>,
        // method 'handleIncomingData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ClientConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientConnection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->violationsExceeded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->timeOut((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->messageReceived((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 3: _t->messageSent((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 4: _t->sendMessage((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 5: _t->handleIncomingData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientConnection::*)(QString , QString );
            if (_t _q_method = &ClientConnection::violationsExceeded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientConnection::*)(QString );
            if (_t _q_method = &ClientConnection::timeOut; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientConnection::*)(Message & );
            if (_t _q_method = &ClientConnection::messageReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientConnection::*)(Message & );
            if (_t _q_method = &ClientConnection::messageSent; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *ClientConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSClientConnectionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ClientConnection::violationsExceeded(QString _t1, QString _t2)
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
void ClientConnection::messageReceived(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClientConnection::messageSent(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
