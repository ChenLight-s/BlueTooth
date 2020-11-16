/****************************************************************************
** Meta object code from reading C++ file 'control.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/control.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Control_t {
    QByteArrayData data[13];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Control_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Control_t qt_meta_stringdata_Control = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Control"
QT_MOC_LITERAL(1, 8, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 27), // "on_Contrl_Laser_textChanged"
QT_MOC_LITERAL(4, 62, 4), // "arg1"
QT_MOC_LITERAL(5, 67, 24), // "on_Run_Speed_textChanged"
QT_MOC_LITERAL(6, 92, 29), // "on_hContrl_Laser_valueChanged"
QT_MOC_LITERAL(7, 122, 5), // "value"
QT_MOC_LITERAL(8, 128, 27), // "on_ZContrl_Step_textChanged"
QT_MOC_LITERAL(9, 156, 29), // "on_hZContrl_Step_valueChanged"
QT_MOC_LITERAL(10, 186, 26), // "on_hRun_Speed_valueChanged"
QT_MOC_LITERAL(11, 213, 26), // "on_Contrl_Step_textChanged"
QT_MOC_LITERAL(12, 240, 28) // "on_hContrl_Step_valueChanged"

    },
    "Control\0on_pushButton_10_clicked\0\0"
    "on_Contrl_Laser_textChanged\0arg1\0"
    "on_Run_Speed_textChanged\0"
    "on_hContrl_Laser_valueChanged\0value\0"
    "on_ZContrl_Step_textChanged\0"
    "on_hZContrl_Step_valueChanged\0"
    "on_hRun_Speed_valueChanged\0"
    "on_Contrl_Step_textChanged\0"
    "on_hContrl_Step_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Control[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       5,    1,   63,    2, 0x08 /* Private */,
       6,    1,   66,    2, 0x08 /* Private */,
       8,    1,   69,    2, 0x08 /* Private */,
       9,    1,   72,    2, 0x08 /* Private */,
      10,    1,   75,    2, 0x08 /* Private */,
      11,    1,   78,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void Control::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Control *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_10_clicked(); break;
        case 1: _t->on_Contrl_Laser_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_Run_Speed_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_hContrl_Laser_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_ZContrl_Step_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_hZContrl_Step_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_hRun_Speed_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_Contrl_Step_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_hContrl_Step_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Control::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Control.data,
    qt_meta_data_Control,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Control::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Control.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
