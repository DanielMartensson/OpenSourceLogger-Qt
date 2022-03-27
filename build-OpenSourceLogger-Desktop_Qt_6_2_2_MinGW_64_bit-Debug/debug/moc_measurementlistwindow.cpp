/****************************************************************************
** Meta object code from reading C++ file 'measurementlistwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OpenSourceLogger/code/main/edit/measurement/measurementlistwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'measurementlistwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MeasurementListWindow_t {
    const uint offsetsAndSize[16];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MeasurementListWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MeasurementListWindow_t qt_meta_stringdata_MeasurementListWindow = {
    {
QT_MOC_LITERAL(0, 21), // "MeasurementListWindow"
QT_MOC_LITERAL(22, 38), // "on_measurementListWidget_doub..."
QT_MOC_LITERAL(61, 0), // ""
QT_MOC_LITERAL(62, 11), // "QModelIndex"
QT_MOC_LITERAL(74, 5), // "index"
QT_MOC_LITERAL(80, 35), // "on_addMeasurementPushButton_c..."
QT_MOC_LITERAL(116, 38), // "on_deleteMeasurementPushButto..."
QT_MOC_LITERAL(155, 40) // "on_csvFileSaveLocationPushBut..."

    },
    "MeasurementListWindow\0"
    "on_measurementListWidget_doubleClicked\0"
    "\0QModelIndex\0index\0"
    "on_addMeasurementPushButton_clicked\0"
    "on_deleteMeasurementPushButton_clicked\0"
    "on_csvFileSaveLocationPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeasurementListWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x08,    1 /* Private */,
       5,    0,   41,    2, 0x08,    3 /* Private */,
       6,    0,   42,    2, 0x08,    4 /* Private */,
       7,    0,   43,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MeasurementListWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MeasurementListWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_measurementListWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_addMeasurementPushButton_clicked(); break;
        case 2: _t->on_deleteMeasurementPushButton_clicked(); break;
        case 3: _t->on_csvFileSaveLocationPushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MeasurementListWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MeasurementListWindow.offsetsAndSize,
    qt_meta_data_MeasurementListWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MeasurementListWindow_t
, QtPrivate::TypeAndForceComplete<MeasurementListWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MeasurementListWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeasurementListWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MeasurementListWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MeasurementListWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
