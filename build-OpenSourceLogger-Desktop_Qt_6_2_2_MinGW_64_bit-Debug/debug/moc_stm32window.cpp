/****************************************************************************
** Meta object code from reading C++ file 'stm32window.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OpenSourceLogger/code/main/edit/stm32/stm32window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stm32window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_STM32Window_t {
    const uint offsetsAndSize[46];
    char stringdata0[456];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_STM32Window_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_STM32Window_t qt_meta_stringdata_STM32Window = {
    {
QT_MOC_LITERAL(0, 11), // "STM32Window"
QT_MOC_LITERAL(12, 34), // "signalSetAnalogInputGainToSTM..."
QT_MOC_LITERAL(47, 0), // ""
QT_MOC_LITERAL(48, 7), // "uint8_t"
QT_MOC_LITERAL(56, 5), // "sdadc"
QT_MOC_LITERAL(62, 18), // "configurationIndex"
QT_MOC_LITERAL(81, 4), // "gain"
QT_MOC_LITERAL(86, 31), // "signalSetPWMPrescalerToSTM32PLC"
QT_MOC_LITERAL(118, 13), // "pwmPeripheral"
QT_MOC_LITERAL(132, 8), // "uint16_t"
QT_MOC_LITERAL(141, 9), // "prescaler"
QT_MOC_LITERAL(151, 34), // "signalAskPWMPrescalersFromSTM..."
QT_MOC_LITERAL(186, 34), // "signalAskAnalogInputGainsFrom..."
QT_MOC_LITERAL(221, 34), // "on_sendPrescalerPushButton_cl..."
QT_MOC_LITERAL(256, 38), // "on_receivePrescalersPushButto..."
QT_MOC_LITERAL(295, 34), // "on_sendInputGainPushButton_cl..."
QT_MOC_LITERAL(330, 38), // "on_receiveInputGainsPushButto..."
QT_MOC_LITERAL(369, 19), // "slotSendAnalogGains"
QT_MOC_LITERAL(389, 9), // "uint8_t[]"
QT_MOC_LITERAL(399, 10), // "analogGain"
QT_MOC_LITERAL(410, 21), // "slotSendPWMPrescalers"
QT_MOC_LITERAL(432, 10), // "uint16_t[]"
QT_MOC_LITERAL(443, 12) // "pwmPrescaler"

    },
    "STM32Window\0signalSetAnalogInputGainToSTM32PLC\0"
    "\0uint8_t\0sdadc\0configurationIndex\0"
    "gain\0signalSetPWMPrescalerToSTM32PLC\0"
    "pwmPeripheral\0uint16_t\0prescaler\0"
    "signalAskPWMPrescalersFromSTM32PLC\0"
    "signalAskAnalogInputGainsFromSTM32\0"
    "on_sendPrescalerPushButton_clicked\0"
    "on_receivePrescalersPushButton_clicked\0"
    "on_sendInputGainPushButton_clicked\0"
    "on_receiveInputGainsPushButton_clicked\0"
    "slotSendAnalogGains\0uint8_t[]\0analogGain\0"
    "slotSendPWMPrescalers\0uint16_t[]\0"
    "pwmPrescaler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_STM32Window[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   74,    2, 0x06,    1 /* Public */,
       7,    2,   81,    2, 0x06,    5 /* Public */,
      11,    0,   86,    2, 0x06,    8 /* Public */,
      12,    1,   87,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,   90,    2, 0x08,   11 /* Private */,
      14,    0,   91,    2, 0x08,   12 /* Private */,
      15,    0,   92,    2, 0x08,   13 /* Private */,
      16,    0,   93,    2, 0x08,   14 /* Private */,
      17,    1,   94,    2, 0x08,   15 /* Private */,
      20,    1,   97,    2, 0x08,   17 /* Private */,

 // signals: parameters
    QMetaType::Int, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    4,    5,    6,
    QMetaType::Int, 0x80000000 | 3, 0x80000000 | 9,    8,   10,
    QMetaType::Int,
    QMetaType::Int, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,

       0        // eod
};

void STM32Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<STM32Window *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { int _r = _t->signalSetAnalogInputGainToSTM32PLC((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< uint8_t(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->signalSetPWMPrescalerToSTM32PLC((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->signalAskPWMPrescalersFromSTM32PLC();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->signalAskAnalogInputGainsFromSTM32((*reinterpret_cast< uint8_t(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->on_sendPrescalerPushButton_clicked(); break;
        case 5: _t->on_receivePrescalersPushButton_clicked(); break;
        case 6: _t->on_sendInputGainPushButton_clicked(); break;
        case 7: _t->on_receiveInputGainsPushButton_clicked(); break;
        case 8: _t->slotSendAnalogGains((*reinterpret_cast< uint8_t(*)[]>(_a[1]))); break;
        case 9: _t->slotSendPWMPrescalers((*reinterpret_cast< uint16_t(*)[]>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = int (STM32Window::*)(uint8_t , uint8_t , uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STM32Window::signalSetAnalogInputGainToSTM32PLC)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = int (STM32Window::*)(uint8_t , uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STM32Window::signalSetPWMPrescalerToSTM32PLC)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = int (STM32Window::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STM32Window::signalAskPWMPrescalersFromSTM32PLC)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = int (STM32Window::*)(uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STM32Window::signalAskAnalogInputGainsFromSTM32)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject STM32Window::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_STM32Window.offsetsAndSize,
    qt_meta_data_STM32Window,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_STM32Window_t
, QtPrivate::TypeAndForceComplete<STM32Window, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>


>,
    nullptr
} };


const QMetaObject *STM32Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *STM32Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_STM32Window.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int STM32Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
int STM32Window::signalSetAnalogInputGainToSTM32PLC(uint8_t _t1, uint8_t _t2, uint8_t _t3)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int STM32Window::signalSetPWMPrescalerToSTM32PLC(uint8_t _t1, uint16_t _t2)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
int STM32Window::signalAskPWMPrescalersFromSTM32PLC()
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
int STM32Window::signalAskAnalogInputGainsFromSTM32(uint8_t _t1)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
