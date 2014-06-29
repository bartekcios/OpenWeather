/****************************************************************************
** Meta object code from reading C++ file 'weatherifadaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "weatherifadaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'weatherifadaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WeatherIfAdaptor_t {
    QByteArrayData data[19];
    char stringdata[794];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WeatherIfAdaptor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WeatherIfAdaptor_t qt_meta_stringdata_WeatherIfAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 15),
QT_MOC_LITERAL(2, 33, 15),
QT_MOC_LITERAL(3, 49, 19),
QT_MOC_LITERAL(4, 69, 570),
QT_MOC_LITERAL(5, 590, 11),
QT_MOC_LITERAL(6, 602, 0),
QT_MOC_LITERAL(7, 603, 6),
QT_MOC_LITERAL(8, 610, 15),
QT_MOC_LITERAL(9, 626, 16),
QT_MOC_LITERAL(10, 643, 10),
QT_MOC_LITERAL(11, 654, 14),
QT_MOC_LITERAL(12, 669, 4),
QT_MOC_LITERAL(13, 674, 3),
QT_MOC_LITERAL(14, 678, 3),
QT_MOC_LITERAL(15, 682, 12),
QT_MOC_LITERAL(16, 695, 13),
QT_MOC_LITERAL(17, 709, 16),
QT_MOC_LITERAL(18, 726, 17)
    },
    "WeatherIfAdaptor\0D-Bus Interface\0"
    "foo.bar.weather\0D-Bus Introspection\0"
    "  <interface name=\"foo.bar.weather\">\n    <method name=\"currentTemp"
    "\">\n      <annotation value=\"QVariantMap\" name=\"org.qtproject.QtDB"
    "us.QtTypeName.In1\"/>\n      <arg direction=\"in\" type=\"i\" name=\"c"
    "ityId\"/>\n      <arg direction=\"out\" type=\"d\" name=\"result\"/>\n"
    "    </method>\n    <method name=\"currentPressure\">\n      <annotatio"
    "n value=\"QVariantMap\" name=\"org.qtproject.QtDBus.QtTypeName.In1\"/>"
    "\n      <arg direction=\"in\" type=\"i\" name=\"cityId\"/>\n      <arg"
    " direction=\"out\" type=\"d\" name=\"result\"/>\n    </method>\n  </in"
    "terface>\n\0"
    "currentTemp\0\0cityId\0currentPressure\0"
    "currentCondition\0searchCity\0QList<QString>\0"
    "name\0lon\0lat\0forecastTemp\0QList<double>\0"
    "forecastPressure\0forecastCondition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WeatherIfAdaptor[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       8,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // slots: name, argc, parameters, tag, flags
       5,    1,   58,    6, 0x0a /* Public */,
       8,    1,   61,    6, 0x0a /* Public */,
       9,    1,   64,    6, 0x0a /* Public */,
      10,    1,   67,    6, 0x0a /* Public */,
      10,    2,   70,    6, 0x0a /* Public */,
      15,    1,   75,    6, 0x0a /* Public */,
      17,    1,   78,    6, 0x0a /* Public */,
      18,    1,   81,    6, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Double, QMetaType::Int,    7,
    QMetaType::Double, QMetaType::Int,    7,
    QMetaType::QString, QMetaType::Int,    7,
    0x80000000 | 11, QMetaType::QString,   12,
    0x80000000 | 11, QMetaType::Double, QMetaType::Double,   13,   14,
    0x80000000 | 16, QMetaType::Int,    7,
    0x80000000 | 16, QMetaType::Int,    7,
    0x80000000 | 11, QMetaType::Int,    7,

       0        // eod
};

void WeatherIfAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WeatherIfAdaptor *_t = static_cast<WeatherIfAdaptor *>(_o);
        switch (_id) {
        case 0: { double _r = _t->currentTemp((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 1: { double _r = _t->currentPressure((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 2: { QString _r = _t->currentCondition((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QList<QString> _r = _t->searchCity((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = _r; }  break;
        case 4: { QList<QString> _r = _t->searchCity((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = _r; }  break;
        case 5: { QList<double> _r = _t->forecastTemp((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<double>*>(_a[0]) = _r; }  break;
        case 6: { QList<double> _r = _t->forecastPressure((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<double>*>(_a[0]) = _r; }  break;
        case 7: { QList<QString> _r = _t->forecastCondition((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject WeatherIfAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_WeatherIfAdaptor.data,
      qt_meta_data_WeatherIfAdaptor,  qt_static_metacall, 0, 0}
};


const QMetaObject *WeatherIfAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WeatherIfAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WeatherIfAdaptor.stringdata))
        return static_cast<void*>(const_cast< WeatherIfAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int WeatherIfAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
