/****************************************************************************
** Meta object code from reading C++ file 'alert.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../node_modules/react-native/ReactQt/runtime/src/alert.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alert.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Alert_t {
    QByteArrayData data[8];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Alert_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Alert_t qt_meta_stringdata_Alert = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Alert"
QT_MOC_LITERAL(1, 6, 19), // "sendButtonClickToJs"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "callback"
QT_MOC_LITERAL(4, 36, 10), // "buttonName"
QT_MOC_LITERAL(5, 47, 17), // "sendDismissedToJs"
QT_MOC_LITERAL(6, 65, 5), // "alert"
QT_MOC_LITERAL(7, 71, 6) // "config"

    },
    "Alert\0sendButtonClickToJs\0\0callback\0"
    "buttonName\0sendDismissedToJs\0alert\0"
    "config"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Alert[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       5,    1,   34,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    2,   37,    2, 0x00 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Double,    3,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariantMap, QMetaType::Double,    7,    3,

       0        // eod
};

void Alert::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Alert *_t = static_cast<Alert *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendButtonClickToJs((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->sendDismissedToJs((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->alert((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Alert::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Alert.data,
      qt_meta_data_Alert,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Alert::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Alert::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Alert.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ModuleInterface"))
        return static_cast< ModuleInterface*>(this);
    if (!strcmp(_clname, "com.canonical.ReactNative.ModuleInterface"))
        return static_cast< ModuleInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int Alert::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
