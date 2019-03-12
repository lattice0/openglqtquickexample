/****************************************************************************
** Meta object code from reading C++ file 'serverconnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../node_modules/react-native/ReactQt/runtime/src/communication/serverconnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServerConnection_t {
    QByteArrayData data[5];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServerConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServerConnection_t qt_meta_stringdata_ServerConnection = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ServerConnection"
QT_MOC_LITERAL(1, 17, 9), // "dataReady"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "connectionReady"
QT_MOC_LITERAL(4, 44, 15) // "connectionError"

    },
    "ServerConnection\0dataReady\0\0connectionReady\0"
    "connectionError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ServerConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ServerConnection *_t = static_cast<ServerConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataReady(); break;
        case 1: _t->connectionReady(); break;
        case 2: _t->connectionError(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ServerConnection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerConnection::dataReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ServerConnection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerConnection::connectionReady)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ServerConnection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerConnection::connectionError)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ServerConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ServerConnection.data,
      qt_meta_data_ServerConnection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ServerConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerConnection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ServerConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ServerConnection::dataReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ServerConnection::connectionReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ServerConnection::connectionError()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_LocalServerConnection_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocalServerConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocalServerConnection_t qt_meta_stringdata_LocalServerConnection = {
    {
QT_MOC_LITERAL(0, 0, 21), // "LocalServerConnection"
QT_MOC_LITERAL(1, 22, 0), // ""
QT_MOC_LITERAL(2, 23, 6) // "parent"

    },
    "LocalServerConnection\0\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocalServerConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   18, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, QMetaType::QObjectStar,    2,
    0x80000000 | 1,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   14,    1, 0x0e /* Public */,
       0,    0,   17,    1, 0x2e /* Public | MethodCloned */,

       0        // eod
};

void LocalServerConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { LocalServerConnection *_r = new LocalServerConnection((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { LocalServerConnection *_r = new LocalServerConnection();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject LocalServerConnection::staticMetaObject = {
    { &ServerConnection::staticMetaObject, qt_meta_stringdata_LocalServerConnection.data,
      qt_meta_data_LocalServerConnection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LocalServerConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocalServerConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LocalServerConnection.stringdata0))
        return static_cast<void*>(this);
    return ServerConnection::qt_metacast(_clname);
}

int LocalServerConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ServerConnection::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RemoteServerConnection_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoteServerConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoteServerConnection_t qt_meta_stringdata_RemoteServerConnection = {
    {
QT_MOC_LITERAL(0, 0, 22), // "RemoteServerConnection"
QT_MOC_LITERAL(1, 23, 0), // ""
QT_MOC_LITERAL(2, 24, 6) // "parent"

    },
    "RemoteServerConnection\0\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoteServerConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   18, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, QMetaType::QObjectStar,    2,
    0x80000000 | 1,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   14,    1, 0x0e /* Public */,
       0,    0,   17,    1, 0x2e /* Public | MethodCloned */,

       0        // eod
};

void RemoteServerConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { RemoteServerConnection *_r = new RemoteServerConnection((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { RemoteServerConnection *_r = new RemoteServerConnection();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject RemoteServerConnection::staticMetaObject = {
    { &ServerConnection::staticMetaObject, qt_meta_stringdata_RemoteServerConnection.data,
      qt_meta_data_RemoteServerConnection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RemoteServerConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteServerConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteServerConnection.stringdata0))
        return static_cast<void*>(this);
    return ServerConnection::qt_metacast(_clname);
}

int RemoteServerConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ServerConnection::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
