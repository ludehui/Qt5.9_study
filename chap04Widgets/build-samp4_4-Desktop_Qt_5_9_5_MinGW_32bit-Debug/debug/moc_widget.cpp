/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../samp4_4Misc/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[14];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 23), // "on_SliderV_valueChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "value"
QT_MOC_LITERAL(4, 38, 20), // "on_dial_valueChanged"
QT_MOC_LITERAL(5, 59, 22), // "on_radioBtnDec_clicked"
QT_MOC_LITERAL(6, 82, 22), // "on_radioBtnBin_clicked"
QT_MOC_LITERAL(7, 105, 22), // "on_radioBtnOct_clicked"
QT_MOC_LITERAL(8, 128, 22), // "on_radioBtnHex_clicked"
QT_MOC_LITERAL(9, 151, 23), // "on_SliderH_valueChanged"
QT_MOC_LITERAL(10, 175, 25), // "on_ScrollBarV_sliderMoved"
QT_MOC_LITERAL(11, 201, 8), // "position"
QT_MOC_LITERAL(12, 210, 25), // "on_ScrollBarH_sliderMoved"
QT_MOC_LITERAL(13, 236, 25) // "on_SliderRed_valueChanged"

    },
    "Widget\0on_SliderV_valueChanged\0\0value\0"
    "on_dial_valueChanged\0on_radioBtnDec_clicked\0"
    "on_radioBtnBin_clicked\0on_radioBtnOct_clicked\0"
    "on_radioBtnHex_clicked\0on_SliderH_valueChanged\0"
    "on_ScrollBarV_sliderMoved\0position\0"
    "on_ScrollBarH_sliderMoved\0"
    "on_SliderRed_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    1,   67,    2, 0x08 /* Private */,
       5,    0,   70,    2, 0x08 /* Private */,
       6,    0,   71,    2, 0x08 /* Private */,
       7,    0,   72,    2, 0x08 /* Private */,
       8,    0,   73,    2, 0x08 /* Private */,
       9,    1,   74,    2, 0x08 /* Private */,
      10,    1,   77,    2, 0x08 /* Private */,
      12,    1,   80,    2, 0x08 /* Private */,
      13,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_SliderV_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_dial_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_radioBtnDec_clicked(); break;
        case 3: _t->on_radioBtnBin_clicked(); break;
        case 4: _t->on_radioBtnOct_clicked(); break;
        case 5: _t->on_radioBtnHex_clicked(); break;
        case 6: _t->on_SliderH_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_ScrollBarV_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_ScrollBarH_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_SliderRed_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
