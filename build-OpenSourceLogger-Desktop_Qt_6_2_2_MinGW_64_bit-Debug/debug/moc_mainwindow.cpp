/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OpenSourceLogger/code/main/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[46];
    char stringdata0[456];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 29), // "on_actionConnection_triggered"
QT_MOC_LITERAL(66, 26), // "on_actionControl_triggered"
QT_MOC_LITERAL(93, 22), // "on_actionCAN_triggered"
QT_MOC_LITERAL(116, 30), // "on_actionMeasurement_triggered"
QT_MOC_LITERAL(147, 31), // "slotUpdateChartWithMeasurements"
QT_MOC_LITERAL(179, 13), // "QList<float>&"
QT_MOC_LITERAL(193, 20), // "measurementValueList"
QT_MOC_LITERAL(214, 12), // "QStringList&"
QT_MOC_LITERAL(227, 19), // "measurementNameList"
QT_MOC_LITERAL(247, 30), // "slotSetAutoScaleAndYAxisLimits"
QT_MOC_LITERAL(278, 9), // "autoScale"
QT_MOC_LITERAL(288, 8), // "minYAxis"
QT_MOC_LITERAL(297, 8), // "maxYAxis"
QT_MOC_LITERAL(306, 14), // "slotCreatePlot"
QT_MOC_LITERAL(321, 19), // "howManyMeasurements"
QT_MOC_LITERAL(341, 11), // "showSamples"
QT_MOC_LITERAL(353, 25), // "on_actionUpload_triggered"
QT_MOC_LITERAL(379, 23), // "on_actionView_triggered"
QT_MOC_LITERAL(403, 27), // "on_actionSTM32PLC_triggered"
QT_MOC_LITERAL(431, 24) // "on_actionAbout_triggered"

    },
    "MainWindow\0on_actionExit_triggered\0\0"
    "on_actionConnection_triggered\0"
    "on_actionControl_triggered\0"
    "on_actionCAN_triggered\0"
    "on_actionMeasurement_triggered\0"
    "slotUpdateChartWithMeasurements\0"
    "QList<float>&\0measurementValueList\0"
    "QStringList&\0measurementNameList\0"
    "slotSetAutoScaleAndYAxisLimits\0autoScale\0"
    "minYAxis\0maxYAxis\0slotCreatePlot\0"
    "howManyMeasurements\0showSamples\0"
    "on_actionUpload_triggered\0"
    "on_actionView_triggered\0"
    "on_actionSTM32PLC_triggered\0"
    "on_actionAbout_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    2,   91,    2, 0x08,    6 /* Private */,
      12,    3,   96,    2, 0x08,    9 /* Private */,
      16,    2,  103,    2, 0x08,   13 /* Private */,
      19,    0,  108,    2, 0x08,   16 /* Private */,
      20,    0,  109,    2, 0x08,   17 /* Private */,
      21,    0,  110,    2, 0x08,   18 /* Private */,
      22,    0,  111,    2, 0x08,   19 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::Bool, QMetaType::Float, QMetaType::Float,   13,   14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionExit_triggered(); break;
        case 1: _t->on_actionConnection_triggered(); break;
        case 2: _t->on_actionControl_triggered(); break;
        case 3: _t->on_actionCAN_triggered(); break;
        case 4: _t->on_actionMeasurement_triggered(); break;
        case 5: _t->slotUpdateChartWithMeasurements((*reinterpret_cast< QList<float>(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 6: _t->slotSetAutoScaleAndYAxisLimits((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 7: _t->slotCreatePlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->on_actionUpload_triggered(); break;
        case 9: _t->on_actionView_triggered(); break;
        case 10: _t->on_actionSTM32PLC_triggered(); break;
        case 11: _t->on_actionAbout_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<float> &, std::false_type>, QtPrivate::TypeAndForceComplete<QStringList &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
