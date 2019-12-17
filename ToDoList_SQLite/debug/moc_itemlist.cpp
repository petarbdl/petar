/****************************************************************************
** Meta object code from reading C++ file 'itemlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../itemlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ItemList_t {
    QByteArrayData data[21];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ItemList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ItemList_t qt_meta_stringdata_ItemList = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ItemList"
QT_MOC_LITERAL(1, 9, 13), // "preItemAppend"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "postItemAppend"
QT_MOC_LITERAL(4, 39, 14), // "preItemRemoved"
QT_MOC_LITERAL(5, 54, 5), // "index"
QT_MOC_LITERAL(6, 60, 15), // "postItemRemoved"
QT_MOC_LITERAL(7, 76, 10), // "appendItem"
QT_MOC_LITERAL(8, 87, 8), // "itemName"
QT_MOC_LITERAL(9, 96, 10), // "deleteItem"
QT_MOC_LITERAL(10, 107, 10), // "modelIndex"
QT_MOC_LITERAL(11, 118, 8), // "position"
QT_MOC_LITERAL(12, 127, 7), // "getName"
QT_MOC_LITERAL(13, 135, 7), // "setName"
QT_MOC_LITERAL(14, 143, 5), // "value"
QT_MOC_LITERAL(15, 149, 14), // "getDescription"
QT_MOC_LITERAL(16, 164, 14), // "setDescription"
QT_MOC_LITERAL(17, 179, 9), // "swapItems"
QT_MOC_LITERAL(18, 189, 4), // "ind1"
QT_MOC_LITERAL(19, 194, 4), // "ind2"
QT_MOC_LITERAL(20, 199, 12) // "reorderItems"

    },
    "ItemList\0preItemAppend\0\0postItemAppend\0"
    "preItemRemoved\0index\0postItemRemoved\0"
    "appendItem\0itemName\0deleteItem\0"
    "modelIndex\0position\0getName\0setName\0"
    "value\0getDescription\0setDescription\0"
    "swapItems\0ind1\0ind2\0reorderItems"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ItemList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    1,   76,    2, 0x06 /* Public */,
       6,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   80,    2, 0x0a /* Public */,
       9,    2,   83,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    0,   88,    2, 0x02 /* Public */,
      13,    1,   89,    2, 0x02 /* Public */,
      15,    0,   92,    2, 0x02 /* Public */,
      16,    1,   93,    2, 0x02 /* Public */,
      17,    2,   96,    2, 0x02 /* Public */,
      20,    0,  101,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   18,   19,
    QMetaType::Void,

       0        // eod
};

void ItemList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ItemList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->preItemAppend(); break;
        case 1: _t->postItemAppend(); break;
        case 2: _t->preItemRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->postItemRemoved(); break;
        case 4: _t->appendItem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->deleteItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: { QString _r = _t->getName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: { QString _r = _t->getDescription();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setDescription((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->swapItems((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->reorderItems(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ItemList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemList::preItemAppend)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ItemList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemList::postItemAppend)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ItemList::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemList::preItemRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ItemList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemList::postItemRemoved)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ItemList::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ItemList.data,
    qt_meta_data_ItemList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ItemList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ItemList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ItemList.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ItemList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ItemList::preItemAppend()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ItemList::postItemAppend()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ItemList::preItemRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ItemList::postItemRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
