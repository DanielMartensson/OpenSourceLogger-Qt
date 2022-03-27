/****************************************************************************
** Meta object code from reading C++ file 'messageservicethread.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OpenSourceLogger/code/tools/threads/messageservicethread/messageservicethread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messageservicethread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MessageServiceThread_t {
    const uint offsetsAndSize[76];
    char stringdata0[696];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MessageServiceThread_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MessageServiceThread_t qt_meta_stringdata_MessageServiceThread = {
    {
QT_MOC_LITERAL(0, 20), // "MessageServiceThread"
QT_MOC_LITERAL(21, 21), // "signalTransmitUSBData"
QT_MOC_LITERAL(43, 0), // ""
QT_MOC_LITERAL(44, 10), // "usbDataRaw"
QT_MOC_LITERAL(55, 21), // "signalSendAnalogGains"
QT_MOC_LITERAL(77, 9), // "uint8_t[]"
QT_MOC_LITERAL(87, 10), // "analogGain"
QT_MOC_LITERAL(98, 23), // "signalSendPWMPrescalers"
QT_MOC_LITERAL(122, 10), // "uint16_t[]"
QT_MOC_LITERAL(133, 12), // "pwmPrescaler"
QT_MOC_LITERAL(146, 40), // "signalUpdateCANTerminalWindow..."
QT_MOC_LITERAL(187, 8), // "CAN_DATA"
QT_MOC_LITERAL(196, 19), // "slotSetThreadActive"
QT_MOC_LITERAL(216, 6), // "active"
QT_MOC_LITERAL(223, 32), // "slotSetAnalogInputGainToSTM32PLC"
QT_MOC_LITERAL(256, 7), // "uint8_t"
QT_MOC_LITERAL(264, 5), // "sdadc"
QT_MOC_LITERAL(270, 18), // "configurationIndex"
QT_MOC_LITERAL(289, 4), // "gain"
QT_MOC_LITERAL(294, 29), // "slotSetPWMPrescalerToSTM32PLC"
QT_MOC_LITERAL(324, 13), // "pwmPeripheral"
QT_MOC_LITERAL(338, 8), // "uint16_t"
QT_MOC_LITERAL(347, 9), // "prescaler"
QT_MOC_LITERAL(357, 32), // "slotAskAnalogInputGainsFromSTM32"
QT_MOC_LITERAL(390, 29), // "slotAskPWMPrescalersFromSTM32"
QT_MOC_LITERAL(420, 16), // "slotSetPWMSignal"
QT_MOC_LITERAL(437, 5), // "index"
QT_MOC_LITERAL(443, 5), // "value"
QT_MOC_LITERAL(449, 31), // "slotSetAnalogSingleOutputSignal"
QT_MOC_LITERAL(481, 15), // "slotReadUSBData"
QT_MOC_LITERAL(497, 4), // "data"
QT_MOC_LITERAL(502, 8), // "uint32_t"
QT_MOC_LITERAL(511, 6), // "length"
QT_MOC_LITERAL(518, 38), // "slotSetGeneralValveCommandExt..."
QT_MOC_LITERAL(557, 31), // "generalValveCommandExtendedFlow"
QT_MOC_LITERAL(589, 40), // "slotSetAuxiliaryValveCommandS..."
QT_MOC_LITERAL(630, 33), // "axuiliaryValveCommandStandard..."
QT_MOC_LITERAL(664, 31) // "slotSendCanBusMessageToSTM32PLC"

    },
    "MessageServiceThread\0signalTransmitUSBData\0"
    "\0usbDataRaw\0signalSendAnalogGains\0"
    "uint8_t[]\0analogGain\0signalSendPWMPrescalers\0"
    "uint16_t[]\0pwmPrescaler\0"
    "signalUpdateCANTerminalWindowWithCANData\0"
    "CAN_DATA\0slotSetThreadActive\0active\0"
    "slotSetAnalogInputGainToSTM32PLC\0"
    "uint8_t\0sdadc\0configurationIndex\0gain\0"
    "slotSetPWMPrescalerToSTM32PLC\0"
    "pwmPeripheral\0uint16_t\0prescaler\0"
    "slotAskAnalogInputGainsFromSTM32\0"
    "slotAskPWMPrescalersFromSTM32\0"
    "slotSetPWMSignal\0index\0value\0"
    "slotSetAnalogSingleOutputSignal\0"
    "slotReadUSBData\0data\0uint32_t\0length\0"
    "slotSetGeneralValveCommandExtendedFlow\0"
    "generalValveCommandExtendedFlow\0"
    "slotSetAuxiliaryValveCommandStandardFlow\0"
    "axuiliaryValveCommandStandardFlow\0"
    "slotSendCanBusMessageToSTM32PLC"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MessageServiceThread[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x06,    1 /* Public */,
       4,    1,  107,    2, 0x06,    3 /* Public */,
       7,    1,  110,    2, 0x06,    5 /* Public */,
      10,    1,  113,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,  116,    2, 0x0a,    9 /* Public */,
      14,    3,  119,    2, 0x0a,   11 /* Public */,
      19,    2,  126,    2, 0x0a,   15 /* Public */,
      23,    1,  131,    2, 0x0a,   18 /* Public */,
      24,    0,  134,    2, 0x0a,   20 /* Public */,
      25,    2,  135,    2, 0x0a,   21 /* Public */,
      28,    2,  140,    2, 0x0a,   24 /* Public */,
      29,    2,  145,    2, 0x0a,   27 /* Public */,
      33,    1,  150,    2, 0x0a,   30 /* Public */,
      35,    1,  153,    2, 0x0a,   32 /* Public */,
      37,    0,  156,    2, 0x0a,   34 /* Public */,

 // signals: parameters
    QMetaType::Int, QMetaType::QByteArray,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 5,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Int, 0x80000000 | 15, 0x80000000 | 15, 0x80000000 | 15,   16,   17,   18,
    QMetaType::Int, 0x80000000 | 15, 0x80000000 | 21,   20,   22,
    QMetaType::Int, 0x80000000 | 15,   16,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 21,   26,   27,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 21,   26,   27,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 31,   30,   32,
    QMetaType::Void, 0x80000000 | 8,   34,
    QMetaType::Void, 0x80000000 | 5,   36,
    QMetaType::Void,

       0        // eod
};

void MessageServiceThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MessageServiceThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { int _r = _t->signalTransmitUSBData((*reinterpret_cast< QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->signalSendAnalogGains((*reinterpret_cast< uint8_t(*)[]>(_a[1]))); break;
        case 2: _t->signalSendPWMPrescalers((*reinterpret_cast< uint16_t(*)[]>(_a[1]))); break;
        case 3: _t->signalUpdateCANTerminalWindowWithCANData((*reinterpret_cast< uint8_t(*)[]>(_a[1]))); break;
        case 4: _t->slotSetThreadActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: { int _r = _t->slotSetAnalogInputGainToSTM32PLC((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< uint8_t(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->slotSetPWMPrescalerToSTM32PLC((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->slotAskAnalogInputGainsFromSTM32((*reinterpret_cast< uint8_t(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->slotAskPWMPrescalersFromSTM32();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->slotSetPWMSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 10: _t->slotSetAnalogSingleOutputSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 11: _t->slotReadUSBData((*reinterpret_cast< uint8_t(*)[]>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 12: _t->slotSetGeneralValveCommandExtendedFlow((*reinterpret_cast< uint16_t(*)[]>(_a[1]))); break;
        case 13: _t->slotSetAuxiliaryValveCommandStandardFlow((*reinterpret_cast< uint8_t(*)[]>(_a[1]))); break;
        case 14: _t->slotSendCanBusMessageToSTM32PLC(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = int (MessageServiceThread::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageServiceThread::signalTransmitUSBData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MessageServiceThread::*)(uint8_t []);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageServiceThread::signalSendAnalogGains)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MessageServiceThread::*)(uint16_t []);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageServiceThread::signalSendPWMPrescalers)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MessageServiceThread::*)(uint8_t []);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageServiceThread::signalUpdateCANTerminalWindowWithCANData)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject MessageServiceThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_MessageServiceThread.offsetsAndSize,
    qt_meta_data_MessageServiceThread,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MessageServiceThread_t
, QtPrivate::TypeAndForceComplete<MessageServiceThread, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MessageServiceThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MessageServiceThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MessageServiceThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int MessageServiceThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
int MessageServiceThread::signalTransmitUSBData(QByteArray _t1)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
void MessageServiceThread::signalSendAnalogGains(uint8_t _t1[])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MessageServiceThread::signalSendPWMPrescalers(uint16_t _t1[])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MessageServiceThread::signalUpdateCANTerminalWindowWithCANData(uint8_t _t1[])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
