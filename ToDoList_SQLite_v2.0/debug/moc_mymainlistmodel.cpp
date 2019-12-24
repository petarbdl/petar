/****************************************************************************
** Meta object code from reading C++ file 'mymainlistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mymainlistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mymainlistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyMainListModel_t {
    QByteArrayData data[16];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyMainListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyMainListModel_t qt_meta_stringdata_MyMainListModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MyMainListModel"
QT_MOC_LITERAL(1, 16, 13), // "preListAppend"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "postListAppend"
QT_MOC_LITERAL(4, 46, 14), // "preListRemoved"
QT_MOC_LITERAL(5, 61, 5), // "index"
QT_MOC_LITERAL(6, 67, 15), // "postListRemoved"
QT_MOC_LITERAL(7, 83, 10), // "appendList"
QT_MOC_LITERAL(8, 94, 8), // "getItems"
QT_MOC_LITERAL(9, 103, 9), // "ItemList*"
QT_MOC_LITERAL(10, 113, 9), // "itemsLeft"
QT_MOC_LITERAL(11, 123, 10), // "deleteList"
QT_MOC_LITERAL(12, 134, 11), // "setListName"
QT_MOC_LITERAL(13, 146, 4), // "name"
QT_MOC_LITERAL(14, 151, 18), // "setListDescription"
QT_MOC_LITERAL(15, 170, 11) // "description"

    },
    "MyMainListModel\0preListAppend\0\0"
    "postListAppend\0preListRemoved\0index\0"
    "postListRemoved\0appendList\0getItems\0"
    "ItemList*\0itemsLeft\0deleteList\0"
    "setListName\0name\0setListDescription\0"
    "description"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyMainListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    1,   66,    2, 0x06 /* Public */,
       6,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   70,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    1,   73,    2, 0x02 /* Public */,
      10,    1,   76,    2, 0x02 /* Public */,
      11,    1,   79,    2, 0x02 /* Public */,
      12,    2,   82,    2, 0x02 /* Public */,
      14,    2,   87,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // methods: parameters
    0x80000000 | 9, QMetaType::Int,    5,
    QMetaType::Int, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   13,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   15,    5,

       0        // eod
};

void MyMainListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyMainListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->preListAppend(); break;
        case 1: _t->postListAppend(); break;
        case 2: _t->preListRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->postListRemoved(); break;
        case 4: _t->appendList((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: { ItemList* _r = _t->getItems((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ItemList**>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->itemsLeft((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->deleteList((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setListName((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->setListDescription((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyMainListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyMainListModel::preListAppend)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyMainListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyMainListModel::postListAppend)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MyMainListModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyMainListModel::preListRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MyMainListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyMainListModel::postListRemoved)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyMainListModel::staticMetaObject = { {
    &QAbstractListModel::staticMetaObject,
    qt_meta_stringdata_MyMainListModel.data,
    qt_meta_data_MyMainListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyMainListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyMainListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyMainListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int MyMainListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MyMainListModel::preListAppend()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MyMainListModel::postListAppend()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MyMainListModel::preListRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyMainListModel::postListRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
