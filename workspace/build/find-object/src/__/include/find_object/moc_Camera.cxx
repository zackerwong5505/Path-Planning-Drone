/****************************************************************************
** Meta object code from reading C++ file 'Camera.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/find-object/include/find_object/Camera.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Camera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_find_object__Camera[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   21,   20,   20, 0x05,
      50,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      61,   20,   20,   20, 0x0a,
      79,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_find_object__Camera[] = {
    "find_object::Camera\0\0image\0"
    "imageReceived(cv::Mat)\0finished()\0"
    "updateImageRate()\0takeImage()\0"
};

void find_object::Camera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Camera *_t = static_cast<Camera *>(_o);
        switch (_id) {
        case 0: _t->imageReceived((*reinterpret_cast< const cv::Mat(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->updateImageRate(); break;
        case 3: _t->takeImage(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData find_object::Camera::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject find_object::Camera::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_find_object__Camera,
      qt_meta_data_find_object__Camera, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &find_object::Camera::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *find_object::Camera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *find_object::Camera::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_find_object__Camera))
        return static_cast<void*>(const_cast< Camera*>(this));
    return QObject::qt_metacast(_clname);
}

int find_object::Camera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void find_object::Camera::imageReceived(const cv::Mat & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void find_object::Camera::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
