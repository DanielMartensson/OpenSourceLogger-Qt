/****************************************************************************
** Meta object code from reading C++ file 'generalvalvecommandwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OpenSourceLogger/code/main/action/control/canfunctionswindows/saeJ1939/generalvalvecommandwindow/generalvalvecommandwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generalvalvecommandwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeneralValveCommandWindow_t {
    const uint offsetsAndSize[24];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_GeneralValveCommandWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_GeneralValveCommandWindow_t qt_meta_stringdata_GeneralValveCommandWindow = {
    {
QT_MOC_LITERAL(0, 25), // "GeneralValveCommandWindow"
QT_MOC_LITERAL(26, 40), // "signalSetGeneralValveCommandE..."
QT_MOC_LITERAL(67, 0), // ""
QT_MOC_LITERAL(68, 10), // "uint16_t[]"
QT_MOC_LITERAL(79, 31), // "generalValveCommandExtendedFlow"
QT_MOC_LITERAL(111, 33), // "signalSendCanBusMessageToSTM3..."
QT_MOC_LITERAL(145, 31), // "signalSetCallPeriodThreadActive"
QT_MOC_LITERAL(177, 6), // "active"
QT_MOC_LITERAL(184, 10), // "periodTime"
QT_MOC_LITERAL(195, 33), // "slotSendValveCommandInSlowPer..."
QT_MOC_LITERAL(229, 32), // "on_extendedFlowDial_valueChanged"
QT_MOC_LITERAL(262, 5) // "value"

    },
    "GeneralValveCommandWindow\0"
    "signalSetGeneralValveCommandExtendedFlow\0"
    "\0uint16_t[]\0generalValveCommandExtendedFlow\0"
    "signalSendCanBusMessageToSTM32PLC\0"
    "signalSetCallPeriodThreadActive\0active\0"
    "periodTime\0slotSendValveCommandInSlowPeriods\0"
    "on_extendedFlowDial_valueChanged\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeneralValveCommandWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       5,    0,   47,    2, 0x06,    3 /* Public */,
       6,    2,   48,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   53,    2, 0x08,    7 /* Private */,
      10,    1,   54,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void GeneralValveCommandWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GeneralValveCommandWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalSetGeneralValveCommandExtendedFlow((*reinterpret_cast< uint16_t(*)[]>(_a[1]))); break;
        case 1: _t->signalSendCanBusMessageToSTM32PLC(); break;
        case 2: _t->signalSetCallPeriodThreadActive((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->slotSendValveCommandInSlowPeriods(); break;
        case 4: _t->on_extendedFlowDial_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GeneralValveCommandWindow::*)(uint16_t []);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeneralValveCommandWindow::signalSetGeneralValveCommandExtendedFlow)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GeneralValveCommandWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeneralValveCommandWindow::signalSendCanBusMessageToSTM32PLC)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GeneralValveCommandWindow::*)(bool , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeneralValveCommandWindow::signalSetCallPeriodThreadActive)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject GeneralValveCommandWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GeneralValveCommandWindow.offsetsAndSize,
    qt_meta_data_GeneralValveCommandWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_GeneralValveCommandWindow_t
, QtPrivate::TypeAndForceComplete<GeneralValveCommandWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *GeneralValveCommandWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeneralValveCommandWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeneralValveCommandWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GeneralValveCommandWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GeneralValveCommandWindow::signalSetGeneralValveCommandExtendedFlow(uint16_t _t1[])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GeneralValveCommandWindow::signalSendCanBusMessageToSTM32PLC()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GeneralValveCommandWindow::signalSetCallPeriodThreadActive(bool _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
