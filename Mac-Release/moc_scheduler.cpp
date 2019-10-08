/****************************************************************************
** Meta object code from reading C++ file 'scheduler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../OSsimulator-master/scheduler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scheduler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scheduler_t {
    QByteArrayData data[23];
    char stringdata0[339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scheduler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scheduler_t qt_meta_stringdata_Scheduler = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Scheduler"
QT_MOC_LITERAL(1, 10, 20), // "NewQueueValueChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "message"
QT_MOC_LITERAL(4, 40, 4), // "PCB*"
QT_MOC_LITERAL(5, 45, 4), // "aPCB"
QT_MOC_LITERAL(6, 50, 27), // "sendFromNewToReadyQueueTail"
QT_MOC_LITERAL(7, 78, 20), // "rotateRunningToReady"
QT_MOC_LITERAL(8, 99, 24), // "WaitingQueueValueChanged"
QT_MOC_LITERAL(9, 124, 27), // "TerminatedQueueValueChanged"
QT_MOC_LITERAL(10, 152, 13), // "MemoryChanged"
QT_MOC_LITERAL(11, 166, 8), // "newValue"
QT_MOC_LITERAL(12, 175, 15), // "SetPCvalueLabel"
QT_MOC_LITERAL(13, 191, 7), // "PCvalue"
QT_MOC_LITERAL(14, 199, 21), // "SetBurtTimeValueLabel"
QT_MOC_LITERAL(15, 221, 5), // "Burst"
QT_MOC_LITERAL(16, 227, 12), // "upDateOutput"
QT_MOC_LITERAL(17, 240, 6), // "output"
QT_MOC_LITERAL(18, 247, 11), // "setCritical"
QT_MOC_LITERAL(19, 259, 7), // "citical"
QT_MOC_LITERAL(20, 267, 31), // "sendFromReadyToWaitingQueueTail"
QT_MOC_LITERAL(21, 299, 27), // "sendFromWaitingtoReadyQueue"
QT_MOC_LITERAL(22, 327, 11) // "OnClockTick"

    },
    "Scheduler\0NewQueueValueChanged\0\0message\0"
    "PCB*\0aPCB\0sendFromNewToReadyQueueTail\0"
    "rotateRunningToReady\0WaitingQueueValueChanged\0"
    "TerminatedQueueValueChanged\0MemoryChanged\0"
    "newValue\0SetPCvalueLabel\0PCvalue\0"
    "SetBurtTimeValueLabel\0Burst\0upDateOutput\0"
    "output\0setCritical\0citical\0"
    "sendFromReadyToWaitingQueueTail\0"
    "sendFromWaitingtoReadyQueue\0OnClockTick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scheduler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       6,    2,   84,    2, 0x06 /* Public */,
       7,    0,   89,    2, 0x06 /* Public */,
       8,    2,   90,    2, 0x06 /* Public */,
       9,    2,   95,    2, 0x06 /* Public */,
      10,    1,  100,    2, 0x06 /* Public */,
      12,    1,  103,    2, 0x06 /* Public */,
      14,    1,  106,    2, 0x06 /* Public */,
      16,    1,  109,    2, 0x06 /* Public */,
      18,    1,  112,    2, 0x06 /* Public */,
      20,    2,  115,    2, 0x06 /* Public */,
      21,    2,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    0,  125,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Scheduler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Scheduler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NewQueueValueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< PCB*(*)>(_a[2]))); break;
        case 1: _t->sendFromNewToReadyQueueTail((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< PCB*(*)>(_a[2]))); break;
        case 2: _t->rotateRunningToReady(); break;
        case 3: _t->WaitingQueueValueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< PCB*(*)>(_a[2]))); break;
        case 4: _t->TerminatedQueueValueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< PCB*(*)>(_a[2]))); break;
        case 5: _t->MemoryChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->SetPCvalueLabel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->SetBurtTimeValueLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->upDateOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setCritical((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->sendFromReadyToWaitingQueueTail((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< PCB*(*)>(_a[2]))); break;
        case 11: _t->sendFromWaitingtoReadyQueue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< PCB*(*)>(_a[2]))); break;
        case 12: _t->OnClockTick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PCB* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PCB* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PCB* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PCB* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PCB* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PCB* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Scheduler::*)(QString , PCB * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scheduler::NewQueueValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Scheduler::*)(QString , PCB * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scheduler::sendFromNewToReadyQueueTail)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Scheduler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scheduler::rotateRunningToReady)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Scheduler::*)(QString , PCB * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scheduler::WaitingQueueValueChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Scheduler::*)(QString , PCB * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scheduler::TerminatedQueueValueChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Scheduler::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scheduler::MemoryChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Scheduler::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scheduler::SetPCvalueLabel)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Scheduler::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scheduler::SetBurtTimeValueLabel)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Scheduler::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scheduler::upDateOutput)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Scheduler::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scheduler::setCritical)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Scheduler::*)(QString , PCB * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scheduler::sendFromReadyToWaitingQueueTail)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Scheduler::*)(QString , PCB * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scheduler::sendFromWaitingtoReadyQueue)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Scheduler::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Scheduler.data,
    qt_meta_data_Scheduler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Scheduler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scheduler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scheduler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Scheduler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Scheduler::NewQueueValueChanged(QString _t1, PCB * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Scheduler::sendFromNewToReadyQueueTail(QString _t1, PCB * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Scheduler::rotateRunningToReady()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Scheduler::WaitingQueueValueChanged(QString _t1, PCB * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Scheduler::TerminatedQueueValueChanged(QString _t1, PCB * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Scheduler::MemoryChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Scheduler::SetPCvalueLabel(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Scheduler::SetBurtTimeValueLabel(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Scheduler::upDateOutput(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Scheduler::setCritical(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Scheduler::sendFromReadyToWaitingQueueTail(QString _t1, PCB * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Scheduler::sendFromWaitingtoReadyQueue(QString _t1, PCB * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
