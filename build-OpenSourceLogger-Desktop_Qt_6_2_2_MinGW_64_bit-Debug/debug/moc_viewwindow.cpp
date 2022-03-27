/****************************************************************************
** Meta object code from reading C++ file 'viewwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OpenSourceLogger/code/main/action/view/viewwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ViewWindow_t {
    const uint offsetsAndSize[38];
    char stringdata0[434];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ViewWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ViewWindow_t qt_meta_stringdata_ViewWindow = {
    {
QT_MOC_LITERAL(0, 10), // "ViewWindow"
QT_MOC_LITERAL(11, 33), // "signalUpdateChartWithMeasurem..."
QT_MOC_LITERAL(45, 0), // ""
QT_MOC_LITERAL(46, 13), // "QList<float>&"
QT_MOC_LITERAL(60, 20), // "measurementValueList"
QT_MOC_LITERAL(81, 12), // "QStringList&"
QT_MOC_LITERAL(94, 19), // "measurementNameList"
QT_MOC_LITERAL(114, 16), // "signalCreatePlot"
QT_MOC_LITERAL(131, 19), // "howManyMeasurements"
QT_MOC_LITERAL(151, 11), // "showSamples"
QT_MOC_LITERAL(163, 29), // "on_plotDataPushButton_clicked"
QT_MOC_LITERAL(193, 33), // "on_downloadDataPushButton_cli..."
QT_MOC_LITERAL(227, 31), // "on_deleteDataPushButton_clicked"
QT_MOC_LITERAL(259, 43), // "on_measurementIDComboBox_curr..."
QT_MOC_LITERAL(303, 4), // "arg1"
QT_MOC_LITERAL(308, 30), // "on_fromRowSpinBox_valueChanged"
QT_MOC_LITERAL(339, 28), // "on_toRowSpinBox_valueChanged"
QT_MOC_LITERAL(368, 34), // "on_deleteColumnsPushButton_cl..."
QT_MOC_LITERAL(403, 30) // "on_jumpRowSpinBox_valueChanged"

    },
    "ViewWindow\0signalUpdateChartWithMeasurements\0"
    "\0QList<float>&\0measurementValueList\0"
    "QStringList&\0measurementNameList\0"
    "signalCreatePlot\0howManyMeasurements\0"
    "showSamples\0on_plotDataPushButton_clicked\0"
    "on_downloadDataPushButton_clicked\0"
    "on_deleteDataPushButton_clicked\0"
    "on_measurementIDComboBox_currentTextChanged\0"
    "arg1\0on_fromRowSpinBox_valueChanged\0"
    "on_toRowSpinBox_valueChanged\0"
    "on_deleteColumnsPushButton_clicked\0"
    "on_jumpRowSpinBox_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   74,    2, 0x06,    1 /* Public */,
       7,    2,   79,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   84,    2, 0x08,    7 /* Private */,
      11,    0,   85,    2, 0x08,    8 /* Private */,
      12,    0,   86,    2, 0x08,    9 /* Private */,
      13,    1,   87,    2, 0x08,   10 /* Private */,
      15,    1,   90,    2, 0x08,   12 /* Private */,
      16,    1,   93,    2, 0x08,   14 /* Private */,
      17,    0,   96,    2, 0x08,   16 /* Private */,
      18,    1,   97,    2, 0x08,   17 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void ViewWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalUpdateChartWithMeasurements((*reinterpret_cast< QList<float>(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 1: _t->signalCreatePlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_plotDataPushButton_clicked(); break;
        case 3: _t->on_downloadDataPushButton_clicked(); break;
        case 4: _t->on_deleteDataPushButton_clicked(); break;
        case 5: _t->on_measurementIDComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_fromRowSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_toRowSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_deleteColumnsPushButton_clicked(); break;
        case 9: _t->on_jumpRowSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ViewWindow::*)(QList<float> & , QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewWindow::signalUpdateChartWithMeasurements)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ViewWindow::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewWindow::signalCreatePlot)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ViewWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ViewWindow.offsetsAndSize,
    qt_meta_data_ViewWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ViewWindow_t
, QtPrivate::TypeAndForceComplete<ViewWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<float> &, std::false_type>, QtPrivate::TypeAndForceComplete<QStringList &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *ViewWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ViewWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ViewWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ViewWindow::signalUpdateChartWithMeasurements(QList<float> & _t1, QStringList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ViewWindow::signalCreatePlot(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
