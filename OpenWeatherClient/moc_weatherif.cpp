/****************************************************************************
** Meta object code from reading C++ file 'weatherif.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "weatherif.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'weatherif.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WeatherIf_t {
    QByteArrayData data[12];
    char stringdata[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WeatherIf_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WeatherIf_t qt_meta_stringdata_WeatherIf = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 10),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 3),
QT_MOC_LITERAL(4, 26, 3),
QT_MOC_LITERAL(5, 30, 3),
QT_MOC_LITERAL(6, 34, 11),
QT_MOC_LITERAL(7, 46, 15),
QT_MOC_LITERAL(8, 62, 16),
QT_MOC_LITERAL(9, 79, 12),
QT_MOC_LITERAL(10, 92, 16),
QT_MOC_LITERAL(11, 109, 17)
    },
    "WeatherIf\0searchCity\0\0_t1\0lon\0lat\0"
    "currentTemp\0currentPressure\0"
    "currentCondition\0forecastTemp\0"
    "forecastPressure\0forecastCondition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WeatherIf[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       1,    2,   57,    2, 0x06 /* Public */,
       6,    1,   62,    2, 0x06 /* Public */,
       7,    1,   65,    2, 0x06 /* Public */,
       8,    1,   68,    2, 0x06 /* Public */,
       9,    1,   71,    2, 0x06 /* Public */,
      10,    1,   74,    2, 0x06 /* Public */,
      11,    1,   77,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    4,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void WeatherIf::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WeatherIf *_t = static_cast<WeatherIf *>(_o);
        switch (_id) {
        case 0: _t->searchCity((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->searchCity((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->currentTemp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->currentPressure((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->currentCondition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->forecastTemp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->forecastPressure((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->forecastCondition((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WeatherIf::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WeatherIf::searchCity)) {
                *result = 0;
            }
        }
        {
            typedef void (WeatherIf::*_t)(double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WeatherIf::searchCity)) {
                *result = 1;
            }
        }
        {
            typedef void (WeatherIf::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WeatherIf::currentTemp)) {
                *result = 2;
            }
        }
        {
            typedef void (WeatherIf::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WeatherIf::currentPressure)) {
                *result = 3;
            }
        }
        {
            typedef void (WeatherIf::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WeatherIf::currentCondition)) {
                *result = 4;
            }
        }
        {
            typedef void (WeatherIf::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WeatherIf::forecastTemp)) {
                *result = 5;
            }
        }
        {
            typedef void (WeatherIf::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WeatherIf::forecastPressure)) {
                *result = 6;
            }
        }
        {
            typedef void (WeatherIf::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WeatherIf::forecastCondition)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject WeatherIf::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_WeatherIf.data,
      qt_meta_data_WeatherIf,  qt_static_metacall, 0, 0}
};


const QMetaObject *WeatherIf::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WeatherIf::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WeatherIf.stringdata))
        return static_cast<void*>(const_cast< WeatherIf*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int WeatherIf::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void WeatherIf::searchCity(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WeatherIf::searchCity(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WeatherIf::currentTemp(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WeatherIf::currentPressure(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WeatherIf::currentCondition(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WeatherIf::forecastTemp(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WeatherIf::forecastPressure(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WeatherIf::forecastCondition(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
