/****************************************************************************
** Meta object code from reading C++ file 'bridge.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../node_modules/react-native/ReactQt/runtime/src/bridge.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bridge.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Bridge_t {
    QByteArrayData data[28];
    char stringdata0[365];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Bridge_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Bridge_t qt_meta_stringdata_Bridge = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Bridge"
QT_MOC_LITERAL(1, 7, 12), // "readyChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 19), // "jsAppStartedChanged"
QT_MOC_LITERAL(4, 41, 15), // "sourcesFinished"
QT_MOC_LITERAL(5, 57, 17), // "sourcesLoadFailed"
QT_MOC_LITERAL(6, 75, 21), // "applicationScriptDone"
QT_MOC_LITERAL(7, 97, 18), // "invokeModuleMethod"
QT_MOC_LITERAL(8, 116, 8), // "moduleId"
QT_MOC_LITERAL(9, 125, 8), // "methodId"
QT_MOC_LITERAL(10, 134, 4), // "args"
QT_MOC_LITERAL(11, 139, 5), // "ready"
QT_MOC_LITERAL(12, 145, 12), // "jsAppStarted"
QT_MOC_LITERAL(13, 158, 12), // "visualParent"
QT_MOC_LITERAL(14, 171, 11), // "QQuickItem*"
QT_MOC_LITERAL(15, 183, 9), // "qmlEngine"
QT_MOC_LITERAL(16, 193, 11), // "QQmlEngine*"
QT_MOC_LITERAL(17, 205, 20), // "networkAccessManager"
QT_MOC_LITERAL(18, 226, 22), // "QNetworkAccessManager*"
QT_MOC_LITERAL(19, 249, 9), // "bundleUrl"
QT_MOC_LITERAL(20, 259, 11), // "pluginsPath"
QT_MOC_LITERAL(21, 271, 20), // "serverConnectionType"
QT_MOC_LITERAL(22, 292, 7), // "modules"
QT_MOC_LITERAL(23, 300, 18), // "QList<ModuleData*>"
QT_MOC_LITERAL(24, 319, 9), // "uiManager"
QT_MOC_LITERAL(25, 329, 10), // "UIManager*"
QT_MOC_LITERAL(26, 340, 11), // "imageLoader"
QT_MOC_LITERAL(27, 352, 12) // "ImageLoader*"

    },
    "Bridge\0readyChanged\0\0jsAppStartedChanged\0"
    "sourcesFinished\0sourcesLoadFailed\0"
    "applicationScriptDone\0invokeModuleMethod\0"
    "moduleId\0methodId\0args\0ready\0jsAppStarted\0"
    "visualParent\0QQuickItem*\0qmlEngine\0"
    "QQmlEngine*\0networkAccessManager\0"
    "QNetworkAccessManager*\0bundleUrl\0"
    "pluginsPath\0serverConnectionType\0"
    "modules\0QList<ModuleData*>\0uiManager\0"
    "UIManager*\0imageLoader\0ImageLoader*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Bridge[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
      11,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       7,    3,   49,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QVariantList,    8,    9,   10,

 // properties: name, type, flags
      11, QMetaType::Bool, 0x00495103,
      12, QMetaType::Bool, 0x00495001,
      13, 0x80000000 | 14, 0x0009510b,
      15, 0x80000000 | 16, 0x0009510b,
      17, 0x80000000 | 18, 0x0009510b,
      19, QMetaType::QUrl, 0x00095103,
      20, QMetaType::QString, 0x00095103,
      21, QMetaType::QString, 0x00095103,
      22, 0x80000000 | 23, 0x00095009,
      24, 0x80000000 | 25, 0x00095009,
      26, 0x80000000 | 27, 0x00095009,

 // properties: notify_signal_id
       0,
       1,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void Bridge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Bridge *_t = static_cast<Bridge *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyChanged(); break;
        case 1: _t->jsAppStartedChanged(); break;
        case 2: _t->sourcesFinished(); break;
        case 3: _t->sourcesLoadFailed(); break;
        case 4: _t->applicationScriptDone(); break;
        case 5: _t->invokeModuleMethod((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QList<QVariant>(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::readyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::jsAppStartedChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Bridge *_t = static_cast<Bridge *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->ready(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->jsAppStarted(); break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->visualParent(); break;
        case 3: *reinterpret_cast< QQmlEngine**>(_v) = _t->qmlEngine(); break;
        case 4: *reinterpret_cast< QNetworkAccessManager**>(_v) = _t->networkAccessManager(); break;
        case 5: *reinterpret_cast< QUrl*>(_v) = _t->bundleUrl(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->pluginsPath(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->serverConnectionType(); break;
        case 8: *reinterpret_cast< QList<ModuleData*>*>(_v) = _t->modules(); break;
        case 9: *reinterpret_cast< UIManager**>(_v) = _t->uiManager(); break;
        case 10: *reinterpret_cast< ImageLoader**>(_v) = _t->imageLoader(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Bridge *_t = static_cast<Bridge *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setReady(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setVisualParent(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 3: _t->setQmlEngine(*reinterpret_cast< QQmlEngine**>(_v)); break;
        case 4: _t->setNetworkAccessManager(*reinterpret_cast< QNetworkAccessManager**>(_v)); break;
        case 5: _t->setBundleUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 6: _t->setPluginsPath(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setServerConnectionType(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Bridge::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Bridge.data,
      qt_meta_data_Bridge,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Bridge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Bridge::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Bridge.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Bridge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Bridge::readyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Bridge::jsAppStartedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
