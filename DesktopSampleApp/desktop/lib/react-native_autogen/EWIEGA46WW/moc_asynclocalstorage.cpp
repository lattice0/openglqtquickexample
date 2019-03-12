/****************************************************************************
** Meta object code from reading C++ file 'asynclocalstorage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../node_modules/react-native/ReactQt/runtime/src/asynclocalstorage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'asynclocalstorage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AsyncLocalStorage_t {
    QByteArrayData data[13];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AsyncLocalStorage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AsyncLocalStorage_t qt_meta_stringdata_AsyncLocalStorage = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AsyncLocalStorage"
QT_MOC_LITERAL(1, 18, 8), // "multiGet"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "QList<QString>"
QT_MOC_LITERAL(4, 43, 4), // "keys"
QT_MOC_LITERAL(5, 48, 34), // "ModuleInterface::ListArgument..."
QT_MOC_LITERAL(6, 83, 8), // "callback"
QT_MOC_LITERAL(7, 92, 8), // "multiSet"
QT_MOC_LITERAL(8, 101, 22), // "QList<QList<QString> >"
QT_MOC_LITERAL(9, 124, 7), // "kvPairs"
QT_MOC_LITERAL(10, 132, 11), // "multiRemove"
QT_MOC_LITERAL(11, 144, 5), // "clear"
QT_MOC_LITERAL(12, 150, 10) // "getAllKeys"

    },
    "AsyncLocalStorage\0multiGet\0\0QList<QString>\0"
    "keys\0ModuleInterface::ListArgumentBlock\0"
    "callback\0multiSet\0QList<QList<QString> >\0"
    "kvPairs\0multiRemove\0clear\0getAllKeys"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AsyncLocalStorage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x00 /* Private */,
       7,    2,   44,    2, 0x00 /* Private */,
      10,    2,   49,    2, 0x00 /* Private */,
      11,    1,   54,    2, 0x00 /* Private */,
      12,    1,   57,    2, 0x00 /* Private */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 5,    9,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void AsyncLocalStorage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AsyncLocalStorage *_t = static_cast<AsyncLocalStorage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->multiGet((*reinterpret_cast< const QList<QString>(*)>(_a[1])),(*reinterpret_cast< const ModuleInterface::ListArgumentBlock(*)>(_a[2]))); break;
        case 1: _t->multiSet((*reinterpret_cast< const QList<QList<QString> >(*)>(_a[1])),(*reinterpret_cast< const ModuleInterface::ListArgumentBlock(*)>(_a[2]))); break;
        case 2: _t->multiRemove((*reinterpret_cast< const QList<QString>(*)>(_a[1])),(*reinterpret_cast< const ModuleInterface::ListArgumentBlock(*)>(_a[2]))); break;
        case 3: _t->clear((*reinterpret_cast< const ModuleInterface::ListArgumentBlock(*)>(_a[1]))); break;
        case 4: _t->getAllKeys((*reinterpret_cast< const ModuleInterface::ListArgumentBlock(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModuleInterface::ListArgumentBlock >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModuleInterface::ListArgumentBlock >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QList<QString> > >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModuleInterface::ListArgumentBlock >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModuleInterface::ListArgumentBlock >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModuleInterface::ListArgumentBlock >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AsyncLocalStorage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AsyncLocalStorage.data,
      qt_meta_data_AsyncLocalStorage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AsyncLocalStorage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AsyncLocalStorage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AsyncLocalStorage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ModuleInterface"))
        return static_cast< ModuleInterface*>(this);
    if (!strcmp(_clname, "com.canonical.ReactNative.ModuleInterface"))
        return static_cast< ModuleInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int AsyncLocalStorage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
