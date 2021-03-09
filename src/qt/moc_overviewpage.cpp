/****************************************************************************
** Meta object code from reading C++ file 'overviewpage.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/overviewpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overviewpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OverviewPage_t {
    QByteArrayData data[26];
    char stringdata0[437];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverviewPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverviewPage_t qt_meta_stringdata_OverviewPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OverviewPage"
QT_MOC_LITERAL(1, 13, 18), // "transactionClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "index"
QT_MOC_LITERAL(4, 39, 16), // "assetSendClicked"
QT_MOC_LITERAL(5, 56, 20), // "assetIssueSubClicked"
QT_MOC_LITERAL(6, 77, 23), // "assetIssueUniqueClicked"
QT_MOC_LITERAL(7, 101, 19), // "assetReissueClicked"
QT_MOC_LITERAL(8, 121, 23), // "outOfSyncWarningClicked"
QT_MOC_LITERAL(9, 145, 10), // "setBalance"
QT_MOC_LITERAL(10, 156, 7), // "CAmount"
QT_MOC_LITERAL(11, 164, 7), // "balance"
QT_MOC_LITERAL(12, 172, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(13, 191, 15), // "immatureBalance"
QT_MOC_LITERAL(14, 207, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(15, 224, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(16, 243, 20), // "watchImmatureBalance"
QT_MOC_LITERAL(17, 264, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(18, 282, 24), // "handleTransactionClicked"
QT_MOC_LITERAL(19, 307, 23), // "handleAssetRightClicked"
QT_MOC_LITERAL(20, 331, 12), // "updateAlerts"
QT_MOC_LITERAL(21, 344, 8), // "warnings"
QT_MOC_LITERAL(22, 353, 21), // "updateWatchOnlyLabels"
QT_MOC_LITERAL(23, 375, 13), // "showWatchOnly"
QT_MOC_LITERAL(24, 389, 28), // "handleOutOfSyncWarningClicks"
QT_MOC_LITERAL(25, 418, 18) // "assetSearchChanged"

    },
    "OverviewPage\0transactionClicked\0\0index\0"
    "assetSendClicked\0assetIssueSubClicked\0"
    "assetIssueUniqueClicked\0assetReissueClicked\0"
    "outOfSyncWarningClicked\0setBalance\0"
    "CAmount\0balance\0unconfirmedBalance\0"
    "immatureBalance\0watchOnlyBalance\0"
    "watchUnconfBalance\0watchImmatureBalance\0"
    "updateDisplayUnit\0handleTransactionClicked\0"
    "handleAssetRightClicked\0updateAlerts\0"
    "warnings\0updateWatchOnlyLabels\0"
    "showWatchOnly\0handleOutOfSyncWarningClicks\0"
    "assetSearchChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverviewPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    1,   90,    2, 0x06 /* Public */,
       6,    1,   93,    2, 0x06 /* Public */,
       7,    1,   96,    2, 0x06 /* Public */,
       8,    0,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    6,  100,    2, 0x0a /* Public */,
      17,    0,  113,    2, 0x08 /* Private */,
      18,    1,  114,    2, 0x08 /* Private */,
      19,    1,  117,    2, 0x08 /* Private */,
      20,    1,  120,    2, 0x08 /* Private */,
      22,    1,  123,    2, 0x08 /* Private */,
      24,    0,  126,    2, 0x08 /* Private */,
      25,    0,  127,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 10,   11,   12,   13,   14,   15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OverviewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OverviewPage *_t = static_cast<OverviewPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->transactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->assetSendClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->assetIssueSubClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->assetIssueUniqueClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->assetReissueClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->outOfSyncWarningClicked(); break;
        case 6: _t->setBalance((*reinterpret_cast< const CAmount(*)>(_a[1])),(*reinterpret_cast< const CAmount(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const CAmount(*)>(_a[4])),(*reinterpret_cast< const CAmount(*)>(_a[5])),(*reinterpret_cast< const CAmount(*)>(_a[6]))); break;
        case 7: _t->updateDisplayUnit(); break;
        case 8: _t->handleTransactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->handleAssetRightClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->updateAlerts((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->updateWatchOnlyLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->handleOutOfSyncWarningClicks(); break;
        case 13: _t->assetSearchChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OverviewPage::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewPage::transactionClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OverviewPage::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewPage::assetSendClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OverviewPage::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewPage::assetIssueSubClicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (OverviewPage::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewPage::assetIssueUniqueClicked)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (OverviewPage::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewPage::assetReissueClicked)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (OverviewPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewPage::outOfSyncWarningClicked)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject OverviewPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OverviewPage.data,
      qt_meta_data_OverviewPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OverviewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverviewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OverviewPage.stringdata0))
        return static_cast<void*>(const_cast< OverviewPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int OverviewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void OverviewPage::transactionClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OverviewPage::assetSendClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OverviewPage::assetIssueSubClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OverviewPage::assetIssueUniqueClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OverviewPage::assetReissueClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OverviewPage::outOfSyncWarningClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
