/****************************************************************************
** Meta object code from reading C++ file 'mediaplayermanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../modules/mediaplayer/desktop/mediaplayermanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mediaplayermanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MediaPlayerManager_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MediaPlayerManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MediaPlayerManager_t qt_meta_stringdata_MediaPlayerManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "MediaPlayerManager"
QT_MOC_LITERAL(1, 19, 0), // ""
QT_MOC_LITERAL(2, 20, 6) // "parent"

    },
    "MediaPlayerManager\0\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MediaPlayerManager[] = {

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

void MediaPlayerManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { MediaPlayerManager *_r = new MediaPlayerManager((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { MediaPlayerManager *_r = new MediaPlayerManager();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject MediaPlayerManager::staticMetaObject = {
    { &ViewManager::staticMetaObject, qt_meta_stringdata_MediaPlayerManager.data,
      qt_meta_data_MediaPlayerManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MediaPlayerManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaPlayerManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MediaPlayerManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "com.canonical.ReactNative.ModuleInterface"))
        return static_cast< ModuleInterface*>(this);
    return ViewManager::qt_metacast(_clname);
}

int MediaPlayerManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ViewManager::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
