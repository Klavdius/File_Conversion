/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "on_loadFile_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "SetWorkDir"
QT_MOC_LITERAL(4, 43, 7), // "workDir"
QT_MOC_LITERAL(5, 51, 11), // "SetFileName"
QT_MOC_LITERAL(6, 63, 4), // "name"
QT_MOC_LITERAL(7, 68, 8), // "ReadFile"
QT_MOC_LITERAL(8, 77, 4), // "path"
QT_MOC_LITERAL(9, 82, 18), // "SavePathTargetFile"
QT_MOC_LITERAL(10, 101, 11), // "GetPathFile"
QT_MOC_LITERAL(11, 113, 19), // "CheckNeedDeleteFile"
QT_MOC_LITERAL(12, 133, 7), // "SetData"
QT_MOC_LITERAL(13, 141, 4), // "data"
QT_MOC_LITERAL(14, 146, 17), // "SetRouteSavedFile"
QT_MOC_LITERAL(15, 164, 3), // "dir"
QT_MOC_LITERAL(16, 168, 12), // "ChangingData"
QT_MOC_LITERAL(17, 181, 9), // "WriteData"
QT_MOC_LITERAL(18, 191, 15), // "ObserverWorkDir"
QT_MOC_LITERAL(19, 207, 8), // "FindName"
QT_MOC_LITERAL(20, 216, 24), // "on_activateTimer_clicked"
QT_MOC_LITERAL(21, 241, 22), // "on_singleStart_clicked"
QT_MOC_LITERAL(22, 264, 22), // "on_selectRoute_clicked"
QT_MOC_LITERAL(23, 287, 27) // "on_activateDirTimer_clicked"

    },
    "MainWindow\0on_loadFile_clicked\0\0"
    "SetWorkDir\0workDir\0SetFileName\0name\0"
    "ReadFile\0path\0SavePathTargetFile\0"
    "GetPathFile\0CheckNeedDeleteFile\0SetData\0"
    "data\0SetRouteSavedFile\0dir\0ChangingData\0"
    "WriteData\0ObserverWorkDir\0FindName\0"
    "on_activateTimer_clicked\0"
    "on_singleStart_clicked\0on_selectRoute_clicked\0"
    "on_activateDirTimer_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    1,  100,    2, 0x08 /* Private */,
       5,    1,  103,    2, 0x08 /* Private */,
       7,    1,  106,    2, 0x08 /* Private */,
       9,    1,  109,    2, 0x08 /* Private */,
      10,    0,  112,    2, 0x08 /* Private */,
      11,    0,  113,    2, 0x08 /* Private */,
      12,    1,  114,    2, 0x08 /* Private */,
      14,    1,  117,    2, 0x08 /* Private */,
      16,    0,  120,    2, 0x08 /* Private */,
      17,    1,  121,    2, 0x08 /* Private */,
      18,    0,  124,    2, 0x08 /* Private */,
      19,    0,  125,    2, 0x08 /* Private */,
      20,    0,  126,    2, 0x08 /* Private */,
      21,    0,  127,    2, 0x08 /* Private */,
      22,    0,  128,    2, 0x08 /* Private */,
      23,    0,  129,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   13,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_loadFile_clicked(); break;
        case 1: _t->SetWorkDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SetFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->ReadFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->SavePathTargetFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: { QString _r = _t->GetPathFile();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: _t->CheckNeedDeleteFile(); break;
        case 7: _t->SetData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 8: _t->SetRouteSavedFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->ChangingData(); break;
        case 10: _t->WriteData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 11: _t->ObserverWorkDir(); break;
        case 12: { QString _r = _t->FindName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: _t->on_activateTimer_clicked(); break;
        case 14: _t->on_singleStart_clicked(); break;
        case 15: _t->on_selectRoute_clicked(); break;
        case 16: _t->on_activateDirTimer_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
