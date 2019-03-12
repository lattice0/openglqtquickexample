/****************************************************************************
** Meta object code from reading C++ file 'networking.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../node_modules/react-native/ReactQt/runtime/src/networking.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networking.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Networking_t {
    QByteArrayData data[14];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Networking_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Networking_t qt_meta_stringdata_Networking = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Networking"
QT_MOC_LITERAL(1, 11, 11), // "sendRequest"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "method"
QT_MOC_LITERAL(4, 31, 3), // "url"
QT_MOC_LITERAL(5, 35, 4), // "data"
QT_MOC_LITERAL(6, 40, 7), // "headers"
QT_MOC_LITERAL(7, 48, 12), // "responseType"
QT_MOC_LITERAL(8, 61, 18), // "incrementalUpdates"
QT_MOC_LITERAL(9, 80, 7), // "timeout"
QT_MOC_LITERAL(10, 88, 15), // "withCredentials"
QT_MOC_LITERAL(11, 104, 19), // "requestIdCallbackId"
QT_MOC_LITERAL(12, 124, 12), // "abortRequest"
QT_MOC_LITERAL(13, 137, 9) // "requestId"

    },
    "Networking\0sendRequest\0\0method\0url\0"
    "data\0headers\0responseType\0incrementalUpdates\0"
    "timeout\0withCredentials\0requestIdCallbackId\0"
    "abortRequest\0requestId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Networking[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    9,   24,    2, 0x00 /* Private */,
      12,    1,   43,    2, 0x00 /* Private */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl, QMetaType::QVariantMap, QMetaType::QVariantMap, QMetaType::QString, QMetaType::Bool, QMetaType::LongLong, QMetaType::Bool, QMetaType::Double,    3,    4,    5,    6,    7,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void Networking::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Networking *_t = static_cast<Networking *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3])),(*reinterpret_cast< const QVariantMap(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< qlonglong(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9]))); break;
        case 1: _t->abortRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Networking::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Networking.data,
      qt_meta_data_Networking,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Networking::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Networking::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Networking.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ModuleInterface"))
        return static_cast< ModuleInterface*>(this);
    if (!strcmp(_clname, "com.canonical.ReactNative.ModuleInterface"))
        return static_cast< ModuleInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int Networking::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
