/****************************************************************************
** Meta object code from reading C++ file 'kilobottracker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "kilobottracker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kilobottracker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KilobotTracker_t {
    QByteArrayData data[67];
    char stringdata0[886];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KilobotTracker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KilobotTracker_t qt_meta_stringdata_KilobotTracker = {
    {
QT_MOC_LITERAL(0, 0, 14), // "KilobotTracker"
QT_MOC_LITERAL(1, 15, 12), // "errorMessage"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "setStitchedImage"
QT_MOC_LITERAL(4, 46, 12), // "identifyKilo"
QT_MOC_LITERAL(5, 59, 7), // "uint8_t"
QT_MOC_LITERAL(6, 67, 16), // "broadcastMessage"
QT_MOC_LITERAL(7, 84, 17), // "kilobot_broadcast"
QT_MOC_LITERAL(8, 102, 15), // "startExperiment"
QT_MOC_LITERAL(9, 118, 14), // "stopExperiment"
QT_MOC_LITERAL(10, 133, 15), // "toggleExpButton"
QT_MOC_LITERAL(11, 149, 18), // "activateExpButtons"
QT_MOC_LITERAL(12, 168, 28), // "setRuntimeIdentificationLock"
QT_MOC_LITERAL(13, 197, 13), // "LOOPstartstop"
QT_MOC_LITERAL(14, 211, 5), // "stage"
QT_MOC_LITERAL(15, 217, 11), // "LOOPiterate"
QT_MOC_LITERAL(16, 229, 20), // "SETUPloadCalibration"
QT_MOC_LITERAL(17, 250, 17), // "SETUPfindKilobots"
QT_MOC_LITERAL(18, 268, 16), // "identifyKilobots"
QT_MOC_LITERAL(19, 285, 16), // "SETUPsetCamOrder"
QT_MOC_LITERAL(20, 302, 10), // "drawCircle"
QT_MOC_LITERAL(21, 313, 3), // "pos"
QT_MOC_LITERAL(22, 317, 1), // "r"
QT_MOC_LITERAL(23, 319, 3), // "col"
QT_MOC_LITERAL(24, 323, 9), // "thickness"
QT_MOC_LITERAL(25, 333, 11), // "std::string"
QT_MOC_LITERAL(26, 345, 4), // "text"
QT_MOC_LITERAL(27, 350, 11), // "transparent"
QT_MOC_LITERAL(28, 362, 8), // "drawLine"
QT_MOC_LITERAL(29, 371, 22), // "std::vector<cv::Point>"
QT_MOC_LITERAL(30, 394, 13), // "clearDrawings"
QT_MOC_LITERAL(31, 408, 25), // "drawCircleOnRecordedImage"
QT_MOC_LITERAL(32, 434, 28), // "clearDrawingsOnRecordedImage"
QT_MOC_LITERAL(33, 463, 9), // "saveImage"
QT_MOC_LITERAL(34, 473, 4), // "file"
QT_MOC_LITERAL(35, 478, 15), // "saveVideoFrames"
QT_MOC_LITERAL(36, 494, 11), // "numofframes"
QT_MOC_LITERAL(37, 506, 13), // "setSourceType"
QT_MOC_LITERAL(38, 520, 3), // "val"
QT_MOC_LITERAL(39, 524, 8), // "setKbMin"
QT_MOC_LITERAL(40, 533, 8), // "setKbMax"
QT_MOC_LITERAL(41, 542, 14), // "setCannyThresh"
QT_MOC_LITERAL(42, 557, 11), // "setHoughAcc"
QT_MOC_LITERAL(43, 569, 16), // "setHeightXSlider"
QT_MOC_LITERAL(44, 586, 16), // "setHeightYSlider"
QT_MOC_LITERAL(45, 603, 16), // "manuallyassignID"
QT_MOC_LITERAL(46, 620, 8), // "position"
QT_MOC_LITERAL(47, 629, 11), // "setVideoDir"
QT_MOC_LITERAL(48, 641, 3), // "dir"
QT_MOC_LITERAL(49, 645, 19), // "updateKilobotStates"
QT_MOC_LITERAL(50, 665, 23), // "getInitialKilobotStates"
QT_MOC_LITERAL(51, 689, 15), // "setTrackingType"
QT_MOC_LITERAL(52, 705, 6), // "t_type"
QT_MOC_LITERAL(53, 712, 7), // "showIds"
QT_MOC_LITERAL(54, 720, 6), // "toggle"
QT_MOC_LITERAL(55, 727, 9), // "detectred"
QT_MOC_LITERAL(56, 737, 11), // "detectgreen"
QT_MOC_LITERAL(57, 749, 10), // "detectblue"
QT_MOC_LITERAL(58, 760, 18), // "manualIDassignment"
QT_MOC_LITERAL(59, 779, 27), // "enableRuntimeIdentification"
QT_MOC_LITERAL(60, 807, 10), // "maxIDtoTry"
QT_MOC_LITERAL(61, 818, 8), // "maxIdStr"
QT_MOC_LITERAL(62, 827, 11), // "setManualID"
QT_MOC_LITERAL(63, 839, 5), // "manID"
QT_MOC_LITERAL(64, 845, 12), // "setFlipangle"
QT_MOC_LITERAL(65, 858, 5), // "angle"
QT_MOC_LITERAL(66, 864, 21) // "RefreshDisplayedImage"

    },
    "KilobotTracker\0errorMessage\0\0"
    "setStitchedImage\0identifyKilo\0uint8_t\0"
    "broadcastMessage\0kilobot_broadcast\0"
    "startExperiment\0stopExperiment\0"
    "toggleExpButton\0activateExpButtons\0"
    "setRuntimeIdentificationLock\0LOOPstartstop\0"
    "stage\0LOOPiterate\0SETUPloadCalibration\0"
    "SETUPfindKilobots\0identifyKilobots\0"
    "SETUPsetCamOrder\0drawCircle\0pos\0r\0col\0"
    "thickness\0std::string\0text\0transparent\0"
    "drawLine\0std::vector<cv::Point>\0"
    "clearDrawings\0drawCircleOnRecordedImage\0"
    "clearDrawingsOnRecordedImage\0saveImage\0"
    "file\0saveVideoFrames\0numofframes\0"
    "setSourceType\0val\0setKbMin\0setKbMax\0"
    "setCannyThresh\0setHoughAcc\0setHeightXSlider\0"
    "setHeightYSlider\0manuallyassignID\0"
    "position\0setVideoDir\0dir\0updateKilobotStates\0"
    "getInitialKilobotStates\0setTrackingType\0"
    "t_type\0showIds\0toggle\0detectred\0"
    "detectgreen\0detectblue\0manualIDassignment\0"
    "enableRuntimeIdentification\0maxIDtoTry\0"
    "maxIdStr\0setManualID\0manID\0setFlipangle\0"
    "angle\0RefreshDisplayedImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KilobotTracker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  274,    2, 0x06 /* Public */,
       3,    1,  277,    2, 0x06 /* Public */,
       4,    1,  280,    2, 0x06 /* Public */,
       6,    1,  283,    2, 0x06 /* Public */,
       8,    1,  286,    2, 0x06 /* Public */,
       9,    0,  289,    2, 0x06 /* Public */,
      10,    1,  290,    2, 0x06 /* Public */,
      11,    1,  293,    2, 0x06 /* Public */,
      12,    1,  296,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  299,    2, 0x0a /* Public */,
      15,    0,  302,    2, 0x0a /* Public */,
      16,    0,  303,    2, 0x0a /* Public */,
      17,    0,  304,    2, 0x0a /* Public */,
      18,    0,  305,    2, 0x0a /* Public */,
      19,    0,  306,    2, 0x0a /* Public */,
      20,    6,  307,    2, 0x0a /* Public */,
      20,    5,  320,    2, 0x2a /* Public | MethodCloned */,
      20,    4,  331,    2, 0x2a /* Public | MethodCloned */,
      20,    3,  340,    2, 0x2a /* Public | MethodCloned */,
      28,    5,  347,    2, 0x0a /* Public */,
      28,    4,  358,    2, 0x2a /* Public | MethodCloned */,
      28,    3,  367,    2, 0x2a /* Public | MethodCloned */,
      28,    2,  374,    2, 0x2a /* Public | MethodCloned */,
      30,    0,  379,    2, 0x0a /* Public */,
      31,    5,  380,    2, 0x0a /* Public */,
      31,    4,  391,    2, 0x2a /* Public | MethodCloned */,
      31,    3,  400,    2, 0x2a /* Public | MethodCloned */,
      32,    0,  407,    2, 0x0a /* Public */,
      33,    1,  408,    2, 0x0a /* Public */,
      35,    2,  411,    2, 0x0a /* Public */,
      37,    1,  416,    2, 0x0a /* Public */,
      39,    1,  419,    2, 0x0a /* Public */,
      40,    1,  422,    2, 0x0a /* Public */,
      41,    1,  425,    2, 0x0a /* Public */,
      42,    1,  428,    2, 0x0a /* Public */,
      43,    1,  431,    2, 0x0a /* Public */,
      44,    1,  434,    2, 0x0a /* Public */,
      45,    1,  437,    2, 0x0a /* Public */,
      47,    1,  440,    2, 0x0a /* Public */,
      49,    0,  443,    2, 0x0a /* Public */,
      50,    0,  444,    2, 0x0a /* Public */,
      51,    1,  445,    2, 0x0a /* Public */,
      53,    1,  448,    2, 0x0a /* Public */,
      55,    1,  451,    2, 0x0a /* Public */,
      56,    1,  454,    2, 0x0a /* Public */,
      57,    1,  457,    2, 0x0a /* Public */,
      58,    1,  460,    2, 0x0a /* Public */,
      59,    1,  463,    2, 0x0a /* Public */,
      60,    1,  466,    2, 0x0a /* Public */,
      62,    1,  469,    2, 0x0a /* Public */,
      64,    1,  472,    2, 0x0a /* Public */,
      66,    0,  475,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Float, QMetaType::QColor, QMetaType::Int, 0x80000000 | 25, QMetaType::Bool,   21,   22,   23,   24,   26,   27,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Float, QMetaType::QColor, QMetaType::Int, 0x80000000 | 25,   21,   22,   23,   24,   26,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Float, QMetaType::QColor, QMetaType::Int,   21,   22,   23,   24,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Float, QMetaType::QColor,   21,   22,   23,
    QMetaType::Void, 0x80000000 | 29, QMetaType::QColor, QMetaType::Int, 0x80000000 | 25, QMetaType::Bool,   21,   23,   24,   26,   27,
    QMetaType::Void, 0x80000000 | 29, QMetaType::QColor, QMetaType::Int, 0x80000000 | 25,   21,   23,   24,   26,
    QMetaType::Void, 0x80000000 | 29, QMetaType::QColor, QMetaType::Int,   21,   23,   24,
    QMetaType::Void, 0x80000000 | 29, QMetaType::QColor,   21,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Float, QMetaType::QColor, QMetaType::Int, 0x80000000 | 25,   21,   22,   23,   24,   26,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Float, QMetaType::QColor, QMetaType::Int,   21,   22,   23,   24,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Float, QMetaType::QColor,   21,   22,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt,   34,   36,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void, QMetaType::QPoint,   46,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   52,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Void, QMetaType::QString,   63,
    QMetaType::Void, QMetaType::Double,   65,
    QMetaType::Void,

       0        // eod
};

void KilobotTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KilobotTracker *_t = static_cast<KilobotTracker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setStitchedImage((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 2: _t->identifyKilo((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 3: _t->broadcastMessage((*reinterpret_cast< kilobot_broadcast(*)>(_a[1]))); break;
        case 4: _t->startExperiment((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->stopExperiment(); break;
        case 6: _t->toggleExpButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->activateExpButtons((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setRuntimeIdentificationLock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->LOOPstartstop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->LOOPiterate(); break;
        case 11: _t->SETUPloadCalibration(); break;
        case 12: _t->SETUPfindKilobots(); break;
        case 13: _t->identifyKilobots(); break;
        case 14: _t->SETUPsetCamOrder(); break;
        case 15: _t->drawCircle((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< std::string(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 16: _t->drawCircle((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< std::string(*)>(_a[5]))); break;
        case 17: _t->drawCircle((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 18: _t->drawCircle((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3]))); break;
        case 19: _t->drawLine((*reinterpret_cast< std::vector<cv::Point>(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< std::string(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 20: _t->drawLine((*reinterpret_cast< std::vector<cv::Point>(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< std::string(*)>(_a[4]))); break;
        case 21: _t->drawLine((*reinterpret_cast< std::vector<cv::Point>(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 22: _t->drawLine((*reinterpret_cast< std::vector<cv::Point>(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 23: _t->clearDrawings(); break;
        case 24: _t->drawCircleOnRecordedImage((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< std::string(*)>(_a[5]))); break;
        case 25: _t->drawCircleOnRecordedImage((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 26: _t->drawCircleOnRecordedImage((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3]))); break;
        case 27: _t->clearDrawingsOnRecordedImage(); break;
        case 28: _t->saveImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->saveVideoFrames((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 30: _t->setSourceType((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->setKbMin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->setKbMax((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->setCannyThresh((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->setHoughAcc((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->setHeightXSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->setHeightYSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->manuallyassignID((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 38: _t->setVideoDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 39: _t->updateKilobotStates(); break;
        case 40: _t->getInitialKilobotStates(); break;
        case 41: _t->setTrackingType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->showIds((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->detectred((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->detectgreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->detectblue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->manualIDassignment((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->enableRuntimeIdentification((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->maxIDtoTry((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 49: _t->setManualID((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 50: _t->setFlipangle((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 51: _t->RefreshDisplayedImage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KilobotTracker::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KilobotTracker::errorMessage)) {
                *result = 0;
            }
        }
        {
            typedef void (KilobotTracker::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KilobotTracker::setStitchedImage)) {
                *result = 1;
            }
        }
        {
            typedef void (KilobotTracker::*_t)(uint8_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KilobotTracker::identifyKilo)) {
                *result = 2;
            }
        }
        {
            typedef void (KilobotTracker::*_t)(kilobot_broadcast );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KilobotTracker::broadcastMessage)) {
                *result = 3;
            }
        }
        {
            typedef void (KilobotTracker::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KilobotTracker::startExperiment)) {
                *result = 4;
            }
        }
        {
            typedef void (KilobotTracker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KilobotTracker::stopExperiment)) {
                *result = 5;
            }
        }
        {
            typedef void (KilobotTracker::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KilobotTracker::toggleExpButton)) {
                *result = 6;
            }
        }
        {
            typedef void (KilobotTracker::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KilobotTracker::activateExpButtons)) {
                *result = 7;
            }
        }
        {
            typedef void (KilobotTracker::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KilobotTracker::setRuntimeIdentificationLock)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject KilobotTracker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KilobotTracker.data,
      qt_meta_data_KilobotTracker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KilobotTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KilobotTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KilobotTracker.stringdata0))
        return static_cast<void*>(const_cast< KilobotTracker*>(this));
    return QObject::qt_metacast(_clname);
}

int KilobotTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 52)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 52;
    }
    return _id;
}

// SIGNAL 0
void KilobotTracker::errorMessage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KilobotTracker::setStitchedImage(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KilobotTracker::identifyKilo(uint8_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KilobotTracker::broadcastMessage(kilobot_broadcast _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KilobotTracker::startExperiment(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KilobotTracker::stopExperiment()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void KilobotTracker::toggleExpButton(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void KilobotTracker::activateExpButtons(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void KilobotTracker::setRuntimeIdentificationLock(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
