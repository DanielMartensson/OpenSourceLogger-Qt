/****************************************************************************
** Meta object code from reading C++ file 'saej1939namewindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OpenSourceLogger/code/main/action/control/canfunctionswindows/saeJ1939/saeJ1939namewindow/saej1939namewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'saej1939namewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SaeJ1939NameWindow_t {
    const uint offsetsAndSize[12];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SaeJ1939NameWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SaeJ1939NameWindow_t qt_meta_stringdata_SaeJ1939NameWindow = {
    {
QT_MOC_LITERAL(0, 18), // "SaeJ1939NameWindow"
QT_MOC_LITERAL(19, 33), // "signalSendCanBusMessageToSTM3..."
QT_MOC_LITERAL(53, 0), // ""
QT_MOC_LITERAL(54, 32), // "on_sendRequestPushButton_clicked"
QT_MOC_LITERAL(87, 33), // "on_readResponsePushButton_cli..."
QT_MOC_LITERAL(121, 31) // "on_sendChangePushButton_clicked"

    },
    "SaeJ1939NameWindow\0signalSendCanBusMessageToSTM32PLC\0"
    "\0on_sendRequestPushButton_clicked\0"
    "on_readResponsePushButton_clicked\0"
    "on_sendChangePushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SaeJ1939NameWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SaeJ1939NameWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SaeJ1939NameWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalSendCanBusMessageToSTM32PLC(); break;
        case 1: _t->on_sendRequestPushButton_clicked(); break;
        case 2: _t->on_readResponsePushButton_clicked(); break;
        case 3: _t->on_sendChangePushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SaeJ1939NameWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SaeJ1939NameWindow::signalSendCanBusMessageToSTM32PLC)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject SaeJ1939NameWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SaeJ1939NameWindow.offsetsAndSize,
    qt_meta_data_SaeJ1939NameWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SaeJ1939NameWindow_t
, QtPrivate::TypeAndForceComplete<SaeJ1939NameWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *SaeJ1939NameWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SaeJ1939NameWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SaeJ1939NameWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SaeJ1939NameWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SaeJ1939NameWindow::signalSendCanBusMessageToSTM32PLC()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
