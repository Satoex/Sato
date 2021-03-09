/****************************************************************************
** Meta object code from reading C++ file 'restrictedassignqualifier.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/restrictedassignqualifier.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'restrictedassignqualifier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AssignQualifier_t {
    QByteArrayData data[5];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssignQualifier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssignQualifier_t qt_meta_stringdata_AssignQualifier = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AssignQualifier"
QT_MOC_LITERAL(1, 16, 5), // "check"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "dataChanged"
QT_MOC_LITERAL(4, 35, 20) // "changeAddressChanged"

    },
    "AssignQualifier\0check\0\0dataChanged\0"
    "changeAddressChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssignQualifier[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void AssignQualifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AssignQualifier *_t = static_cast<AssignQualifier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->check(); break;
        case 1: _t->dataChanged(); break;
        case 2: _t->changeAddressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AssignQualifier::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AssignQualifier.data,
      qt_meta_data_AssignQualifier,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AssignQualifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssignQualifier::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AssignQualifier.stringdata0))
        return static_cast<void*>(const_cast< AssignQualifier*>(this));
    return QWidget::qt_metacast(_clname);
}

int AssignQualifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
