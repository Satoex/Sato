/****************************************************************************
** Meta object code from reading C++ file 'reissueassetdialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/reissueassetdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reissueassetdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ReissueAssetDialog_t {
    QByteArrayData data[50];
    char stringdata0[900];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReissueAssetDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReissueAssetDialog_t qt_meta_stringdata_ReissueAssetDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ReissueAssetDialog"
QT_MOC_LITERAL(1, 19, 7), // "message"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "title"
QT_MOC_LITERAL(4, 34, 5), // "style"
QT_MOC_LITERAL(5, 40, 15), // "onAssetSelected"
QT_MOC_LITERAL(6, 56, 5), // "index"
QT_MOC_LITERAL(7, 62, 17), // "onQuantityChanged"
QT_MOC_LITERAL(8, 80, 3), // "qty"
QT_MOC_LITERAL(9, 84, 18), // "onIPFSStateChanged"
QT_MOC_LITERAL(10, 103, 17), // "onIPFSHashChanged"
QT_MOC_LITERAL(11, 121, 4), // "hash"
QT_MOC_LITERAL(12, 126, 20), // "onAddressNameChanged"
QT_MOC_LITERAL(13, 147, 7), // "address"
QT_MOC_LITERAL(14, 155, 21), // "onReissueAssetClicked"
QT_MOC_LITERAL(15, 177, 19), // "onReissueBoxChanged"
QT_MOC_LITERAL(16, 197, 13), // "onUnitChanged"
QT_MOC_LITERAL(17, 211, 5), // "value"
QT_MOC_LITERAL(18, 217, 20), // "onClearButtonClicked"
QT_MOC_LITERAL(19, 238, 23), // "onVerifierStringChanged"
QT_MOC_LITERAL(20, 262, 8), // "verifier"
QT_MOC_LITERAL(21, 271, 25), // "coinControlFeatureChanged"
QT_MOC_LITERAL(22, 297, 24), // "coinControlButtonClicked"
QT_MOC_LITERAL(23, 322, 24), // "coinControlChangeChecked"
QT_MOC_LITERAL(24, 347, 23), // "coinControlChangeEdited"
QT_MOC_LITERAL(25, 371, 28), // "coinControlClipboardQuantity"
QT_MOC_LITERAL(26, 400, 26), // "coinControlClipboardAmount"
QT_MOC_LITERAL(27, 427, 23), // "coinControlClipboardFee"
QT_MOC_LITERAL(28, 451, 28), // "coinControlClipboardAfterFee"
QT_MOC_LITERAL(29, 480, 25), // "coinControlClipboardBytes"
QT_MOC_LITERAL(30, 506, 29), // "coinControlClipboardLowOutput"
QT_MOC_LITERAL(31, 536, 26), // "coinControlClipboardChange"
QT_MOC_LITERAL(32, 563, 23), // "coinControlUpdateLabels"
QT_MOC_LITERAL(33, 587, 26), // "on_buttonChooseFee_clicked"
QT_MOC_LITERAL(34, 614, 28), // "on_buttonMinimizeFee_clicked"
QT_MOC_LITERAL(35, 643, 13), // "setMinimumFee"
QT_MOC_LITERAL(36, 657, 24), // "updateFeeSectionControls"
QT_MOC_LITERAL(37, 682, 17), // "updateMinFeeLabel"
QT_MOC_LITERAL(38, 700, 19), // "updateSmartFeeLabel"
QT_MOC_LITERAL(39, 720, 24), // "feeControlFeatureChanged"
QT_MOC_LITERAL(40, 745, 10), // "setBalance"
QT_MOC_LITERAL(41, 756, 7), // "CAmount"
QT_MOC_LITERAL(42, 764, 7), // "balance"
QT_MOC_LITERAL(43, 772, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(44, 791, 15), // "immatureBalance"
QT_MOC_LITERAL(45, 807, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(46, 824, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(47, 843, 20), // "watchImmatureBalance"
QT_MOC_LITERAL(48, 864, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(49, 882, 17) // "focusReissueAsset"

    },
    "ReissueAssetDialog\0message\0\0title\0"
    "style\0onAssetSelected\0index\0"
    "onQuantityChanged\0qty\0onIPFSStateChanged\0"
    "onIPFSHashChanged\0hash\0onAddressNameChanged\0"
    "address\0onReissueAssetClicked\0"
    "onReissueBoxChanged\0onUnitChanged\0"
    "value\0onClearButtonClicked\0"
    "onVerifierStringChanged\0verifier\0"
    "coinControlFeatureChanged\0"
    "coinControlButtonClicked\0"
    "coinControlChangeChecked\0"
    "coinControlChangeEdited\0"
    "coinControlClipboardQuantity\0"
    "coinControlClipboardAmount\0"
    "coinControlClipboardFee\0"
    "coinControlClipboardAfterFee\0"
    "coinControlClipboardBytes\0"
    "coinControlClipboardLowOutput\0"
    "coinControlClipboardChange\0"
    "coinControlUpdateLabels\0"
    "on_buttonChooseFee_clicked\0"
    "on_buttonMinimizeFee_clicked\0setMinimumFee\0"
    "updateFeeSectionControls\0updateMinFeeLabel\0"
    "updateSmartFeeLabel\0feeControlFeatureChanged\0"
    "setBalance\0CAmount\0balance\0"
    "unconfirmedBalance\0immatureBalance\0"
    "watchOnlyBalance\0watchUnconfBalance\0"
    "watchImmatureBalance\0updateDisplayUnit\0"
    "focusReissueAsset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReissueAssetDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  179,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  186,    2, 0x08 /* Private */,
       7,    1,  189,    2, 0x08 /* Private */,
       9,    0,  192,    2, 0x08 /* Private */,
      10,    1,  193,    2, 0x08 /* Private */,
      12,    1,  196,    2, 0x08 /* Private */,
      14,    0,  199,    2, 0x08 /* Private */,
      15,    0,  200,    2, 0x08 /* Private */,
      16,    1,  201,    2, 0x08 /* Private */,
      18,    0,  204,    2, 0x08 /* Private */,
      19,    1,  205,    2, 0x08 /* Private */,
      21,    1,  208,    2, 0x08 /* Private */,
      22,    0,  211,    2, 0x08 /* Private */,
      23,    1,  212,    2, 0x08 /* Private */,
      24,    1,  215,    2, 0x08 /* Private */,
      25,    0,  218,    2, 0x08 /* Private */,
      26,    0,  219,    2, 0x08 /* Private */,
      27,    0,  220,    2, 0x08 /* Private */,
      28,    0,  221,    2, 0x08 /* Private */,
      29,    0,  222,    2, 0x08 /* Private */,
      30,    0,  223,    2, 0x08 /* Private */,
      31,    0,  224,    2, 0x08 /* Private */,
      32,    0,  225,    2, 0x08 /* Private */,
      33,    0,  226,    2, 0x08 /* Private */,
      34,    0,  227,    2, 0x08 /* Private */,
      35,    0,  228,    2, 0x08 /* Private */,
      36,    0,  229,    2, 0x08 /* Private */,
      37,    0,  230,    2, 0x08 /* Private */,
      38,    0,  231,    2, 0x08 /* Private */,
      39,    1,  232,    2, 0x08 /* Private */,
      40,    6,  235,    2, 0x08 /* Private */,
      48,    0,  248,    2, 0x08 /* Private */,
      49,    1,  249,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    3,    1,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 41, 0x80000000 | 41, 0x80000000 | 41, 0x80000000 | 41, 0x80000000 | 41, 0x80000000 | 41,   42,   43,   44,   45,   46,   47,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,

       0        // eod
};

void ReissueAssetDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReissueAssetDialog *_t = static_cast<ReissueAssetDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->onAssetSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onQuantityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->onIPFSStateChanged(); break;
        case 4: _t->onIPFSHashChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->onAddressNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->onReissueAssetClicked(); break;
        case 7: _t->onReissueBoxChanged(); break;
        case 8: _t->onUnitChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onClearButtonClicked(); break;
        case 10: _t->onVerifierStringChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->coinControlFeatureChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->coinControlButtonClicked(); break;
        case 13: _t->coinControlChangeChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->coinControlChangeEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->coinControlClipboardQuantity(); break;
        case 16: _t->coinControlClipboardAmount(); break;
        case 17: _t->coinControlClipboardFee(); break;
        case 18: _t->coinControlClipboardAfterFee(); break;
        case 19: _t->coinControlClipboardBytes(); break;
        case 20: _t->coinControlClipboardLowOutput(); break;
        case 21: _t->coinControlClipboardChange(); break;
        case 22: _t->coinControlUpdateLabels(); break;
        case 23: _t->on_buttonChooseFee_clicked(); break;
        case 24: _t->on_buttonMinimizeFee_clicked(); break;
        case 25: _t->setMinimumFee(); break;
        case 26: _t->updateFeeSectionControls(); break;
        case 27: _t->updateMinFeeLabel(); break;
        case 28: _t->updateSmartFeeLabel(); break;
        case 29: _t->feeControlFeatureChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->setBalance((*reinterpret_cast< const CAmount(*)>(_a[1])),(*reinterpret_cast< const CAmount(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const CAmount(*)>(_a[4])),(*reinterpret_cast< const CAmount(*)>(_a[5])),(*reinterpret_cast< const CAmount(*)>(_a[6]))); break;
        case 31: _t->updateDisplayUnit(); break;
        case 32: _t->focusReissueAsset((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ReissueAssetDialog::*_t)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReissueAssetDialog::message)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ReissueAssetDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ReissueAssetDialog.data,
      qt_meta_data_ReissueAssetDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ReissueAssetDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReissueAssetDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ReissueAssetDialog.stringdata0))
        return static_cast<void*>(const_cast< ReissueAssetDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ReissueAssetDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void ReissueAssetDialog::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
