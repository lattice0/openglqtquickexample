/****************************************************************************
** Meta object code from reading C++ file 'websocketmodule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../node_modules/react-native/ReactQt/runtime/src/websocketmodule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'websocketmodule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WebSocketModule_t {
    QByteArrayData data[13];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebSocketModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebSocketModule_t qt_meta_stringdata_WebSocketModule = {
    {
QT_MOC_LITERAL(0, 0, 15), // "WebSocketModule"
QT_MOC_LITERAL(1, 16, 7), // "connect"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "url"
QT_MOC_LITERAL(4, 29, 9), // "protocols"
QT_MOC_LITERAL(5, 39, 7), // "options"
QT_MOC_LITERAL(6, 47, 8), // "socketId"
QT_MOC_LITERAL(7, 56, 4), // "send"
QT_MOC_LITERAL(8, 61, 7), // "message"
QT_MOC_LITERAL(9, 69, 10), // "sendBinary"
QT_MOC_LITERAL(10, 80, 12), // "base64String"
QT_MOC_LITERAL(11, 93, 4), // "ping"
QT_MOC_LITERAL(12, 98, 5) // "close"

    },
    "WebSocketModule\0connect\0\0url\0protocols\0"
    "options\0socketId\0send\0message\0sendBinary\0"
    "base64String\0ping\0close"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebSocketModule[] = {

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
       1,    4,   39,    2, 0x00 /* Private */,
       7,    2,   48,    2, 0x00 /* Private */,
       9,    2,   53,    2, 0x00 /* Private */,
      11,    1,   58,    2, 0x00 /* Private */,
      12,    1,   61,    2, 0x00 /* Private */,

 // methods: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::QVariantList, QMetaType::QVariantMap, QMetaType::LongLong,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong,    8,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong,   10,    6,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void, QMetaType::LongLong,    6,

       0        // eod
};

void WebSocketModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WebSocketModule *_t = static_cast<WebSocketModule *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connect((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QVariantList(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3])),(*reinterpret_cast< qlonglong(*)>(_a[4]))); break;
        case 1: _t->send((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2]))); break;
        case 2: _t->sendBinary((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2]))); break;
        case 3: _t->ping((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 4: _t->close((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WebSocketModule::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebSocketModule.data,
      qt_meta_data_WebSocketModule,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WebSocketModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebSocketModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WebSocketModule.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ModuleInterface"))
        return static_cast< ModuleInterface*>(this);
    if (!strcmp(_clname, "com.canonical.ReactNative.ModuleInterface"))
        return static_cast< ModuleInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int WebSocketModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
