/****************************************************************************
** Meta object code from reading C++ file 'OpenGlVideoQtQuick.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OpenGlVideoQtQuick.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OpenGlVideoQtQuick.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenGlVideoQtQuickRenderer_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenGlVideoQtQuickRenderer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenGlVideoQtQuickRenderer_t qt_meta_stringdata_OpenGlVideoQtQuickRenderer = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OpenGlVideoQtQuickRenderer"
QT_MOC_LITERAL(1, 27, 6), // "render"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "OpenGlVideoQtQuickRenderer\0render\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenGlVideoQtQuickRenderer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OpenGlVideoQtQuickRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpenGlVideoQtQuickRenderer *_t = static_cast<OpenGlVideoQtQuickRenderer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->render(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OpenGlVideoQtQuickRenderer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OpenGlVideoQtQuickRenderer.data,
      qt_meta_data_OpenGlVideoQtQuickRenderer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OpenGlVideoQtQuickRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenGlVideoQtQuickRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenGlVideoQtQuickRenderer.stringdata0))
        return static_cast<void*>(const_cast< OpenGlVideoQtQuickRenderer*>(this));
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(const_cast< OpenGlVideoQtQuickRenderer*>(this));
    return QObject::qt_metacast(_clname);
}

int OpenGlVideoQtQuickRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_OpenGlVideoQtQuick_t {
    QByteArrayData data[7];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenGlVideoQtQuick_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenGlVideoQtQuick_t qt_meta_stringdata_OpenGlVideoQtQuick = {
    {
QT_MOC_LITERAL(0, 0, 18), // "OpenGlVideoQtQuick"
QT_MOC_LITERAL(1, 19, 19), // "handleWindowChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 13), // "QQuickWindow*"
QT_MOC_LITERAL(4, 54, 3), // "win"
QT_MOC_LITERAL(5, 58, 4), // "sync"
QT_MOC_LITERAL(6, 63, 6) // "update"

    },
    "OpenGlVideoQtQuick\0handleWindowChanged\0"
    "\0QQuickWindow*\0win\0sync\0update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenGlVideoQtQuick[] = {

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
       1,    1,   29,    2, 0x08 /* Private */,
       5,    0,   32,    2, 0x0a /* Public */,
       6,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OpenGlVideoQtQuick::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpenGlVideoQtQuick *_t = static_cast<OpenGlVideoQtQuick *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleWindowChanged((*reinterpret_cast< QQuickWindow*(*)>(_a[1]))); break;
        case 1: _t->sync(); break;
        case 2: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickWindow* >(); break;
            }
            break;
        }
    }
}

const QMetaObject OpenGlVideoQtQuick::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_OpenGlVideoQtQuick.data,
      qt_meta_data_OpenGlVideoQtQuick,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OpenGlVideoQtQuick::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenGlVideoQtQuick::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenGlVideoQtQuick.stringdata0))
        return static_cast<void*>(const_cast< OpenGlVideoQtQuick*>(this));
    return QQuickItem::qt_metacast(_clname);
}

int OpenGlVideoQtQuick::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
