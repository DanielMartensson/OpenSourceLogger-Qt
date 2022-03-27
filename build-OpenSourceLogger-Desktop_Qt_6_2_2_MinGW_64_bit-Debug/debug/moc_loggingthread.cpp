/****************************************************************************
** Meta object code from reading C++ file 'loggingthread.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OpenSourceLogger/code/tools/threads/loggingthread/loggingthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loggingthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoggingThread_t {
    const uint offsetsAndSize[26];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_LoggingThread_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_LoggingThread_t qt_meta_stringdata_LoggingThread = {
    {
QT_MOC_LITERAL(0, 13), // "LoggingThread"
QT_MOC_LITERAL(14, 33), // "signalUpdateChartWithMeasurem..."
QT_MOC_LITERAL(48, 0), // ""
QT_MOC_LITERAL(49, 13), // "QList<float>&"
QT_MOC_LITERAL(63, 20), // "measurementValueList"
QT_MOC_LITERAL(84, 12), // "QStringList&"
QT_MOC_LITERAL(97, 19), // "measurementNameList"
QT_MOC_LITERAL(117, 16), // "signalCreatePlot"
QT_MOC_LITERAL(134, 19), // "howManyMeasurements"
QT_MOC_LITERAL(154, 11), // "showSamples"
QT_MOC_LITERAL(166, 26), // "slotSetLoggingThreadActive"
QT_MOC_LITERAL(193, 6), // "active"
QT_MOC_LITERAL(200, 10) // "sampleTime"

    },
    "LoggingThread\0signalUpdateChartWithMeasurements\0"
    "\0QList<float>&\0measurementValueList\0"
    "QStringList&\0measurementNameList\0"
    "signalCreatePlot\0howManyMeasurements\0"
    "showSamples\0slotSetLoggingThreadActive\0"
    "active\0sampleTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoggingThread[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x06,    1 /* Public */,
       7,    2,   37,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    3,   42,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int,   11,   12,    9,

       0        // eod
};

void LoggingThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoggingThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalUpdateChartWithMeasurements((*reinterpret_cast< QList<float>(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 1: _t->signalCreatePlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->slotSetLoggingThreadActive((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoggingThread::*)(QList<float> & , QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoggingThread::signalUpdateChartWithMeasurements)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoggingThread::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoggingThread::signalCreatePlot)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject LoggingThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_LoggingThread.offsetsAndSize,
    qt_meta_data_LoggingThread,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_LoggingThread_t
, QtPrivate::TypeAndForceComplete<LoggingThread, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<float> &, std::false_type>, QtPrivate::TypeAndForceComplete<QStringList &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *LoggingThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoggingThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoggingThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int LoggingThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void LoggingThread::signalUpdateChartWithMeasurements(QList<float> & _t1, QStringList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LoggingThread::signalCreatePlot(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
