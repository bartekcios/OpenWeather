/****************************************************************************
** Meta object code from reading C++ file 'weatherservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "weatherservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'weatherservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WeatherService_t {
    QByteArrayData data[25];
    char stringdata[343];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WeatherService_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WeatherService_t qt_meta_stringdata_WeatherService = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 12),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 14),
QT_MOC_LITERAL(4, 44, 5),
QT_MOC_LITERAL(5, 50, 16),
QT_MOC_LITERAL(6, 67, 17),
QT_MOC_LITERAL(7, 85, 18),
QT_MOC_LITERAL(8, 104, 25),
QT_MOC_LITERAL(9, 130, 16),
QT_MOC_LITERAL(10, 147, 20),
QT_MOC_LITERAL(11, 168, 21),
QT_MOC_LITERAL(12, 190, 11),
QT_MOC_LITERAL(13, 202, 6),
QT_MOC_LITERAL(14, 209, 15),
QT_MOC_LITERAL(15, 225, 16),
QT_MOC_LITERAL(16, 242, 10),
QT_MOC_LITERAL(17, 253, 14),
QT_MOC_LITERAL(18, 268, 4),
QT_MOC_LITERAL(19, 273, 3),
QT_MOC_LITERAL(20, 277, 3),
QT_MOC_LITERAL(21, 281, 12),
QT_MOC_LITERAL(22, 294, 13),
QT_MOC_LITERAL(23, 308, 16),
QT_MOC_LITERAL(24, 325, 17)
    },
    "WeatherService\0showcurrTemp\0\0"
    "QNetworkReply*\0reply\0showcurrPressure\0"
    "showcurrCondition\0showsearchCityName\0"
    "showsearchCityCoordinates\0showforecastTemp\0"
    "showforecastPressure\0showforecastCondition\0"
    "currentTemp\0cityId\0currentPressure\0"
    "currentCondition\0searchCity\0QList<QString>\0"
    "name\0lon\0lat\0forecastTemp\0QList<double>\0"
    "forecastPressure\0forecastCondition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WeatherService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x0a /* Public */,
       5,    1,   97,    2, 0x0a /* Public */,
       6,    1,  100,    2, 0x0a /* Public */,
       7,    1,  103,    2, 0x0a /* Public */,
       8,    1,  106,    2, 0x0a /* Public */,
       9,    1,  109,    2, 0x0a /* Public */,
      10,    1,  112,    2, 0x0a /* Public */,
      11,    1,  115,    2, 0x0a /* Public */,
      12,    1,  118,    2, 0x0a /* Public */,
      14,    1,  121,    2, 0x0a /* Public */,
      15,    1,  124,    2, 0x0a /* Public */,
      16,    1,  127,    2, 0x0a /* Public */,
      16,    2,  130,    2, 0x0a /* Public */,
      21,    1,  135,    2, 0x0a /* Public */,
      23,    1,  138,    2, 0x0a /* Public */,
      24,    1,  141,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Double, QMetaType::Int,   13,
    QMetaType::Double, QMetaType::Int,   13,
    QMetaType::QString, QMetaType::Int,   13,
    0x80000000 | 17, QMetaType::QString,   18,
    0x80000000 | 17, QMetaType::Double, QMetaType::Double,   19,   20,
    0x80000000 | 22, QMetaType::Int,   13,
    0x80000000 | 22, QMetaType::Int,   13,
    0x80000000 | 17, QMetaType::Int,   13,

       0        // eod
};

void WeatherService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WeatherService *_t = static_cast<WeatherService *>(_o);
        switch (_id) {
        case 0: _t->showcurrTemp((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: _t->showcurrPressure((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->showcurrCondition((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->showsearchCityName((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->showsearchCityCoordinates((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->showforecastTemp((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->showforecastPressure((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->showforecastCondition((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: { double _r = _t->currentTemp((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 9: { double _r = _t->currentPressure((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->currentCondition((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QList<QString> _r = _t->searchCity((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = _r; }  break;
        case 12: { QList<QString> _r = _t->searchCity((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = _r; }  break;
        case 13: { QList<double> _r = _t->forecastTemp((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<double>*>(_a[0]) = _r; }  break;
        case 14: { QList<double> _r = _t->forecastPressure((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<double>*>(_a[0]) = _r; }  break;
        case 15: { QList<QString> _r = _t->forecastCondition((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject WeatherService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WeatherService.data,
      qt_meta_data_WeatherService,  qt_static_metacall, 0, 0}
};


const QMetaObject *WeatherService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WeatherService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WeatherService.stringdata))
        return static_cast<void*>(const_cast< WeatherService*>(this));
    return QObject::qt_metacast(_clname);
}

int WeatherService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
