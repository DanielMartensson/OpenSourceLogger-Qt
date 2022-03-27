/****************************************************************************
** Meta object code from reading C++ file 'qcustomplot.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OpenSourceLogger/code/tools/qcustomplot/qcustomplot.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcustomplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCPPainter_t {
    const uint offsetsAndSize[14];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPPainter_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPPainter_t qt_meta_stringdata_QCPPainter = {
    {
QT_MOC_LITERAL(0, 10), // "QCPPainter"
QT_MOC_LITERAL(11, 11), // "PainterMode"
QT_MOC_LITERAL(23, 9), // "pmDefault"
QT_MOC_LITERAL(33, 12), // "pmVectorized"
QT_MOC_LITERAL(46, 11), // "pmNoCaching"
QT_MOC_LITERAL(58, 13), // "pmNonCosmetic"
QT_MOC_LITERAL(72, 12) // "PainterModes"

    },
    "QCPPainter\0PainterMode\0pmDefault\0"
    "pmVectorized\0pmNoCaching\0pmNonCosmetic\0"
    "PainterModes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPPainter[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    4,   24,
       6,    1, 0x1,    4,   32,

 // enum data: key, value
       2, uint(QCPPainter::pmDefault),
       3, uint(QCPPainter::pmVectorized),
       4, uint(QCPPainter::pmNoCaching),
       5, uint(QCPPainter::pmNonCosmetic),
       2, uint(QCPPainter::pmDefault),
       3, uint(QCPPainter::pmVectorized),
       4, uint(QCPPainter::pmNoCaching),
       5, uint(QCPPainter::pmNonCosmetic),

       0        // eod
};

const QMetaObject QCPPainter::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QPainter>::value(),
    qt_meta_stringdata_QCPPainter.offsetsAndSize,
    qt_meta_data_QCPPainter,
    nullptr,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPPainter_t
, QtPrivate::TypeAndForceComplete<QCPPainter, std::true_type>



>,
    nullptr
} };

struct qt_meta_stringdata_QCPLayer_t {
    const uint offsetsAndSize[24];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPLayer_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPLayer_t qt_meta_stringdata_QCPLayer = {
    {
QT_MOC_LITERAL(0, 8), // "QCPLayer"
QT_MOC_LITERAL(9, 10), // "parentPlot"
QT_MOC_LITERAL(20, 12), // "QCustomPlot*"
QT_MOC_LITERAL(33, 4), // "name"
QT_MOC_LITERAL(38, 5), // "index"
QT_MOC_LITERAL(44, 8), // "children"
QT_MOC_LITERAL(53, 20), // "QList<QCPLayerable*>"
QT_MOC_LITERAL(74, 7), // "visible"
QT_MOC_LITERAL(82, 4), // "mode"
QT_MOC_LITERAL(87, 9), // "LayerMode"
QT_MOC_LITERAL(97, 9), // "lmLogical"
QT_MOC_LITERAL(107, 10) // "lmBuffered"

    },
    "QCPLayer\0parentPlot\0QCustomPlot*\0name\0"
    "index\0children\0QList<QCPLayerable*>\0"
    "visible\0mode\0LayerMode\0lmLogical\0"
    "lmBuffered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPLayer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       1,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015009, uint(-1), 0,
       3, QMetaType::QString, 0x00015001, uint(-1), 0,
       4, QMetaType::Int, 0x00015001, uint(-1), 0,
       5, 0x80000000 | 6, 0x00015009, uint(-1), 0,
       7, QMetaType::Bool, 0x00015103, uint(-1), 0,
       8, 0x80000000 | 9, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
       9,    9, 0x0,    2,   49,

 // enum data: key, value
      10, uint(QCPLayer::lmLogical),
      11, uint(QCPLayer::lmBuffered),

       0        // eod
};

void QCPLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCustomPlot* >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QCPLayerable*> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPLayer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QCustomPlot**>(_v) = _t->parentPlot(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->index(); break;
        case 3: *reinterpret_cast< QList<QCPLayerable*>*>(_v) = _t->children(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        case 5: *reinterpret_cast< LayerMode*>(_v) = _t->mode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPLayer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setMode(*reinterpret_cast< LayerMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
}

const QMetaObject QCPLayer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCPLayer.offsetsAndSize,
    qt_meta_data_QCPLayer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPLayer_t
, QtPrivate::TypeAndForceComplete<QCustomPlot*, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<QList<QCPLayerable*>, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<LayerMode, std::true_type>, QtPrivate::TypeAndForceComplete<QCPLayer, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPLayer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCPLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPLayerable_t {
    const uint offsetsAndSize[26];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPLayerable_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPLayerable_t qt_meta_stringdata_QCPLayerable = {
    {
QT_MOC_LITERAL(0, 12), // "QCPLayerable"
QT_MOC_LITERAL(13, 12), // "layerChanged"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 9), // "QCPLayer*"
QT_MOC_LITERAL(37, 8), // "newLayer"
QT_MOC_LITERAL(46, 8), // "setLayer"
QT_MOC_LITERAL(55, 5), // "layer"
QT_MOC_LITERAL(61, 7), // "visible"
QT_MOC_LITERAL(69, 10), // "parentPlot"
QT_MOC_LITERAL(80, 12), // "QCustomPlot*"
QT_MOC_LITERAL(93, 15), // "parentLayerable"
QT_MOC_LITERAL(109, 13), // "QCPLayerable*"
QT_MOC_LITERAL(123, 11) // "antialiased"

    },
    "QCPLayerable\0layerChanged\0\0QCPLayer*\0"
    "newLayer\0setLayer\0layer\0visible\0"
    "parentPlot\0QCustomPlot*\0parentLayerable\0"
    "QCPLayerable*\0antialiased"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPLayerable[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       5,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   29,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3,    6,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00015103, uint(-1), 0,
       8, 0x80000000 | 9, 0x00015009, uint(-1), 0,
      10, 0x80000000 | 11, 0x00015009, uint(-1), 0,
       6, 0x80000000 | 3, 0x0001510b, uint(0), 0,
      12, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

void QCPLayerable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPLayerable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->layerChanged((*reinterpret_cast< QCPLayer*(*)>(_a[1]))); break;
        case 1: { bool _r = _t->setLayer((*reinterpret_cast< QCPLayer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPLayer* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPLayer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPLayerable::*)(QCPLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPLayerable::layerChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPLayer* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPLayerable* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCustomPlot* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPLayerable *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        case 1: *reinterpret_cast< QCustomPlot**>(_v) = _t->parentPlot(); break;
        case 2: *reinterpret_cast< QCPLayerable**>(_v) = _t->parentLayerable(); break;
        case 3: *reinterpret_cast< QCPLayer**>(_v) = _t->layer(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->antialiased(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPLayerable *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setLayer(*reinterpret_cast< QCPLayer**>(_v)); break;
        case 4: _t->setAntialiased(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QCPLayerable::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCPLayerable.offsetsAndSize,
    qt_meta_data_QCPLayerable,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPLayerable_t
, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QCustomPlot*, std::true_type>, QtPrivate::TypeAndForceComplete<QCPLayerable*, std::true_type>, QtPrivate::TypeAndForceComplete<QCPLayer*, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QCPLayerable, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPLayer *, std::false_type>
, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QCPLayer *, std::false_type>


>,
    nullptr
} };


const QMetaObject *QCPLayerable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPLayerable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPLayerable.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCPLayerable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCPLayerable::layerChanged(QCPLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QCPSelectionRect_t {
    const uint offsetsAndSize[22];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPSelectionRect_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPSelectionRect_t qt_meta_stringdata_QCPSelectionRect = {
    {
QT_MOC_LITERAL(0, 16), // "QCPSelectionRect"
QT_MOC_LITERAL(17, 7), // "started"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 12), // "QMouseEvent*"
QT_MOC_LITERAL(39, 5), // "event"
QT_MOC_LITERAL(45, 7), // "changed"
QT_MOC_LITERAL(53, 4), // "rect"
QT_MOC_LITERAL(58, 8), // "canceled"
QT_MOC_LITERAL(67, 12), // "QInputEvent*"
QT_MOC_LITERAL(80, 8), // "accepted"
QT_MOC_LITERAL(89, 6) // "cancel"

    },
    "QCPSelectionRect\0started\0\0QMouseEvent*\0"
    "event\0changed\0rect\0canceled\0QInputEvent*\0"
    "accepted\0cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPSelectionRect[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       5,    2,   47,    2, 0x06,    3 /* Public */,
       7,    2,   52,    2, 0x06,    6 /* Public */,
       9,    2,   57,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   62,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QRect, 0x80000000 | 3,    6,    4,
    QMetaType::Void, QMetaType::QRect, 0x80000000 | 8,    6,    4,
    QMetaType::Void, QMetaType::QRect, 0x80000000 | 3,    6,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QCPSelectionRect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPSelectionRect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->started((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->changed((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 2: _t->canceled((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< QInputEvent*(*)>(_a[2]))); break;
        case 3: _t->accepted((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 4: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPSelectionRect::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPSelectionRect::started)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCPSelectionRect::*)(const QRect & , QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPSelectionRect::changed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCPSelectionRect::*)(const QRect & , QInputEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPSelectionRect::canceled)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QCPSelectionRect::*)(const QRect & , QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPSelectionRect::accepted)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QCPSelectionRect::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayerable::staticMetaObject>(),
    qt_meta_stringdata_QCPSelectionRect.offsetsAndSize,
    qt_meta_data_QCPSelectionRect,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPSelectionRect_t
, QtPrivate::TypeAndForceComplete<QCPSelectionRect, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QRect &, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QRect &, std::false_type>, QtPrivate::TypeAndForceComplete<QInputEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QRect &, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *QCPSelectionRect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPSelectionRect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPSelectionRect.stringdata0))
        return static_cast<void*>(this);
    return QCPLayerable::qt_metacast(_clname);
}

