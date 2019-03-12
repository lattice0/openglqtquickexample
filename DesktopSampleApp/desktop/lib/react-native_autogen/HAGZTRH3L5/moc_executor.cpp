/****************************************************************************
** Meta object code from reading C++ file 'executor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../node_modules/react-native/ReactQt/runtime/src/communication/executor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'executor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Executor_t {
    QByteArrayData data[15];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Executor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Executor_t qt_meta_stringdata_Executor = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Executor"
QT_MOC_LITERAL(1, 9, 4), // "init"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 15), // "resetConnection"
QT_MOC_LITERAL(4, 31, 10), // "injectJson"
QT_MOC_LITERAL(5, 42, 4), // "name"
QT_MOC_LITERAL(6, 47, 4), // "data"
QT_MOC_LITERAL(7, 52, 24), // "executeApplicationScript"
QT_MOC_LITERAL(8, 77, 6), // "script"
QT_MOC_LITERAL(9, 84, 9), // "sourceUrl"
QT_MOC_LITERAL(10, 94, 13), // "executeJSCall"
QT_MOC_LITERAL(11, 108, 6), // "method"
QT_MOC_LITERAL(12, 115, 4), // "args"
QT_MOC_LITERAL(13, 120, 25), // "Executor::ExecuteCallback"
QT_MOC_LITERAL(14, 146, 8) // "callback"

    },
    "Executor\0init\0\0resetConnection\0"
    "injectJson\0name\0data\0executeApplicationScript\0"
    "script\0sourceUrl\0executeJSCall\0method\0"
    "args\0Executor::ExecuteCallback\0callback"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Executor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x02 /* Public */,
       3,    0,   50,    2, 0x02 /* Public */,
       4,    2,   51,    2, 0x02 /* Public */,
       7,    2,   56,    2, 0x02 /* Public */,
      10,    3,   61,    2, 0x02 /* Public */,
      10,    2,   68,    2, 0x22 /* Public | MethodCloned */,
      10,    1,   73,    2, 0x22 /* Public | MethodCloned */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    5,    6,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QUrl,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantList, 0x80000000 | 13,   11,   12,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantList,   11,   12,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void Executor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Executor *_t = static_cast<Executor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->resetConnection(); break;
        case 2: _t->injectJson((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: _t->executeApplicationScript((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 4: _t->executeJSCall((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantList(*)>(_a[2])),(*reinterpret_cast< const Executor::ExecuteCallback(*)>(_a[3]))); break;
        case 5: _t->executeJSCall((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantList(*)>(_a[2]))); break;
        case 6: _t->executeJSCall((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Executor::ExecuteCallback >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Executor::staticMetaObject = {
    { &IExecutor::staticMetaObject, qt_meta_stringdata_Executor.data,
      qt_meta_data_Executor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Executor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Executor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Executor.stringdata0))
        return static_cast<void*>(this);
    return IExecutor::qt_metacast(_clname);
}

int Executor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IExecutor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
