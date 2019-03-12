/****************************************************************************
** Meta object code from reading C++ file 'linkingmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../node_modules/react-native/ReactQt/runtime/src/linkingmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'linkingmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LinkingManager_t {
    QByteArrayData data[8];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinkingManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinkingManager_t qt_meta_stringdata_LinkingManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "LinkingManager"
QT_MOC_LITERAL(1, 15, 7), // "openURL"
QT_MOC_LITERAL(2, 23, 13), // "REACT_PROMISE"
QT_MOC_LITERAL(3, 37, 3), // "url"
QT_MOC_LITERAL(4, 41, 34), // "ModuleInterface::ListArgument..."
QT_MOC_LITERAL(5, 76, 7), // "resolve"
QT_MOC_LITERAL(6, 84, 6), // "reject"
QT_MOC_LITERAL(7, 91, 10) // "canOpenURL"

    },
    "LinkingManager\0openURL\0REACT_PROMISE\0"
    "url\0ModuleInterface::ListArgumentBlock\0"
    "resolve\0reject\0canOpenURL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinkingManager[] = {

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
       1,    3,   24,    2, 0x00 /* Private */,
       7,    3,   31,    2, 0x00 /* Private */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, 0x80000000 | 4,    3,    5,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, 0x80000000 | 4,    3,    5,    6,

       0        // eod
};

void LinkingManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LinkingManager *_t = static_cast<LinkingManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openURL((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ModuleInterface::ListArgumentBlock(*)>(_a[2])),(*reinterpret_cast< const ModuleInterface::ListArgumentBlock(*)>(_a[3]))); break;
        case 1: _t->canOpenURL((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ModuleInterface::ListArgumentBlock(*)>(_a[2])),(*reinterpret_cast< const ModuleInterface::ListArgumentBlock(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModuleInterface::ListArgumentBlock >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModuleInterface::ListArgumentBlock >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LinkingManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LinkingManager.data,
      qt_meta_data_LinkingManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LinkingManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkingManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LinkingManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ModuleInterface"))
        return static_cast< ModuleInterface*>(this);
    if (!strcmp(_clname, "com.canonical.ReactNative.ModuleInterface"))
        return static_cast< ModuleInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int LinkingManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
