/****************************************************************************
** Meta object code from reading C++ file 'restrictedassetsdialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/restrictedassetsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'restrictedassetsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RestrictedAssetsDialog_t {
    QByteArrayData data[16];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RestrictedAssetsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RestrictedAssetsDialog_t qt_meta_stringdata_RestrictedAssetsDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "RestrictedAssetsDialog"
QT_MOC_LITERAL(1, 23, 7), // "message"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "title"
QT_MOC_LITERAL(4, 38, 5), // "style"
QT_MOC_LITERAL(5, 44, 10), // "setBalance"
QT_MOC_LITERAL(6, 55, 7), // "CAmount"
QT_MOC_LITERAL(7, 63, 7), // "balance"
QT_MOC_LITERAL(8, 71, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(9, 90, 15), // "immatureBalance"
QT_MOC_LITERAL(10, 106, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(11, 123, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(12, 142, 20), // "watchImmatureBalance"
QT_MOC_LITERAL(13, 163, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(14, 181, 22), // "assignQualifierClicked"
QT_MOC_LITERAL(15, 204, 20) // "freezeAddressClicked"

    },
    "RestrictedAssetsDialog\0message\0\0title\0"
    "style\0setBalance\0CAmount\0balance\0"
    "unconfirmedBalance\0immatureBalance\0"
    "watchOnlyBalance\0watchUnconfBalance\0"
    "watchImmatureBalance\0updateDisplayUnit\0"
    "assignQualifierClicked\0freezeAddressClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RestrictedAssetsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    6,   46,    2, 0x0a /* Public */,
      13,    0,   59,    2, 0x08 /* Private */,
      14,    0,   60,    2, 0x08 /* Private */,
      15,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    3,    1,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6,    7,    8,    9,   10,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RestrictedAssetsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RestrictedAssetsDialog *_t = static_cast<RestrictedAssetsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->setBalance((*reinterpret_cast< const CAmount(*)>(_a[1])),(*reinterpret_cast< const CAmount(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const CAmount(*)>(_a[4])),(*reinterpret_cast< const CAmount(*)>(_a[5])),(*reinterpret_cast< const CAmount(*)>(_a[6]))); break;
        case 2: _t->updateDisplayUnit(); break;
        case 3: _t->assignQualifierClicked(); break;
        case 4: _t->freezeAddressClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RestrictedAssetsDialog::*_t)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RestrictedAssetsDialog::message)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RestrictedAssetsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RestrictedAssetsDialog.data,
      qt_meta_data_RestrictedAssetsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RestrictedAssetsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RestrictedAssetsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RestrictedAssetsDialog.stringdata0))
        return static_cast<void*>(const_cast< RestrictedAssetsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int RestrictedAssetsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void RestrictedAssetsDialog::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