int QCPSelectionRect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
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
void QCPSelectionRect::started(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCPSelectionRect::changed(const QRect & _t1, QMouseEvent * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCPSelectionRect::canceled(const QRect & _t1, QInputEvent * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCPSelectionRect::accepted(const QRect & _t1, QMouseEvent * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_QCPMarginGroup_t {
    const uint offsetsAndSize[2];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPMarginGroup_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPMarginGroup_t qt_meta_stringdata_QCPMarginGroup = {
    {
QT_MOC_LITERAL(0, 14) // "QCPMarginGroup"

    },
    "QCPMarginGroup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPMarginGroup[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPMarginGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPMarginGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCPMarginGroup.offsetsAndSize,
    qt_meta_data_QCPMarginGroup,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPMarginGroup_t
, QtPrivate::TypeAndForceComplete<QCPMarginGroup, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPMarginGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPMarginGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPMarginGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCPMarginGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QCPLayoutElement_t {
    const uint offsetsAndSize[36];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPLayoutElement_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPLayoutElement_t qt_meta_stringdata_QCPLayoutElement = {
    {
QT_MOC_LITERAL(0, 16), // "QCPLayoutElement"
QT_MOC_LITERAL(17, 6), // "layout"
QT_MOC_LITERAL(24, 10), // "QCPLayout*"
QT_MOC_LITERAL(35, 4), // "rect"
QT_MOC_LITERAL(40, 9), // "outerRect"
QT_MOC_LITERAL(50, 7), // "margins"
QT_MOC_LITERAL(58, 8), // "QMargins"
QT_MOC_LITERAL(67, 14), // "minimumMargins"
QT_MOC_LITERAL(82, 11), // "minimumSize"
QT_MOC_LITERAL(94, 11), // "maximumSize"
QT_MOC_LITERAL(106, 18), // "sizeConstraintRect"
QT_MOC_LITERAL(125, 18), // "SizeConstraintRect"
QT_MOC_LITERAL(144, 11), // "UpdatePhase"
QT_MOC_LITERAL(156, 13), // "upPreparation"
QT_MOC_LITERAL(170, 9), // "upMargins"
QT_MOC_LITERAL(180, 8), // "upLayout"
QT_MOC_LITERAL(189, 12), // "scrInnerRect"
QT_MOC_LITERAL(202, 12) // "scrOuterRect"

    },
    "QCPLayoutElement\0layout\0QCPLayout*\0"
    "rect\0outerRect\0margins\0QMargins\0"
    "minimumMargins\0minimumSize\0maximumSize\0"
    "sizeConstraintRect\0SizeConstraintRect\0"
    "UpdatePhase\0upPreparation\0upMargins\0"
    "upLayout\0scrInnerRect\0scrOuterRect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPLayoutElement[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       2,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015009, uint(-1), 0,
       3, QMetaType::QRect, 0x00015001, uint(-1), 0,
       4, QMetaType::QRect, 0x00015103, uint(-1), 0,
       5, 0x80000000 | 6, 0x0001510b, uint(-1), 0,
       7, 0x80000000 | 6, 0x0001510b, uint(-1), 0,
       8, QMetaType::QSize, 0x00015103, uint(-1), 0,
       9, QMetaType::QSize, 0x00015103, uint(-1), 0,
      10, 0x80000000 | 11, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
      12,   12, 0x0,    3,   64,
      11,   11, 0x0,    2,   70,

 // enum data: key, value
      13, uint(QCPLayoutElement::upPreparation),
      14, uint(QCPLayoutElement::upMargins),
      15, uint(QCPLayoutElement::upLayout),
      16, uint(QCPLayoutElement::scrInnerRect),
      17, uint(QCPLayoutElement::scrOuterRect),

       0        // eod
};

void QCPLayoutElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPLayout* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPLayoutElement *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QCPLayout**>(_v) = _t->layout(); break;
        case 1: *reinterpret_cast< QRect*>(_v) = _t->rect(); break;
        case 2: *reinterpret_cast< QRect*>(_v) = _t->outerRect(); break;
        case 3: *reinterpret_cast< QMargins*>(_v) = _t->margins(); break;
        case 4: *reinterpret_cast< QMargins*>(_v) = _t->minimumMargins(); break;
        case 5: *reinterpret_cast< QSize*>(_v) = _t->minimumSize(); break;
        case 6: *reinterpret_cast< QSize*>(_v) = _t->maximumSize(); break;
        case 7: *reinterpret_cast< SizeConstraintRect*>(_v) = _t->sizeConstraintRect(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPLayoutElement *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setOuterRect(*reinterpret_cast< QRect*>(_v)); break;
        case 3: _t->setMargins(*reinterpret_cast< QMargins*>(_v)); break;
        case 4: _t->setMinimumMargins(*reinterpret_cast< QMargins*>(_v)); break;
        case 5: _t->setMinimumSize(*reinterpret_cast< QSize*>(_v)); break;
        case 6: _t->setMaximumSize(*reinterpret_cast< QSize*>(_v)); break;
        case 7: _t->setSizeConstraintRect(*reinterpret_cast< SizeConstraintRect*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
}

const QMetaObject QCPLayoutElement::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayerable::staticMetaObject>(),
    qt_meta_stringdata_QCPLayoutElement.offsetsAndSize,
    qt_meta_data_QCPLayoutElement,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPLayoutElement_t
, QtPrivate::TypeAndForceComplete<QCPLayout*, std::true_type>, QtPrivate::TypeAndForceComplete<QRect, std::true_type>, QtPrivate::TypeAndForceComplete<QRect, std::true_type>, QtPrivate::TypeAndForceComplete<QMargins, std::true_type>, QtPrivate::TypeAndForceComplete<QMargins, std::true_type>, QtPrivate::TypeAndForceComplete<QSize, std::true_type>, QtPrivate::TypeAndForceComplete<QSize, std::true_type>, QtPrivate::TypeAndForceComplete<SizeConstraintRect, std::true_type>, QtPrivate::TypeAndForceComplete<QCPLayoutElement, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPLayoutElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPLayoutElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPLayoutElement.stringdata0))
        return static_cast<void*>(this);
    return QCPLayerable::qt_metacast(_clname);
}

int QCPLayoutElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPLayout_t {
    const uint offsetsAndSize[2];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPLayout_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPLayout_t qt_meta_stringdata_QCPLayout = {
    {
QT_MOC_LITERAL(0, 9) // "QCPLayout"

    },
    "QCPLayout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPLayout[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayoutElement::staticMetaObject>(),
    qt_meta_stringdata_QCPLayout.offsetsAndSize,
    qt_meta_data_QCPLayout,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPLayout_t
, QtPrivate::TypeAndForceComplete<QCPLayout, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPLayout.stringdata0))
        return static_cast<void*>(this);
    return QCPLayoutElement::qt_metacast(_clname);
}

int QCPLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayoutElement::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QCPLayoutGrid_t {
    const uint offsetsAndSize[26];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPLayoutGrid_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPLayoutGrid_t qt_meta_stringdata_QCPLayoutGrid = {
    {
QT_MOC_LITERAL(0, 13), // "QCPLayoutGrid"
QT_MOC_LITERAL(14, 8), // "rowCount"
QT_MOC_LITERAL(23, 11), // "columnCount"
QT_MOC_LITERAL(35, 20), // "columnStretchFactors"
QT_MOC_LITERAL(56, 13), // "QList<double>"
QT_MOC_LITERAL(70, 17), // "rowStretchFactors"
QT_MOC_LITERAL(88, 13), // "columnSpacing"
QT_MOC_LITERAL(102, 10), // "rowSpacing"
QT_MOC_LITERAL(113, 9), // "fillOrder"
QT_MOC_LITERAL(123, 9), // "FillOrder"
QT_MOC_LITERAL(133, 4), // "wrap"
QT_MOC_LITERAL(138, 11), // "foRowsFirst"
QT_MOC_LITERAL(150, 14) // "foColumnsFirst"

    },
    "QCPLayoutGrid\0rowCount\0columnCount\0"
    "columnStretchFactors\0QList<double>\0"
    "rowStretchFactors\0columnSpacing\0"
    "rowSpacing\0fillOrder\0FillOrder\0wrap\0"
    "foRowsFirst\0foColumnsFirst"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPLayoutGrid[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       1,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00015001, uint(-1), 0,
       2, QMetaType::Int, 0x00015001, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
       5, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
       6, QMetaType::Int, 0x00015103, uint(-1), 0,
       7, QMetaType::Int, 0x00015103, uint(-1), 0,
       8, 0x80000000 | 9, 0x0001510b, uint(-1), 0,
      10, QMetaType::Int, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
       9,    9, 0x0,    2,   59,

 // enum data: key, value
      11, uint(QCPLayoutGrid::foRowsFirst),
      12, uint(QCPLayoutGrid::foColumnsFirst),

       0        // eod
};

void QCPLayoutGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPLayoutGrid *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->columnCount(); break;
        case 2: *reinterpret_cast< QList<double>*>(_v) = _t->columnStretchFactors(); break;
        case 3: *reinterpret_cast< QList<double>*>(_v) = _t->rowStretchFactors(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->columnSpacing(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->rowSpacing(); break;
        case 6: *reinterpret_cast< FillOrder*>(_v) = _t->fillOrder(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->wrap(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPLayoutGrid *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setColumnStretchFactors(*reinterpret_cast< QList<double>*>(_v)); break;
        case 3: _t->setRowStretchFactors(*reinterpret_cast< QList<double>*>(_v)); break;
        case 4: _t->setColumnSpacing(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setRowSpacing(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setFillOrder(*reinterpret_cast< FillOrder*>(_v)); break;
        case 7: _t->setWrap(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
}

const QMetaObject QCPLayoutGrid::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayout::staticMetaObject>(),
    qt_meta_stringdata_QCPLayoutGrid.offsetsAndSize,
    qt_meta_data_QCPLayoutGrid,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPLayoutGrid_t
, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<QList<double>, std::true_type>, QtPrivate::TypeAndForceComplete<QList<double>, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<FillOrder, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<QCPLayoutGrid, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPLayoutGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPLayoutGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPLayoutGrid.stringdata0))
        return static_cast<void*>(this);
    return QCPLayout::qt_metacast(_clname);
}

int QCPLayoutGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPLayoutInset_t {
    const uint offsetsAndSize[8];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPLayoutInset_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPLayoutInset_t qt_meta_stringdata_QCPLayoutInset = {
    {
QT_MOC_LITERAL(0, 14), // "QCPLayoutInset"
QT_MOC_LITERAL(15, 14), // "InsetPlacement"
QT_MOC_LITERAL(30, 6), // "ipFree"
QT_MOC_LITERAL(37, 15) // "ipBorderAligned"

    },
    "QCPLayoutInset\0InsetPlacement\0ipFree\0"
    "ipBorderAligned"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPLayoutInset[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    2,   19,

 // enum data: key, value
       2, uint(QCPLayoutInset::ipFree),
       3, uint(QCPLayoutInset::ipBorderAligned),

       0        // eod
};

void QCPLayoutInset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPLayoutInset::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayout::staticMetaObject>(),
    qt_meta_stringdata_QCPLayoutInset.offsetsAndSize,
    qt_meta_data_QCPLayoutInset,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPLayoutInset_t
, QtPrivate::TypeAndForceComplete<QCPLayoutInset, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPLayoutInset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPLayoutInset::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPLayoutInset.stringdata0))
        return static_cast<void*>(this);
    return QCPLayout::qt_metacast(_clname);
}

int QCPLayoutInset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayout::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QCPLineEnding_t {
    const uint offsetsAndSize[24];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPLineEnding_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPLineEnding_t qt_meta_stringdata_QCPLineEnding = {
    {
QT_MOC_LITERAL(0, 13), // "QCPLineEnding"
QT_MOC_LITERAL(14, 11), // "EndingStyle"
QT_MOC_LITERAL(26, 6), // "esNone"
QT_MOC_LITERAL(33, 11), // "esFlatArrow"
QT_MOC_LITERAL(45, 12), // "esSpikeArrow"
QT_MOC_LITERAL(58, 11), // "esLineArrow"
QT_MOC_LITERAL(70, 6), // "esDisc"
QT_MOC_LITERAL(77, 8), // "esSquare"
QT_MOC_LITERAL(86, 9), // "esDiamond"
QT_MOC_LITERAL(96, 5), // "esBar"
QT_MOC_LITERAL(102, 9), // "esHalfBar"
QT_MOC_LITERAL(112, 11) // "esSkewedBar"

    },
    "QCPLineEnding\0EndingStyle\0esNone\0"
    "esFlatArrow\0esSpikeArrow\0esLineArrow\0"
    "esDisc\0esSquare\0esDiamond\0esBar\0"
    "esHalfBar\0esSkewedBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPLineEnding[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,   10,   19,

 // enum data: key, value
       2, uint(QCPLineEnding::esNone),
       3, uint(QCPLineEnding::esFlatArrow),
       4, uint(QCPLineEnding::esSpikeArrow),
       5, uint(QCPLineEnding::esLineArrow),
       6, uint(QCPLineEnding::esDisc),
       7, uint(QCPLineEnding::esSquare),
       8, uint(QCPLineEnding::esDiamond),
       9, uint(QCPLineEnding::esBar),
      10, uint(QCPLineEnding::esHalfBar),
      11, uint(QCPLineEnding::esSkewedBar),

       0        // eod
};

const QMetaObject QCPLineEnding::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_QCPLineEnding.offsetsAndSize,
    qt_meta_data_QCPLineEnding,
    nullptr,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPLineEnding_t
, QtPrivate::TypeAndForceComplete<QCPLineEnding, std::true_type>



>,
    nullptr
} };

struct qt_meta_stringdata_QCPLabelPainterPrivate_t {
    const uint offsetsAndSize[34];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPLabelPainterPrivate_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPLabelPainterPrivate_t qt_meta_stringdata_QCPLabelPainterPrivate = {
    {
QT_MOC_LITERAL(0, 22), // "QCPLabelPainterPrivate"
QT_MOC_LITERAL(23, 10), // "AnchorMode"
QT_MOC_LITERAL(34, 13), // "amRectangular"
QT_MOC_LITERAL(48, 15), // "amSkewedUpright"
QT_MOC_LITERAL(64, 15), // "amSkewedRotated"
QT_MOC_LITERAL(80, 19), // "AnchorReferenceType"
QT_MOC_LITERAL(100, 9), // "artNormal"
QT_MOC_LITERAL(110, 10), // "artTangent"
QT_MOC_LITERAL(121, 10), // "AnchorSide"
QT_MOC_LITERAL(132, 6), // "asLeft"
QT_MOC_LITERAL(139, 7), // "asRight"
QT_MOC_LITERAL(147, 5), // "asTop"
QT_MOC_LITERAL(153, 8), // "asBottom"
QT_MOC_LITERAL(162, 9), // "asTopLeft"
QT_MOC_LITERAL(172, 10), // "asTopRight"
QT_MOC_LITERAL(183, 13), // "asBottomRight"
QT_MOC_LITERAL(197, 12) // "asBottomLeft"

    },
    "QCPLabelPainterPrivate\0AnchorMode\0"
    "amRectangular\0amSkewedUpright\0"
    "amSkewedRotated\0AnchorReferenceType\0"
    "artNormal\0artTangent\0AnchorSide\0asLeft\0"
    "asRight\0asTop\0asBottom\0asTopLeft\0"
    "asTopRight\0asBottomRight\0asBottomLeft"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPLabelPainterPrivate[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    3,   29,
       5,    5, 0x0,    2,   35,
       8,    8, 0x0,    8,   39,

 // enum data: key, value
       2, uint(QCPLabelPainterPrivate::amRectangular),
       3, uint(QCPLabelPainterPrivate::amSkewedUpright),
       4, uint(QCPLabelPainterPrivate::amSkewedRotated),
       6, uint(QCPLabelPainterPrivate::artNormal),
       7, uint(QCPLabelPainterPrivate::artTangent),
       9, uint(QCPLabelPainterPrivate::asLeft),
      10, uint(QCPLabelPainterPrivate::asRight),
      11, uint(QCPLabelPainterPrivate::asTop),
      12, uint(QCPLabelPainterPrivate::asBottom),
      13, uint(QCPLabelPainterPrivate::asTopLeft),
      14, uint(QCPLabelPainterPrivate::asTopRight),
      15, uint(QCPLabelPainterPrivate::asBottomRight),
      16, uint(QCPLabelPainterPrivate::asBottomLeft),

       0        // eod
};

const QMetaObject QCPLabelPainterPrivate::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_QCPLabelPainterPrivate.offsetsAndSize,
    qt_meta_data_QCPLabelPainterPrivate,
    nullptr,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPLabelPainterPrivate_t
, QtPrivate::TypeAndForceComplete<QCPLabelPainterPrivate, std::true_type>



>,
    nullptr
} };

struct qt_meta_stringdata_QCPAxisTicker_t {
    const uint offsetsAndSize[8];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPAxisTicker_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPAxisTicker_t qt_meta_stringdata_QCPAxisTicker = {
    {
QT_MOC_LITERAL(0, 13), // "QCPAxisTicker"
QT_MOC_LITERAL(14, 16), // "TickStepStrategy"
QT_MOC_LITERAL(31, 14), // "tssReadability"
QT_MOC_LITERAL(46, 16) // "tssMeetTickCount"

    },
    "QCPAxisTicker\0TickStepStrategy\0"
    "tssReadability\0tssMeetTickCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPAxisTicker[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    2,   19,

 // enum data: key, value
       2, uint(QCPAxisTicker::tssReadability),
       3, uint(QCPAxisTicker::tssMeetTickCount),

       0        // eod
};

const QMetaObject QCPAxisTicker::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_QCPAxisTicker.offsetsAndSize,
    qt_meta_data_QCPAxisTicker,
    nullptr,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPAxisTicker_t
, QtPrivate::TypeAndForceComplete<QCPAxisTicker, std::true_type>



>,
    nullptr
} };

struct qt_meta_stringdata_QCPAxisTickerTime_t {
    const uint offsetsAndSize[14];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPAxisTickerTime_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPAxisTickerTime_t qt_meta_stringdata_QCPAxisTickerTime = {
    {
QT_MOC_LITERAL(0, 17), // "QCPAxisTickerTime"
QT_MOC_LITERAL(18, 8), // "TimeUnit"
QT_MOC_LITERAL(27, 14), // "tuMilliseconds"
QT_MOC_LITERAL(42, 9), // "tuSeconds"
QT_MOC_LITERAL(52, 9), // "tuMinutes"
QT_MOC_LITERAL(62, 7), // "tuHours"
QT_MOC_LITERAL(70, 6) // "tuDays"

    },
    "QCPAxisTickerTime\0TimeUnit\0tuMilliseconds\0"
    "tuSeconds\0tuMinutes\0tuHours\0tuDays"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPAxisTickerTime[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    5,   19,

 // enum data: key, value
       2, uint(QCPAxisTickerTime::tuMilliseconds),
       3, uint(QCPAxisTickerTime::tuSeconds),
       4, uint(QCPAxisTickerTime::tuMinutes),
       5, uint(QCPAxisTickerTime::tuHours),
       6, uint(QCPAxisTickerTime::tuDays),

       0        // eod
};

const QMetaObject QCPAxisTickerTime::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QCPAxisTicker>::value(),
    qt_meta_stringdata_QCPAxisTickerTime.offsetsAndSize,
    qt_meta_data_QCPAxisTickerTime,
    nullptr,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPAxisTickerTime_t
, QtPrivate::TypeAndForceComplete<QCPAxisTickerTime, std::true_type>



>,
    nullptr
} };

struct qt_meta_stringdata_QCPAxisTickerFixed_t {
    const uint offsetsAndSize[10];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPAxisTickerFixed_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPAxisTickerFixed_t qt_meta_stringdata_QCPAxisTickerFixed = {
    {
QT_MOC_LITERAL(0, 18), // "QCPAxisTickerFixed"
QT_MOC_LITERAL(19, 13), // "ScaleStrategy"
QT_MOC_LITERAL(33, 6), // "ssNone"
QT_MOC_LITERAL(40, 11), // "ssMultiples"
QT_MOC_LITERAL(52, 8) // "ssPowers"

    },
    "QCPAxisTickerFixed\0ScaleStrategy\0"
    "ssNone\0ssMultiples\0ssPowers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPAxisTickerFixed[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    3,   19,

 // enum data: key, value
       2, uint(QCPAxisTickerFixed::ssNone),
       3, uint(QCPAxisTickerFixed::ssMultiples),
       4, uint(QCPAxisTickerFixed::ssPowers),

       0        // eod
};

const QMetaObject QCPAxisTickerFixed::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QCPAxisTicker>::value(),
    qt_meta_stringdata_QCPAxisTickerFixed.offsetsAndSize,
    qt_meta_data_QCPAxisTickerFixed,
    nullptr,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPAxisTickerFixed_t
, QtPrivate::TypeAndForceComplete<QCPAxisTickerFixed, std::true_type>



>,
    nullptr
} };

struct qt_meta_stringdata_QCPAxisTickerPi_t {
    const uint offsetsAndSize[10];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPAxisTickerPi_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPAxisTickerPi_t qt_meta_stringdata_QCPAxisTickerPi = {
    {
QT_MOC_LITERAL(0, 15), // "QCPAxisTickerPi"
QT_MOC_LITERAL(16, 13), // "FractionStyle"
QT_MOC_LITERAL(30, 15), // "fsFloatingPoint"
QT_MOC_LITERAL(46, 16), // "fsAsciiFractions"
QT_MOC_LITERAL(63, 18) // "fsUnicodeFractions"

    },
    "QCPAxisTickerPi\0FractionStyle\0"
    "fsFloatingPoint\0fsAsciiFractions\0"
    "fsUnicodeFractions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPAxisTickerPi[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    3,   19,

 // enum data: key, value
       2, uint(QCPAxisTickerPi::fsFloatingPoint),
       3, uint(QCPAxisTickerPi::fsAsciiFractions),
       4, uint(QCPAxisTickerPi::fsUnicodeFractions),

       0        // eod
};

const QMetaObject QCPAxisTickerPi::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QCPAxisTicker>::value(),
    qt_meta_stringdata_QCPAxisTickerPi.offsetsAndSize,
    qt_meta_data_QCPAxisTickerPi,
    nullptr,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPAxisTickerPi_t
, QtPrivate::TypeAndForceComplete<QCPAxisTickerPi, std::true_type>



>,
    nullptr
} };

struct qt_meta_stringdata_QCPGrid_t {
    const uint offsetsAndSize[14];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPGrid_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPGrid_t qt_meta_stringdata_QCPGrid = {
    {
QT_MOC_LITERAL(0, 7), // "QCPGrid"
QT_MOC_LITERAL(8, 14), // "subGridVisible"
QT_MOC_LITERAL(23, 18), // "antialiasedSubGrid"
QT_MOC_LITERAL(42, 19), // "antialiasedZeroLine"
QT_MOC_LITERAL(62, 3), // "pen"
QT_MOC_LITERAL(66, 10), // "subGridPen"
QT_MOC_LITERAL(77, 11) // "zeroLinePen"

    },
    "QCPGrid\0subGridVisible\0antialiasedSubGrid\0"
    "antialiasedZeroLine\0pen\0subGridPen\0"
    "zeroLinePen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPGrid[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00015103, uint(-1), 0,
       2, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, QMetaType::Bool, 0x00015103, uint(-1), 0,
       4, QMetaType::QPen, 0x00015103, uint(-1), 0,
       5, QMetaType::QPen, 0x00015103, uint(-1), 0,
       6, QMetaType::QPen, 0x00015103, uint(-1), 0,

       0        // eod
};

void QCPGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPGrid *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->subGridVisible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->antialiasedSubGrid(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->antialiasedZeroLine(); break;
        case 3: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 4: *reinterpret_cast< QPen*>(_v) = _t->subGridPen(); break;
        case 5: *reinterpret_cast< QPen*>(_v) = _t->zeroLinePen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPGrid *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSubGridVisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setAntialiasedSubGrid(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setAntialiasedZeroLine(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 4: _t->setSubGridPen(*reinterpret_cast< QPen*>(_v)); break;
        case 5: _t->setZeroLinePen(*reinterpret_cast< QPen*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPGrid::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayerable::staticMetaObject>(),
    qt_meta_stringdata_QCPGrid.offsetsAndSize,
    qt_meta_data_QCPGrid,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPGrid_t
, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QCPGrid, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPGrid.stringdata0))
        return static_cast<void*>(this);
    return QCPLayerable::qt_metacast(_clname);
}

int QCPGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPAxis_t {
    const uint offsetsAndSize[166];
    char stringdata0[1025];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPAxis_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPAxis_t qt_meta_stringdata_QCPAxis = {
    {
QT_MOC_LITERAL(0, 7), // "QCPAxis"
QT_MOC_LITERAL(8, 12), // "rangeChanged"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 8), // "QCPRange"
QT_MOC_LITERAL(31, 8), // "newRange"
QT_MOC_LITERAL(40, 8), // "oldRange"
QT_MOC_LITERAL(49, 16), // "scaleTypeChanged"
QT_MOC_LITERAL(66, 18), // "QCPAxis::ScaleType"
QT_MOC_LITERAL(85, 9), // "scaleType"
QT_MOC_LITERAL(95, 16), // "selectionChanged"
QT_MOC_LITERAL(112, 24), // "QCPAxis::SelectableParts"
QT_MOC_LITERAL(137, 5), // "parts"
QT_MOC_LITERAL(143, 17), // "selectableChanged"
QT_MOC_LITERAL(161, 12), // "setScaleType"
QT_MOC_LITERAL(174, 4), // "type"
QT_MOC_LITERAL(179, 8), // "setRange"
QT_MOC_LITERAL(188, 5), // "range"
QT_MOC_LITERAL(194, 18), // "setSelectableParts"
QT_MOC_LITERAL(213, 15), // "selectableParts"
QT_MOC_LITERAL(229, 16), // "setSelectedParts"
QT_MOC_LITERAL(246, 13), // "selectedParts"
QT_MOC_LITERAL(260, 8), // "axisType"
QT_MOC_LITERAL(269, 8), // "AxisType"
QT_MOC_LITERAL(278, 8), // "axisRect"
QT_MOC_LITERAL(287, 12), // "QCPAxisRect*"
QT_MOC_LITERAL(300, 9), // "ScaleType"
QT_MOC_LITERAL(310, 13), // "rangeReversed"
QT_MOC_LITERAL(324, 6), // "ticker"
QT_MOC_LITERAL(331, 29), // "QSharedPointer<QCPAxisTicker>"
QT_MOC_LITERAL(361, 5), // "ticks"
QT_MOC_LITERAL(367, 10), // "tickLabels"
QT_MOC_LITERAL(378, 16), // "tickLabelPadding"
QT_MOC_LITERAL(395, 13), // "tickLabelFont"
QT_MOC_LITERAL(409, 14), // "tickLabelColor"
QT_MOC_LITERAL(424, 17), // "tickLabelRotation"
QT_MOC_LITERAL(442, 13), // "tickLabelSide"
QT_MOC_LITERAL(456, 9), // "LabelSide"
QT_MOC_LITERAL(466, 12), // "numberFormat"
QT_MOC_LITERAL(479, 15), // "numberPrecision"
QT_MOC_LITERAL(495, 10), // "tickVector"
QT_MOC_LITERAL(506, 13), // "QList<double>"
QT_MOC_LITERAL(520, 16), // "tickVectorLabels"
QT_MOC_LITERAL(537, 12), // "tickLengthIn"
QT_MOC_LITERAL(550, 13), // "tickLengthOut"
QT_MOC_LITERAL(564, 8), // "subTicks"
QT_MOC_LITERAL(573, 15), // "subTickLengthIn"
QT_MOC_LITERAL(589, 16), // "subTickLengthOut"
QT_MOC_LITERAL(606, 7), // "basePen"
QT_MOC_LITERAL(614, 7), // "tickPen"
QT_MOC_LITERAL(622, 10), // "subTickPen"
QT_MOC_LITERAL(633, 9), // "labelFont"
QT_MOC_LITERAL(643, 10), // "labelColor"
QT_MOC_LITERAL(654, 5), // "label"
QT_MOC_LITERAL(660, 12), // "labelPadding"
QT_MOC_LITERAL(673, 7), // "padding"
QT_MOC_LITERAL(681, 6), // "offset"
QT_MOC_LITERAL(688, 15), // "SelectableParts"
QT_MOC_LITERAL(704, 21), // "selectedTickLabelFont"
QT_MOC_LITERAL(726, 17), // "selectedLabelFont"
QT_MOC_LITERAL(744, 22), // "selectedTickLabelColor"
QT_MOC_LITERAL(767, 18), // "selectedLabelColor"
QT_MOC_LITERAL(786, 15), // "selectedBasePen"
QT_MOC_LITERAL(802, 15), // "selectedTickPen"
QT_MOC_LITERAL(818, 18), // "selectedSubTickPen"
QT_MOC_LITERAL(837, 11), // "lowerEnding"
QT_MOC_LITERAL(849, 13), // "QCPLineEnding"
QT_MOC_LITERAL(863, 11), // "upperEnding"
QT_MOC_LITERAL(875, 4), // "grid"
QT_MOC_LITERAL(880, 8), // "QCPGrid*"
QT_MOC_LITERAL(889, 6), // "atLeft"
QT_MOC_LITERAL(896, 7), // "atRight"
QT_MOC_LITERAL(904, 5), // "atTop"
QT_MOC_LITERAL(910, 8), // "atBottom"
QT_MOC_LITERAL(919, 9), // "AxisTypes"
QT_MOC_LITERAL(929, 8), // "lsInside"
QT_MOC_LITERAL(938, 9), // "lsOutside"
QT_MOC_LITERAL(948, 8), // "stLinear"
QT_MOC_LITERAL(957, 13), // "stLogarithmic"
QT_MOC_LITERAL(971, 14), // "SelectablePart"
QT_MOC_LITERAL(986, 6), // "spNone"
QT_MOC_LITERAL(993, 6), // "spAxis"
QT_MOC_LITERAL(1000, 12), // "spTickLabels"
QT_MOC_LITERAL(1013, 11) // "spAxisLabel"

    },
    "QCPAxis\0rangeChanged\0\0QCPRange\0newRange\0"
    "oldRange\0scaleTypeChanged\0QCPAxis::ScaleType\0"
    "scaleType\0selectionChanged\0"
    "QCPAxis::SelectableParts\0parts\0"
    "selectableChanged\0setScaleType\0type\0"
    "setRange\0range\0setSelectableParts\0"
    "selectableParts\0setSelectedParts\0"
    "selectedParts\0axisType\0AxisType\0"
    "axisRect\0QCPAxisRect*\0ScaleType\0"
    "rangeReversed\0ticker\0QSharedPointer<QCPAxisTicker>\0"
    "ticks\0tickLabels\0tickLabelPadding\0"
    "tickLabelFont\0tickLabelColor\0"
    "tickLabelRotation\0tickLabelSide\0"
    "LabelSide\0numberFormat\0numberPrecision\0"
    "tickVector\0QList<double>\0tickVectorLabels\0"
    "tickLengthIn\0tickLengthOut\0subTicks\0"
    "subTickLengthIn\0subTickLengthOut\0"
    "basePen\0tickPen\0subTickPen\0labelFont\0"
    "labelColor\0label\0labelPadding\0padding\0"
    "offset\0SelectableParts\0selectedTickLabelFont\0"
    "selectedLabelFont\0selectedTickLabelColor\0"
    "selectedLabelColor\0selectedBasePen\0"
    "selectedTickPen\0selectedSubTickPen\0"
    "lowerEnding\0QCPLineEnding\0upperEnding\0"
    "grid\0QCPGrid*\0atLeft\0atRight\0atTop\0"
    "atBottom\0AxisTypes\0lsInside\0lsOutside\0"
    "stLinear\0stLogarithmic\0SelectablePart\0"
    "spNone\0spAxis\0spTickLabels\0spAxisLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPAxis[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
      43,   97, // properties
       6,  312, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,   44 /* Public */,
       1,    2,   71,    2, 0x06,   46 /* Public */,
       6,    1,   76,    2, 0x06,   49 /* Public */,
       9,    1,   79,    2, 0x06,   51 /* Public */,
      12,    1,   82,    2, 0x06,   53 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    1,   85,    2, 0x0a,   55 /* Public */,
      15,    1,   88,    2, 0x0a,   57 /* Public */,
      17,    1,   91,    2, 0x0a,   59 /* Public */,
      19,    1,   94,    2, 0x0a,   61 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,   14,
    QMetaType::Void, 0x80000000 | 3,   16,
    QMetaType::Void, 0x80000000 | 10,   18,
    QMetaType::Void, 0x80000000 | 10,   20,

 // properties: name, type, flags
      21, 0x80000000 | 22, 0x00015009, uint(-1), 0,
      23, 0x80000000 | 24, 0x00015009, uint(-1), 0,
       8, 0x80000000 | 25, 0x0001510b, uint(2), 0,
      16, 0x80000000 | 3, 0x0001510b, uint(0), 0,
      26, QMetaType::Bool, 0x00015103, uint(-1), 0,
      27, 0x80000000 | 28, 0x0001510b, uint(-1), 0,
      29, QMetaType::Bool, 0x00015103, uint(-1), 0,
      30, QMetaType::Bool, 0x00015103, uint(-1), 0,
      31, QMetaType::Int, 0x00015103, uint(-1), 0,
      32, QMetaType::QFont, 0x00015103, uint(-1), 0,
      33, QMetaType::QColor, 0x00015103, uint(-1), 0,
      34, QMetaType::Double, 0x00015103, uint(-1), 0,
      35, 0x80000000 | 36, 0x0001510b, uint(-1), 0,
      37, QMetaType::QString, 0x00015103, uint(-1), 0,
      38, QMetaType::Int, 0x00015103, uint(-1), 0,
      39, 0x80000000 | 40, 0x00015009, uint(-1), 0,
      41, QMetaType::QStringList, 0x00015001, uint(-1), 0,
      42, QMetaType::Int, 0x00015103, uint(-1), 0,
      43, QMetaType::Int, 0x00015103, uint(-1), 0,
      44, QMetaType::Bool, 0x00015103, uint(-1), 0,
      45, QMetaType::Int, 0x00015103, uint(-1), 0,
      46, QMetaType::Int, 0x00015103, uint(-1), 0,
      47, QMetaType::QPen, 0x00015103, uint(-1), 0,
      48, QMetaType::QPen, 0x00015103, uint(-1), 0,
      49, QMetaType::QPen, 0x00015103, uint(-1), 0,
      50, QMetaType::QFont, 0x00015103, uint(-1), 0,
      51, QMetaType::QColor, 0x00015103, uint(-1), 0,
      52, QMetaType::QString, 0x00015103, uint(-1), 0,
      53, QMetaType::Int, 0x00015103, uint(-1), 0,
      54, QMetaType::Int, 0x00015103, uint(-1), 0,
      55, QMetaType::Int, 0x00015103, uint(-1), 0,
      20, 0x80000000 | 56, 0x0001510b, uint(3), 0,
      18, 0x80000000 | 56, 0x0001510b, uint(4), 0,
      57, QMetaType::QFont, 0x00015103, uint(-1), 0,
      58, QMetaType::QFont, 0x00015103, uint(-1), 0,
      59, QMetaType::QColor, 0x00015103, uint(-1), 0,
      60, QMetaType::QColor, 0x00015103, uint(-1), 0,
      61, QMetaType::QPen, 0x00015103, uint(-1), 0,
      62, QMetaType::QPen, 0x00015103, uint(-1), 0,
      63, QMetaType::QPen, 0x00015103, uint(-1), 0,
      64, 0x80000000 | 65, 0x0001510b, uint(-1), 0,
      66, 0x80000000 | 65, 0x0001510b, uint(-1), 0,
      67, 0x80000000 | 68, 0x00015009, uint(-1), 0,

 // enums: name, alias, flags, count, data
      22,   22, 0x0,    4,  342,
      73,   22, 0x1,    4,  350,
      36,   36, 0x0,    2,  358,
      25,   25, 0x0,    2,  362,
      78,   78, 0x0,    4,  366,
      56,   78, 0x1,    4,  374,

 // enum data: key, value
      69, uint(QCPAxis::atLeft),
      70, uint(QCPAxis::atRight),
      71, uint(QCPAxis::atTop),
      72, uint(QCPAxis::atBottom),
      69, uint(QCPAxis::atLeft),
      70, uint(QCPAxis::atRight),
      71, uint(QCPAxis::atTop),
      72, uint(QCPAxis::atBottom),
      74, uint(QCPAxis::lsInside),
      75, uint(QCPAxis::lsOutside),
      76, uint(QCPAxis::stLinear),
      77, uint(QCPAxis::stLogarithmic),
      79, uint(QCPAxis::spNone),
      80, uint(QCPAxis::spAxis),
      81, uint(QCPAxis::spTickLabels),
      82, uint(QCPAxis::spAxisLabel),
      79, uint(QCPAxis::spNone),
      80, uint(QCPAxis::spAxis),
      81, uint(QCPAxis::spTickLabels),
      82, uint(QCPAxis::spAxisLabel),

       0        // eod
};

void QCPAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPAxis *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rangeChanged((*reinterpret_cast< const QCPRange(*)>(_a[1]))); break;
        case 1: _t->rangeChanged((*reinterpret_cast< const QCPRange(*)>(_a[1])),(*reinterpret_cast< const QCPRange(*)>(_a[2]))); break;
        case 2: _t->scaleTypeChanged((*reinterpret_cast< QCPAxis::ScaleType(*)>(_a[1]))); break;
        case 3: _t->selectionChanged((*reinterpret_cast< const QCPAxis::SelectableParts(*)>(_a[1]))); break;
        case 4: _t->selectableChanged((*reinterpret_cast< const QCPAxis::SelectableParts(*)>(_a[1]))); break;
        case 5: _t->setScaleType((*reinterpret_cast< QCPAxis::ScaleType(*)>(_a[1]))); break;
        case 6: _t->setRange((*reinterpret_cast< const QCPRange(*)>(_a[1]))); break;
        case 7: _t->setSelectableParts((*reinterpret_cast< const QCPAxis::SelectableParts(*)>(_a[1]))); break;
        case 8: _t->setSelectedParts((*reinterpret_cast< const QCPAxis::SelectableParts(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis::ScaleType >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis::ScaleType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPAxis::*)(const QCPRange & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPAxis::rangeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCPAxis::*)(const QCPRange & , const QCPRange & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPAxis::rangeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCPAxis::*)(QCPAxis::ScaleType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPAxis::scaleTypeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QCPAxis::*)(const QCPAxis::SelectableParts & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPAxis::selectionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QCPAxis::*)(const QCPAxis::SelectableParts & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPAxis::selectableChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAxisRect* >(); break;
        case 42:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPGrid* >(); break;
        case 15:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<QCPAxisTicker> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPAxis *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AxisType*>(_v) = _t->axisType(); break;
        case 1: *reinterpret_cast< QCPAxisRect**>(_v) = _t->axisRect(); break;
        case 2: *reinterpret_cast< ScaleType*>(_v) = _t->scaleType(); break;
        case 3: *reinterpret_cast< QCPRange*>(_v) = _t->range(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->rangeReversed(); break;
        case 5: *reinterpret_cast< QSharedPointer<QCPAxisTicker>*>(_v) = _t->ticker(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->ticks(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->tickLabels(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->tickLabelPadding(); break;
        case 9: *reinterpret_cast< QFont*>(_v) = _t->tickLabelFont(); break;
        case 10: *reinterpret_cast< QColor*>(_v) = _t->tickLabelColor(); break;
        case 11: *reinterpret_cast< double*>(_v) = _t->tickLabelRotation(); break;
        case 12: *reinterpret_cast< LabelSide*>(_v) = _t->tickLabelSide(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->numberFormat(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->numberPrecision(); break;
        case 15: *reinterpret_cast< QList<double>*>(_v) = _t->tickVector(); break;
        case 16: *reinterpret_cast< QList<QString>*>(_v) = _t->tickVectorLabels(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->tickLengthIn(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->tickLengthOut(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->subTicks(); break;
        case 20: *reinterpret_cast< int*>(_v) = _t->subTickLengthIn(); break;
        case 21: *reinterpret_cast< int*>(_v) = _t->subTickLengthOut(); break;
        case 22: *reinterpret_cast< QPen*>(_v) = _t->basePen(); break;
        case 23: *reinterpret_cast< QPen*>(_v) = _t->tickPen(); break;
        case 24: *reinterpret_cast< QPen*>(_v) = _t->subTickPen(); break;
        case 25: *reinterpret_cast< QFont*>(_v) = _t->labelFont(); break;
        case 26: *reinterpret_cast< QColor*>(_v) = _t->labelColor(); break;
        case 27: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 28: *reinterpret_cast< int*>(_v) = _t->labelPadding(); break;
        case 29: *reinterpret_cast< int*>(_v) = _t->padding(); break;
        case 30: *reinterpret_cast< int*>(_v) = _t->offset(); break;
        case 31: *reinterpret_cast<int*>(_v) = QFlag(_t->selectedParts()); break;
        case 32: *reinterpret_cast<int*>(_v) = QFlag(_t->selectableParts()); break;
        case 33: *reinterpret_cast< QFont*>(_v) = _t->selectedTickLabelFont(); break;
        case 34: *reinterpret_cast< QFont*>(_v) = _t->selectedLabelFont(); break;
        case 35: *reinterpret_cast< QColor*>(_v) = _t->selectedTickLabelColor(); break;
        case 36: *reinterpret_cast< QColor*>(_v) = _t->selectedLabelColor(); break;
        case 37: *reinterpret_cast< QPen*>(_v) = _t->selectedBasePen(); break;
        case 38: *reinterpret_cast< QPen*>(_v) = _t->selectedTickPen(); break;
        case 39: *reinterpret_cast< QPen*>(_v) = _t->selectedSubTickPen(); break;
        case 40: *reinterpret_cast< QCPLineEnding*>(_v) = _t->lowerEnding(); break;
        case 41: *reinterpret_cast< QCPLineEnding*>(_v) = _t->upperEnding(); break;
        case 42: *reinterpret_cast< QCPGrid**>(_v) = _t->grid(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPAxis *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setScaleType(*reinterpret_cast< ScaleType*>(_v)); break;
        case 3: _t->setRange(*reinterpret_cast< QCPRange*>(_v)); break;
        case 4: _t->setRangeReversed(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setTicker(*reinterpret_cast< QSharedPointer<QCPAxisTicker>*>(_v)); break;
        case 6: _t->setTicks(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setTickLabels(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setTickLabelPadding(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setTickLabelFont(*reinterpret_cast< QFont*>(_v)); break;
        case 10: _t->setTickLabelColor(*reinterpret_cast< QColor*>(_v)); break;
        case 11: _t->setTickLabelRotation(*reinterpret_cast< double*>(_v)); break;
        case 12: _t->setTickLabelSide(*reinterpret_cast< LabelSide*>(_v)); break;
        case 13: _t->setNumberFormat(*reinterpret_cast< QString*>(_v)); break;
        case 14: _t->setNumberPrecision(*reinterpret_cast< int*>(_v)); break;
        case 17: _t->setTickLengthIn(*reinterpret_cast< int*>(_v)); break;
        case 18: _t->setTickLengthOut(*reinterpret_cast< int*>(_v)); break;
        case 19: _t->setSubTicks(*reinterpret_cast< bool*>(_v)); break;
        case 20: _t->setSubTickLengthIn(*reinterpret_cast< int*>(_v)); break;
        case 21: _t->setSubTickLengthOut(*reinterpret_cast< int*>(_v)); break;
        case 22: _t->setBasePen(*reinterpret_cast< QPen*>(_v)); break;
        case 23: _t->setTickPen(*reinterpret_cast< QPen*>(_v)); break;
        case 24: _t->setSubTickPen(*reinterpret_cast< QPen*>(_v)); break;
        case 25: _t->setLabelFont(*reinterpret_cast< QFont*>(_v)); break;
        case 26: _t->setLabelColor(*reinterpret_cast< QColor*>(_v)); break;
        case 27: _t->setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 28: _t->setLabelPadding(*reinterpret_cast< int*>(_v)); break;
        case 29: _t->setPadding(*reinterpret_cast< int*>(_v)); break;
        case 30: _t->setOffset(*reinterpret_cast< int*>(_v)); break;
        case 31: _t->setSelectedParts(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 32: _t->setSelectableParts(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 33: _t->setSelectedTickLabelFont(*reinterpret_cast< QFont*>(_v)); break;
        case 34: _t->setSelectedLabelFont(*reinterpret_cast< QFont*>(_v)); break;
        case 35: _t->setSelectedTickLabelColor(*reinterpret_cast< QColor*>(_v)); break;
        case 36: _t->setSelectedLabelColor(*reinterpret_cast< QColor*>(_v)); break;
        case 37: _t->setSelectedBasePen(*reinterpret_cast< QPen*>(_v)); break;
        case 38: _t->setSelectedTickPen(*reinterpret_cast< QPen*>(_v)); break;
        case 39: _t->setSelectedSubTickPen(*reinterpret_cast< QPen*>(_v)); break;
        case 40: _t->setLowerEnding(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        case 41: _t->setUpperEnding(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QCPAxis::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayerable::staticMetaObject>(),
    qt_meta_stringdata_QCPAxis.offsetsAndSize,
    qt_meta_data_QCPAxis,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPAxis_t
, QtPrivate::TypeAndForceComplete<AxisType, std::true_type>, QtPrivate::TypeAndForceComplete<QCPAxisRect*, std::true_type>, QtPrivate::TypeAndForceComplete<ScaleType, std::true_type>, QtPrivate::TypeAndForceComplete<QCPRange, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QSharedPointer<QCPAxisTicker>, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<QFont, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<LabelSide, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<QList<double>, std::true_type>, QtPrivate::TypeAndForceComplete<QList<QString>, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QFont, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<SelectableParts, std::true_type>, QtPrivate::TypeAndForceComplete<SelectableParts, std::true_type>, QtPrivate::TypeAndForceComplete<QFont, std::true_type>, QtPrivate::TypeAndForceComplete<QFont, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QCPLineEnding, std::true_type>, QtPrivate::TypeAndForceComplete<QCPLineEnding, std::true_type>, QtPrivate::TypeAndForceComplete<QCPGrid*, std::true_type>, QtPrivate::TypeAndForceComplete<QCPAxis, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAxis::ScaleType, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPAxis::SelectableParts &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPAxis::SelectableParts &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAxis::ScaleType, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPAxis::SelectableParts &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPAxis::SelectableParts &, std::false_type>


>,
    nullptr
} };


const QMetaObject *QCPAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPAxis.stringdata0))
        return static_cast<void*>(this);
    return QCPLayerable::qt_metacast(_clname);
}

int QCPAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCPAxis::rangeChanged(const QCPRange & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCPAxis::rangeChanged(const QCPRange & _t1, const QCPRange & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCPAxis::scaleTypeChanged(QCPAxis::ScaleType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCPAxis::selectionChanged(const QCPAxis::SelectableParts & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QCPAxis::selectableChanged(const QCPAxis::SelectableParts & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_QCPScatterStyle_t {
    const uint offsetsAndSize[56];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPScatterStyle_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPScatterStyle_t qt_meta_stringdata_QCPScatterStyle = {
    {
QT_MOC_LITERAL(0, 15), // "QCPScatterStyle"
QT_MOC_LITERAL(16, 15), // "ScatterProperty"
QT_MOC_LITERAL(32, 6), // "spNone"
QT_MOC_LITERAL(39, 5), // "spPen"
QT_MOC_LITERAL(45, 7), // "spBrush"
QT_MOC_LITERAL(53, 6), // "spSize"
QT_MOC_LITERAL(60, 7), // "spShape"
QT_MOC_LITERAL(68, 5), // "spAll"
QT_MOC_LITERAL(74, 17), // "ScatterProperties"
QT_MOC_LITERAL(92, 12), // "ScatterShape"
QT_MOC_LITERAL(105, 6), // "ssNone"
QT_MOC_LITERAL(112, 5), // "ssDot"
QT_MOC_LITERAL(118, 7), // "ssCross"
QT_MOC_LITERAL(126, 6), // "ssPlus"
QT_MOC_LITERAL(133, 8), // "ssCircle"
QT_MOC_LITERAL(142, 6), // "ssDisc"
QT_MOC_LITERAL(149, 8), // "ssSquare"
QT_MOC_LITERAL(158, 9), // "ssDiamond"
QT_MOC_LITERAL(168, 6), // "ssStar"
QT_MOC_LITERAL(175, 10), // "ssTriangle"
QT_MOC_LITERAL(186, 18), // "ssTriangleInverted"
QT_MOC_LITERAL(205, 13), // "ssCrossSquare"
QT_MOC_LITERAL(219, 12), // "ssPlusSquare"
QT_MOC_LITERAL(232, 13), // "ssCrossCircle"
QT_MOC_LITERAL(246, 12), // "ssPlusCircle"
QT_MOC_LITERAL(259, 7), // "ssPeace"
QT_MOC_LITERAL(267, 8), // "ssPixmap"
QT_MOC_LITERAL(276, 8) // "ssCustom"

    },
    "QCPScatterStyle\0ScatterProperty\0spNone\0"
    "spPen\0spBrush\0spSize\0spShape\0spAll\0"
    "ScatterProperties\0ScatterShape\0ssNone\0"
    "ssDot\0ssCross\0ssPlus\0ssCircle\0ssDisc\0"
    "ssSquare\0ssDiamond\0ssStar\0ssTriangle\0"
    "ssTriangleInverted\0ssCrossSquare\0"
    "ssPlusSquare\0ssCrossCircle\0ssPlusCircle\0"
    "ssPeace\0ssPixmap\0ssCustom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPScatterStyle[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    6,   29,
       8,    1, 0x1,    6,   41,
       9,    9, 0x0,   18,   53,

 // enum data: key, value
       2, uint(QCPScatterStyle::spNone),
       3, uint(QCPScatterStyle::spPen),
       4, uint(QCPScatterStyle::spBrush),
       5, uint(QCPScatterStyle::spSize),
       6, uint(QCPScatterStyle::spShape),
       7, uint(QCPScatterStyle::spAll),
       2, uint(QCPScatterStyle::spNone),
       3, uint(QCPScatterStyle::spPen),
       4, uint(QCPScatterStyle::spBrush),
       5, uint(QCPScatterStyle::spSize),
       6, uint(QCPScatterStyle::spShape),
       7, uint(QCPScatterStyle::spAll),
      10, uint(QCPScatterStyle::ssNone),
      11, uint(QCPScatterStyle::ssDot),
      12, uint(QCPScatterStyle::ssCross),
      13, uint(QCPScatterStyle::ssPlus),
      14, uint(QCPScatterStyle::ssCircle),
      15, uint(QCPScatterStyle::ssDisc),
      16, uint(QCPScatterStyle::ssSquare),
      17, uint(QCPScatterStyle::ssDiamond),
      18, uint(QCPScatterStyle::ssStar),
      19, uint(QCPScatterStyle::ssTriangle),
      20, uint(QCPScatterStyle::ssTriangleInverted),
      21, uint(QCPScatterStyle::ssCrossSquare),
      22, uint(QCPScatterStyle::ssPlusSquare),
      23, uint(QCPScatterStyle::ssCrossCircle),
      24, uint(QCPScatterStyle::ssPlusCircle),
      25, uint(QCPScatterStyle::ssPeace),
      26, uint(QCPScatterStyle::ssPixmap),
      27, uint(QCPScatterStyle::ssCustom),

       0        // eod
};

const QMetaObject QCPScatterStyle::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_QCPScatterStyle.offsetsAndSize,
    qt_meta_data_QCPScatterStyle,
    nullptr,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPScatterStyle_t
, QtPrivate::TypeAndForceComplete<QCPScatterStyle, std::true_type>



>,
    nullptr
} };

struct qt_meta_stringdata_QCPSelectionDecorator_t {
    const uint offsetsAndSize[2];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPSelectionDecorator_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPSelectionDecorator_t qt_meta_stringdata_QCPSelectionDecorator = {
    {
QT_MOC_LITERAL(0, 21) // "QCPSelectionDecorator"

    },
    "QCPSelectionDecorator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPSelectionDecorator[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

       0        // eod
};

const QMetaObject QCPSelectionDecorator::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_QCPSelectionDecorator.offsetsAndSize,
    qt_meta_data_QCPSelectionDecorator,
    nullptr,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPSelectionDecorator_t
, QtPrivate::TypeAndForceComplete<QCPSelectionDecorator, std::true_type>



>,
    nullptr
} };

struct qt_meta_stringdata_QCPAbstractPlottable_t {
    const uint offsetsAndSize[42];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPAbstractPlottable_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPAbstractPlottable_t qt_meta_stringdata_QCPAbstractPlottable = {
    {
QT_MOC_LITERAL(0, 20), // "QCPAbstractPlottable"
QT_MOC_LITERAL(21, 16), // "selectionChanged"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 8), // "selected"
QT_MOC_LITERAL(48, 16), // "QCPDataSelection"
QT_MOC_LITERAL(65, 9), // "selection"
QT_MOC_LITERAL(75, 17), // "selectableChanged"
QT_MOC_LITERAL(93, 18), // "QCP::SelectionType"
QT_MOC_LITERAL(112, 10), // "selectable"
QT_MOC_LITERAL(123, 13), // "setSelectable"
QT_MOC_LITERAL(137, 12), // "setSelection"
QT_MOC_LITERAL(150, 4), // "name"
QT_MOC_LITERAL(155, 15), // "antialiasedFill"
QT_MOC_LITERAL(171, 19), // "antialiasedScatters"
QT_MOC_LITERAL(191, 3), // "pen"
QT_MOC_LITERAL(195, 5), // "brush"
QT_MOC_LITERAL(201, 7), // "keyAxis"
QT_MOC_LITERAL(209, 8), // "QCPAxis*"
QT_MOC_LITERAL(218, 9), // "valueAxis"
QT_MOC_LITERAL(228, 18), // "selectionDecorator"
QT_MOC_LITERAL(247, 22) // "QCPSelectionDecorator*"

    },
    "QCPAbstractPlottable\0selectionChanged\0"
    "\0selected\0QCPDataSelection\0selection\0"
    "selectableChanged\0QCP::SelectionType\0"
    "selectable\0setSelectable\0setSelection\0"
    "name\0antialiasedFill\0antialiasedScatters\0"
    "pen\0brush\0keyAxis\0QCPAxis*\0valueAxis\0"
    "selectionDecorator\0QCPSelectionDecorator*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPAbstractPlottable[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
      10,   59, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,   11 /* Public */,
       1,    1,   47,    2, 0x06,   13 /* Public */,
       6,    1,   50,    2, 0x06,   15 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,   53,    2, 0x0a,   17 /* Public */,
      10,    1,   56,    2, 0x0a,   19 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 4,    5,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00015103, uint(-1), 0,
      12, QMetaType::Bool, 0x00015103, uint(-1), 0,
      13, QMetaType::Bool, 0x00015103, uint(-1), 0,
      14, QMetaType::QPen, 0x00015103, uint(-1), 0,
      15, QMetaType::QBrush, 0x00015103, uint(-1), 0,
      16, 0x80000000 | 17, 0x0001510b, uint(-1), 0,
      18, 0x80000000 | 17, 0x0001510b, uint(-1), 0,
       8, 0x80000000 | 7, 0x0001510b, uint(2), 0,
       5, 0x80000000 | 4, 0x0001510b, uint(0), 0,
      19, 0x80000000 | 20, 0x0001510b, uint(-1), 0,

       0        // eod
};

void QCPAbstractPlottable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPAbstractPlottable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->selectionChanged((*reinterpret_cast< const QCPDataSelection(*)>(_a[1]))); break;
        case 2: _t->selectableChanged((*reinterpret_cast< QCP::SelectionType(*)>(_a[1]))); break;
        case 3: _t->setSelectable((*reinterpret_cast< QCP::SelectionType(*)>(_a[1]))); break;
        case 4: _t->setSelection((*reinterpret_cast< QCPDataSelection(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPDataSelection >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPDataSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPAbstractPlottable::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPAbstractPlottable::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCPAbstractPlottable::*)(const QCPDataSelection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPAbstractPlottable::selectionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCPAbstractPlottable::*)(QCP::SelectionType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPAbstractPlottable::selectableChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAxis* >(); break;
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPDataSelection >(); break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPSelectionDecorator* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPAbstractPlottable *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->antialiasedFill(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->antialiasedScatters(); break;
        case 3: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 4: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        case 5: *reinterpret_cast< QCPAxis**>(_v) = _t->keyAxis(); break;
        case 6: *reinterpret_cast< QCPAxis**>(_v) = _t->valueAxis(); break;
        case 7: *reinterpret_cast< QCP::SelectionType*>(_v) = _t->selectable(); break;
        case 8: *reinterpret_cast< QCPDataSelection*>(_v) = _t->selection(); break;
        case 9: *reinterpret_cast< QCPSelectionDecorator**>(_v) = _t->selectionDecorator(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPAbstractPlottable *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setAntialiasedFill(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setAntialiasedScatters(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 4: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 5: _t->setKeyAxis(*reinterpret_cast< QCPAxis**>(_v)); break;
        case 6: _t->setValueAxis(*reinterpret_cast< QCPAxis**>(_v)); break;
        case 7: _t->setSelectable(*reinterpret_cast< QCP::SelectionType*>(_v)); break;
        case 8: _t->setSelection(*reinterpret_cast< QCPDataSelection*>(_v)); break;
        case 9: _t->setSelectionDecorator(*reinterpret_cast< QCPSelectionDecorator**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_QCPAbstractPlottable[] = {
    QMetaObject::SuperData::link<QCP::staticMetaObject>(),
    nullptr
};

const QMetaObject QCPAbstractPlottable::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayerable::staticMetaObject>(),
    qt_meta_stringdata_QCPAbstractPlottable.offsetsAndSize,
    qt_meta_data_QCPAbstractPlottable,
    qt_static_metacall,
    qt_meta_extradata_QCPAbstractPlottable,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPAbstractPlottable_t
, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QBrush, std::true_type>, QtPrivate::TypeAndForceComplete<QCPAxis*, std::true_type>, QtPrivate::TypeAndForceComplete<QCPAxis*, std::true_type>, QtPrivate::TypeAndForceComplete<QCP::SelectionType, std::true_type>, QtPrivate::TypeAndForceComplete<QCPDataSelection, std::true_type>, QtPrivate::TypeAndForceComplete<QCPSelectionDecorator*, std::true_type>, QtPrivate::TypeAndForceComplete<QCPAbstractPlottable, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPDataSelection &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCP::SelectionType, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCP::SelectionType, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPDataSelection, std::false_type>


>,
    nullptr
} };


const QMetaObject *QCPAbstractPlottable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPAbstractPlottable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPAbstractPlottable.stringdata0))
        return static_cast<void*>(this);
    return QCPLayerable::qt_metacast(_clname);
}

int QCPAbstractPlottable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCPAbstractPlottable::selectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCPAbstractPlottable::selectionChanged(const QCPDataSelection & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCPAbstractPlottable::selectableChanged(QCP::SelectionType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QCPItemAnchor_t {
    const uint offsetsAndSize[2];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPItemAnchor_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPItemAnchor_t qt_meta_stringdata_QCPItemAnchor = {
    {
QT_MOC_LITERAL(0, 13) // "QCPItemAnchor"

    },
    "QCPItemAnchor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemAnchor[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

       0        // eod
};

const QMetaObject QCPItemAnchor::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_QCPItemAnchor.offsetsAndSize,
    qt_meta_data_QCPItemAnchor,
    nullptr,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPItemAnchor_t
, QtPrivate::TypeAndForceComplete<QCPItemAnchor, std::true_type>



>,
    nullptr
} };

struct qt_meta_stringdata_QCPItemPosition_t {
    const uint offsetsAndSize[12];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPItemPosition_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPItemPosition_t qt_meta_stringdata_QCPItemPosition = {
    {
QT_MOC_LITERAL(0, 15), // "QCPItemPosition"
QT_MOC_LITERAL(16, 12), // "PositionType"
QT_MOC_LITERAL(29, 10), // "ptAbsolute"
QT_MOC_LITERAL(40, 15), // "ptViewportRatio"
QT_MOC_LITERAL(56, 15), // "ptAxisRectRatio"
QT_MOC_LITERAL(72, 12) // "ptPlotCoords"

    },
    "QCPItemPosition\0PositionType\0ptAbsolute\0"
    "ptViewportRatio\0ptAxisRectRatio\0"
    "ptPlotCoords"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemPosition[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    4,   19,

 // enum data: key, value
       2, uint(QCPItemPosition::ptAbsolute),
       3, uint(QCPItemPosition::ptViewportRatio),
       4, uint(QCPItemPosition::ptAxisRectRatio),
       5, uint(QCPItemPosition::ptPlotCoords),

       0        // eod
};

const QMetaObject QCPItemPosition::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QCPItemAnchor>::value(),
    qt_meta_stringdata_QCPItemPosition.offsetsAndSize,
    qt_meta_data_QCPItemPosition,
    nullptr,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPItemPosition_t
, QtPrivate::TypeAndForceComplete<QCPItemPosition, std::true_type>



>,
    nullptr
} };

struct qt_meta_stringdata_QCPAbstractItem_t {
    const uint offsetsAndSize[22];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPAbstractItem_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPAbstractItem_t qt_meta_stringdata_QCPAbstractItem = {
    {
QT_MOC_LITERAL(0, 15), // "QCPAbstractItem"
QT_MOC_LITERAL(16, 16), // "selectionChanged"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 8), // "selected"
QT_MOC_LITERAL(43, 17), // "selectableChanged"
QT_MOC_LITERAL(61, 10), // "selectable"
QT_MOC_LITERAL(72, 13), // "setSelectable"
QT_MOC_LITERAL(86, 11), // "setSelected"
QT_MOC_LITERAL(98, 14), // "clipToAxisRect"
QT_MOC_LITERAL(113, 12), // "clipAxisRect"
QT_MOC_LITERAL(126, 12) // "QCPAxisRect*"

    },
    "QCPAbstractItem\0selectionChanged\0\0"
    "selected\0selectableChanged\0selectable\0"
    "setSelectable\0setSelected\0clipToAxisRect\0"
    "clipAxisRect\0QCPAxisRect*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPAbstractItem[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    5 /* Public */,
       4,    1,   41,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   44,    2, 0x0a,    9 /* Public */,
       7,    1,   47,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       8, QMetaType::Bool, 0x00015103, uint(-1), 0,
       9, 0x80000000 | 10, 0x0001510b, uint(-1), 0,
       5, QMetaType::Bool, 0x00015103, uint(1), 0,
       3, QMetaType::Bool, 0x00015103, uint(0), 0,

       0        // eod
};

void QCPAbstractItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPAbstractItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->selectableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setSelectable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPAbstractItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPAbstractItem::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCPAbstractItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPAbstractItem::selectableChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAxisRect* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPAbstractItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->clipToAxisRect(); break;
        case 1: *reinterpret_cast< QCPAxisRect**>(_v) = _t->clipAxisRect(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->selectable(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPAbstractItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setClipToAxisRect(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setClipAxisRect(*reinterpret_cast< QCPAxisRect**>(_v)); break;
        case 2: _t->setSelectable(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QCPAbstractItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayerable::staticMetaObject>(),
    qt_meta_stringdata_QCPAbstractItem.offsetsAndSize,
    qt_meta_data_QCPAbstractItem,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPAbstractItem_t
, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QCPAxisRect*, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QCPAbstractItem, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *QCPAbstractItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPAbstractItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPAbstractItem.stringdata0))
        return static_cast<void*>(this);
    return QCPLayerable::qt_metacast(_clname);
}

int QCPAbstractItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCPAbstractItem::selectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCPAbstractItem::selectableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QCustomPlot_t {
    const uint offsetsAndSize[130];
    char stringdata0[926];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCustomPlot_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCustomPlot_t qt_meta_stringdata_QCustomPlot = {
    {
QT_MOC_LITERAL(0, 11), // "QCustomPlot"
QT_MOC_LITERAL(12, 16), // "mouseDoubleClick"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 12), // "QMouseEvent*"
QT_MOC_LITERAL(43, 5), // "event"
QT_MOC_LITERAL(49, 10), // "mousePress"
QT_MOC_LITERAL(60, 9), // "mouseMove"
QT_MOC_LITERAL(70, 12), // "mouseRelease"
QT_MOC_LITERAL(83, 10), // "mouseWheel"
QT_MOC_LITERAL(94, 12), // "QWheelEvent*"
QT_MOC_LITERAL(107, 14), // "plottableClick"
QT_MOC_LITERAL(122, 21), // "QCPAbstractPlottable*"
QT_MOC_LITERAL(144, 9), // "plottable"
QT_MOC_LITERAL(154, 9), // "dataIndex"
QT_MOC_LITERAL(164, 20), // "plottableDoubleClick"
QT_MOC_LITERAL(185, 9), // "itemClick"
QT_MOC_LITERAL(195, 16), // "QCPAbstractItem*"
QT_MOC_LITERAL(212, 4), // "item"
QT_MOC_LITERAL(217, 15), // "itemDoubleClick"
QT_MOC_LITERAL(233, 9), // "axisClick"
QT_MOC_LITERAL(243, 8), // "QCPAxis*"
QT_MOC_LITERAL(252, 4), // "axis"
QT_MOC_LITERAL(257, 23), // "QCPAxis::SelectablePart"
QT_MOC_LITERAL(281, 4), // "part"
QT_MOC_LITERAL(286, 15), // "axisDoubleClick"
QT_MOC_LITERAL(302, 11), // "legendClick"
QT_MOC_LITERAL(314, 10), // "QCPLegend*"
QT_MOC_LITERAL(325, 6), // "legend"
QT_MOC_LITERAL(332, 22), // "QCPAbstractLegendItem*"
QT_MOC_LITERAL(355, 17), // "legendDoubleClick"
QT_MOC_LITERAL(373, 22), // "selectionChangedByUser"
QT_MOC_LITERAL(396, 12), // "beforeReplot"
QT_MOC_LITERAL(409, 11), // "afterLayout"
QT_MOC_LITERAL(421, 11), // "afterReplot"
QT_MOC_LITERAL(433, 11), // "rescaleAxes"
QT_MOC_LITERAL(445, 21), // "onlyVisiblePlottables"
QT_MOC_LITERAL(467, 11), // "deselectAll"
QT_MOC_LITERAL(479, 6), // "replot"
QT_MOC_LITERAL(486, 28), // "QCustomPlot::RefreshPriority"
QT_MOC_LITERAL(515, 15), // "refreshPriority"
QT_MOC_LITERAL(531, 20), // "processRectSelection"
QT_MOC_LITERAL(552, 4), // "rect"
QT_MOC_LITERAL(557, 15), // "processRectZoom"
QT_MOC_LITERAL(573, 21), // "processPointSelection"
QT_MOC_LITERAL(595, 8), // "viewport"
QT_MOC_LITERAL(604, 10), // "background"
QT_MOC_LITERAL(615, 16), // "backgroundScaled"
QT_MOC_LITERAL(632, 20), // "backgroundScaledMode"
QT_MOC_LITERAL(653, 19), // "Qt::AspectRatioMode"
QT_MOC_LITERAL(673, 10), // "plotLayout"
QT_MOC_LITERAL(684, 14), // "QCPLayoutGrid*"
QT_MOC_LITERAL(699, 24), // "autoAddPlottableToLegend"
QT_MOC_LITERAL(724, 18), // "selectionTolerance"
QT_MOC_LITERAL(743, 20), // "noAntialiasingOnDrag"
QT_MOC_LITERAL(764, 19), // "multiSelectModifier"
QT_MOC_LITERAL(784, 20), // "Qt::KeyboardModifier"
QT_MOC_LITERAL(805, 6), // "openGl"
QT_MOC_LITERAL(812, 15), // "LayerInsertMode"
QT_MOC_LITERAL(828, 8), // "limBelow"
QT_MOC_LITERAL(837, 8), // "limAbove"
QT_MOC_LITERAL(846, 15), // "RefreshPriority"
QT_MOC_LITERAL(862, 18), // "rpImmediateRefresh"
QT_MOC_LITERAL(881, 15), // "rpQueuedRefresh"
QT_MOC_LITERAL(897, 13), // "rpRefreshHint"
QT_MOC_LITERAL(911, 14) // "rpQueuedReplot"

    },
    "QCustomPlot\0mouseDoubleClick\0\0"
    "QMouseEvent*\0event\0mousePress\0mouseMove\0"
    "mouseRelease\0mouseWheel\0QWheelEvent*\0"
    "plottableClick\0QCPAbstractPlottable*\0"
    "plottable\0dataIndex\0plottableDoubleClick\0"
    "itemClick\0QCPAbstractItem*\0item\0"
    "itemDoubleClick\0axisClick\0QCPAxis*\0"
    "axis\0QCPAxis::SelectablePart\0part\0"
    "axisDoubleClick\0legendClick\0QCPLegend*\0"
    "legend\0QCPAbstractLegendItem*\0"
    "legendDoubleClick\0selectionChangedByUser\0"
    "beforeReplot\0afterLayout\0afterReplot\0"
    "rescaleAxes\0onlyVisiblePlottables\0"
    "deselectAll\0replot\0QCustomPlot::RefreshPriority\0"
    "refreshPriority\0processRectSelection\0"
    "rect\0processRectZoom\0processPointSelection\0"
    "viewport\0background\0backgroundScaled\0"
    "backgroundScaledMode\0Qt::AspectRatioMode\0"
    "plotLayout\0QCPLayoutGrid*\0"
    "autoAddPlottableToLegend\0selectionTolerance\0"
    "noAntialiasingOnDrag\0multiSelectModifier\0"
    "Qt::KeyboardModifier\0openGl\0LayerInsertMode\0"
    "limBelow\0limAbove\0RefreshPriority\0"
    "rpImmediateRefresh\0rpQueuedRefresh\0"
    "rpRefreshHint\0rpQueuedReplot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCustomPlot[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
      10,  257, // properties
       2,  307, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  164,    2, 0x06,   11 /* Public */,
       5,    1,  167,    2, 0x06,   13 /* Public */,
       6,    1,  170,    2, 0x06,   15 /* Public */,
       7,    1,  173,    2, 0x06,   17 /* Public */,
       8,    1,  176,    2, 0x06,   19 /* Public */,
      10,    3,  179,    2, 0x06,   21 /* Public */,
      14,    3,  186,    2, 0x06,   25 /* Public */,
      15,    2,  193,    2, 0x06,   29 /* Public */,
      18,    2,  198,    2, 0x06,   32 /* Public */,
      19,    3,  203,    2, 0x06,   35 /* Public */,
      24,    3,  210,    2, 0x06,   39 /* Public */,
      25,    3,  217,    2, 0x06,   43 /* Public */,
      29,    3,  224,    2, 0x06,   47 /* Public */,
      30,    0,  231,    2, 0x06,   51 /* Public */,
      31,    0,  232,    2, 0x06,   52 /* Public */,
      32,    0,  233,    2, 0x06,   53 /* Public */,
      33,    0,  234,    2, 0x06,   54 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      34,    1,  235,    2, 0x0a,   55 /* Public */,
      34,    0,  238,    2, 0x2a,   57 /* Public | MethodCloned */,
      36,    0,  239,    2, 0x0a,   58 /* Public */,
      37,    1,  240,    2, 0x0a,   59 /* Public */,
      37,    0,  243,    2, 0x2a,   61 /* Public | MethodCloned */,
      40,    2,  244,    2, 0x09,   62 /* Protected */,
      42,    2,  249,    2, 0x09,   65 /* Protected */,
      43,    1,  254,    2, 0x09,   68 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 9,    4,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int, 0x80000000 | 3,   12,   13,    4,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int, 0x80000000 | 3,   12,   13,    4,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 3,   17,    4,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 3,   17,    4,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 22, 0x80000000 | 3,   21,   23,    4,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 22, 0x80000000 | 3,   21,   23,    4,
    QMetaType::Void, 0x80000000 | 26, 0x80000000 | 28, 0x80000000 | 3,   27,   17,    4,
    QMetaType::Void, 0x80000000 | 26, 0x80000000 | 28, 0x80000000 | 3,   27,   17,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect, 0x80000000 | 3,   41,    4,
    QMetaType::Void, QMetaType::QRect, 0x80000000 | 3,   41,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
      44, QMetaType::QRect, 0x00015103, uint(-1), 0,
      45, QMetaType::QPixmap, 0x00015103, uint(-1), 0,
      46, QMetaType::Bool, 0x00015103, uint(-1), 0,
      47, 0x80000000 | 48, 0x0001510b, uint(-1), 0,
      49, 0x80000000 | 50, 0x00015009, uint(-1), 0,
      51, QMetaType::Bool, 0x00015103, uint(-1), 0,
      52, QMetaType::Int, 0x00015103, uint(-1), 0,
      53, QMetaType::Bool, 0x00015103, uint(-1), 0,
      54, 0x80000000 | 55, 0x0001510b, uint(-1), 0,
      56, QMetaType::Bool, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      57,   57, 0x0,    2,  317,
      60,   60, 0x0,    4,  321,

 // enum data: key, value
      58, uint(QCustomPlot::limBelow),
      59, uint(QCustomPlot::limAbove),
      61, uint(QCustomPlot::rpImmediateRefresh),
      62, uint(QCustomPlot::rpQueuedRefresh),
      63, uint(QCustomPlot::rpRefreshHint),
      64, uint(QCustomPlot::rpQueuedReplot),

       0        // eod
};

void QCustomPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCustomPlot *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mouseDoubleClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->mousePress((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->mouseMove((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->mouseRelease((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->mouseWheel((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 5: _t->plottableClick((*reinterpret_cast< QCPAbstractPlottable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 6: _t->plottableDoubleClick((*reinterpret_cast< QCPAbstractPlottable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 7: _t->itemClick((*reinterpret_cast< QCPAbstractItem*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 8: _t->itemDoubleClick((*reinterpret_cast< QCPAbstractItem*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 9: _t->axisClick((*reinterpret_cast< QCPAxis*(*)>(_a[1])),(*reinterpret_cast< QCPAxis::SelectablePart(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 10: _t->axisDoubleClick((*reinterpret_cast< QCPAxis*(*)>(_a[1])),(*reinterpret_cast< QCPAxis::SelectablePart(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 11: _t->legendClick((*reinterpret_cast< QCPLegend*(*)>(_a[1])),(*reinterpret_cast< QCPAbstractLegendItem*(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 12: _t->legendDoubleClick((*reinterpret_cast< QCPLegend*(*)>(_a[1])),(*reinterpret_cast< QCPAbstractLegendItem*(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 13: _t->selectionChangedByUser(); break;
        case 14: _t->beforeReplot(); break;
        case 15: _t->afterLayout(); break;
        case 16: _t->afterReplot(); break;
        case 17: _t->rescaleAxes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->rescaleAxes(); break;
        case 19: _t->deselectAll(); break;
        case 20: _t->replot((*reinterpret_cast< QCustomPlot::RefreshPriority(*)>(_a[1]))); break;
        case 21: _t->replot(); break;
        case 22: _t->processRectSelection((*reinterpret_cast< QRect(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 23: _t->processRectZoom((*reinterpret_cast< QRect(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 24: _t->processPointSelection((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAbstractPlottable* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAbstractPlottable* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAbstractItem* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAbstractItem* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis::SelectablePart >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis::SelectablePart >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAbstractLegendItem* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPLegend* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAbstractLegendItem* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPLegend* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCustomPlot::RefreshPriority >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCustomPlot::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomPlot::mouseDoubleClick)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomPlot::mousePress)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomPlot::mouseMove)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomPlot::mouseRelease)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QWheelEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomPlot::mouseWheel)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QCPAbstractPlottable * , int , QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomPlot::plottableClick)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QCPAbstractPlottable * , int , QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomPlot::plottableDoubleClick)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QCPAbstractItem * , QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomPlot::itemClick)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QCPAbstractItem * , QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomPlot::itemDoubleClick)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QCPAxis * , QCPAxis::SelectablePart , QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomPlot::axisClick)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QCPAxis * , QCPAxis::SelectablePart , QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomPlot::axisDoubleClick)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QCPLegend * , QCPAbstractLegendItem * , QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomPlot::legendClick)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QCPLegend * , QCPAbstractLegendItem * , QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomPlot::legendDoubleClick)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomPlot::selectionChangedByUser)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomPlot::beforeReplot)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomPlot::afterLayout)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomPlot::afterReplot)) {
                *result = 16;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPLayoutGrid* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCustomPlot *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRect*>(_v) = _t->viewport(); break;
        case 1: *reinterpret_cast< QPixmap*>(_v) = _t->background(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->backgroundScaled(); break;
        case 3: *reinterpret_cast< Qt::AspectRatioMode*>(_v) = _t->backgroundScaledMode(); break;
        case 4: *reinterpret_cast< QCPLayoutGrid**>(_v) = _t->plotLayout(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->autoAddPlottableToLegend(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->selectionTolerance(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->noAntialiasingOnDrag(); break;
        case 8: *reinterpret_cast< Qt::KeyboardModifier*>(_v) = _t->multiSelectModifier(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->openGl(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCustomPlot *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setViewport(*reinterpret_cast< QRect*>(_v)); break;
        case 1: _t->setBackground(*reinterpret_cast< QPixmap*>(_v)); break;
        case 2: _t->setBackgroundScaled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setBackgroundScaledMode(*reinterpret_cast< Qt::AspectRatioMode*>(_v)); break;
        case 5: _t->setAutoAddPlottableToLegend(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setSelectionTolerance(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setNoAntialiasingOnDrag(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setMultiSelectModifier(*reinterpret_cast< Qt::KeyboardModifier*>(_v)); break;
        case 9: _t->setOpenGl(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QCustomPlot::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QCustomPlot.offsetsAndSize,
    qt_meta_data_QCustomPlot,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCustomPlot_t
, QtPrivate::TypeAndForceComplete<QRect, std::true_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<Qt::AspectRatioMode, std::true_type>, QtPrivate::TypeAndForceComplete<QCPLayoutGrid*, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<Qt::KeyboardModifier, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QCustomPlot, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QWheelEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAbstractPlottable *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAbstractPlottable *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAbstractItem *, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAbstractItem *, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAxis *, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAxis::SelectablePart, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAxis *, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAxis::SelectablePart, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPLegend *, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAbstractLegendItem *, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPLegend *, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAbstractLegendItem *, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCustomPlot::RefreshPriority, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QRect, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QRect, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>


>,
    nullptr
} };


const QMetaObject *QCustomPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCustomPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCustomPlot.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QCustomPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCustomPlot::mouseDoubleClick(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCustomPlot::mousePress(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCustomPlot::mouseMove(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCustomPlot::mouseRelease(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QCustomPlot::mouseWheel(QWheelEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QCustomPlot::plottableClick(QCPAbstractPlottable * _t1, int _t2, QMouseEvent * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QCustomPlot::plottableDoubleClick(QCPAbstractPlottable * _t1, int _t2, QMouseEvent * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QCustomPlot::itemClick(QCPAbstractItem * _t1, QMouseEvent * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QCustomPlot::itemDoubleClick(QCPAbstractItem * _t1, QMouseEvent * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QCustomPlot::axisClick(QCPAxis * _t1, QCPAxis::SelectablePart _t2, QMouseEvent * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QCustomPlot::axisDoubleClick(QCPAxis * _t1, QCPAxis::SelectablePart _t2, QMouseEvent * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QCustomPlot::legendClick(QCPLegend * _t1, QCPAbstractLegendItem * _t2, QMouseEvent * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QCustomPlot::legendDoubleClick(QCPLegend * _t1, QCPAbstractLegendItem * _t2, QMouseEvent * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QCustomPlot::selectionChangedByUser()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QCustomPlot::beforeReplot()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void QCustomPlot::afterLayout()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void QCustomPlot::afterReplot()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}
struct qt_meta_stringdata_QCPColorGradient_t {
    const uint offsetsAndSize[46];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPColorGradient_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPColorGradient_t qt_meta_stringdata_QCPColorGradient = {
    {
QT_MOC_LITERAL(0, 16), // "QCPColorGradient"
QT_MOC_LITERAL(17, 18), // "ColorInterpolation"
QT_MOC_LITERAL(36, 5), // "ciRGB"
QT_MOC_LITERAL(42, 5), // "ciHSV"
QT_MOC_LITERAL(48, 11), // "NanHandling"
QT_MOC_LITERAL(60, 6), // "nhNone"
QT_MOC_LITERAL(67, 13), // "nhLowestColor"
QT_MOC_LITERAL(81, 14), // "nhHighestColor"
QT_MOC_LITERAL(96, 13), // "nhTransparent"
QT_MOC_LITERAL(110, 10), // "nhNanColor"
QT_MOC_LITERAL(121, 14), // "GradientPreset"
QT_MOC_LITERAL(136, 11), // "gpGrayscale"
QT_MOC_LITERAL(148, 5), // "gpHot"
QT_MOC_LITERAL(154, 6), // "gpCold"
QT_MOC_LITERAL(161, 7), // "gpNight"
QT_MOC_LITERAL(169, 7), // "gpCandy"
QT_MOC_LITERAL(177, 11), // "gpGeography"
QT_MOC_LITERAL(189, 5), // "gpIon"
QT_MOC_LITERAL(195, 9), // "gpThermal"
QT_MOC_LITERAL(205, 7), // "gpPolar"
QT_MOC_LITERAL(213, 10), // "gpSpectrum"
QT_MOC_LITERAL(224, 5), // "gpJet"
QT_MOC_LITERAL(230, 6) // "gpHues"

    },
    "QCPColorGradient\0ColorInterpolation\0"
    "ciRGB\0ciHSV\0NanHandling\0nhNone\0"
    "nhLowestColor\0nhHighestColor\0nhTransparent\0"
    "nhNanColor\0GradientPreset\0gpGrayscale\0"
    "gpHot\0gpCold\0gpNight\0gpCandy\0gpGeography\0"
    "gpIon\0gpThermal\0gpPolar\0gpSpectrum\0"
    "gpJet\0gpHues"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPColorGradient[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    2,   29,
       4,    4, 0x0,    5,   33,
      10,   10, 0x0,   12,   43,

 // enum data: key, value
       2, uint(QCPColorGradient::ciRGB),
       3, uint(QCPColorGradient::ciHSV),
       5, uint(QCPColorGradient::nhNone),
       6, uint(QCPColorGradient::nhLowestColor),
       7, uint(QCPColorGradient::nhHighestColor),
       8, uint(QCPColorGradient::nhTransparent),
       9, uint(QCPColorGradient::nhNanColor),
      11, uint(QCPColorGradient::gpGrayscale),
      12, uint(QCPColorGradient::gpHot),
      13, uint(QCPColorGradient::gpCold),
      14, uint(QCPColorGradient::gpNight),
      15, uint(QCPColorGradient::gpCandy),
      16, uint(QCPColorGradient::gpGeography),
      17, uint(QCPColorGradient::gpIon),
      18, uint(QCPColorGradient::gpThermal),
      19, uint(QCPColorGradient::gpPolar),
      20, uint(QCPColorGradient::gpSpectrum),
      21, uint(QCPColorGradient::gpJet),
      22, uint(QCPColorGradient::gpHues),

       0        // eod
};

const QMetaObject QCPColorGradient::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_QCPColorGradient.offsetsAndSize,
    qt_meta_data_QCPColorGradient,
    nullptr,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPColorGradient_t
, QtPrivate::TypeAndForceComplete<QCPColorGradient, std::true_type>



>,
    nullptr
} };

struct qt_meta_stringdata_QCPSelectionDecoratorBracket_t {
    const uint offsetsAndSize[14];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPSelectionDecoratorBracket_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPSelectionDecoratorBracket_t qt_meta_stringdata_QCPSelectionDecoratorBracket = {
    {
QT_MOC_LITERAL(0, 28), // "QCPSelectionDecoratorBracket"
QT_MOC_LITERAL(29, 12), // "BracketStyle"
QT_MOC_LITERAL(42, 15), // "bsSquareBracket"
QT_MOC_LITERAL(58, 13), // "bsHalfEllipse"
QT_MOC_LITERAL(72, 9), // "bsEllipse"
QT_MOC_LITERAL(82, 6), // "bsPlus"
QT_MOC_LITERAL(89, 11) // "bsUserStyle"

    },
    "QCPSelectionDecoratorBracket\0BracketStyle\0"
    "bsSquareBracket\0bsHalfEllipse\0bsEllipse\0"
    "bsPlus\0bsUserStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPSelectionDecoratorBracket[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    5,   19,

 // enum data: key, value
       2, uint(QCPSelectionDecoratorBracket::bsSquareBracket),
       3, uint(QCPSelectionDecoratorBracket::bsHalfEllipse),
       4, uint(QCPSelectionDecoratorBracket::bsEllipse),
       5, uint(QCPSelectionDecoratorBracket::bsPlus),
       6, uint(QCPSelectionDecoratorBracket::bsUserStyle),

       0        // eod
};

const QMetaObject QCPSelectionDecoratorBracket::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QCPSelectionDecorator>::value(),
    qt_meta_stringdata_QCPSelectionDecoratorBracket.offsetsAndSize,
    qt_meta_data_QCPSelectionDecoratorBracket,
    nullptr,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPSelectionDecoratorBracket_t
, QtPrivate::TypeAndForceComplete<QCPSelectionDecoratorBracket, std::true_type>



>,
    nullptr
} };

struct qt_meta_stringdata_QCPAxisRect_t {
    const uint offsetsAndSize[16];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPAxisRect_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPAxisRect_t qt_meta_stringdata_QCPAxisRect = {
    {
QT_MOC_LITERAL(0, 11), // "QCPAxisRect"
QT_MOC_LITERAL(12, 10), // "background"
QT_MOC_LITERAL(23, 16), // "backgroundScaled"
QT_MOC_LITERAL(40, 20), // "backgroundScaledMode"
QT_MOC_LITERAL(61, 19), // "Qt::AspectRatioMode"
QT_MOC_LITERAL(81, 9), // "rangeDrag"
QT_MOC_LITERAL(91, 16), // "Qt::Orientations"
QT_MOC_LITERAL(108, 9) // "rangeZoom"

    },
    "QCPAxisRect\0background\0backgroundScaled\0"
    "backgroundScaledMode\0Qt::AspectRatioMode\0"
    "rangeDrag\0Qt::Orientations\0rangeZoom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPAxisRect[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPixmap, 0x00015103, uint(-1), 0,
       2, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
       5, 0x80000000 | 6, 0x0001510b, uint(-1), 0,
       7, 0x80000000 | 6, 0x0001510b, uint(-1), 0,

       0        // eod
};

void QCPAxisRect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPAxisRect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPixmap*>(_v) = _t->background(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->backgroundScaled(); break;
        case 2: *reinterpret_cast< Qt::AspectRatioMode*>(_v) = _t->backgroundScaledMode(); break;
        case 3: *reinterpret_cast< Qt::Orientations*>(_v) = _t->rangeDrag(); break;
        case 4: *reinterpret_cast< Qt::Orientations*>(_v) = _t->rangeZoom(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPAxisRect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackground(*reinterpret_cast< QPixmap*>(_v)); break;
        case 1: _t->setBackgroundScaled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setBackgroundScaledMode(*reinterpret_cast< Qt::AspectRatioMode*>(_v)); break;
        case 3: _t->setRangeDrag(*reinterpret_cast< Qt::Orientations*>(_v)); break;
        case 4: _t->setRangeZoom(*reinterpret_cast< Qt::Orientations*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPAxisRect::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayoutElement::staticMetaObject>(),
    qt_meta_stringdata_QCPAxisRect.offsetsAndSize,
    qt_meta_data_QCPAxisRect,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPAxisRect_t
, QtPrivate::TypeAndForceComplete<QPixmap, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<Qt::AspectRatioMode, std::true_type>, QtPrivate::TypeAndForceComplete<Qt::Orientations, std::true_type>, QtPrivate::TypeAndForceComplete<Qt::Orientations, std::true_type>, QtPrivate::TypeAndForceComplete<QCPAxisRect, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPAxisRect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPAxisRect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPAxisRect.stringdata0))
        return static_cast<void*>(this);
    return QCPLayoutElement::qt_metacast(_clname);
}

int QCPAxisRect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayoutElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPAbstractLegendItem_t {
    const uint offsetsAndSize[28];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPAbstractLegendItem_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPAbstractLegendItem_t qt_meta_stringdata_QCPAbstractLegendItem = {
    {
QT_MOC_LITERAL(0, 21), // "QCPAbstractLegendItem"
QT_MOC_LITERAL(22, 16), // "selectionChanged"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 8), // "selected"
QT_MOC_LITERAL(49, 17), // "selectableChanged"
QT_MOC_LITERAL(67, 10), // "selectable"
QT_MOC_LITERAL(78, 13), // "setSelectable"
QT_MOC_LITERAL(92, 11), // "setSelected"
QT_MOC_LITERAL(104, 12), // "parentLegend"
QT_MOC_LITERAL(117, 10), // "QCPLegend*"
QT_MOC_LITERAL(128, 4), // "font"
QT_MOC_LITERAL(133, 9), // "textColor"
QT_MOC_LITERAL(143, 12), // "selectedFont"
QT_MOC_LITERAL(156, 17) // "selectedTextColor"

    },
    "QCPAbstractLegendItem\0selectionChanged\0"
    "\0selected\0selectableChanged\0selectable\0"
    "setSelectable\0setSelected\0parentLegend\0"
    "QCPLegend*\0font\0textColor\0selectedFont\0"
    "selectedTextColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPAbstractLegendItem[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       7,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    8 /* Public */,
       4,    1,   41,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   44,    2, 0x0a,   12 /* Public */,
       7,    1,   47,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00015009, uint(-1), 0,
      10, QMetaType::QFont, 0x00015103, uint(-1), 0,
      11, QMetaType::QColor, 0x00015103, uint(-1), 0,
      12, QMetaType::QFont, 0x00015103, uint(-1), 0,
      13, QMetaType::QColor, 0x00015103, uint(-1), 0,
       5, QMetaType::Bool, 0x00015103, uint(0), 0,
       3, QMetaType::Bool, 0x00015103, uint(1), 0,

       0        // eod
};

void QCPAbstractLegendItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPAbstractLegendItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->selectableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setSelectable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPAbstractLegendItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPAbstractLegendItem::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCPAbstractLegendItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPAbstractLegendItem::selectableChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPLegend* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPAbstractLegendItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QCPLegend**>(_v) = _t->parentLegend(); break;
        case 1: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->textColor(); break;
        case 3: *reinterpret_cast< QFont*>(_v) = _t->selectedFont(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->selectedTextColor(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->selectable(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPAbstractLegendItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 2: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setSelectedFont(*reinterpret_cast< QFont*>(_v)); break;
        case 4: _t->setSelectedTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setSelectable(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QCPAbstractLegendItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayoutElement::staticMetaObject>(),
    qt_meta_stringdata_QCPAbstractLegendItem.offsetsAndSize,
    qt_meta_data_QCPAbstractLegendItem,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPAbstractLegendItem_t
, QtPrivate::TypeAndForceComplete<QCPLegend*, std::true_type>, QtPrivate::TypeAndForceComplete<QFont, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QFont, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QCPAbstractLegendItem, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *QCPAbstractLegendItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPAbstractLegendItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPAbstractLegendItem.stringdata0))
        return static_cast<void*>(this);
    return QCPLayoutElement::qt_metacast(_clname);
}

int QCPAbstractLegendItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayoutElement::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCPAbstractLegendItem::selectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCPAbstractLegendItem::selectableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QCPPlottableLegendItem_t {
    const uint offsetsAndSize[2];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPPlottableLegendItem_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPPlottableLegendItem_t qt_meta_stringdata_QCPPlottableLegendItem = {
    {
QT_MOC_LITERAL(0, 22) // "QCPPlottableLegendItem"

    },
    "QCPPlottableLegendItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPPlottableLegendItem[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPPlottableLegendItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPPlottableLegendItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractLegendItem::staticMetaObject>(),
    qt_meta_stringdata_QCPPlottableLegendItem.offsetsAndSize,
    qt_meta_data_QCPPlottableLegendItem,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPPlottableLegendItem_t
, QtPrivate::TypeAndForceComplete<QCPPlottableLegendItem, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPPlottableLegendItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPPlottableLegendItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPPlottableLegendItem.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractLegendItem::qt_metacast(_clname);
}

int QCPPlottableLegendItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractLegendItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QCPLegend_t {
    const uint offsetsAndSize[54];
    char stringdata0[358];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPLegend_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPLegend_t qt_meta_stringdata_QCPLegend = {
    {
QT_MOC_LITERAL(0, 9), // "QCPLegend"
QT_MOC_LITERAL(10, 16), // "selectionChanged"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 26), // "QCPLegend::SelectableParts"
QT_MOC_LITERAL(55, 5), // "parts"
QT_MOC_LITERAL(61, 17), // "selectableChanged"
QT_MOC_LITERAL(79, 18), // "setSelectableParts"
QT_MOC_LITERAL(98, 15), // "SelectableParts"
QT_MOC_LITERAL(114, 15), // "selectableParts"
QT_MOC_LITERAL(130, 16), // "setSelectedParts"
QT_MOC_LITERAL(147, 13), // "selectedParts"
QT_MOC_LITERAL(161, 9), // "borderPen"
QT_MOC_LITERAL(171, 5), // "brush"
QT_MOC_LITERAL(177, 4), // "font"
QT_MOC_LITERAL(182, 9), // "textColor"
QT_MOC_LITERAL(192, 8), // "iconSize"
QT_MOC_LITERAL(201, 15), // "iconTextPadding"
QT_MOC_LITERAL(217, 13), // "iconBorderPen"
QT_MOC_LITERAL(231, 17), // "selectedBorderPen"
QT_MOC_LITERAL(249, 21), // "selectedIconBorderPen"
QT_MOC_LITERAL(271, 13), // "selectedBrush"
QT_MOC_LITERAL(285, 12), // "selectedFont"
QT_MOC_LITERAL(298, 17), // "selectedTextColor"
QT_MOC_LITERAL(316, 14), // "SelectablePart"
QT_MOC_LITERAL(331, 6), // "spNone"
QT_MOC_LITERAL(338, 11), // "spLegendBox"
QT_MOC_LITERAL(350, 7) // "spItems"

    },
    "QCPLegend\0selectionChanged\0\0"
    "QCPLegend::SelectableParts\0parts\0"
    "selectableChanged\0setSelectableParts\0"
    "SelectableParts\0selectableParts\0"
    "setSelectedParts\0selectedParts\0borderPen\0"
    "brush\0font\0textColor\0iconSize\0"
    "iconTextPadding\0iconBorderPen\0"
    "selectedBorderPen\0selectedIconBorderPen\0"
    "selectedBrush\0selectedFont\0selectedTextColor\0"
    "SelectablePart\0spNone\0spLegendBox\0"
    "spItems"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPLegend[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
      14,   50, // properties
       2,  120, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,   15 /* Public */,
       5,    1,   41,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   44,    2, 0x0a,   19 /* Public */,
       9,    1,   47,    2, 0x0a,   21 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,   10,

 // properties: name, type, flags
      11, QMetaType::QPen, 0x00015103, uint(-1), 0,
      12, QMetaType::QBrush, 0x00015103, uint(-1), 0,
      13, QMetaType::QFont, 0x00015103, uint(-1), 0,
      14, QMetaType::QColor, 0x00015103, uint(-1), 0,
      15, QMetaType::QSize, 0x00015103, uint(-1), 0,
      16, QMetaType::Int, 0x00015103, uint(-1), 0,
      17, QMetaType::QPen, 0x00015103, uint(-1), 0,
       8, 0x80000000 | 7, 0x0001510b, uint(0), 0,
      10, 0x80000000 | 7, 0x0001510b, uint(1), 0,
      18, QMetaType::QPen, 0x00015103, uint(-1), 0,
      19, QMetaType::QPen, 0x00015103, uint(-1), 0,
      20, QMetaType::QBrush, 0x00015103, uint(-1), 0,
      21, QMetaType::QFont, 0x00015103, uint(-1), 0,
      22, QMetaType::QColor, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      23,   23, 0x0,    3,  130,
       7,   23, 0x1,    3,  136,

 // enum data: key, value
      24, uint(QCPLegend::spNone),
      25, uint(QCPLegend::spLegendBox),
      26, uint(QCPLegend::spItems),
      24, uint(QCPLegend::spNone),
      25, uint(QCPLegend::spLegendBox),
      26, uint(QCPLegend::spItems),

       0        // eod
};

void QCPLegend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPLegend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< QCPLegend::SelectableParts(*)>(_a[1]))); break;
        case 1: _t->selectableChanged((*reinterpret_cast< QCPLegend::SelectableParts(*)>(_a[1]))); break;
        case 2: _t->setSelectableParts((*reinterpret_cast< const SelectableParts(*)>(_a[1]))); break;
        case 3: _t->setSelectedParts((*reinterpret_cast< const SelectableParts(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPLegend::*)(QCPLegend::SelectableParts );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPLegend::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCPLegend::*)(QCPLegend::SelectableParts );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPLegend::selectableChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPLegend *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = _t->borderPen(); break;
        case 1: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        case 2: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->textColor(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->iconTextPadding(); break;
        case 6: *reinterpret_cast< QPen*>(_v) = _t->iconBorderPen(); break;
        case 7: *reinterpret_cast<int*>(_v) = QFlag(_t->selectableParts()); break;
        case 8: *reinterpret_cast<int*>(_v) = QFlag(_t->selectedParts()); break;
        case 9: *reinterpret_cast< QPen*>(_v) = _t->selectedBorderPen(); break;
        case 10: *reinterpret_cast< QPen*>(_v) = _t->selectedIconBorderPen(); break;
        case 11: *reinterpret_cast< QBrush*>(_v) = _t->selectedBrush(); break;
        case 12: *reinterpret_cast< QFont*>(_v) = _t->selectedFont(); break;
        case 13: *reinterpret_cast< QColor*>(_v) = _t->selectedTextColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPLegend *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBorderPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 2: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 3: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 5: _t->setIconTextPadding(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setIconBorderPen(*reinterpret_cast< QPen*>(_v)); break;
        case 7: _t->setSelectableParts(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 8: _t->setSelectedParts(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 9: _t->setSelectedBorderPen(*reinterpret_cast< QPen*>(_v)); break;
        case 10: _t->setSelectedIconBorderPen(*reinterpret_cast< QPen*>(_v)); break;
        case 11: _t->setSelectedBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 12: _t->setSelectedFont(*reinterpret_cast< QFont*>(_v)); break;
        case 13: _t->setSelectedTextColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QCPLegend::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayoutGrid::staticMetaObject>(),
    qt_meta_stringdata_QCPLegend.offsetsAndSize,
    qt_meta_data_QCPLegend,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPLegend_t
, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QBrush, std::true_type>, QtPrivate::TypeAndForceComplete<QFont, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QSize, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<SelectableParts, std::true_type>, QtPrivate::TypeAndForceComplete<SelectableParts, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QBrush, std::true_type>, QtPrivate::TypeAndForceComplete<QFont, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QCPLegend, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPLegend::SelectableParts, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPLegend::SelectableParts, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const SelectableParts &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const SelectableParts &, std::false_type>


>,
    nullptr
} };


const QMetaObject *QCPLegend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPLegend.stringdata0))
        return static_cast<void*>(this);
    return QCPLayoutGrid::qt_metacast(_clname);
}

int QCPLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayoutGrid::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCPLegend::selectionChanged(QCPLegend::SelectableParts _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCPLegend::selectableChanged(QCPLegend::SelectableParts _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QCPTextElement_t {
    const uint offsetsAndSize[34];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPTextElement_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPTextElement_t qt_meta_stringdata_QCPTextElement = {
    {
QT_MOC_LITERAL(0, 14), // "QCPTextElement"
QT_MOC_LITERAL(15, 16), // "selectionChanged"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 8), // "selected"
QT_MOC_LITERAL(42, 17), // "selectableChanged"
QT_MOC_LITERAL(60, 10), // "selectable"
QT_MOC_LITERAL(71, 7), // "clicked"
QT_MOC_LITERAL(79, 12), // "QMouseEvent*"
QT_MOC_LITERAL(92, 5), // "event"
QT_MOC_LITERAL(98, 13), // "doubleClicked"
QT_MOC_LITERAL(112, 13), // "setSelectable"
QT_MOC_LITERAL(126, 11), // "setSelected"
QT_MOC_LITERAL(138, 4), // "text"
QT_MOC_LITERAL(143, 4), // "font"
QT_MOC_LITERAL(148, 9), // "textColor"
QT_MOC_LITERAL(158, 12), // "selectedFont"
QT_MOC_LITERAL(171, 17) // "selectedTextColor"

    },
    "QCPTextElement\0selectionChanged\0\0"
    "selected\0selectableChanged\0selectable\0"
    "clicked\0QMouseEvent*\0event\0doubleClicked\0"
    "setSelectable\0setSelected\0text\0font\0"
    "textColor\0selectedFont\0selectedTextColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPTextElement[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       7,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    8 /* Public */,
       4,    1,   53,    2, 0x06,   10 /* Public */,
       6,    1,   56,    2, 0x06,   12 /* Public */,
       9,    1,   59,    2, 0x06,   14 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   62,    2, 0x0a,   16 /* Public */,
      11,    1,   65,    2, 0x0a,   18 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00015103, uint(-1), 0,
      13, QMetaType::QFont, 0x00015103, uint(-1), 0,
      14, QMetaType::QColor, 0x00015103, uint(-1), 0,
      15, QMetaType::QFont, 0x00015103, uint(-1), 0,
      16, QMetaType::QColor, 0x00015103, uint(-1), 0,
       5, QMetaType::Bool, 0x00015103, uint(1), 0,
       3, QMetaType::Bool, 0x00015103, uint(0), 0,

       0        // eod
};

void QCPTextElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPTextElement *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->selectableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->clicked((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->doubleClicked((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->setSelectable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPTextElement::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPTextElement::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCPTextElement::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPTextElement::selectableChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCPTextElement::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPTextElement::clicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QCPTextElement::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPTextElement::doubleClicked)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPTextElement *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->textColor(); break;
        case 3: *reinterpret_cast< QFont*>(_v) = _t->selectedFont(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->selectedTextColor(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->selectable(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPTextElement *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 2: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setSelectedFont(*reinterpret_cast< QFont*>(_v)); break;
        case 4: _t->setSelectedTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setSelectable(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QCPTextElement::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayoutElement::staticMetaObject>(),
    qt_meta_stringdata_QCPTextElement.offsetsAndSize,
    qt_meta_data_QCPTextElement,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPTextElement_t
, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QFont, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QFont, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QCPTextElement, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *QCPTextElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPTextElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPTextElement.stringdata0))
        return static_cast<void*>(this);
    return QCPLayoutElement::qt_metacast(_clname);
}

int QCPTextElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayoutElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCPTextElement::selectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCPTextElement::selectableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCPTextElement::clicked(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCPTextElement::doubleClicked(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_QCPColorScaleAxisRectPrivate_t {
    const uint offsetsAndSize[14];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPColorScaleAxisRectPrivate_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPColorScaleAxisRectPrivate_t qt_meta_stringdata_QCPColorScaleAxisRectPrivate = {
    {
QT_MOC_LITERAL(0, 28), // "QCPColorScaleAxisRectPrivate"
QT_MOC_LITERAL(29, 20), // "axisSelectionChanged"
QT_MOC_LITERAL(50, 0), // ""
QT_MOC_LITERAL(51, 24), // "QCPAxis::SelectableParts"
QT_MOC_LITERAL(76, 13), // "selectedParts"
QT_MOC_LITERAL(90, 21), // "axisSelectableChanged"
QT_MOC_LITERAL(112, 15) // "selectableParts"

    },
    "QCPColorScaleAxisRectPrivate\0"
    "axisSelectionChanged\0\0QCPAxis::SelectableParts\0"
    "selectedParts\0axisSelectableChanged\0"
    "selectableParts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPColorScaleAxisRectPrivate[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x09,    1 /* Protected */,
       5,    1,   29,    2, 0x09,    3 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,

       0        // eod
};

void QCPColorScaleAxisRectPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPColorScaleAxisRectPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->axisSelectionChanged((*reinterpret_cast< QCPAxis::SelectableParts(*)>(_a[1]))); break;
        case 1: _t->axisSelectableChanged((*reinterpret_cast< QCPAxis::SelectableParts(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QCPColorScaleAxisRectPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAxisRect::staticMetaObject>(),
    qt_meta_stringdata_QCPColorScaleAxisRectPrivate.offsetsAndSize,
    qt_meta_data_QCPColorScaleAxisRectPrivate,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPColorScaleAxisRectPrivate_t
, QtPrivate::TypeAndForceComplete<QCPColorScaleAxisRectPrivate, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAxis::SelectableParts, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAxis::SelectableParts, std::false_type>


>,
    nullptr
} };


const QMetaObject *QCPColorScaleAxisRectPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPColorScaleAxisRectPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPColorScaleAxisRectPrivate.stringdata0))
        return static_cast<void*>(this);
    return QCPAxisRect::qt_metacast(_clname);
}

int QCPColorScaleAxisRectPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAxisRect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_QCPColorScale_t {
    const uint offsetsAndSize[46];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPColorScale_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPColorScale_t qt_meta_stringdata_QCPColorScale = {
    {
QT_MOC_LITERAL(0, 13), // "QCPColorScale"
QT_MOC_LITERAL(14, 16), // "dataRangeChanged"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 8), // "QCPRange"
QT_MOC_LITERAL(41, 8), // "newRange"
QT_MOC_LITERAL(50, 20), // "dataScaleTypeChanged"
QT_MOC_LITERAL(71, 18), // "QCPAxis::ScaleType"
QT_MOC_LITERAL(90, 9), // "scaleType"
QT_MOC_LITERAL(100, 15), // "gradientChanged"
QT_MOC_LITERAL(116, 16), // "QCPColorGradient"
QT_MOC_LITERAL(133, 11), // "newGradient"
QT_MOC_LITERAL(145, 12), // "setDataRange"
QT_MOC_LITERAL(158, 9), // "dataRange"
QT_MOC_LITERAL(168, 16), // "setDataScaleType"
QT_MOC_LITERAL(185, 11), // "setGradient"
QT_MOC_LITERAL(197, 8), // "gradient"
QT_MOC_LITERAL(206, 4), // "type"
QT_MOC_LITERAL(211, 17), // "QCPAxis::AxisType"
QT_MOC_LITERAL(229, 13), // "dataScaleType"
QT_MOC_LITERAL(243, 5), // "label"
QT_MOC_LITERAL(249, 8), // "barWidth"
QT_MOC_LITERAL(258, 9), // "rangeDrag"
QT_MOC_LITERAL(268, 9) // "rangeZoom"

    },
    "QCPColorScale\0dataRangeChanged\0\0"
    "QCPRange\0newRange\0dataScaleTypeChanged\0"
    "QCPAxis::ScaleType\0scaleType\0"
    "gradientChanged\0QCPColorGradient\0"
    "newGradient\0setDataRange\0dataRange\0"
    "setDataScaleType\0setGradient\0gradient\0"
    "type\0QCPAxis::AxisType\0dataScaleType\0"
    "label\0barWidth\0rangeDrag\0rangeZoom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPColorScale[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       8,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    9 /* Public */,
       5,    1,   53,    2, 0x06,   11 /* Public */,
       8,    1,   56,    2, 0x06,   13 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   59,    2, 0x0a,   15 /* Public */,
      13,    1,   62,    2, 0x0a,   17 /* Public */,
      14,    1,   65,    2, 0x0a,   19 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,   12,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   15,

 // properties: name, type, flags
      16, 0x80000000 | 17, 0x0001510b, uint(-1), 0,
      12, 0x80000000 | 3, 0x0001510b, uint(0), 0,
      18, 0x80000000 | 6, 0x0001510b, uint(1), 0,
      15, 0x80000000 | 9, 0x0001510b, uint(2), 0,
      19, QMetaType::QString, 0x00015103, uint(-1), 0,
      20, QMetaType::Int, 0x00015103, uint(-1), 0,
      21, QMetaType::Bool, 0x00015103, uint(-1), 0,
      22, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

void QCPColorScale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPColorScale *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataRangeChanged((*reinterpret_cast< const QCPRange(*)>(_a[1]))); break;
        case 1: _t->dataScaleTypeChanged((*reinterpret_cast< QCPAxis::ScaleType(*)>(_a[1]))); break;
        case 2: _t->gradientChanged((*reinterpret_cast< const QCPColorGradient(*)>(_a[1]))); break;
        case 3: _t->setDataRange((*reinterpret_cast< const QCPRange(*)>(_a[1]))); break;
        case 4: _t->setDataScaleType((*reinterpret_cast< QCPAxis::ScaleType(*)>(_a[1]))); break;
        case 5: _t->setGradient((*reinterpret_cast< const QCPColorGradient(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis::ScaleType >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis::ScaleType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPColorScale::*)(const QCPRange & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPColorScale::dataRangeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCPColorScale::*)(QCPAxis::ScaleType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPColorScale::dataScaleTypeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCPColorScale::*)(const QCPColorGradient & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPColorScale::gradientChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAxis::AxisType >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAxis::ScaleType >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPColorScale *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QCPAxis::AxisType*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< QCPRange*>(_v) = _t->dataRange(); break;
        case 2: *reinterpret_cast< QCPAxis::ScaleType*>(_v) = _t->dataScaleType(); break;
        case 3: *reinterpret_cast< QCPColorGradient*>(_v) = _t->gradient(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->barWidth(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->rangeDrag(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->rangeZoom(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPColorScale *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setType(*reinterpret_cast< QCPAxis::AxisType*>(_v)); break;
        case 1: _t->setDataRange(*reinterpret_cast< QCPRange*>(_v)); break;
        case 2: _t->setDataScaleType(*reinterpret_cast< QCPAxis::ScaleType*>(_v)); break;
        case 3: _t->setGradient(*reinterpret_cast< QCPColorGradient*>(_v)); break;
        case 4: _t->setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setBarWidth(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setRangeDrag(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setRangeZoom(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_QCPColorScale[] = {
    QMetaObject::SuperData::link<QCPAxis::staticMetaObject>(),
    nullptr
};

const QMetaObject QCPColorScale::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayoutElement::staticMetaObject>(),
    qt_meta_stringdata_QCPColorScale.offsetsAndSize,
    qt_meta_data_QCPColorScale,
    qt_static_metacall,
    qt_meta_extradata_QCPColorScale,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPColorScale_t
, QtPrivate::TypeAndForceComplete<QCPAxis::AxisType, std::true_type>, QtPrivate::TypeAndForceComplete<QCPRange, std::true_type>, QtPrivate::TypeAndForceComplete<QCPAxis::ScaleType, std::true_type>, QtPrivate::TypeAndForceComplete<QCPColorGradient, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QCPColorScale, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAxis::ScaleType, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPColorGradient &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAxis::ScaleType, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPColorGradient &, std::false_type>


>,
    nullptr
} };


const QMetaObject *QCPColorScale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPColorScale::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPColorScale.stringdata0))
        return static_cast<void*>(this);
    return QCPLayoutElement::qt_metacast(_clname);
}

int QCPColorScale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayoutElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCPColorScale::dataRangeChanged(const QCPRange & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCPColorScale::dataScaleTypeChanged(QCPAxis::ScaleType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCPColorScale::gradientChanged(const QCPColorGradient & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QCPGraph_t {
    const uint offsetsAndSize[30];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPGraph_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPGraph_t qt_meta_stringdata_QCPGraph = {
    {
QT_MOC_LITERAL(0, 8), // "QCPGraph"
QT_MOC_LITERAL(9, 9), // "lineStyle"
QT_MOC_LITERAL(19, 9), // "LineStyle"
QT_MOC_LITERAL(29, 12), // "scatterStyle"
QT_MOC_LITERAL(42, 15), // "QCPScatterStyle"
QT_MOC_LITERAL(58, 11), // "scatterSkip"
QT_MOC_LITERAL(70, 16), // "channelFillGraph"
QT_MOC_LITERAL(87, 9), // "QCPGraph*"
QT_MOC_LITERAL(97, 16), // "adaptiveSampling"
QT_MOC_LITERAL(114, 6), // "lsNone"
QT_MOC_LITERAL(121, 6), // "lsLine"
QT_MOC_LITERAL(128, 10), // "lsStepLeft"
QT_MOC_LITERAL(139, 11), // "lsStepRight"
QT_MOC_LITERAL(151, 12), // "lsStepCenter"
QT_MOC_LITERAL(164, 9) // "lsImpulse"

    },
    "QCPGraph\0lineStyle\0LineStyle\0scatterStyle\0"
    "QCPScatterStyle\0scatterSkip\0"
    "channelFillGraph\0QCPGraph*\0adaptiveSampling\0"
    "lsNone\0lsLine\0lsStepLeft\0lsStepRight\0"
    "lsStepCenter\0lsImpulse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPGraph[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       1,   39, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0001510b, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
       5, QMetaType::Int, 0x00015103, uint(-1), 0,
       6, 0x80000000 | 7, 0x0001510b, uint(-1), 0,
       8, QMetaType::Bool, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
       2,    2, 0x0,    6,   44,

 // enum data: key, value
       9, uint(QCPGraph::lsNone),
      10, uint(QCPGraph::lsLine),
      11, uint(QCPGraph::lsStepLeft),
      12, uint(QCPGraph::lsStepRight),
      13, uint(QCPGraph::lsStepCenter),
      14, uint(QCPGraph::lsImpulse),

       0        // eod
};

void QCPGraph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPGraph* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPGraph *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< LineStyle*>(_v) = _t->lineStyle(); break;
        case 1: *reinterpret_cast< QCPScatterStyle*>(_v) = _t->scatterStyle(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->scatterSkip(); break;
        case 3: *reinterpret_cast< QCPGraph**>(_v) = _t->channelFillGraph(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->adaptiveSampling(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPGraph *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLineStyle(*reinterpret_cast< LineStyle*>(_v)); break;
        case 1: _t->setScatterStyle(*reinterpret_cast< QCPScatterStyle*>(_v)); break;
        case 2: _t->setScatterSkip(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setChannelFillGraph(*reinterpret_cast< QCPGraph**>(_v)); break;
        case 4: _t->setAdaptiveSampling(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
}

const QMetaObject QCPGraph::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractPlottable1D<QCPGraphData>::staticMetaObject>(),
    qt_meta_stringdata_QCPGraph.offsetsAndSize,
    qt_meta_data_QCPGraph,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPGraph_t
, QtPrivate::TypeAndForceComplete<LineStyle, std::true_type>, QtPrivate::TypeAndForceComplete<QCPScatterStyle, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<QCPGraph*, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QCPGraph, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPGraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPGraph::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPGraph.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractPlottable1D<QCPGraphData>::qt_metacast(_clname);
}

int QCPGraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable1D<QCPGraphData>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPCurve_t {
    const uint offsetsAndSize[16];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPCurve_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPCurve_t qt_meta_stringdata_QCPCurve = {
    {
QT_MOC_LITERAL(0, 8), // "QCPCurve"
QT_MOC_LITERAL(9, 12), // "scatterStyle"
QT_MOC_LITERAL(22, 15), // "QCPScatterStyle"
QT_MOC_LITERAL(38, 11), // "scatterSkip"
QT_MOC_LITERAL(50, 9), // "lineStyle"
QT_MOC_LITERAL(60, 9), // "LineStyle"
QT_MOC_LITERAL(70, 6), // "lsNone"
QT_MOC_LITERAL(77, 6) // "lsLine"

    },
    "QCPCurve\0scatterStyle\0QCPScatterStyle\0"
    "scatterSkip\0lineStyle\0LineStyle\0lsNone\0"
    "lsLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPCurve[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       1,   29, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0001510b, uint(-1), 0,
       3, QMetaType::Int, 0x00015103, uint(-1), 0,
       4, 0x80000000 | 5, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
       5,    5, 0x0,    2,   34,

 // enum data: key, value
       6, uint(QCPCurve::lsNone),
       7, uint(QCPCurve::lsLine),

       0        // eod
};

void QCPCurve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPCurve *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QCPScatterStyle*>(_v) = _t->scatterStyle(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->scatterSkip(); break;
        case 2: *reinterpret_cast< LineStyle*>(_v) = _t->lineStyle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPCurve *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setScatterStyle(*reinterpret_cast< QCPScatterStyle*>(_v)); break;
        case 1: _t->setScatterSkip(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setLineStyle(*reinterpret_cast< LineStyle*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPCurve::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractPlottable1D<QCPCurveData>::staticMetaObject>(),
    qt_meta_stringdata_QCPCurve.offsetsAndSize,
    qt_meta_data_QCPCurve,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPCurve_t
, QtPrivate::TypeAndForceComplete<QCPScatterStyle, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<LineStyle, std::true_type>, QtPrivate::TypeAndForceComplete<QCPCurve, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPCurve.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractPlottable1D<QCPCurveData>::qt_metacast(_clname);
}

int QCPCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable1D<QCPCurveData>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPBarsGroup_t {
    const uint offsetsAndSize[14];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPBarsGroup_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPBarsGroup_t qt_meta_stringdata_QCPBarsGroup = {
    {
QT_MOC_LITERAL(0, 12), // "QCPBarsGroup"
QT_MOC_LITERAL(13, 11), // "spacingType"
QT_MOC_LITERAL(25, 11), // "SpacingType"
QT_MOC_LITERAL(37, 7), // "spacing"
QT_MOC_LITERAL(45, 10), // "stAbsolute"
QT_MOC_LITERAL(56, 15), // "stAxisRectRatio"
QT_MOC_LITERAL(72, 12) // "stPlotCoords"

    },
    "QCPBarsGroup\0spacingType\0SpacingType\0"
    "spacing\0stAbsolute\0stAxisRectRatio\0"
    "stPlotCoords"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPBarsGroup[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       1,   24, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0001510b, uint(-1), 0,
       3, QMetaType::Double, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
       2,    2, 0x0,    3,   29,

 // enum data: key, value
       4, uint(QCPBarsGroup::stAbsolute),
       5, uint(QCPBarsGroup::stAxisRectRatio),
       6, uint(QCPBarsGroup::stPlotCoords),

       0        // eod
};

void QCPBarsGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPBarsGroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< SpacingType*>(_v) = _t->spacingType(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->spacing(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPBarsGroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpacingType(*reinterpret_cast< SpacingType*>(_v)); break;
        case 1: _t->setSpacing(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPBarsGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCPBarsGroup.offsetsAndSize,
    qt_meta_data_QCPBarsGroup,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPBarsGroup_t
, QtPrivate::TypeAndForceComplete<SpacingType, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<QCPBarsGroup, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPBarsGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPBarsGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPBarsGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCPBarsGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPBars_t {
    const uint offsetsAndSize[28];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPBars_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPBars_t qt_meta_stringdata_QCPBars = {
    {
QT_MOC_LITERAL(0, 7), // "QCPBars"
QT_MOC_LITERAL(8, 5), // "width"
QT_MOC_LITERAL(14, 9), // "widthType"
QT_MOC_LITERAL(24, 9), // "WidthType"
QT_MOC_LITERAL(34, 9), // "barsGroup"
QT_MOC_LITERAL(44, 13), // "QCPBarsGroup*"
QT_MOC_LITERAL(58, 9), // "baseValue"
QT_MOC_LITERAL(68, 11), // "stackingGap"
QT_MOC_LITERAL(80, 8), // "barBelow"
QT_MOC_LITERAL(89, 8), // "QCPBars*"
QT_MOC_LITERAL(98, 8), // "barAbove"
QT_MOC_LITERAL(107, 10), // "wtAbsolute"
QT_MOC_LITERAL(118, 15), // "wtAxisRectRatio"
QT_MOC_LITERAL(134, 12) // "wtPlotCoords"

    },
    "QCPBars\0width\0widthType\0WidthType\0"
    "barsGroup\0QCPBarsGroup*\0baseValue\0"
    "stackingGap\0barBelow\0QCPBars*\0barAbove\0"
    "wtAbsolute\0wtAxisRectRatio\0wtPlotCoords"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPBars[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       1,   49, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Double, 0x00015103, uint(-1), 0,
       2, 0x80000000 | 3, 0x0001510b, uint(-1), 0,
       4, 0x80000000 | 5, 0x0001510b, uint(-1), 0,
       6, QMetaType::Double, 0x00015103, uint(-1), 0,
       7, QMetaType::Double, 0x00015103, uint(-1), 0,
       8, 0x80000000 | 9, 0x00015009, uint(-1), 0,
      10, 0x80000000 | 9, 0x00015009, uint(-1), 0,

 // enums: name, alias, flags, count, data
       3,    3, 0x0,    3,   54,

 // enum data: key, value
      11, uint(QCPBars::wtAbsolute),
      12, uint(QCPBars::wtAxisRectRatio),
      13, uint(QCPBars::wtPlotCoords),

       0        // eod
};

void QCPBars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPBars* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPBarsGroup* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPBars *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->width(); break;
        case 1: *reinterpret_cast< WidthType*>(_v) = _t->widthType(); break;
        case 2: *reinterpret_cast< QCPBarsGroup**>(_v) = _t->barsGroup(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->baseValue(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->stackingGap(); break;
        case 5: *reinterpret_cast< QCPBars**>(_v) = _t->barBelow(); break;
        case 6: *reinterpret_cast< QCPBars**>(_v) = _t->barAbove(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPBars *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWidth(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setWidthType(*reinterpret_cast< WidthType*>(_v)); break;
        case 2: _t->setBarsGroup(*reinterpret_cast< QCPBarsGroup**>(_v)); break;
        case 3: _t->setBaseValue(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setStackingGap(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
}

const QMetaObject QCPBars::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractPlottable1D<QCPBarsData>::staticMetaObject>(),
    qt_meta_stringdata_QCPBars.offsetsAndSize,
    qt_meta_data_QCPBars,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPBars_t
, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<WidthType, std::true_type>, QtPrivate::TypeAndForceComplete<QCPBarsGroup*, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<QCPBars*, std::true_type>, QtPrivate::TypeAndForceComplete<QCPBars*, std::true_type>, QtPrivate::TypeAndForceComplete<QCPBars, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPBars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPBars::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPBars.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractPlottable1D<QCPBarsData>::qt_metacast(_clname);
}

int QCPBars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable1D<QCPBarsData>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPStatisticalBox_t {
    const uint offsetsAndSize[18];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPStatisticalBox_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPStatisticalBox_t qt_meta_stringdata_QCPStatisticalBox = {
    {
QT_MOC_LITERAL(0, 17), // "QCPStatisticalBox"
QT_MOC_LITERAL(18, 5), // "width"
QT_MOC_LITERAL(24, 12), // "whiskerWidth"
QT_MOC_LITERAL(37, 10), // "whiskerPen"
QT_MOC_LITERAL(48, 13), // "whiskerBarPen"
QT_MOC_LITERAL(62, 18), // "whiskerAntialiased"
QT_MOC_LITERAL(81, 9), // "medianPen"
QT_MOC_LITERAL(91, 12), // "outlierStyle"
QT_MOC_LITERAL(104, 15) // "QCPScatterStyle"

    },
    "QCPStatisticalBox\0width\0whiskerWidth\0"
    "whiskerPen\0whiskerBarPen\0whiskerAntialiased\0"
    "medianPen\0outlierStyle\0QCPScatterStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPStatisticalBox[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Double, 0x00015103, uint(-1), 0,
       2, QMetaType::Double, 0x00015103, uint(-1), 0,
       3, QMetaType::QPen, 0x00015103, uint(-1), 0,
       4, QMetaType::QPen, 0x00015103, uint(-1), 0,
       5, QMetaType::Bool, 0x00015103, uint(-1), 0,
       6, QMetaType::QPen, 0x00015103, uint(-1), 0,
       7, 0x80000000 | 8, 0x0001510b, uint(-1), 0,

       0        // eod
};

void QCPStatisticalBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPStatisticalBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->width(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->whiskerWidth(); break;
        case 2: *reinterpret_cast< QPen*>(_v) = _t->whiskerPen(); break;
        case 3: *reinterpret_cast< QPen*>(_v) = _t->whiskerBarPen(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->whiskerAntialiased(); break;
        case 5: *reinterpret_cast< QPen*>(_v) = _t->medianPen(); break;
        case 6: *reinterpret_cast< QCPScatterStyle*>(_v) = _t->outlierStyle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPStatisticalBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWidth(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setWhiskerWidth(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setWhiskerPen(*reinterpret_cast< QPen*>(_v)); break;
        case 3: _t->setWhiskerBarPen(*reinterpret_cast< QPen*>(_v)); break;
        case 4: _t->setWhiskerAntialiased(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setMedianPen(*reinterpret_cast< QPen*>(_v)); break;
        case 6: _t->setOutlierStyle(*reinterpret_cast< QCPScatterStyle*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPStatisticalBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractPlottable1D<QCPStatisticalBoxData>::staticMetaObject>(),
    qt_meta_stringdata_QCPStatisticalBox.offsetsAndSize,
    qt_meta_data_QCPStatisticalBox,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPStatisticalBox_t
, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QCPScatterStyle, std::true_type>, QtPrivate::TypeAndForceComplete<QCPStatisticalBox, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPStatisticalBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPStatisticalBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPStatisticalBox.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractPlottable1D<QCPStatisticalBoxData>::qt_metacast(_clname);
}

int QCPStatisticalBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable1D<QCPStatisticalBoxData>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPColorMap_t {
    const uint offsetsAndSize[50];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPColorMap_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPColorMap_t qt_meta_stringdata_QCPColorMap = {
    {
QT_MOC_LITERAL(0, 11), // "QCPColorMap"
QT_MOC_LITERAL(12, 16), // "dataRangeChanged"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 8), // "QCPRange"
QT_MOC_LITERAL(39, 8), // "newRange"
QT_MOC_LITERAL(48, 20), // "dataScaleTypeChanged"
QT_MOC_LITERAL(69, 18), // "QCPAxis::ScaleType"
QT_MOC_LITERAL(88, 9), // "scaleType"
QT_MOC_LITERAL(98, 15), // "gradientChanged"
QT_MOC_LITERAL(114, 16), // "QCPColorGradient"
QT_MOC_LITERAL(131, 11), // "newGradient"
QT_MOC_LITERAL(143, 12), // "setDataRange"
QT_MOC_LITERAL(156, 9), // "dataRange"
QT_MOC_LITERAL(166, 16), // "setDataScaleType"
QT_MOC_LITERAL(183, 11), // "setGradient"
QT_MOC_LITERAL(195, 8), // "gradient"
QT_MOC_LITERAL(204, 16), // "updateLegendIcon"
QT_MOC_LITERAL(221, 22), // "Qt::TransformationMode"
QT_MOC_LITERAL(244, 13), // "transformMode"
QT_MOC_LITERAL(258, 9), // "thumbSize"
QT_MOC_LITERAL(268, 13), // "dataScaleType"
QT_MOC_LITERAL(282, 11), // "interpolate"
QT_MOC_LITERAL(294, 13), // "tightBoundary"
QT_MOC_LITERAL(308, 10), // "colorScale"
QT_MOC_LITERAL(319, 14) // "QCPColorScale*"

    },
    "QCPColorMap\0dataRangeChanged\0\0QCPRange\0"
    "newRange\0dataScaleTypeChanged\0"
    "QCPAxis::ScaleType\0scaleType\0"
    "gradientChanged\0QCPColorGradient\0"
    "newGradient\0setDataRange\0dataRange\0"
    "setDataScaleType\0setGradient\0gradient\0"
    "updateLegendIcon\0Qt::TransformationMode\0"
    "transformMode\0thumbSize\0dataScaleType\0"
    "interpolate\0tightBoundary\0colorScale\0"
    "QCPColorScale*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPColorMap[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       6,   95, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    7 /* Public */,
       5,    1,   71,    2, 0x06,    9 /* Public */,
       8,    1,   74,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   77,    2, 0x0a,   13 /* Public */,
      13,    1,   80,    2, 0x0a,   15 /* Public */,
      14,    1,   83,    2, 0x0a,   17 /* Public */,
      16,    2,   86,    2, 0x0a,   19 /* Public */,
      16,    1,   91,    2, 0x2a,   22 /* Public | MethodCloned */,
      16,    0,   94,    2, 0x2a,   24 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,   12,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   15,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QSize,   18,   19,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,

 // properties: name, type, flags
      12, 0x80000000 | 3, 0x0001510b, uint(0), 0,
      20, 0x80000000 | 6, 0x0001510b, uint(1), 0,
      15, 0x80000000 | 9, 0x0001510b, uint(2), 0,
      21, QMetaType::Bool, 0x00015103, uint(-1), 0,
      22, QMetaType::Bool, 0x00015103, uint(-1), 0,
      23, 0x80000000 | 24, 0x0001510b, uint(-1), 0,

       0        // eod
};

void QCPColorMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPColorMap *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataRangeChanged((*reinterpret_cast< const QCPRange(*)>(_a[1]))); break;
        case 1: _t->dataScaleTypeChanged((*reinterpret_cast< QCPAxis::ScaleType(*)>(_a[1]))); break;
        case 2: _t->gradientChanged((*reinterpret_cast< const QCPColorGradient(*)>(_a[1]))); break;
        case 3: _t->setDataRange((*reinterpret_cast< const QCPRange(*)>(_a[1]))); break;
        case 4: _t->setDataScaleType((*reinterpret_cast< QCPAxis::ScaleType(*)>(_a[1]))); break;
        case 5: _t->setGradient((*reinterpret_cast< const QCPColorGradient(*)>(_a[1]))); break;
        case 6: _t->updateLegendIcon((*reinterpret_cast< Qt::TransformationMode(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 7: _t->updateLegendIcon((*reinterpret_cast< Qt::TransformationMode(*)>(_a[1]))); break;
        case 8: _t->updateLegendIcon(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis::ScaleType >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis::ScaleType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPColorMap::*)(const QCPRange & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPColorMap::dataRangeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCPColorMap::*)(QCPAxis::ScaleType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPColorMap::dataScaleTypeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCPColorMap::*)(const QCPColorGradient & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPColorMap::gradientChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAxis::ScaleType >(); break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPColorScale* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPColorMap *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QCPRange*>(_v) = _t->dataRange(); break;
        case 1: *reinterpret_cast< QCPAxis::ScaleType*>(_v) = _t->dataScaleType(); break;
        case 2: *reinterpret_cast< QCPColorGradient*>(_v) = _t->gradient(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->interpolate(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->tightBoundary(); break;
        case 5: *reinterpret_cast< QCPColorScale**>(_v) = _t->colorScale(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPColorMap *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDataRange(*reinterpret_cast< QCPRange*>(_v)); break;
        case 1: _t->setDataScaleType(*reinterpret_cast< QCPAxis::ScaleType*>(_v)); break;
        case 2: _t->setGradient(*reinterpret_cast< QCPColorGradient*>(_v)); break;
        case 3: _t->setInterpolate(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setTightBoundary(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setColorScale(*reinterpret_cast< QCPColorScale**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_QCPColorMap[] = {
    QMetaObject::SuperData::link<QCPAxis::staticMetaObject>(),
    nullptr
};

const QMetaObject QCPColorMap::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractPlottable::staticMetaObject>(),
    qt_meta_stringdata_QCPColorMap.offsetsAndSize,
    qt_meta_data_QCPColorMap,
    qt_static_metacall,
    qt_meta_extradata_QCPColorMap,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPColorMap_t
, QtPrivate::TypeAndForceComplete<QCPRange, std::true_type>, QtPrivate::TypeAndForceComplete<QCPAxis::ScaleType, std::true_type>, QtPrivate::TypeAndForceComplete<QCPColorGradient, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QCPColorScale*, std::true_type>, QtPrivate::TypeAndForceComplete<QCPColorMap, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAxis::ScaleType, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPColorGradient &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPAxis::ScaleType, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPColorGradient &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Qt::TransformationMode, std::false_type>, QtPrivate::TypeAndForceComplete<const QSize &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Qt::TransformationMode, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *QCPColorMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPColorMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPColorMap.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPColorMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCPColorMap::dataRangeChanged(const QCPRange & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCPColorMap::dataScaleTypeChanged(QCPAxis::ScaleType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCPColorMap::gradientChanged(const QCPColorGradient & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QCPFinancial_t {
    const uint offsetsAndSize[32];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPFinancial_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPFinancial_t qt_meta_stringdata_QCPFinancial = {
    {
QT_MOC_LITERAL(0, 12), // "QCPFinancial"
QT_MOC_LITERAL(13, 10), // "chartStyle"
QT_MOC_LITERAL(24, 10), // "ChartStyle"
QT_MOC_LITERAL(35, 5), // "width"
QT_MOC_LITERAL(41, 9), // "widthType"
QT_MOC_LITERAL(51, 9), // "WidthType"
QT_MOC_LITERAL(61, 10), // "twoColored"
QT_MOC_LITERAL(72, 13), // "brushPositive"
QT_MOC_LITERAL(86, 13), // "brushNegative"
QT_MOC_LITERAL(100, 11), // "penPositive"
QT_MOC_LITERAL(112, 11), // "penNegative"
QT_MOC_LITERAL(124, 10), // "wtAbsolute"
QT_MOC_LITERAL(135, 15), // "wtAxisRectRatio"
QT_MOC_LITERAL(151, 12), // "wtPlotCoords"
QT_MOC_LITERAL(164, 6), // "csOhlc"
QT_MOC_LITERAL(171, 13) // "csCandlestick"

    },
    "QCPFinancial\0chartStyle\0ChartStyle\0"
    "width\0widthType\0WidthType\0twoColored\0"
    "brushPositive\0brushNegative\0penPositive\0"
    "penNegative\0wtAbsolute\0wtAxisRectRatio\0"
    "wtPlotCoords\0csOhlc\0csCandlestick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPFinancial[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       2,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0001510b, uint(-1), 0,
       3, QMetaType::Double, 0x00015103, uint(-1), 0,
       4, 0x80000000 | 5, 0x0001510b, uint(-1), 0,
       6, QMetaType::Bool, 0x00015103, uint(-1), 0,
       7, QMetaType::QBrush, 0x00015103, uint(-1), 0,
       8, QMetaType::QBrush, 0x00015103, uint(-1), 0,
       9, QMetaType::QPen, 0x00015103, uint(-1), 0,
      10, QMetaType::QPen, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
       5,    5, 0x0,    3,   64,
       2,    2, 0x0,    2,   70,

 // enum data: key, value
      11, uint(QCPFinancial::wtAbsolute),
      12, uint(QCPFinancial::wtAxisRectRatio),
      13, uint(QCPFinancial::wtPlotCoords),
      14, uint(QCPFinancial::csOhlc),
      15, uint(QCPFinancial::csCandlestick),

       0        // eod
};

void QCPFinancial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPFinancial *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ChartStyle*>(_v) = _t->chartStyle(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->width(); break;
        case 2: *reinterpret_cast< WidthType*>(_v) = _t->widthType(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->twoColored(); break;
        case 4: *reinterpret_cast< QBrush*>(_v) = _t->brushPositive(); break;
        case 5: *reinterpret_cast< QBrush*>(_v) = _t->brushNegative(); break;
        case 6: *reinterpret_cast< QPen*>(_v) = _t->penPositive(); break;
        case 7: *reinterpret_cast< QPen*>(_v) = _t->penNegative(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPFinancial *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setChartStyle(*reinterpret_cast< ChartStyle*>(_v)); break;
        case 1: _t->setWidth(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setWidthType(*reinterpret_cast< WidthType*>(_v)); break;
        case 3: _t->setTwoColored(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setBrushPositive(*reinterpret_cast< QBrush*>(_v)); break;
        case 5: _t->setBrushNegative(*reinterpret_cast< QBrush*>(_v)); break;
        case 6: _t->setPenPositive(*reinterpret_cast< QPen*>(_v)); break;
        case 7: _t->setPenNegative(*reinterpret_cast< QPen*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPFinancial::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractPlottable1D<QCPFinancialData>::staticMetaObject>(),
    qt_meta_stringdata_QCPFinancial.offsetsAndSize,
    qt_meta_data_QCPFinancial,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPFinancial_t
, QtPrivate::TypeAndForceComplete<ChartStyle, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<WidthType, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QBrush, std::true_type>, QtPrivate::TypeAndForceComplete<QBrush, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QCPFinancial, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPFinancial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPFinancial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPFinancial.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractPlottable1D<QCPFinancialData>::qt_metacast(_clname);
}

int QCPFinancial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable1D<QCPFinancialData>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPErrorBars_t {
    const uint offsetsAndSize[22];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPErrorBars_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPErrorBars_t qt_meta_stringdata_QCPErrorBars = {
    {
QT_MOC_LITERAL(0, 12), // "QCPErrorBars"
QT_MOC_LITERAL(13, 4), // "data"
QT_MOC_LITERAL(18, 41), // "QSharedPointer<QCPErrorBarsDa..."
QT_MOC_LITERAL(60, 13), // "dataPlottable"
QT_MOC_LITERAL(74, 21), // "QCPAbstractPlottable*"
QT_MOC_LITERAL(96, 9), // "errorType"
QT_MOC_LITERAL(106, 9), // "ErrorType"
QT_MOC_LITERAL(116, 12), // "whiskerWidth"
QT_MOC_LITERAL(129, 9), // "symbolGap"
QT_MOC_LITERAL(139, 10), // "etKeyError"
QT_MOC_LITERAL(150, 12) // "etValueError"

    },
    "QCPErrorBars\0data\0"
    "QSharedPointer<QCPErrorBarsDataContainer>\0"
    "dataPlottable\0QCPAbstractPlottable*\0"
    "errorType\0ErrorType\0whiskerWidth\0"
    "symbolGap\0etKeyError\0etValueError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPErrorBars[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       1,   39, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0001510b, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
       5, 0x80000000 | 6, 0x0001510b, uint(-1), 0,
       7, QMetaType::Double, 0x00015103, uint(-1), 0,
       8, QMetaType::Double, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,    2,   44,

 // enum data: key, value
       9, uint(QCPErrorBars::etKeyError),
      10, uint(QCPErrorBars::etValueError),

       0        // eod
};

void QCPErrorBars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAbstractPlottable* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPErrorBars *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSharedPointer<QCPErrorBarsDataContainer>*>(_v) = _t->data(); break;
        case 1: *reinterpret_cast< QCPAbstractPlottable**>(_v) = _t->dataPlottable(); break;
        case 2: *reinterpret_cast< ErrorType*>(_v) = _t->errorType(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->whiskerWidth(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->symbolGap(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPErrorBars *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setData(*reinterpret_cast< QSharedPointer<QCPErrorBarsDataContainer>*>(_v)); break;
        case 1: _t->setDataPlottable(*reinterpret_cast< QCPAbstractPlottable**>(_v)); break;
        case 2: _t->setErrorType(*reinterpret_cast< ErrorType*>(_v)); break;
        case 3: _t->setWhiskerWidth(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setSymbolGap(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
}

const QMetaObject QCPErrorBars::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractPlottable::staticMetaObject>(),
    qt_meta_stringdata_QCPErrorBars.offsetsAndSize,
    qt_meta_data_QCPErrorBars,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPErrorBars_t
, QtPrivate::TypeAndForceComplete<QSharedPointer<QCPErrorBarsDataContainer>, std::true_type>, QtPrivate::TypeAndForceComplete<QCPAbstractPlottable*, std::true_type>, QtPrivate::TypeAndForceComplete<ErrorType, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<QCPErrorBars, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPErrorBars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPErrorBars::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPErrorBars.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QCPPlottableInterface1D"))
        return static_cast< QCPPlottableInterface1D*>(this);
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPErrorBars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPItemStraightLine_t {
    const uint offsetsAndSize[6];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPItemStraightLine_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPItemStraightLine_t qt_meta_stringdata_QCPItemStraightLine = {
    {
QT_MOC_LITERAL(0, 19), // "QCPItemStraightLine"
QT_MOC_LITERAL(20, 3), // "pen"
QT_MOC_LITERAL(24, 11) // "selectedPen"

    },
    "QCPItemStraightLine\0pen\0selectedPen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemStraightLine[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPen, 0x00015103, uint(-1), 0,
       2, QMetaType::QPen, 0x00015103, uint(-1), 0,

       0        // eod
};

void QCPItemStraightLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemStraightLine *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemStraightLine *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPItemStraightLine::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_QCPItemStraightLine.offsetsAndSize,
    qt_meta_data_QCPItemStraightLine,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPItemStraightLine_t
, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QCPItemStraightLine, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPItemStraightLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemStraightLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemStraightLine.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemStraightLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPItemLine_t {
    const uint offsetsAndSize[12];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPItemLine_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPItemLine_t qt_meta_stringdata_QCPItemLine = {
    {
QT_MOC_LITERAL(0, 11), // "QCPItemLine"
QT_MOC_LITERAL(12, 3), // "pen"
QT_MOC_LITERAL(16, 11), // "selectedPen"
QT_MOC_LITERAL(28, 4), // "head"
QT_MOC_LITERAL(33, 13), // "QCPLineEnding"
QT_MOC_LITERAL(47, 4) // "tail"

    },
    "QCPItemLine\0pen\0selectedPen\0head\0"
    "QCPLineEnding\0tail"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemLine[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPen, 0x00015103, uint(-1), 0,
       2, QMetaType::QPen, 0x00015103, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
       5, 0x80000000 | 4, 0x0001510b, uint(-1), 0,

       0        // eod
};

void QCPItemLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemLine *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        case 2: *reinterpret_cast< QCPLineEnding*>(_v) = _t->head(); break;
        case 3: *reinterpret_cast< QCPLineEnding*>(_v) = _t->tail(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemLine *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: _t->setHead(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        case 3: _t->setTail(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPItemLine::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_QCPItemLine.offsetsAndSize,
    qt_meta_data_QCPItemLine,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPItemLine_t
, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QCPLineEnding, std::true_type>, QtPrivate::TypeAndForceComplete<QCPLineEnding, std::true_type>, QtPrivate::TypeAndForceComplete<QCPItemLine, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPItemLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemLine.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPItemCurve_t {
    const uint offsetsAndSize[12];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPItemCurve_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPItemCurve_t qt_meta_stringdata_QCPItemCurve = {
    {
QT_MOC_LITERAL(0, 12), // "QCPItemCurve"
QT_MOC_LITERAL(13, 3), // "pen"
QT_MOC_LITERAL(17, 11), // "selectedPen"
QT_MOC_LITERAL(29, 4), // "head"
QT_MOC_LITERAL(34, 13), // "QCPLineEnding"
QT_MOC_LITERAL(48, 4) // "tail"

    },
    "QCPItemCurve\0pen\0selectedPen\0head\0"
    "QCPLineEnding\0tail"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemCurve[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPen, 0x00015103, uint(-1), 0,
       2, QMetaType::QPen, 0x00015103, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
       5, 0x80000000 | 4, 0x0001510b, uint(-1), 0,

       0        // eod
};

void QCPItemCurve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemCurve *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        case 2: *reinterpret_cast< QCPLineEnding*>(_v) = _t->head(); break;
        case 3: *reinterpret_cast< QCPLineEnding*>(_v) = _t->tail(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemCurve *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: _t->setHead(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        case 3: _t->setTail(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPItemCurve::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_QCPItemCurve.offsetsAndSize,
    qt_meta_data_QCPItemCurve,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPItemCurve_t
, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QCPLineEnding, std::true_type>, QtPrivate::TypeAndForceComplete<QCPLineEnding, std::true_type>, QtPrivate::TypeAndForceComplete<QCPItemCurve, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPItemCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemCurve.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPItemRect_t {
    const uint offsetsAndSize[10];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPItemRect_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPItemRect_t qt_meta_stringdata_QCPItemRect = {
    {
QT_MOC_LITERAL(0, 11), // "QCPItemRect"
QT_MOC_LITERAL(12, 3), // "pen"
QT_MOC_LITERAL(16, 11), // "selectedPen"
QT_MOC_LITERAL(28, 5), // "brush"
QT_MOC_LITERAL(34, 13) // "selectedBrush"

    },
    "QCPItemRect\0pen\0selectedPen\0brush\0"
    "selectedBrush"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemRect[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPen, 0x00015103, uint(-1), 0,
       2, QMetaType::QPen, 0x00015103, uint(-1), 0,
       3, QMetaType::QBrush, 0x00015103, uint(-1), 0,
       4, QMetaType::QBrush, 0x00015103, uint(-1), 0,

       0        // eod
};

void QCPItemRect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemRect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        case 2: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        case 3: *reinterpret_cast< QBrush*>(_v) = _t->selectedBrush(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemRect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 3: _t->setSelectedBrush(*reinterpret_cast< QBrush*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPItemRect::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_QCPItemRect.offsetsAndSize,
    qt_meta_data_QCPItemRect,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPItemRect_t
, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QBrush, std::true_type>, QtPrivate::TypeAndForceComplete<QBrush, std::true_type>, QtPrivate::TypeAndForceComplete<QCPItemRect, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPItemRect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemRect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemRect.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemRect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPItemText_t {
    const uint offsetsAndSize[32];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPItemText_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPItemText_t qt_meta_stringdata_QCPItemText = {
    {
QT_MOC_LITERAL(0, 11), // "QCPItemText"
QT_MOC_LITERAL(12, 5), // "color"
QT_MOC_LITERAL(18, 13), // "selectedColor"
QT_MOC_LITERAL(32, 3), // "pen"
QT_MOC_LITERAL(36, 11), // "selectedPen"
QT_MOC_LITERAL(48, 5), // "brush"
QT_MOC_LITERAL(54, 13), // "selectedBrush"
QT_MOC_LITERAL(68, 4), // "font"
QT_MOC_LITERAL(73, 12), // "selectedFont"
QT_MOC_LITERAL(86, 4), // "text"
QT_MOC_LITERAL(91, 17), // "positionAlignment"
QT_MOC_LITERAL(109, 13), // "Qt::Alignment"
QT_MOC_LITERAL(123, 13), // "textAlignment"
QT_MOC_LITERAL(137, 8), // "rotation"
QT_MOC_LITERAL(146, 7), // "padding"
QT_MOC_LITERAL(154, 8) // "QMargins"

    },
    "QCPItemText\0color\0selectedColor\0pen\0"
    "selectedPen\0brush\0selectedBrush\0font\0"
    "selectedFont\0text\0positionAlignment\0"
    "Qt::Alignment\0textAlignment\0rotation\0"
    "padding\0QMargins"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemText[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      13,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00015103, uint(-1), 0,
       2, QMetaType::QColor, 0x00015103, uint(-1), 0,
       3, QMetaType::QPen, 0x00015103, uint(-1), 0,
       4, QMetaType::QPen, 0x00015103, uint(-1), 0,
       5, QMetaType::QBrush, 0x00015103, uint(-1), 0,
       6, QMetaType::QBrush, 0x00015103, uint(-1), 0,
       7, QMetaType::QFont, 0x00015103, uint(-1), 0,
       8, QMetaType::QFont, 0x00015103, uint(-1), 0,
       9, QMetaType::QString, 0x00015103, uint(-1), 0,
      10, 0x80000000 | 11, 0x0001510b, uint(-1), 0,
      12, 0x80000000 | 11, 0x0001510b, uint(-1), 0,
      13, QMetaType::Double, 0x00015103, uint(-1), 0,
      14, 0x80000000 | 15, 0x0001510b, uint(-1), 0,

       0        // eod
};

void QCPItemText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemText *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->selectedColor(); break;
        case 2: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 3: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        case 4: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        case 5: *reinterpret_cast< QBrush*>(_v) = _t->selectedBrush(); break;
        case 6: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 7: *reinterpret_cast< QFont*>(_v) = _t->selectedFont(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 9: *reinterpret_cast< Qt::Alignment*>(_v) = _t->positionAlignment(); break;
        case 10: *reinterpret_cast< Qt::Alignment*>(_v) = _t->textAlignment(); break;
        case 11: *reinterpret_cast< double*>(_v) = _t->rotation(); break;
        case 12: *reinterpret_cast< QMargins*>(_v) = _t->padding(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemText *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setSelectedColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 3: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 4: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 5: _t->setSelectedBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 6: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 7: _t->setSelectedFont(*reinterpret_cast< QFont*>(_v)); break;
        case 8: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setPositionAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 10: _t->setTextAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 11: _t->setRotation(*reinterpret_cast< double*>(_v)); break;
        case 12: _t->setPadding(*reinterpret_cast< QMargins*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPItemText::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_QCPItemText.offsetsAndSize,
    qt_meta_data_QCPItemText,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPItemText_t
, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QBrush, std::true_type>, QtPrivate::TypeAndForceComplete<QBrush, std::true_type>, QtPrivate::TypeAndForceComplete<QFont, std::true_type>, QtPrivate::TypeAndForceComplete<QFont, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<Qt::Alignment, std::true_type>, QtPrivate::TypeAndForceComplete<Qt::Alignment, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<QMargins, std::true_type>, QtPrivate::TypeAndForceComplete<QCPItemText, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPItemText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemText::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemText.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPItemEllipse_t {
    const uint offsetsAndSize[10];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPItemEllipse_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPItemEllipse_t qt_meta_stringdata_QCPItemEllipse = {
    {
QT_MOC_LITERAL(0, 14), // "QCPItemEllipse"
QT_MOC_LITERAL(15, 3), // "pen"
QT_MOC_LITERAL(19, 11), // "selectedPen"
QT_MOC_LITERAL(31, 5), // "brush"
QT_MOC_LITERAL(37, 13) // "selectedBrush"

    },
    "QCPItemEllipse\0pen\0selectedPen\0brush\0"
    "selectedBrush"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemEllipse[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPen, 0x00015103, uint(-1), 0,
       2, QMetaType::QPen, 0x00015103, uint(-1), 0,
       3, QMetaType::QBrush, 0x00015103, uint(-1), 0,
       4, QMetaType::QBrush, 0x00015103, uint(-1), 0,

       0        // eod
};

void QCPItemEllipse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemEllipse *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        case 2: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        case 3: *reinterpret_cast< QBrush*>(_v) = _t->selectedBrush(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemEllipse *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 3: _t->setSelectedBrush(*reinterpret_cast< QBrush*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPItemEllipse::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_QCPItemEllipse.offsetsAndSize,
    qt_meta_data_QCPItemEllipse,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPItemEllipse_t
, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QBrush, std::true_type>, QtPrivate::TypeAndForceComplete<QBrush, std::true_type>, QtPrivate::TypeAndForceComplete<QCPItemEllipse, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPItemEllipse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemEllipse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemEllipse.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemEllipse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPItemPixmap_t {
    const uint offsetsAndSize[18];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPItemPixmap_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPItemPixmap_t qt_meta_stringdata_QCPItemPixmap = {
    {
QT_MOC_LITERAL(0, 13), // "QCPItemPixmap"
QT_MOC_LITERAL(14, 6), // "pixmap"
QT_MOC_LITERAL(21, 6), // "scaled"
QT_MOC_LITERAL(28, 15), // "aspectRatioMode"
QT_MOC_LITERAL(44, 19), // "Qt::AspectRatioMode"
QT_MOC_LITERAL(64, 18), // "transformationMode"
QT_MOC_LITERAL(83, 22), // "Qt::TransformationMode"
QT_MOC_LITERAL(106, 3), // "pen"
QT_MOC_LITERAL(110, 11) // "selectedPen"

    },
    "QCPItemPixmap\0pixmap\0scaled\0aspectRatioMode\0"
    "Qt::AspectRatioMode\0transformationMode\0"
    "Qt::TransformationMode\0pen\0selectedPen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemPixmap[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPixmap, 0x00015103, uint(-1), 0,
       2, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, 0x80000000 | 4, 0x00015009, uint(-1), 0,
       5, 0x80000000 | 6, 0x00015009, uint(-1), 0,
       7, QMetaType::QPen, 0x00015103, uint(-1), 0,
       8, QMetaType::QPen, 0x00015103, uint(-1), 0,

       0        // eod
};

void QCPItemPixmap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemPixmap *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPixmap*>(_v) = _t->pixmap(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->scaled(); break;
        case 2: *reinterpret_cast< Qt::AspectRatioMode*>(_v) = _t->aspectRatioMode(); break;
        case 3: *reinterpret_cast< Qt::TransformationMode*>(_v) = _t->transformationMode(); break;
        case 4: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 5: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemPixmap *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPixmap(*reinterpret_cast< QPixmap*>(_v)); break;
        case 1: _t->setScaled(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 5: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPItemPixmap::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_QCPItemPixmap.offsetsAndSize,
    qt_meta_data_QCPItemPixmap,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPItemPixmap_t
, QtPrivate::TypeAndForceComplete<QPixmap, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<Qt::AspectRatioMode, std::true_type>, QtPrivate::TypeAndForceComplete<Qt::TransformationMode, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QCPItemPixmap, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPItemPixmap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemPixmap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemPixmap.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemPixmap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPItemTracer_t {
    const uint offsetsAndSize[34];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPItemTracer_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPItemTracer_t qt_meta_stringdata_QCPItemTracer = {
    {
QT_MOC_LITERAL(0, 13), // "QCPItemTracer"
QT_MOC_LITERAL(14, 3), // "pen"
QT_MOC_LITERAL(18, 11), // "selectedPen"
QT_MOC_LITERAL(30, 5), // "brush"
QT_MOC_LITERAL(36, 13), // "selectedBrush"
QT_MOC_LITERAL(50, 4), // "size"
QT_MOC_LITERAL(55, 5), // "style"
QT_MOC_LITERAL(61, 11), // "TracerStyle"
QT_MOC_LITERAL(73, 5), // "graph"
QT_MOC_LITERAL(79, 9), // "QCPGraph*"
QT_MOC_LITERAL(89, 8), // "graphKey"
QT_MOC_LITERAL(98, 13), // "interpolating"
QT_MOC_LITERAL(112, 6), // "tsNone"
QT_MOC_LITERAL(119, 6), // "tsPlus"
QT_MOC_LITERAL(126, 11), // "tsCrosshair"
QT_MOC_LITERAL(138, 8), // "tsCircle"
QT_MOC_LITERAL(147, 8) // "tsSquare"

    },
    "QCPItemTracer\0pen\0selectedPen\0brush\0"
    "selectedBrush\0size\0style\0TracerStyle\0"
    "graph\0QCPGraph*\0graphKey\0interpolating\0"
    "tsNone\0tsPlus\0tsCrosshair\0tsCircle\0"
    "tsSquare"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemTracer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       9,   14, // properties
       1,   59, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPen, 0x00015103, uint(-1), 0,
       2, QMetaType::QPen, 0x00015103, uint(-1), 0,
       3, QMetaType::QBrush, 0x00015103, uint(-1), 0,
       4, QMetaType::QBrush, 0x00015103, uint(-1), 0,
       5, QMetaType::Double, 0x00015103, uint(-1), 0,
       6, 0x80000000 | 7, 0x0001510b, uint(-1), 0,
       8, 0x80000000 | 9, 0x0001510b, uint(-1), 0,
      10, QMetaType::Double, 0x00015103, uint(-1), 0,
      11, QMetaType::Bool, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
       7,    7, 0x0,    5,   64,

 // enum data: key, value
      12, uint(QCPItemTracer::tsNone),
      13, uint(QCPItemTracer::tsPlus),
      14, uint(QCPItemTracer::tsCrosshair),
      15, uint(QCPItemTracer::tsCircle),
      16, uint(QCPItemTracer::tsSquare),

       0        // eod
};

void QCPItemTracer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPGraph* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemTracer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        case 2: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        case 3: *reinterpret_cast< QBrush*>(_v) = _t->selectedBrush(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->size(); break;
        case 5: *reinterpret_cast< TracerStyle*>(_v) = _t->style(); break;
        case 6: *reinterpret_cast< QCPGraph**>(_v) = _t->graph(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->graphKey(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->interpolating(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemTracer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 3: _t->setSelectedBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 4: _t->setSize(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setStyle(*reinterpret_cast< TracerStyle*>(_v)); break;
        case 6: _t->setGraph(*reinterpret_cast< QCPGraph**>(_v)); break;
        case 7: _t->setGraphKey(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->setInterpolating(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
}

const QMetaObject QCPItemTracer::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_QCPItemTracer.offsetsAndSize,
    qt_meta_data_QCPItemTracer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPItemTracer_t
, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QBrush, std::true_type>, QtPrivate::TypeAndForceComplete<QBrush, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<TracerStyle, std::true_type>, QtPrivate::TypeAndForceComplete<QCPGraph*, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QCPItemTracer, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPItemTracer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemTracer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemTracer.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemTracer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPItemBracket_t {
    const uint offsetsAndSize[20];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPItemBracket_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPItemBracket_t qt_meta_stringdata_QCPItemBracket = {
    {
QT_MOC_LITERAL(0, 14), // "QCPItemBracket"
QT_MOC_LITERAL(15, 3), // "pen"
QT_MOC_LITERAL(19, 11), // "selectedPen"
QT_MOC_LITERAL(31, 6), // "length"
QT_MOC_LITERAL(38, 5), // "style"
QT_MOC_LITERAL(44, 12), // "BracketStyle"
QT_MOC_LITERAL(57, 8), // "bsSquare"
QT_MOC_LITERAL(66, 7), // "bsRound"
QT_MOC_LITERAL(74, 7), // "bsCurly"
QT_MOC_LITERAL(82, 14) // "bsCalligraphic"

    },
    "QCPItemBracket\0pen\0selectedPen\0length\0"
    "style\0BracketStyle\0bsSquare\0bsRound\0"
    "bsCurly\0bsCalligraphic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemBracket[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       1,   34, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPen, 0x00015103, uint(-1), 0,
       2, QMetaType::QPen, 0x00015103, uint(-1), 0,
       3, QMetaType::Double, 0x00015103, uint(-1), 0,
       4, 0x80000000 | 5, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
       5,    5, 0x0,    4,   39,

 // enum data: key, value
       6, uint(QCPItemBracket::bsSquare),
       7, uint(QCPItemBracket::bsRound),
       8, uint(QCPItemBracket::bsCurly),
       9, uint(QCPItemBracket::bsCalligraphic),

       0        // eod
};

void QCPItemBracket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemBracket *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->length(); break;
        case 3: *reinterpret_cast< BracketStyle*>(_v) = _t->style(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemBracket *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: _t->setLength(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setStyle(*reinterpret_cast< BracketStyle*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPItemBracket::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_QCPItemBracket.offsetsAndSize,
    qt_meta_data_QCPItemBracket,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPItemBracket_t
, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<QPen, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<BracketStyle, std::true_type>, QtPrivate::TypeAndForceComplete<QCPItemBracket, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPItemBracket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemBracket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemBracket.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemBracket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QCPPolarAxisRadial_t {
    const uint offsetsAndSize[72];
    char stringdata0[466];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPPolarAxisRadial_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPPolarAxisRadial_t qt_meta_stringdata_QCPPolarAxisRadial = {
    {
QT_MOC_LITERAL(0, 18), // "QCPPolarAxisRadial"
QT_MOC_LITERAL(19, 12), // "rangeChanged"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 8), // "QCPRange"
QT_MOC_LITERAL(42, 8), // "newRange"
QT_MOC_LITERAL(51, 8), // "oldRange"
QT_MOC_LITERAL(60, 16), // "scaleTypeChanged"
QT_MOC_LITERAL(77, 29), // "QCPPolarAxisRadial::ScaleType"
QT_MOC_LITERAL(107, 9), // "scaleType"
QT_MOC_LITERAL(117, 16), // "selectionChanged"
QT_MOC_LITERAL(134, 35), // "QCPPolarAxisRadial::Selectabl..."
QT_MOC_LITERAL(170, 5), // "parts"
QT_MOC_LITERAL(176, 17), // "selectableChanged"
QT_MOC_LITERAL(194, 12), // "setScaleType"
QT_MOC_LITERAL(207, 4), // "type"
QT_MOC_LITERAL(212, 8), // "setRange"
QT_MOC_LITERAL(221, 5), // "range"
QT_MOC_LITERAL(227, 18), // "setSelectableParts"
QT_MOC_LITERAL(246, 15), // "selectableParts"
QT_MOC_LITERAL(262, 16), // "setSelectedParts"
QT_MOC_LITERAL(279, 13), // "selectedParts"
QT_MOC_LITERAL(293, 14), // "AngleReference"
QT_MOC_LITERAL(308, 10), // "arAbsolute"
QT_MOC_LITERAL(319, 13), // "arAngularAxis"
QT_MOC_LITERAL(333, 9), // "ScaleType"
QT_MOC_LITERAL(343, 8), // "stLinear"
QT_MOC_LITERAL(352, 13), // "stLogarithmic"
QT_MOC_LITERAL(366, 14), // "SelectablePart"
QT_MOC_LITERAL(381, 6), // "spNone"
QT_MOC_LITERAL(388, 6), // "spAxis"
QT_MOC_LITERAL(395, 12), // "spTickLabels"
QT_MOC_LITERAL(408, 11), // "spAxisLabel"
QT_MOC_LITERAL(420, 15), // "SelectableParts"
QT_MOC_LITERAL(436, 9), // "LabelMode"
QT_MOC_LITERAL(446, 9), // "lmUpright"
QT_MOC_LITERAL(456, 9) // "lmRotated"

    },
    "QCPPolarAxisRadial\0rangeChanged\0\0"
    "QCPRange\0newRange\0oldRange\0scaleTypeChanged\0"
    "QCPPolarAxisRadial::ScaleType\0scaleType\0"
    "selectionChanged\0QCPPolarAxisRadial::SelectableParts\0"
    "parts\0selectableChanged\0setScaleType\0"
    "type\0setRange\0range\0setSelectableParts\0"
    "selectableParts\0setSelectedParts\0"
    "selectedParts\0AngleReference\0arAbsolute\0"
    "arAngularAxis\0ScaleType\0stLinear\0"
    "stLogarithmic\0SelectablePart\0spNone\0"
    "spAxis\0spTickLabels\0spAxisLabel\0"
    "SelectableParts\0LabelMode\0lmUpright\0"
    "lmRotated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPPolarAxisRadial[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       5,   97, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       1,    2,   71,    2, 0x06,    3 /* Public */,
       6,    1,   76,    2, 0x06,    6 /* Public */,
       9,    1,   79,    2, 0x06,    8 /* Public */,
      12,    1,   82,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    1,   85,    2, 0x0a,   12 /* Public */,
      15,    1,   88,    2, 0x0a,   14 /* Public */,
      17,    1,   91,    2, 0x0a,   16 /* Public */,
      19,    1,   94,    2, 0x0a,   18 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,   14,
    QMetaType::Void, 0x80000000 | 3,   16,
    QMetaType::Void, 0x80000000 | 10,   18,
    QMetaType::Void, 0x80000000 | 10,   20,

 // enums: name, alias, flags, count, data
      21,   21, 0x0,    2,  122,
      24,   24, 0x0,    2,  126,
      27,   27, 0x0,    4,  130,
      32,   27, 0x1,    4,  138,
      33,   33, 0x0,    2,  146,

 // enum data: key, value
      22, uint(QCPPolarAxisRadial::arAbsolute),
      23, uint(QCPPolarAxisRadial::arAngularAxis),
      25, uint(QCPPolarAxisRadial::stLinear),
      26, uint(QCPPolarAxisRadial::stLogarithmic),
      28, uint(QCPPolarAxisRadial::spNone),
      29, uint(QCPPolarAxisRadial::spAxis),
      30, uint(QCPPolarAxisRadial::spTickLabels),
      31, uint(QCPPolarAxisRadial::spAxisLabel),
      28, uint(QCPPolarAxisRadial::spNone),
      29, uint(QCPPolarAxisRadial::spAxis),
      30, uint(QCPPolarAxisRadial::spTickLabels),
      31, uint(QCPPolarAxisRadial::spAxisLabel),
      34, uint(QCPPolarAxisRadial::lmUpright),
      35, uint(QCPPolarAxisRadial::lmRotated),

       0        // eod
};

void QCPPolarAxisRadial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPPolarAxisRadial *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rangeChanged((*reinterpret_cast< const QCPRange(*)>(_a[1]))); break;
        case 1: _t->rangeChanged((*reinterpret_cast< const QCPRange(*)>(_a[1])),(*reinterpret_cast< const QCPRange(*)>(_a[2]))); break;
        case 2: _t->scaleTypeChanged((*reinterpret_cast< QCPPolarAxisRadial::ScaleType(*)>(_a[1]))); break;
        case 3: _t->selectionChanged((*reinterpret_cast< const QCPPolarAxisRadial::SelectableParts(*)>(_a[1]))); break;
        case 4: _t->selectableChanged((*reinterpret_cast< const QCPPolarAxisRadial::SelectableParts(*)>(_a[1]))); break;
        case 5: _t->setScaleType((*reinterpret_cast< QCPPolarAxisRadial::ScaleType(*)>(_a[1]))); break;
        case 6: _t->setRange((*reinterpret_cast< const QCPRange(*)>(_a[1]))); break;
        case 7: _t->setSelectableParts((*reinterpret_cast< const QCPPolarAxisRadial::SelectableParts(*)>(_a[1]))); break;
        case 8: _t->setSelectedParts((*reinterpret_cast< const QCPPolarAxisRadial::SelectableParts(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPPolarAxisRadial::ScaleType >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPPolarAxisRadial::ScaleType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPPolarAxisRadial::*)(const QCPRange & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPPolarAxisRadial::rangeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCPPolarAxisRadial::*)(const QCPRange & , const QCPRange & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPPolarAxisRadial::rangeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCPPolarAxisRadial::*)(QCPPolarAxisRadial::ScaleType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPPolarAxisRadial::scaleTypeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QCPPolarAxisRadial::*)(const QCPPolarAxisRadial::SelectableParts & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPPolarAxisRadial::selectionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QCPPolarAxisRadial::*)(const QCPPolarAxisRadial::SelectableParts & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPPolarAxisRadial::selectableChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QCPPolarAxisRadial::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayerable::staticMetaObject>(),
    qt_meta_stringdata_QCPPolarAxisRadial.offsetsAndSize,
    qt_meta_data_QCPPolarAxisRadial,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPPolarAxisRadial_t
, QtPrivate::TypeAndForceComplete<QCPPolarAxisRadial, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPPolarAxisRadial::ScaleType, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPPolarAxisRadial::SelectableParts &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPPolarAxisRadial::SelectableParts &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPPolarAxisRadial::ScaleType, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPPolarAxisRadial::SelectableParts &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPPolarAxisRadial::SelectableParts &, std::false_type>


>,
    nullptr
} };


const QMetaObject *QCPPolarAxisRadial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPPolarAxisRadial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPPolarAxisRadial.stringdata0))
        return static_cast<void*>(this);
    return QCPLayerable::qt_metacast(_clname);
}

int QCPPolarAxisRadial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QCPPolarAxisRadial::rangeChanged(const QCPRange & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCPPolarAxisRadial::rangeChanged(const QCPRange & _t1, const QCPRange & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCPPolarAxisRadial::scaleTypeChanged(QCPPolarAxisRadial::ScaleType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCPPolarAxisRadial::selectionChanged(const QCPPolarAxisRadial::SelectableParts & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QCPPolarAxisRadial::selectableChanged(const QCPPolarAxisRadial::SelectableParts & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_QCPPolarAxisAngular_t {
    const uint offsetsAndSize[50];
    char stringdata0[320];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPPolarAxisAngular_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPPolarAxisAngular_t qt_meta_stringdata_QCPPolarAxisAngular = {
    {
QT_MOC_LITERAL(0, 19), // "QCPPolarAxisAngular"
QT_MOC_LITERAL(20, 12), // "rangeChanged"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 8), // "QCPRange"
QT_MOC_LITERAL(43, 8), // "newRange"
QT_MOC_LITERAL(52, 8), // "oldRange"
QT_MOC_LITERAL(61, 16), // "selectionChanged"
QT_MOC_LITERAL(78, 36), // "QCPPolarAxisAngular::Selectab..."
QT_MOC_LITERAL(115, 5), // "parts"
QT_MOC_LITERAL(121, 17), // "selectableChanged"
QT_MOC_LITERAL(139, 8), // "setRange"
QT_MOC_LITERAL(148, 5), // "range"
QT_MOC_LITERAL(154, 18), // "setSelectableParts"
QT_MOC_LITERAL(173, 15), // "selectableParts"
QT_MOC_LITERAL(189, 16), // "setSelectedParts"
QT_MOC_LITERAL(206, 13), // "selectedParts"
QT_MOC_LITERAL(220, 14), // "SelectablePart"
QT_MOC_LITERAL(235, 6), // "spNone"
QT_MOC_LITERAL(242, 6), // "spAxis"
QT_MOC_LITERAL(249, 12), // "spTickLabels"
QT_MOC_LITERAL(262, 11), // "spAxisLabel"
QT_MOC_LITERAL(274, 15), // "SelectableParts"
QT_MOC_LITERAL(290, 9), // "LabelMode"
QT_MOC_LITERAL(300, 9), // "lmUpright"
QT_MOC_LITERAL(310, 9) // "lmRotated"

    },
    "QCPPolarAxisAngular\0rangeChanged\0\0"
    "QCPRange\0newRange\0oldRange\0selectionChanged\0"
    "QCPPolarAxisAngular::SelectableParts\0"
    "parts\0selectableChanged\0setRange\0range\0"
    "setSelectableParts\0selectableParts\0"
    "setSelectedParts\0selectedParts\0"
    "SelectablePart\0spNone\0spAxis\0spTickLabels\0"
    "spAxisLabel\0SelectableParts\0LabelMode\0"
    "lmUpright\0lmRotated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPPolarAxisAngular[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       3,   79, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,
       1,    2,   59,    2, 0x06,    3 /* Public */,
       6,    1,   64,    2, 0x06,    6 /* Public */,
       9,    1,   67,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   70,    2, 0x0a,   10 /* Public */,
      12,    1,   73,    2, 0x0a,   12 /* Public */,
      14,    1,   76,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, 0x80000000 | 7,   13,
    QMetaType::Void, 0x80000000 | 7,   15,

 // enums: name, alias, flags, count, data
      16,   16, 0x0,    4,   94,
      21,   16, 0x1,    4,  102,
      22,   22, 0x0,    2,  110,

 // enum data: key, value
      17, uint(QCPPolarAxisAngular::spNone),
      18, uint(QCPPolarAxisAngular::spAxis),
      19, uint(QCPPolarAxisAngular::spTickLabels),
      20, uint(QCPPolarAxisAngular::spAxisLabel),
      17, uint(QCPPolarAxisAngular::spNone),
      18, uint(QCPPolarAxisAngular::spAxis),
      19, uint(QCPPolarAxisAngular::spTickLabels),
      20, uint(QCPPolarAxisAngular::spAxisLabel),
      23, uint(QCPPolarAxisAngular::lmUpright),
      24, uint(QCPPolarAxisAngular::lmRotated),

       0        // eod
};

void QCPPolarAxisAngular::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPPolarAxisAngular *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rangeChanged((*reinterpret_cast< const QCPRange(*)>(_a[1]))); break;
        case 1: _t->rangeChanged((*reinterpret_cast< const QCPRange(*)>(_a[1])),(*reinterpret_cast< const QCPRange(*)>(_a[2]))); break;
        case 2: _t->selectionChanged((*reinterpret_cast< const QCPPolarAxisAngular::SelectableParts(*)>(_a[1]))); break;
        case 3: _t->selectableChanged((*reinterpret_cast< const QCPPolarAxisAngular::SelectableParts(*)>(_a[1]))); break;
        case 4: _t->setRange((*reinterpret_cast< const QCPRange(*)>(_a[1]))); break;
        case 5: _t->setSelectableParts((*reinterpret_cast< const QCPPolarAxisAngular::SelectableParts(*)>(_a[1]))); break;
        case 6: _t->setSelectedParts((*reinterpret_cast< const QCPPolarAxisAngular::SelectableParts(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPPolarAxisAngular::*)(const QCPRange & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPPolarAxisAngular::rangeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCPPolarAxisAngular::*)(const QCPRange & , const QCPRange & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPPolarAxisAngular::rangeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCPPolarAxisAngular::*)(const QCPPolarAxisAngular::SelectableParts & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPPolarAxisAngular::selectionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QCPPolarAxisAngular::*)(const QCPPolarAxisAngular::SelectableParts & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPPolarAxisAngular::selectableChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QCPPolarAxisAngular::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayoutElement::staticMetaObject>(),
    qt_meta_stringdata_QCPPolarAxisAngular.offsetsAndSize,
    qt_meta_data_QCPPolarAxisAngular,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPPolarAxisAngular_t
, QtPrivate::TypeAndForceComplete<QCPPolarAxisAngular, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPPolarAxisAngular::SelectableParts &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPPolarAxisAngular::SelectableParts &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPPolarAxisAngular::SelectableParts &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPPolarAxisAngular::SelectableParts &, std::false_type>


>,
    nullptr
} };


const QMetaObject *QCPPolarAxisAngular::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPPolarAxisAngular::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPPolarAxisAngular.stringdata0))
        return static_cast<void*>(this);
    return QCPLayoutElement::qt_metacast(_clname);
}

int QCPPolarAxisAngular::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayoutElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QCPPolarAxisAngular::rangeChanged(const QCPRange & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCPPolarAxisAngular::rangeChanged(const QCPRange & _t1, const QCPRange & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCPPolarAxisAngular::selectionChanged(const QCPPolarAxisAngular::SelectableParts & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCPPolarAxisAngular::selectableChanged(const QCPPolarAxisAngular::SelectableParts & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_QCPPolarGrid_t {
    const uint offsetsAndSize[14];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPPolarGrid_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPPolarGrid_t qt_meta_stringdata_QCPPolarGrid = {
    {
QT_MOC_LITERAL(0, 12), // "QCPPolarGrid"
QT_MOC_LITERAL(13, 8), // "GridType"
QT_MOC_LITERAL(22, 9), // "gtAngular"
QT_MOC_LITERAL(32, 8), // "gtRadial"
QT_MOC_LITERAL(41, 5), // "gtAll"
QT_MOC_LITERAL(47, 6), // "gtNone"
QT_MOC_LITERAL(54, 9) // "GridTypes"

    },
    "QCPPolarGrid\0GridType\0gtAngular\0"
    "gtRadial\0gtAll\0gtNone\0GridTypes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPPolarGrid[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    4,   24,
       6,    1, 0x1,    4,   32,

 // enum data: key, value
       2, uint(QCPPolarGrid::gtAngular),
       3, uint(QCPPolarGrid::gtRadial),
       4, uint(QCPPolarGrid::gtAll),
       5, uint(QCPPolarGrid::gtNone),
       2, uint(QCPPolarGrid::gtAngular),
       3, uint(QCPPolarGrid::gtRadial),
       4, uint(QCPPolarGrid::gtAll),
       5, uint(QCPPolarGrid::gtNone),

       0        // eod
};

void QCPPolarGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPPolarGrid::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayerable::staticMetaObject>(),
    qt_meta_stringdata_QCPPolarGrid.offsetsAndSize,
    qt_meta_data_QCPPolarGrid,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPPolarGrid_t
, QtPrivate::TypeAndForceComplete<QCPPolarGrid, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPPolarGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPPolarGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPPolarGrid.stringdata0))
        return static_cast<void*>(this);
    return QCPLayerable::qt_metacast(_clname);
}

int QCPPolarGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QCPPolarLegendItem_t {
    const uint offsetsAndSize[2];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPPolarLegendItem_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPPolarLegendItem_t qt_meta_stringdata_QCPPolarLegendItem = {
    {
QT_MOC_LITERAL(0, 18) // "QCPPolarLegendItem"

    },
    "QCPPolarLegendItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPPolarLegendItem[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPPolarLegendItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QCPPolarLegendItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractLegendItem::staticMetaObject>(),
    qt_meta_stringdata_QCPPolarLegendItem.offsetsAndSize,
    qt_meta_data_QCPPolarLegendItem,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPPolarLegendItem_t
, QtPrivate::TypeAndForceComplete<QCPPolarLegendItem, std::true_type>



>,
    nullptr
} };


const QMetaObject *QCPPolarLegendItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPPolarLegendItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPPolarLegendItem.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractLegendItem::qt_metacast(_clname);
}

int QCPPolarLegendItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractLegendItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QCPPolarGraph_t {
    const uint offsetsAndSize[28];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCPPolarGraph_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCPPolarGraph_t qt_meta_stringdata_QCPPolarGraph = {
    {
QT_MOC_LITERAL(0, 13), // "QCPPolarGraph"
QT_MOC_LITERAL(14, 16), // "selectionChanged"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 8), // "selected"
QT_MOC_LITERAL(41, 16), // "QCPDataSelection"
QT_MOC_LITERAL(58, 9), // "selection"
QT_MOC_LITERAL(68, 17), // "selectableChanged"
QT_MOC_LITERAL(86, 18), // "QCP::SelectionType"
QT_MOC_LITERAL(105, 10), // "selectable"
QT_MOC_LITERAL(116, 13), // "setSelectable"
QT_MOC_LITERAL(130, 12), // "setSelection"
QT_MOC_LITERAL(143, 9), // "LineStyle"
QT_MOC_LITERAL(153, 6), // "lsNone"
QT_MOC_LITERAL(160, 6) // "lsLine"

    },
    "QCPPolarGraph\0selectionChanged\0\0"
    "selected\0QCPDataSelection\0selection\0"
    "selectableChanged\0QCP::SelectionType\0"
    "selectable\0setSelectable\0setSelection\0"
    "LineStyle\0lsNone\0lsLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPPolarGraph[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       1,   59, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       1,    1,   47,    2, 0x06,    3 /* Public */,
       6,    1,   50,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,   53,    2, 0x0a,    7 /* Public */,
      10,    1,   56,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 4,    5,

 // enums: name, alias, flags, count, data
      11,   11, 0x0,    2,   64,

 // enum data: key, value
      12, uint(QCPPolarGraph::lsNone),
      13, uint(QCPPolarGraph::lsLine),

       0        // eod
};

void QCPPolarGraph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPPolarGraph *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->selectionChanged((*reinterpret_cast< const QCPDataSelection(*)>(_a[1]))); break;
        case 2: _t->selectableChanged((*reinterpret_cast< QCP::SelectionType(*)>(_a[1]))); break;
        case 3: _t->setSelectable((*reinterpret_cast< QCP::SelectionType(*)>(_a[1]))); break;
        case 4: _t->setSelection((*reinterpret_cast< QCPDataSelection(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPDataSelection >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPDataSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPPolarGraph::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPPolarGraph::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCPPolarGraph::*)(const QCPDataSelection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPPolarGraph::selectionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCPPolarGraph::*)(QCP::SelectionType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCPPolarGraph::selectableChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QCPPolarGraph::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayerable::staticMetaObject>(),
    qt_meta_stringdata_QCPPolarGraph.offsetsAndSize,
    qt_meta_data_QCPPolarGraph,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCPPolarGraph_t
, QtPrivate::TypeAndForceComplete<QCPPolarGraph, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPDataSelection &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCP::SelectionType, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCP::SelectionType, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCPDataSelection, std::false_type>


>,
    nullptr
} };


const QMetaObject *QCPPolarGraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPPolarGraph::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCPPolarGraph.stringdata0))
        return static_cast<void*>(this);
    return QCPLayerable::qt_metacast(_clname);
}

int QCPPolarGraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QCPPolarGraph::selectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCPPolarGraph::selectionChanged(const QCPDataSelection & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCPPolarGraph::selectableChanged(QCP::SelectionType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QCP_t {
    const uint offsetsAndSize[128];
    char stringdata0[751];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCP_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCP_t qt_meta_stringdata_QCP = {
    {
QT_MOC_LITERAL(0, 3), // "QCP"
QT_MOC_LITERAL(4, 14), // "ResolutionUnit"
QT_MOC_LITERAL(19, 14), // "ruDotsPerMeter"
QT_MOC_LITERAL(34, 19), // "ruDotsPerCentimeter"
QT_MOC_LITERAL(54, 13), // "ruDotsPerInch"
QT_MOC_LITERAL(68, 9), // "ExportPen"
QT_MOC_LITERAL(78, 12), // "epNoCosmetic"
QT_MOC_LITERAL(91, 15), // "epAllowCosmetic"
QT_MOC_LITERAL(107, 10), // "SignDomain"
QT_MOC_LITERAL(118, 10), // "sdNegative"
QT_MOC_LITERAL(129, 6), // "sdBoth"
QT_MOC_LITERAL(136, 10), // "sdPositive"
QT_MOC_LITERAL(147, 10), // "MarginSide"
QT_MOC_LITERAL(158, 6), // "msLeft"
QT_MOC_LITERAL(165, 7), // "msRight"
QT_MOC_LITERAL(173, 5), // "msTop"
QT_MOC_LITERAL(179, 8), // "msBottom"
QT_MOC_LITERAL(188, 5), // "msAll"
QT_MOC_LITERAL(194, 6), // "msNone"
QT_MOC_LITERAL(201, 11), // "MarginSides"
QT_MOC_LITERAL(213, 18), // "AntialiasedElement"
QT_MOC_LITERAL(232, 6), // "aeAxes"
QT_MOC_LITERAL(239, 6), // "aeGrid"
QT_MOC_LITERAL(246, 9), // "aeSubGrid"
QT_MOC_LITERAL(256, 8), // "aeLegend"
QT_MOC_LITERAL(265, 13), // "aeLegendItems"
QT_MOC_LITERAL(279, 12), // "aePlottables"
QT_MOC_LITERAL(292, 7), // "aeItems"
QT_MOC_LITERAL(300, 10), // "aeScatters"
QT_MOC_LITERAL(311, 7), // "aeFills"
QT_MOC_LITERAL(319, 10), // "aeZeroLine"
QT_MOC_LITERAL(330, 7), // "aeOther"
QT_MOC_LITERAL(338, 5), // "aeAll"
QT_MOC_LITERAL(344, 6), // "aeNone"
QT_MOC_LITERAL(351, 19), // "AntialiasedElements"
QT_MOC_LITERAL(371, 12), // "PlottingHint"
QT_MOC_LITERAL(384, 6), // "phNone"
QT_MOC_LITERAL(391, 15), // "phFastPolylines"
QT_MOC_LITERAL(407, 18), // "phImmediateRefresh"
QT_MOC_LITERAL(426, 13), // "phCacheLabels"
QT_MOC_LITERAL(440, 13), // "PlottingHints"
QT_MOC_LITERAL(454, 11), // "Interaction"
QT_MOC_LITERAL(466, 5), // "iNone"
QT_MOC_LITERAL(472, 10), // "iRangeDrag"
QT_MOC_LITERAL(483, 10), // "iRangeZoom"
QT_MOC_LITERAL(494, 12), // "iMultiSelect"
QT_MOC_LITERAL(507, 17), // "iSelectPlottables"
QT_MOC_LITERAL(525, 11), // "iSelectAxes"
QT_MOC_LITERAL(537, 13), // "iSelectLegend"
QT_MOC_LITERAL(551, 12), // "iSelectItems"
QT_MOC_LITERAL(564, 12), // "iSelectOther"
QT_MOC_LITERAL(577, 31), // "iSelectPlottablesBeyondAxisRect"
QT_MOC_LITERAL(609, 12), // "Interactions"
QT_MOC_LITERAL(622, 17), // "SelectionRectMode"
QT_MOC_LITERAL(640, 7), // "srmNone"
QT_MOC_LITERAL(648, 7), // "srmZoom"
QT_MOC_LITERAL(656, 9), // "srmSelect"
QT_MOC_LITERAL(666, 9), // "srmCustom"
QT_MOC_LITERAL(676, 13), // "SelectionType"
QT_MOC_LITERAL(690, 6), // "stNone"
QT_MOC_LITERAL(697, 7), // "stWhole"
QT_MOC_LITERAL(705, 12), // "stSingleData"
QT_MOC_LITERAL(718, 11), // "stDataRange"
QT_MOC_LITERAL(730, 20) // "stMultipleDataRanges"

    },
    "QCP\0ResolutionUnit\0ruDotsPerMeter\0"
    "ruDotsPerCentimeter\0ruDotsPerInch\0"
    "ExportPen\0epNoCosmetic\0epAllowCosmetic\0"
    "SignDomain\0sdNegative\0sdBoth\0sdPositive\0"
    "MarginSide\0msLeft\0msRight\0msTop\0"
    "msBottom\0msAll\0msNone\0MarginSides\0"
    "AntialiasedElement\0aeAxes\0aeGrid\0"
    "aeSubGrid\0aeLegend\0aeLegendItems\0"
    "aePlottables\0aeItems\0aeScatters\0aeFills\0"
    "aeZeroLine\0aeOther\0aeAll\0aeNone\0"
    "AntialiasedElements\0PlottingHint\0"
    "phNone\0phFastPolylines\0phImmediateRefresh\0"
    "phCacheLabels\0PlottingHints\0Interaction\0"
    "iNone\0iRangeDrag\0iRangeZoom\0iMultiSelect\0"
    "iSelectPlottables\0iSelectAxes\0"
    "iSelectLegend\0iSelectItems\0iSelectOther\0"
    "iSelectPlottablesBeyondAxisRect\0"
    "Interactions\0SelectionRectMode\0srmNone\0"
    "srmZoom\0srmSelect\0srmCustom\0SelectionType\0"
    "stNone\0stWhole\0stSingleData\0stDataRange\0"
    "stMultipleDataRanges"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCP[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
      13,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    3,   79,
       5,    5, 0x0,    2,   85,
       8,    8, 0x0,    3,   89,
      12,   12, 0x0,    6,   95,
      19,   12, 0x1,    6,  107,
      20,   20, 0x0,   13,  119,
      34,   20, 0x1,   13,  145,
      35,   35, 0x0,    4,  171,
      40,   35, 0x1,    4,  179,
      41,   41, 0x0,   10,  187,
      52,   41, 0x1,   10,  207,
      53,   53, 0x0,    4,  227,
      58,   58, 0x0,    5,  235,

 // enum data: key, value
       2, uint(QCP::ruDotsPerMeter),
       3, uint(QCP::ruDotsPerCentimeter),
       4, uint(QCP::ruDotsPerInch),
       6, uint(QCP::epNoCosmetic),
       7, uint(QCP::epAllowCosmetic),
       9, uint(QCP::sdNegative),
      10, uint(QCP::sdBoth),
      11, uint(QCP::sdPositive),
      13, uint(QCP::msLeft),
      14, uint(QCP::msRight),
      15, uint(QCP::msTop),
      16, uint(QCP::msBottom),
      17, uint(QCP::msAll),
      18, uint(QCP::msNone),
      13, uint(QCP::msLeft),
      14, uint(QCP::msRight),
      15, uint(QCP::msTop),
      16, uint(QCP::msBottom),
      17, uint(QCP::msAll),
      18, uint(QCP::msNone),
      21, uint(QCP::aeAxes),
      22, uint(QCP::aeGrid),
      23, uint(QCP::aeSubGrid),
      24, uint(QCP::aeLegend),
      25, uint(QCP::aeLegendItems),
      26, uint(QCP::aePlottables),
      27, uint(QCP::aeItems),
      28, uint(QCP::aeScatters),
      29, uint(QCP::aeFills),
      30, uint(QCP::aeZeroLine),
      31, uint(QCP::aeOther),
      32, uint(QCP::aeAll),
      33, uint(QCP::aeNone),
      21, uint(QCP::aeAxes),
      22, uint(QCP::aeGrid),
      23, uint(QCP::aeSubGrid),
      24, uint(QCP::aeLegend),
      25, uint(QCP::aeLegendItems),
      26, uint(QCP::aePlottables),
      27, uint(QCP::aeItems),
      28, uint(QCP::aeScatters),
      29, uint(QCP::aeFills),
      30, uint(QCP::aeZeroLine),
      31, uint(QCP::aeOther),
      32, uint(QCP::aeAll),
      33, uint(QCP::aeNone),
      36, uint(QCP::phNone),
      37, uint(QCP::phFastPolylines),
      38, uint(QCP::phImmediateRefresh),
      39, uint(QCP::phCacheLabels),
      36, uint(QCP::phNone),
      37, uint(QCP::phFastPolylines),
      38, uint(QCP::phImmediateRefresh),
      39, uint(QCP::phCacheLabels),
      42, uint(QCP::iNone),
      43, uint(QCP::iRangeDrag),
      44, uint(QCP::iRangeZoom),
      45, uint(QCP::iMultiSelect),
      46, uint(QCP::iSelectPlottables),
      47, uint(QCP::iSelectAxes),
      48, uint(QCP::iSelectLegend),
      49, uint(QCP::iSelectItems),
      50, uint(QCP::iSelectOther),
      51, uint(QCP::iSelectPlottablesBeyondAxisRect),
      42, uint(QCP::iNone),
      43, uint(QCP::iRangeDrag),
      44, uint(QCP::iRangeZoom),
      45, uint(QCP::iMultiSelect),
      46, uint(QCP::iSelectPlottables),
      47, uint(QCP::iSelectAxes),
      48, uint(QCP::iSelectLegend),
      49, uint(QCP::iSelectItems),
      50, uint(QCP::iSelectOther),
      51, uint(QCP::iSelectPlottablesBeyondAxisRect),
      54, uint(QCP::srmNone),
      55, uint(QCP::srmZoom),
      56, uint(QCP::srmSelect),
      57, uint(QCP::srmCustom),
      59, uint(QCP::stNone),
      60, uint(QCP::stWhole),
      61, uint(QCP::stSingleData),
      62, uint(QCP::stDataRange),
      63, uint(QCP::stMultipleDataRanges),

       0        // eod
};

const QMetaObject QCP::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_QCP.offsetsAndSize,
    qt_meta_data_QCP,
    nullptr,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCP_t
, QtPrivate::TypeAndForceComplete<void, std::true_type>



>,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
