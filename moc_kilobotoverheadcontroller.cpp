/****************************************************************************
** Meta object code from reading C++ file 'kilobotoverheadcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "kilobotoverheadcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kilobotoverheadcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KilobotOverheadController_t {
    QByteArrayData data[22];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KilobotOverheadController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KilobotOverheadController_t qt_meta_stringdata_KilobotOverheadController = {
    {
QT_MOC_LITERAL(0, 0, 25), // "KilobotOverheadController"
QT_MOC_LITERAL(1, 26, 12), // "errorMessage"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 13), // "setStopButton"
QT_MOC_LITERAL(4, 54, 15), // "identifyKilobot"
QT_MOC_LITERAL(5, 70, 7), // "uint8_t"
QT_MOC_LITERAL(6, 78, 2), // "id"
QT_MOC_LITERAL(7, 81, 16), // "broadcastMessage"
QT_MOC_LITERAL(8, 98, 17), // "kilobot_broadcast"
QT_MOC_LITERAL(9, 116, 13), // "signalKilobot"
QT_MOC_LITERAL(10, 130, 15), // "kilobot_message"
QT_MOC_LITERAL(11, 146, 18), // "serialUpdateStatus"
QT_MOC_LITERAL(12, 165, 9), // "showError"
QT_MOC_LITERAL(13, 175, 16), // "toggleConnection"
QT_MOC_LITERAL(14, 192, 13), // "resetKilobots"
QT_MOC_LITERAL(15, 206, 13), // "sleepKilobots"
QT_MOC_LITERAL(16, 220, 11), // "runKilobots"
QT_MOC_LITERAL(17, 232, 11), // "stopSending"
QT_MOC_LITERAL(18, 244, 12), // "checkVoltage"
QT_MOC_LITERAL(19, 257, 17), // "chooseProgramFile"
QT_MOC_LITERAL(20, 275, 13), // "uploadProgram"
QT_MOC_LITERAL(21, 289, 9) // "sendBatch"

    },
    "KilobotOverheadController\0errorMessage\0"
    "\0setStopButton\0identifyKilobot\0uint8_t\0"
    "id\0broadcastMessage\0kilobot_broadcast\0"
    "signalKilobot\0kilobot_message\0"
    "serialUpdateStatus\0showError\0"
    "toggleConnection\0resetKilobots\0"
    "sleepKilobots\0runKilobots\0stopSending\0"
    "checkVoltage\0chooseProgramFile\0"
    "uploadProgram\0sendBatch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KilobotOverheadController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       3,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  100,    2, 0x0a /* Public */,
       7,    1,  103,    2, 0x0a /* Public */,
       9,    1,  106,    2, 0x0a /* Public */,
      11,    1,  109,    2, 0x0a /* Public */,
      12,    1,  112,    2, 0x0a /* Public */,
      13,    0,  115,    2, 0x0a /* Public */,
      14,    0,  116,    2, 0x0a /* Public */,
      15,    0,  117,    2, 0x0a /* Public */,
      16,    0,  118,    2, 0x0a /* Public */,
      17,    0,  119,    2, 0x0a /* Public */,
      18,    0,  120,    2, 0x0a /* Public */,
      19,    0,  121,    2, 0x0a /* Public */,
      20,    0,  122,    2, 0x0a /* Public */,
      21,    0,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KilobotOverheadController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KilobotOverheadController *_t = static_cast<KilobotOverheadController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setStopButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->identifyKilobot((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 3: _t->broadcastMessage((*reinterpret_cast< kilobot_broadcast(*)>(_a[1]))); break;
        case 4: _t->signalKilobot((*reinterpret_cast< kilobot_message(*)>(_a[1]))); break;
        case 5: _t->serialUpdateStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->showError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->toggleConnection(); break;
        case 8: _t->resetKilobots(); break;
        case 9: _t->sleepKilobots(); break;
        case 10: _t->runKilobots(); break;
        case 11: _t->stopSending(); break;
        case 12: _t->checkVoltage(); break;
        case 13: _t->chooseProgramFile(); break;
        case 14: _t->uploadProgram(); break;
        case 15: _t->sendBatch(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KilobotOverheadController::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KilobotOverheadController::errorMessage)) {
                *result = 0;
            }
        }
        {
            typedef void (KilobotOverheadController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KilobotOverheadController::setStopButton)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject KilobotOverheadController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KilobotOverheadController.data,
      qt_meta_data_KilobotOverheadController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KilobotOverheadController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KilobotOverheadController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KilobotOverheadController.stringdata0))
        return static_cast<void*>(const_cast< KilobotOverheadController*>(this));
    return QObject::qt_metacast(_clname);
}

int KilobotOverheadController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void KilobotOverheadController::errorMessage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KilobotOverheadController::setStopButton(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
