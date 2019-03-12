/****************************************************************************
** Meta object code from reading C++ file 'webviewmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../node_modules/react-native/ReactQt/runtime/src/componentmanagers/webviewmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webviewmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WebViewManager_t {
    QByteArrayData data[16];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebViewManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebViewManager_t qt_meta_stringdata_WebViewManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "WebViewManager"
QT_MOC_LITERAL(1, 15, 8), // "s_reload"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "s_goBack"
QT_MOC_LITERAL(4, 34, 11), // "s_goForward"
QT_MOC_LITERAL(5, 46, 10), // "s_invokeJS"
QT_MOC_LITERAL(6, 57, 10), // "javascript"
QT_MOC_LITERAL(7, 68, 29), // "sendOnLoadEndNotificationToJs"
QT_MOC_LITERAL(8, 98, 11), // "QQuickItem*"
QT_MOC_LITERAL(9, 110, 7), // "webView"
QT_MOC_LITERAL(10, 118, 31), // "sendOnLoadStartNotificationToJs"
QT_MOC_LITERAL(11, 150, 27), // "sendOnErrorNotificationToJs"
QT_MOC_LITERAL(12, 178, 16), // "injectJavaScript"
QT_MOC_LITERAL(13, 195, 6), // "reload"
QT_MOC_LITERAL(14, 202, 6), // "goBack"
QT_MOC_LITERAL(15, 209, 9) // "goForward"

    },
    "WebViewManager\0s_reload\0\0s_goBack\0"
    "s_goForward\0s_invokeJS\0javascript\0"
    "sendOnLoadEndNotificationToJs\0QQuickItem*\0"
    "webView\0sendOnLoadStartNotificationToJs\0"
    "sendOnErrorNotificationToJs\0"
    "injectJavaScript\0reload\0goBack\0goForward"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebViewManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   75,    2, 0x0a /* Public */,
      10,    1,   78,    2, 0x0a /* Public */,
      11,    1,   81,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    1,   84,    2, 0x00 /* Private */,
      13,    0,   87,    2, 0x02 /* Public */,
      14,    0,   88,    2, 0x02 /* Public */,
      15,    0,   89,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WebViewManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WebViewManager *_t = static_cast<WebViewManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->s_reload(); break;
        case 1: _t->s_goBack(); break;
        case 2: _t->s_goForward(); break;
        case 3: _t->s_invokeJS((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->sendOnLoadEndNotificationToJs((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 5: _t->sendOnLoadStartNotificationToJs((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 6: _t->sendOnErrorNotificationToJs((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 7: _t->injectJavaScript((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->reload(); break;
        case 9: _t->goBack(); break;
        case 10: _t->goForward(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WebViewManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebViewManager::s_reload)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WebViewManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebViewManager::s_goBack)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WebViewManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebViewManager::s_goForward)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WebViewManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebViewManager::s_invokeJS)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WebViewManager::staticMetaObject = {
    { &ViewManager::staticMetaObject, qt_meta_stringdata_WebViewManager.data,
      qt_meta_data_WebViewManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WebViewManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebViewManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WebViewManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "com.canonical.ReactNative.ModuleInterface"))
        return static_cast< ModuleInterface*>(this);
    return ViewManager::qt_metacast(_clname);
}

int WebViewManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ViewManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void WebViewManager::s_reload()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WebViewManager::s_goBack()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WebViewManager::s_goForward()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WebViewManager::s_invokeJS(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
