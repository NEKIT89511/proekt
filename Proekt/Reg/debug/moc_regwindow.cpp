/****************************************************************************
** Meta object code from reading C++ file 'regwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../regwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'regwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_regWindow_t {
    const uint offsetsAndSize[24];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_regWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_regWindow_t qt_meta_stringdata_regWindow = {
    {
QT_MOC_LITERAL(0, 9), // "regWindow"
QT_MOC_LITERAL(10, 24), // "register_button_clicked2"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 22), // "on_lineName_textEdited"
QT_MOC_LITERAL(59, 4), // "arg1"
QT_MOC_LITERAL(64, 21), // "on_lineFam_textEdited"
QT_MOC_LITERAL(86, 22), // "on_lineOtch_textEdited"
QT_MOC_LITERAL(109, 21), // "on_lineNum_textEdited"
QT_MOC_LITERAL(131, 23), // "on_linePocht_textEdited"
QT_MOC_LITERAL(155, 22), // "on_linePass_textEdited"
QT_MOC_LITERAL(178, 23), // "on_linePass2_textEdited"
QT_MOC_LITERAL(202, 21) // "on_PushButton_clicked"

    },
    "regWindow\0register_button_clicked2\0\0"
    "on_lineName_textEdited\0arg1\0"
    "on_lineFam_textEdited\0on_lineOtch_textEdited\0"
    "on_lineNum_textEdited\0on_linePocht_textEdited\0"
    "on_linePass_textEdited\0on_linePass2_textEdited\0"
    "on_PushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_regWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   69,    2, 0x08,    2 /* Private */,
       5,    1,   72,    2, 0x08,    4 /* Private */,
       6,    1,   75,    2, 0x08,    6 /* Private */,
       7,    1,   78,    2, 0x08,    8 /* Private */,
       8,    1,   81,    2, 0x08,   10 /* Private */,
       9,    1,   84,    2, 0x08,   12 /* Private */,
      10,    1,   87,    2, 0x08,   14 /* Private */,
      11,    0,   90,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void regWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<regWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->register_button_clicked2(); break;
        case 1: _t->on_lineName_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lineFam_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_lineOtch_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_lineNum_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_linePocht_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_linePass_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_linePass2_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_PushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (regWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&regWindow::register_button_clicked2)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject regWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_regWindow.offsetsAndSize,
    qt_meta_data_regWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_regWindow_t
, QtPrivate::TypeAndForceComplete<regWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *regWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *regWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_regWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int regWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void regWindow::register_button_clicked2()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
