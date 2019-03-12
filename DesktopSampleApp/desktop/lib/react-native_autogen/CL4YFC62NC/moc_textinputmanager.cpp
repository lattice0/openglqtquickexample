/****************************************************************************
** Meta object code from reading C++ file 'textinputmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../node_modules/react-native/ReactQt/runtime/src/componentmanagers/textinputmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textinputmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TextInputManager_t {
    QByteArrayData data[18];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextInputManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextInputManager_t qt_meta_stringdata_TextInputManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TextInputManager"
QT_MOC_LITERAL(1, 17, 18), // "sendTextEditedToJs"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "QQuickItem*"
QT_MOC_LITERAL(4, 49, 9), // "textInput"
QT_MOC_LITERAL(5, 59, 23), // "sendSelectionChangeToJs"
QT_MOC_LITERAL(6, 83, 23), // "sendOnSubmitEditingToJs"
QT_MOC_LITERAL(7, 107, 20), // "sendOnEndEditingToJs"
QT_MOC_LITERAL(8, 128, 15), // "sendOnFocusToJs"
QT_MOC_LITERAL(9, 144, 18), // "sendOnKeyPressToJs"
QT_MOC_LITERAL(10, 163, 7), // "keyText"
QT_MOC_LITERAL(11, 171, 9), // "modifiers"
QT_MOC_LITERAL(12, 181, 23), // "sendOnContentSizeChange"
QT_MOC_LITERAL(13, 205, 5), // "width"
QT_MOC_LITERAL(14, 211, 6), // "height"
QT_MOC_LITERAL(15, 218, 12), // "onKeyPressed"
QT_MOC_LITERAL(16, 231, 13), // "submitKeyText"
QT_MOC_LITERAL(17, 245, 15) // "submitModifiers"

    },
    "TextInputManager\0sendTextEditedToJs\0"
    "\0QQuickItem*\0textInput\0sendSelectionChangeToJs\0"
    "sendOnSubmitEditingToJs\0sendOnEndEditingToJs\0"
    "sendOnFocusToJs\0sendOnKeyPressToJs\0"
    "keyText\0modifiers\0sendOnContentSizeChange\0"
    "width\0height\0onKeyPressed\0submitKeyText\0"
    "submitModifiers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextInputManager[] = {

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
       6,    1,   60,    2, 0x0a /* Public */,
       7,    1,   63,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
       9,    3,   69,    2, 0x0a /* Public */,
      12,    3,   76,    2, 0x0a /* Public */,
      15,    5,   83,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QVariantList,    4,   10,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double, QMetaType::Double,    4,   13,   14,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, QMetaType::QVariantList, QMetaType::QString, QMetaType::QVariantList,    4,   10,   11,   16,   17,

       0        // eod
};

void TextInputManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TextInputManager *_t = static_cast<TextInputManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendTextEditedToJs((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 1: _t->sendSelectionChangeToJs((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 2: _t->sendOnSubmitEditingToJs((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 3: _t->sendOnEndEditingToJs((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 4: _t->sendOnFocusToJs((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 5: _t->sendOnKeyPressToJs((*reinterpret_cast< QQuickItem*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariantList(*)>(_a[3]))); break;
        case 6: _t->sendOnContentSizeChange((*reinterpret_cast< QQuickItem*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 7: { bool _r = _t->onKeyPressed((*reinterpret_cast< QQuickItem*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariantList(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QVariantList(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
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
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
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
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TextInputManager::staticMetaObject = {
    { &ViewManager::staticMetaObject, qt_meta_stringdata_TextInputManager.data,
      qt_meta_data_TextInputManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TextInputManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextInputManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextInputManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "com.canonical.ReactNative.ModuleInterface"))
        return static_cast< ModuleInterface*>(this);
    return ViewManager::qt_metacast(_clname);
}

int TextInputManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
