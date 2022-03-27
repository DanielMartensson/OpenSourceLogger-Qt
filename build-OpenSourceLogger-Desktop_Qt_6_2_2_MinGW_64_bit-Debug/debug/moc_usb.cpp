/****************************************************************************
** Meta object code from reading C++ file 'usb.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OpenSourceLogger/code/tools/usb/usb.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_USB_t {
    const uint offsetsAndSize[20];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_USB_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_USB_t qt_meta_stringdata_USB = {
    {
QT_MOC_LITERAL(0, 3), // "USB"
QT_MOC_LITERAL(4, 17), // "signalReadUSBData"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 9), // "uint8_t[]"
QT_MOC_LITERAL(33, 4), // "data"
QT_MOC_LITERAL(38, 8), // "uint32_t"
QT_MOC_LITERAL(47, 6), // "length"
QT_MOC_LITERAL(54, 19), // "slotTransmitUSBData"
QT_MOC_LITERAL(74, 10), // "usbDataRaw"
QT_MOC_LITERAL(85, 15) // "slotReadUSBData"

    },
    "USB\0signalReadUSBData\0\0uint8_t[]\0data\0"
    "uint32_t\0length\0slotTransmitUSBData\0"
    "usbDataRaw\0slotReadUSBData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_USB[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   37,    2, 0x0a,    4 /* Public */,
       9,    0,   40,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Int, QMetaType::QByteArray,    8,
    QMetaType::Void,

       0        // eod
};

void USB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<USB *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalReadUSBData((*reinterpret_cast< uint8_t(*)[]>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 1: { int _r = _t->slotTransmitUSBData((*reinterpret_cast< QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->slotReadUSBData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (USB::*)(uint8_t [], uint32_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&USB::signalReadUSBData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject USB::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_USB.offsetsAndSize,
    qt_meta_data_USB,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_USB_t
, QtPrivate::TypeAndForceComplete<USB, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>
, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *USB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *USB::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_USB.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int USB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void USB::signalReadUSBData(uint8_t _t1[], uint32_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
