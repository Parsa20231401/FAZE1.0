/****************************************************************************
** Meta object code from reading C++ file 'chatpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../entername4/chatpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_chatpage_t {
    QByteArrayData data[19];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_chatpage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_chatpage_t qt_meta_stringdata_chatpage = {
    {
QT_MOC_LITERAL(0, 0, 8), // "chatpage"
QT_MOC_LITERAL(1, 9, 10), // "newMessage"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "newConnection"
QT_MOC_LITERAL(4, 35, 18), // "appendToSocketList"
QT_MOC_LITERAL(5, 54, 11), // "QTcpSocket*"
QT_MOC_LITERAL(6, 66, 6), // "socket"
QT_MOC_LITERAL(7, 73, 10), // "readSocket"
QT_MOC_LITERAL(8, 84, 13), // "discardSocket"
QT_MOC_LITERAL(9, 98, 12), // "displayError"
QT_MOC_LITERAL(10, 111, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(11, 140, 11), // "socketError"
QT_MOC_LITERAL(12, 152, 14), // "displayMessage"
QT_MOC_LITERAL(13, 167, 3), // "str"
QT_MOC_LITERAL(14, 171, 11), // "sendMessage"
QT_MOC_LITERAL(15, 183, 14), // "sendAttachment"
QT_MOC_LITERAL(16, 198, 8), // "filePath"
QT_MOC_LITERAL(17, 207, 15), // "refreshComboBox"
QT_MOC_LITERAL(18, 223, 21) // "on_pushButton_clicked"

    },
    "chatpage\0newMessage\0\0newConnection\0"
    "appendToSocketList\0QTcpSocket*\0socket\0"
    "readSocket\0discardSocket\0displayError\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "displayMessage\0str\0sendMessage\0"
    "sendAttachment\0filePath\0refreshComboBox\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_chatpage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   72,    2, 0x08 /* Private */,
       4,    1,   73,    2, 0x08 /* Private */,
       7,    0,   76,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    1,   78,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,
      14,    1,   84,    2, 0x08 /* Private */,
      15,    2,   87,    2, 0x08 /* Private */,
      17,    0,   92,    2, 0x08 /* Private */,
      18,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void chatpage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<chatpage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->newConnection(); break;
        case 2: _t->appendToSocketList((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 3: _t->readSocket(); break;
        case 4: _t->discardSocket(); break;
        case 5: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 6: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->sendMessage((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 8: _t->sendAttachment((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->refreshComboBox(); break;
        case 10: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (chatpage::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&chatpage::newMessage)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject chatpage::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_chatpage.data,
    qt_meta_data_chatpage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *chatpage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *chatpage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_chatpage.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int chatpage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void chatpage::newMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
