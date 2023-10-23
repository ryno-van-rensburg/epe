/****************************************************************************
** Meta object code from reading C++ file 'networkclient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../networking/networkclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetworkClient_t {
    const uint offsetsAndSize[46];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_NetworkClient_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_NetworkClient_t qt_meta_stringdata_NetworkClient = {
    {
QT_MOC_LITERAL(0, 13), // "NetworkClient"
QT_MOC_LITERAL(14, 17), // "connectedToServer"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 15), // "connectedToGame"
QT_MOC_LITERAL(49, 17), // "gameStateReceived"
QT_MOC_LITERAL(67, 8), // "Message&"
QT_MOC_LITERAL(76, 3), // "msg"
QT_MOC_LITERAL(80, 21), // "suggestionStateUpdate"
QT_MOC_LITERAL(102, 16), // "connectionDenied"
QT_MOC_LITERAL(119, 18), // "connectionAccepted"
QT_MOC_LITERAL(138, 10), // "moveUpdate"
QT_MOC_LITERAL(149, 14), // "gameTerminated"
QT_MOC_LITERAL(164, 13), // "cardRequested"
QT_MOC_LITERAL(178, 9), // "cardShown"
QT_MOC_LITERAL(188, 10), // "cardsDealt"
QT_MOC_LITERAL(199, 12), // "playerResult"
QT_MOC_LITERAL(212, 10), // "playerTurn"
QT_MOC_LITERAL(223, 12), // "playerKicked"
QT_MOC_LITERAL(236, 9), // "moveError"
QT_MOC_LITERAL(246, 11), // "sendMessage"
QT_MOC_LITERAL(258, 13), // "handleMessage"
QT_MOC_LITERAL(272, 8), // "connMade"
QT_MOC_LITERAL(281, 15) // "connectionError"

    },
    "NetworkClient\0connectedToServer\0\0"
    "connectedToGame\0gameStateReceived\0"
    "Message&\0msg\0suggestionStateUpdate\0"
    "connectionDenied\0connectionAccepted\0"
    "moveUpdate\0gameTerminated\0cardRequested\0"
    "cardShown\0cardsDealt\0playerResult\0"
    "playerTurn\0playerKicked\0moveError\0"
    "sendMessage\0handleMessage\0connMade\0"
    "connectionError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkClient[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  128,    2, 0x06,    1 /* Public */,
       3,    0,  129,    2, 0x06,    2 /* Public */,
       4,    1,  130,    2, 0x06,    3 /* Public */,
       7,    1,  133,    2, 0x06,    5 /* Public */,
       8,    1,  136,    2, 0x06,    7 /* Public */,
       9,    1,  139,    2, 0x06,    9 /* Public */,
      10,    1,  142,    2, 0x06,   11 /* Public */,
      11,    1,  145,    2, 0x06,   13 /* Public */,
      12,    1,  148,    2, 0x06,   15 /* Public */,
      13,    1,  151,    2, 0x06,   17 /* Public */,
      14,    1,  154,    2, 0x06,   19 /* Public */,
      15,    1,  157,    2, 0x06,   21 /* Public */,
      16,    1,  160,    2, 0x06,   23 /* Public */,
      17,    1,  163,    2, 0x06,   25 /* Public */,
      18,    0,  166,    2, 0x06,   27 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      19,    1,  167,    2, 0x0a,   28 /* Public */,
      20,    0,  170,    2, 0x0a,   30 /* Public */,
      21,    0,  171,    2, 0x0a,   31 /* Public */,
      22,    0,  172,    2, 0x0a,   32 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NetworkClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetworkClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connectedToServer(); break;
        case 1: _t->connectedToGame(); break;
        case 2: _t->gameStateReceived((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 3: _t->suggestionStateUpdate((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 4: _t->connectionDenied((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 5: _t->connectionAccepted((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 6: _t->moveUpdate((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 7: _t->gameTerminated((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 8: _t->cardRequested((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 9: _t->cardShown((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 10: _t->cardsDealt((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 11: _t->playerResult((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 12: _t->playerTurn((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 13: _t->playerKicked((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 14: _t->moveError(); break;
        case 15: _t->sendMessage((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 16: _t->handleMessage(); break;
        case 17: _t->connMade(); break;
        case 18: _t->connectionError(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NetworkClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkClient::connectedToServer)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NetworkClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkClient::connectedToGame)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NetworkClient::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkClient::gameStateReceived)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NetworkClient::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkClient::suggestionStateUpdate)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NetworkClient::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkClient::connectionDenied)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (NetworkClient::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkClient::connectionAccepted)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (NetworkClient::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkClient::moveUpdate)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (NetworkClient::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkClient::gameTerminated)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (NetworkClient::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkClient::cardRequested)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (NetworkClient::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkClient::cardShown)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (NetworkClient::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkClient::cardsDealt)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (NetworkClient::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkClient::playerResult)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (NetworkClient::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkClient::playerTurn)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (NetworkClient::*)(Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkClient::playerKicked)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (NetworkClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkClient::moveError)) {
                *result = 14;
                return;
            }
        }
    }
}

const QMetaObject NetworkClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_NetworkClient.offsetsAndSize,
    qt_meta_data_NetworkClient,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_NetworkClient_t
, QtPrivate::TypeAndForceComplete<NetworkClient, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *NetworkClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NetworkClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void NetworkClient::connectedToServer()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NetworkClient::connectedToGame()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NetworkClient::gameStateReceived(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NetworkClient::suggestionStateUpdate(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NetworkClient::connectionDenied(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NetworkClient::connectionAccepted(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void NetworkClient::moveUpdate(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void NetworkClient::gameTerminated(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void NetworkClient::cardRequested(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void NetworkClient::cardShown(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void NetworkClient::cardsDealt(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void NetworkClient::playerResult(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void NetworkClient::playerTurn(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void NetworkClient::playerKicked(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void NetworkClient::moveError()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
