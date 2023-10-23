/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../cluedo_gui/client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Client_t {
    const uint offsetsAndSize[82];
    char stringdata0[486];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Client_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Client_t qt_meta_stringdata_Client = {
    {
QT_MOC_LITERAL(0, 6), // "Client"
QT_MOC_LITERAL(7, 15), // "promptRequested"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 23), // "testSendMessageToBroker"
QT_MOC_LITERAL(48, 8), // "QString&"
QT_MOC_LITERAL(57, 7), // "message"
QT_MOC_LITERAL(65, 13), // "validUsername"
QT_MOC_LITERAL(79, 21), // "playerPositionUpdated"
QT_MOC_LITERAL(101, 8), // "playerId"
QT_MOC_LITERAL(110, 4), // "newX"
QT_MOC_LITERAL(115, 4), // "newY"
QT_MOC_LITERAL(120, 17), // "playerTurnChanged"
QT_MOC_LITERAL(138, 17), // "requestConnection"
QT_MOC_LITERAL(156, 7), // "address"
QT_MOC_LITERAL(164, 4), // "port"
QT_MOC_LITERAL(169, 8), // "username"
QT_MOC_LITERAL(178, 8), // "makeMove"
QT_MOC_LITERAL(187, 8), // "position"
QT_MOC_LITERAL(196, 8), // "showCard"
QT_MOC_LITERAL(205, 4), // "card"
QT_MOC_LITERAL(210, 14), // "makeAccusation"
QT_MOC_LITERAL(225, 6), // "person"
QT_MOC_LITERAL(232, 6), // "weapon"
QT_MOC_LITERAL(239, 4), // "room"
QT_MOC_LITERAL(244, 14), // "makeSuggestion"
QT_MOC_LITERAL(259, 16), // "requestStateSlot"
QT_MOC_LITERAL(276, 21), // "sendConnectionRequest"
QT_MOC_LITERAL(298, 18), // "testReceiveMessage"
QT_MOC_LITERAL(317, 13), // "onNameEntered"
QT_MOC_LITERAL(331, 4), // "name"
QT_MOC_LITERAL(336, 11), // "onTurnEnded"
QT_MOC_LITERAL(348, 16), // "onAccusationMade"
QT_MOC_LITERAL(365, 4), // "item"
QT_MOC_LITERAL(370, 16), // "onSuggestionMade"
QT_MOC_LITERAL(387, 20), // "onSuggestionReceived"
QT_MOC_LITERAL(408, 17), // "onRequestAnswered"
QT_MOC_LITERAL(426, 10), // "playerTurn"
QT_MOC_LITERAL(437, 19), // "getCurrentDiceValue"
QT_MOC_LITERAL(457, 17), // "playerPositionSet"
QT_MOC_LITERAL(475, 7), // "testBox"
QT_MOC_LITERAL(483, 2) // "in"

    },
    "Client\0promptRequested\0\0testSendMessageToBroker\0"
    "QString&\0message\0validUsername\0"
    "playerPositionUpdated\0playerId\0newX\0"
    "newY\0playerTurnChanged\0requestConnection\0"
    "address\0port\0username\0makeMove\0position\0"
    "showCard\0card\0makeAccusation\0person\0"
    "weapon\0room\0makeSuggestion\0requestStateSlot\0"
    "sendConnectionRequest\0testReceiveMessage\0"
    "onNameEntered\0name\0onTurnEnded\0"
    "onAccusationMade\0item\0onSuggestionMade\0"
    "onSuggestionReceived\0onRequestAnswered\0"
    "playerTurn\0getCurrentDiceValue\0"
    "playerPositionSet\0testBox\0in"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Client[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       1,  243, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  152,    2, 0x06,    2 /* Public */,
       3,    1,  153,    2, 0x06,    3 /* Public */,
       6,    0,  156,    2, 0x06,    5 /* Public */,
       7,    3,  157,    2, 0x06,    6 /* Public */,
      11,    0,  164,    2, 0x06,   10 /* Public */,
      12,    3,  165,    2, 0x06,   11 /* Public */,
      16,    1,  172,    2, 0x06,   15 /* Public */,
      18,    1,  175,    2, 0x06,   17 /* Public */,
      20,    3,  178,    2, 0x06,   19 /* Public */,
      24,    3,  185,    2, 0x06,   23 /* Public */,
      25,    0,  192,    2, 0x06,   27 /* Public */,
      26,    1,  193,    2, 0x06,   28 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      27,    1,  196,    2, 0x0a,   30 /* Public */,
      28,    1,  199,    2, 0x0a,   32 /* Public */,
      30,    0,  202,    2, 0x0a,   34 /* Public */,
      31,    3,  203,    2, 0x0a,   35 /* Public */,
      33,    3,  210,    2, 0x0a,   39 /* Public */,
      34,    3,  217,    2, 0x0a,   43 /* Public */,
      35,    3,  224,    2, 0x0a,   47 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      36,    0,  231,    2, 0x102,   51 /* Public | MethodIsConst  */,
      37,    0,  232,    2, 0x102,   52 /* Public | MethodIsConst  */,
      38,    3,  233,    2, 0x02,   53 /* Public */,
      39,    1,  240,    2, 0x02,   57 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort, QMetaType::QString,   13,   14,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   21,   22,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   21,   22,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   23,   21,   32,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   23,   21,   32,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   23,   21,   32,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   23,   21,   32,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void, QMetaType::QString,   40,

 // properties: name, type, flags
      36, QMetaType::Int, 0x00015103, uint(4), 0,

       0        // eod
};

void Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Client *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->promptRequested(); break;
        case 1: _t->testSendMessageToBroker((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1]))); break;
        case 2: _t->validUsername(); break;
        case 3: _t->playerPositionUpdated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 4: _t->playerTurnChanged(); break;
        case 5: _t->requestConnection((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 6: _t->makeMove((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->showCard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->makeAccusation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 9: _t->makeSuggestion((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 10: _t->requestStateSlot(); break;
        case 11: _t->sendConnectionRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->testReceiveMessage((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1]))); break;
        case 13: _t->onNameEntered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->onTurnEnded(); break;
        case 15: _t->onAccusationMade((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 16: _t->onSuggestionMade((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 17: _t->onSuggestionReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 18: _t->onRequestAnswered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 19: { int _r = _t->playerTurn();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 20: { int _r = _t->getCurrentDiceValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->playerPositionSet((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 22: _t->testBox((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::promptRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::testSendMessageToBroker)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::validUsername)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Client::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::playerPositionUpdated)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::playerTurnChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Client::*)(quint32 , quint16 , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::requestConnection)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Client::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::makeMove)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::showCard)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::makeAccusation)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::makeSuggestion)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::requestStateSlot)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::sendConnectionRequest)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Client *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->playerTurn(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Client *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlayerTurn(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Client::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Client.offsetsAndSize,
    qt_meta_data_Client,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Client_t
, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<Client, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<quint32, std::false_type>, QtPrivate::TypeAndForceComplete<quint16, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>

>,
    nullptr
} };


const QMetaObject *Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Client.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Client::promptRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Client::testSendMessageToBroker(QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Client::validUsername()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Client::playerPositionUpdated(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Client::playerTurnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Client::requestConnection(quint32 _t1, quint16 _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Client::makeMove(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Client::showCard(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Client::makeAccusation(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Client::makeSuggestion(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Client::requestStateSlot()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Client::sendConnectionRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
