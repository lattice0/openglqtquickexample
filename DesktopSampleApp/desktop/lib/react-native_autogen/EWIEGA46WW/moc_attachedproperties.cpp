/****************************************************************************
** Meta object code from reading C++ file 'attachedproperties.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../node_modules/react-native/ReactQt/runtime/src/attachedproperties.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attachedproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AttachedProperties_t {
    QByteArrayData data[7];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AttachedProperties_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AttachedProperties_t qt_meta_stringdata_AttachedProperties = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AttachedProperties"
QT_MOC_LITERAL(1, 19, 3), // "tag"
QT_MOC_LITERAL(2, 23, 12), // "shouldLayout"
QT_MOC_LITERAL(3, 36, 11), // "viewManager"
QT_MOC_LITERAL(4, 48, 12), // "ViewManager*"
QT_MOC_LITERAL(5, 61, 15), // "propertyHandler"
QT_MOC_LITERAL(6, 77, 16) // "PropertyHandler*"

    },
    "AttachedProperties\0tag\0shouldLayout\0"
    "viewManager\0ViewManager*\0propertyHandler\0"
    "PropertyHandler*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AttachedProperties[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095103,
       2, QMetaType::Bool, 0x00095103,
       3, 0x80000000 | 4, 0x0009510b,
       5, 0x80000000 | 6, 0x0009510b,

       0        // eod
};

void AttachedProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        AttachedProperties *_t = static_cast<AttachedProperties *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->tag(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->shouldLayout(); break;
        case 2: *reinterpret_cast< ViewManager**>(_v) = _t->viewManager(); break;
        case 3: *reinterpret_cast< PropertyHandler**>(_v) = _t->propertyHandler(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AttachedProperties *_t = static_cast<AttachedProperties *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTag(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setShouldLayout(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setViewManager(*reinterpret_cast< ViewManager**>(_v)); break;
        case 3: _t->setPropertyHandler(*reinterpret_cast< PropertyHandler**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AttachedProperties::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AttachedProperties.data,
      qt_meta_data_AttachedProperties,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AttachedProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttachedProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AttachedProperties.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AttachedProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
