/****************************************************************************
** Meta object code from reading C++ file 'threadforplctcpserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../threadforplctcpserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'threadforplctcpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThreadForPLCTcpServer_t {
    QByteArrayData data[8];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadForPLCTcpServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadForPLCTcpServer_t qt_meta_stringdata_ThreadForPLCTcpServer = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ThreadForPLCTcpServer"
QT_MOC_LITERAL(1, 22, 19), // "SignalReturnMessage"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4), // "Type"
QT_MOC_LITERAL(4, 48, 10), // "strMessage"
QT_MOC_LITERAL(5, 59, 19), // "SignalGetReadFormat"
QT_MOC_LITERAL(6, 79, 8), // "QString&"
QT_MOC_LITERAL(7, 88, 3) // "str"

    },
    "ThreadForPLCTcpServer\0SignalReturnMessage\0"
    "\0Type\0strMessage\0SignalGetReadFormat\0"
    "QString&\0str"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadForPLCTcpServer[] = {

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
       1,    2,   24,    2, 0x06 /* Public */,
       5,    1,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void ThreadForPLCTcpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ThreadForPLCTcpServer *_t = static_cast<ThreadForPLCTcpServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalReturnMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->SignalGetReadFormat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ThreadForPLCTcpServer::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ThreadForPLCTcpServer::SignalReturnMessage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ThreadForPLCTcpServer::*_t)(QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ThreadForPLCTcpServer::SignalGetReadFormat)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ThreadForPLCTcpServer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ThreadForPLCTcpServer.data,
      qt_meta_data_ThreadForPLCTcpServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ThreadForPLCTcpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadForPLCTcpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadForPLCTcpServer.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ThreadForPLCTcpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ThreadForPLCTcpServer::SignalReturnMessage(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ThreadForPLCTcpServer::SignalGetReadFormat(QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
