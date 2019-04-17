/****************************************************************************
** Meta object code from reading C++ file 'calibrate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ohc/calibrate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibrate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CalibWindow_t {
    QByteArrayData data[10];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalibWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalibWindow_t qt_meta_stringdata_CalibWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CalibWindow"
QT_MOC_LITERAL(1, 12, 8), // "calibUID"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 9), // "calibLeft"
QT_MOC_LITERAL(4, 32, 10), // "calibRight"
QT_MOC_LITERAL(5, 43, 13), // "calibStraight"
QT_MOC_LITERAL(6, 57, 9), // "calibSave"
QT_MOC_LITERAL(7, 67, 9), // "calibStop"
QT_MOC_LITERAL(8, 77, 11), // "updateCalib"
QT_MOC_LITERAL(9, 89, 4) // "save"

    },
    "CalibWindow\0calibUID\0\0calibLeft\0"
    "calibRight\0calibStraight\0calibSave\0"
    "calibStop\0updateCalib\0save"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalibWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,
       4,    1,   60,    2, 0x06 /* Public */,
       5,    1,   63,    2, 0x06 /* Public */,
       6,    0,   66,    2, 0x06 /* Public */,
       7,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   68,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void CalibWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CalibWindow *_t = static_cast<CalibWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->calibUID((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->calibLeft((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->calibRight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->calibStraight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->calibSave(); break;
        case 5: _t->calibStop(); break;
        case 6: _t->updateCalib((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->save(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CalibWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalibWindow::calibUID)) {
                *result = 0;
            }
        }
        {
            typedef void (CalibWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalibWindow::calibLeft)) {
                *result = 1;
            }
        }
        {
            typedef void (CalibWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalibWindow::calibRight)) {
                *result = 2;
            }
        }
        {
            typedef void (CalibWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalibWindow::calibStraight)) {
                *result = 3;
            }
        }
        {
            typedef void (CalibWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalibWindow::calibSave)) {
                *result = 4;
            }
        }
        {
            typedef void (CalibWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalibWindow::calibStop)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject CalibWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CalibWindow.data,
      qt_meta_data_CalibWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CalibWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalibWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CalibWindow.stringdata0))
        return static_cast<void*>(const_cast< CalibWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int CalibWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void CalibWindow::calibUID(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CalibWindow::calibLeft(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CalibWindow::calibRight(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CalibWindow::calibStraight(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CalibWindow::calibSave()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void CalibWindow::calibStop()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
