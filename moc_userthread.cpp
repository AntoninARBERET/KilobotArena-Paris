/****************************************************************************
** Meta object code from reading C++ file 'userthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "userthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UserThread_t {
    QByteArrayData data[13];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserThread_t qt_meta_stringdata_UserThread = {
    {
QT_MOC_LITERAL(0, 0, 10), // "UserThread"
QT_MOC_LITERAL(1, 11, 10), // "setLibName"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "setGUILayout"
QT_MOC_LITERAL(4, 36, 8), // "QWidget*"
QT_MOC_LITERAL(5, 45, 11), // "connectExpt"
QT_MOC_LITERAL(6, 57, 7), // "expType"
QT_MOC_LITERAL(7, 65, 25), // "chooseInternalExperiments"
QT_MOC_LITERAL(8, 91, 14), // "experimentType"
QT_MOC_LITERAL(9, 106, 3), // "opt"
QT_MOC_LITERAL(10, 110, 11), // "loadLibrary"
QT_MOC_LITERAL(11, 122, 8), // "filename"
QT_MOC_LITERAL(12, 131, 10) // "exptLoaded"

    },
    "UserThread\0setLibName\0\0setGUILayout\0"
    "QWidget*\0connectExpt\0expType\0"
    "chooseInternalExperiments\0experimentType\0"
    "opt\0loadLibrary\0filename\0exptLoaded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   55,    2, 0x0a /* Public */,
       7,    2,   58,    2, 0x0a /* Public */,
       7,    1,   63,    2, 0x2a /* Public | MethodCloned */,
      10,    1,   66,    2, 0x0a /* Public */,
      12,    0,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    6,    9,
    QMetaType::Void, 0x80000000 | 8,    6,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Bool,

       0        // eod
};

void UserThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserThread *_t = static_cast<UserThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setLibName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setGUILayout((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->connectExpt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->chooseInternalExperiments((*reinterpret_cast< experimentType(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->chooseInternalExperiments((*reinterpret_cast< experimentType(*)>(_a[1]))); break;
        case 5: _t->loadLibrary((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: { bool _r = _t->exptLoaded();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UserThread::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserThread::setLibName)) {
                *result = 0;
            }
        }
        {
            typedef void (UserThread::*_t)(QWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserThread::setGUILayout)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject UserThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_UserThread.data,
      qt_meta_data_UserThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UserThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UserThread.stringdata0))
        return static_cast<void*>(const_cast< UserThread*>(this));
    return QThread::qt_metacast(_clname);
}

int UserThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void UserThread::setLibName(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UserThread::setGUILayout(QWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
