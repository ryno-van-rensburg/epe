/****************************************************************************
** Meta object code from reading C++ file 'testrunner.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../cluedo_gui/testrunner.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testrunner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestRunner_t {
    const uint offsetsAndSize[22];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TestRunner_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TestRunner_t qt_meta_stringdata_TestRunner = {
    {
QT_MOC_LITERAL(0, 10), // "TestRunner"
QT_MOC_LITERAL(11, 21), // "testPlayerPositionSet"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 21), // "testRequestConnection"
QT_MOC_LITERAL(56, 14), // "testOnMakeMove"
QT_MOC_LITERAL(71, 14), // "testOnShowCard"
QT_MOC_LITERAL(86, 20), // "testOnMakeAccusation"
QT_MOC_LITERAL(107, 20), // "testOnMakeSuggestion"
QT_MOC_LITERAL(128, 22), // "testOnRequestStateSlot"
QT_MOC_LITERAL(151, 27), // "testOnSendConnectionRequest"
QT_MOC_LITERAL(179, 17) // "testValidUsername"

    },
    "TestRunner\0testPlayerPositionSet\0\0"
    "testRequestConnection\0testOnMakeMove\0"
    "testOnShowCard\0testOnMakeAccusation\0"
    "testOnMakeSuggestion\0testOnRequestStateSlot\0"
    "testOnSendConnectionRequest\0"
    "testValidUsername"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestRunner[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    0,   75,    2, 0x08,    8 /* Private */,
      10,    0,   76,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestRunner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestRunner *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->testPlayerPositionSet(); break;
        case 1: _t->testRequestConnection(); break;
        case 2: _t->testOnMakeMove(); break;
        case 3: _t->testOnShowCard(); break;
        case 4: _t->testOnMakeAccusation(); break;
        case 5: _t->testOnMakeSuggestion(); break;
        case 6: _t->testOnRequestStateSlot(); break;
        case 7: _t->testOnSendConnectionRequest(); break;
        case 8: _t->testValidUsername(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject TestRunner::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TestRunner.offsetsAndSize,
    qt_meta_data_TestRunner,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TestRunner_t
, QtPrivate::TypeAndForceComplete<TestRunner, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *TestRunner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestRunner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestRunner.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestRunner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
