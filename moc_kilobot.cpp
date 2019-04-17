/****************************************************************************
** Meta object code from reading C++ file 'kilobot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "kilobot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kilobot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Kilobot_t {
    QByteArrayData data[5];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Kilobot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Kilobot_t qt_meta_stringdata_Kilobot = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Kilobot"
QT_MOC_LITERAL(1, 8, 20), // "sendUpdateToHardware"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 22), // "sendUpdateToExperiment"
QT_MOC_LITERAL(4, 53, 8) // "Kilobot*"

    },
    "Kilobot\0sendUpdateToHardware\0\0"
    "sendUpdateToExperiment\0Kilobot*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Kilobot[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       3,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 0,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 0,    2,    2,

       0        // eod
};

void Kilobot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Kilobot *_t = static_cast<Kilobot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendUpdateToHardware((*reinterpret_cast< Kilobot(*)>(_a[1]))); break;
        case 1: _t->sendUpdateToExperiment((*reinterpret_cast< Kilobot*(*)>(_a[1])),(*reinterpret_cast< Kilobot(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Kilobot* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Kilobot::*_t)(Kilobot );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Kilobot::sendUpdateToHardware)) {
                *result = 0;
            }
        }
        {
            typedef void (Kilobot::*_t)(Kilobot * , Kilobot );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Kilobot::sendUpdateToExperiment)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Kilobot::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Kilobot.data,
      qt_meta_data_Kilobot,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Kilobot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Kilobot::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Kilobot.stringdata0))
        return static_cast<void*>(const_cast< Kilobot*>(this));
    return QObject::qt_metacast(_clname);
}

int Kilobot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void Kilobot::sendUpdateToHardware(Kilobot _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Kilobot::sendUpdateToExperiment(Kilobot * _t1, Kilobot _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
