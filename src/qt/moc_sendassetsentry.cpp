/****************************************************************************
** Meta object code from reading C++ file 'sendassetsentry.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/sendassetsentry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendassetsentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SendAssetsEntry_t {
    QByteArrayData data[16];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendAssetsEntry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendAssetsEntry_t qt_meta_stringdata_SendAssetsEntry = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SendAssetsEntry"
QT_MOC_LITERAL(1, 16, 11), // "removeEntry"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "SendAssetsEntry*"
QT_MOC_LITERAL(4, 46, 5), // "entry"
QT_MOC_LITERAL(5, 52, 16), // "payAmountChanged"
QT_MOC_LITERAL(6, 69, 28), // "subtractFeeFromAmountChanged"
QT_MOC_LITERAL(7, 98, 5), // "clear"
QT_MOC_LITERAL(8, 104, 13), // "deleteClicked"
QT_MOC_LITERAL(9, 118, 20), // "on_payTo_textChanged"
QT_MOC_LITERAL(10, 139, 7), // "address"
QT_MOC_LITERAL(11, 147, 28), // "on_addressBookButton_clicked"
QT_MOC_LITERAL(12, 176, 22), // "on_pasteButton_clicked"
QT_MOC_LITERAL(13, 199, 15), // "onAssetSelected"
QT_MOC_LITERAL(14, 215, 5), // "index"
QT_MOC_LITERAL(15, 221, 22) // "onSendOwnershipChanged"

    },
    "SendAssetsEntry\0removeEntry\0\0"
    "SendAssetsEntry*\0entry\0payAmountChanged\0"
    "subtractFeeFromAmountChanged\0clear\0"
    "deleteClicked\0on_payTo_textChanged\0"
    "address\0on_addressBookButton_clicked\0"
    "on_pasteButton_clicked\0onAssetSelected\0"
    "index\0onSendOwnershipChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendAssetsEntry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    1,   71,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    1,   76,    2, 0x08 /* Private */,
      15,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,

       0        // eod
};

void SendAssetsEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendAssetsEntry *_t = static_cast<SendAssetsEntry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeEntry((*reinterpret_cast< SendAssetsEntry*(*)>(_a[1]))); break;
        case 1: _t->payAmountChanged(); break;
        case 2: _t->subtractFeeFromAmountChanged(); break;
        case 3: _t->clear(); break;
        case 4: _t->deleteClicked(); break;
        case 5: _t->on_payTo_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_addressBookButton_clicked(); break;
        case 7: _t->on_pasteButton_clicked(); break;
        case 8: _t->onAssetSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onSendOwnershipChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SendAssetsEntry* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SendAssetsEntry::*_t)(SendAssetsEntry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendAssetsEntry::removeEntry)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SendAssetsEntry::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendAssetsEntry::payAmountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SendAssetsEntry::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendAssetsEntry::subtractFeeFromAmountChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SendAssetsEntry::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_SendAssetsEntry.data,
      qt_meta_data_SendAssetsEntry,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SendAssetsEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendAssetsEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SendAssetsEntry.stringdata0))
        return static_cast<void*>(const_cast< SendAssetsEntry*>(this));
    return QStackedWidget::qt_metacast(_clname);
}

int SendAssetsEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void SendAssetsEntry::removeEntry(SendAssetsEntry * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SendAssetsEntry::payAmountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SendAssetsEntry::subtractFeeFromAmountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
