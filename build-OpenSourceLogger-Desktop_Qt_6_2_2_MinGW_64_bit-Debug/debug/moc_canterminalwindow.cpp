/****************************************************************************
** Meta object code from reading C++ file 'canterminalwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OpenSourceLogger/code/main/action/control/canfunctionswindows/can/canterminalwindow/canterminalwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canterminalwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CANTerminalWindow_t {
    const uint offsetsAndSize[10];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CANTerminalWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CANTerminalWindow_t qt_meta_stringdata_CANTerminalWindow = {
    {
QT_MOC_LITERAL(0, 17), // "CANTerminalWindow"
QT_MOC_LITERAL(18, 38), // "slotUpdateCANTerminalWindowWi..."
QT_MOC_LITERAL(57, 0), // ""
QT_MOC_LITERAL(58, 9), // "uint8_t[]"
QT_MOC_LITERAL(68, 6) // "CAN_TX"

    },
    "CANTerminalWindow\0"
    "slotUpdateCANTerminalWindowWithCANData\0"
    "\0uint8_t[]\0CAN_TX"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CANTerminalWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void CANTerminalWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CANTerminalWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotUpdateCANTerminalWindowWithCANData((*reinterpret_cast< uint8_t(*)[]>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CANTerminalWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CANTerminalWindow.offsetsAndSize,
    qt_meta_data_CANTerminalWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CANTerminalWindow_t
, QtPrivate::TypeAndForceComplete<CANTerminalWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>


>,
    nullptr
} };


const QMetaObject *CANTerminalWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CANTerminalWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CANTerminalWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CANTerminalWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
