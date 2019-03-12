/****************************************************************************
** Meta object code from reading C++ file 'scrollviewmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../node_modules/react-native/ReactQt/runtime/src/componentmanagers/scrollviewmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scrollviewmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScrollViewManager_t {
    QByteArrayData data[17];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScrollViewManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScrollViewManager_t qt_meta_stringdata_ScrollViewManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ScrollViewManager"
QT_MOC_LITERAL(1, 18, 19), // "momentumScrollBegin"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "QQuickItem*"
QT_MOC_LITERAL(4, 51, 4), // "item"
QT_MOC_LITERAL(5, 56, 17), // "momentumScrollEnd"
QT_MOC_LITERAL(6, 74, 19), // "applyTransformation"
QT_MOC_LITERAL(7, 94, 9), // "transform"
QT_MOC_LITERAL(8, 104, 15), // "scrollBeginDrag"
QT_MOC_LITERAL(9, 120, 13), // "scrollEndDrag"
QT_MOC_LITERAL(10, 134, 6), // "scroll"
QT_MOC_LITERAL(11, 141, 8), // "scrollTo"
QT_MOC_LITERAL(12, 150, 8), // "reactTag"
QT_MOC_LITERAL(13, 159, 7), // "offsetX"
QT_MOC_LITERAL(14, 167, 7), // "offsetY"
QT_MOC_LITERAL(15, 175, 8), // "animated"
QT_MOC_LITERAL(16, 184, 11) // "scrollToEnd"

    },
    "ScrollViewManager\0momentumScrollBegin\0"
    "\0QQuickItem*\0item\0momentumScrollEnd\0"
    "applyTransformation\0transform\0"
    "scrollBeginDrag\0scrollEndDrag\0scroll\0"
    "scrollTo\0reactTag\0offsetX\0offsetY\0"
    "animated\0scrollToEnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScrollViewManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       6,    2,   60,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      11,    4,   68,    2, 0x00 /* Private */,
      16,    2,   77,    2, 0x00 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariantList,    4,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Bool,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   12,   15,

       0        // eod
};

void ScrollViewManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScrollViewManager *_t = static_cast<ScrollViewManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->momentumScrollBegin((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 1: _t->momentumScrollEnd((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 2: _t->applyTransformation((*reinterpret_cast< QQuickItem*(*)>(_a[1])),(*reinterpret_cast< QVariantList(*)>(_a[2]))); break;
        case 3: _t->scrollBeginDrag(); break;
        case 4: _t->scrollEndDrag(); break;
        case 5: _t->scroll(); break;
        case 6: _t->scrollTo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 7: _t->scrollToEnd((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScrollViewManager::staticMetaObject = {
    { &ViewManager::staticMetaObject, qt_meta_stringdata_ScrollViewManager.data,
      qt_meta_data_ScrollViewManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ScrollViewManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScrollViewManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScrollViewManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "com.canonical.ReactNative.ModuleInterface"))
        return static_cast< ModuleInterface*>(this);
    return ViewManager::qt_metacast(_clname);
}

int ScrollViewManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ViewManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
