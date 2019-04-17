/****************************************************************************
** Meta object code from reading C++ file 'kilobotcalibrate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "kilobotcalibrate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kilobotcalibrate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KilobotCalibrate_t {
    QByteArrayData data[12];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KilobotCalibrate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KilobotCalibrate_t qt_meta_stringdata_KilobotCalibrate = {
    {
QT_MOC_LITERAL(0, 0, 16), // "KilobotCalibrate"
QT_MOC_LITERAL(1, 17, 10), // "initialise"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 3), // "run"
QT_MOC_LITERAL(4, 33, 15), // "drawLineFromEnv"
QT_MOC_LITERAL(5, 49, 22), // "std::vector<cv::Point>"
QT_MOC_LITERAL(6, 72, 3), // "pos"
QT_MOC_LITERAL(7, 76, 3), // "col"
QT_MOC_LITERAL(8, 80, 9), // "thickness"
QT_MOC_LITERAL(9, 90, 11), // "std::string"
QT_MOC_LITERAL(10, 102, 4), // "text"
QT_MOC_LITERAL(11, 107, 11) // "transparent"

    },
    "KilobotCalibrate\0initialise\0\0run\0"
    "drawLineFromEnv\0std::vector<cv::Point>\0"
    "pos\0col\0thickness\0std::string\0text\0"
    "transparent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KilobotCalibrate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       3,    0,   32,    2, 0x0a /* Public */,
       4,    5,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QColor, QMetaType::Int, 0x80000000 | 9, QMetaType::Bool,    6,    7,    8,   10,   11,

       0        // eod
};

void KilobotCalibrate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KilobotCalibrate *_t = static_cast<KilobotCalibrate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initialise((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->run(); break;
        case 2: _t->drawLineFromEnv((*reinterpret_cast< std::vector<cv::Point>(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< std::string(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObject KilobotCalibrate::staticMetaObject = {
    { &KilobotExperiment::staticMetaObject, qt_meta_stringdata_KilobotCalibrate.data,
      qt_meta_data_KilobotCalibrate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KilobotCalibrate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KilobotCalibrate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KilobotCalibrate.stringdata0))
        return static_cast<void*>(const_cast< KilobotCalibrate*>(this));
    return KilobotExperiment::qt_metacast(_clname);
}

int KilobotCalibrate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KilobotExperiment::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
