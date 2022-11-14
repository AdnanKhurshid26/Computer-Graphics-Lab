/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[152];
    char stringdata0[1180];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 13), // "Mouse_Pressed"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 17), // "showMousePosition"
QT_MOC_LITERAL(44, 7), // "QPoint&"
QT_MOC_LITERAL(52, 3), // "pos"
QT_MOC_LITERAL(56, 20), // "on_show_axes_clicked"
QT_MOC_LITERAL(77, 15), // "on_Draw_clicked"
QT_MOC_LITERAL(93, 21), // "on_set_point1_clicked"
QT_MOC_LITERAL(115, 21), // "on_set_point2_clicked"
QT_MOC_LITERAL(137, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(159, 29), // "on_grid_spin_box_valueChanged"
QT_MOC_LITERAL(189, 4), // "arg1"
QT_MOC_LITERAL(194, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(214, 21), // "on_dda_button_clicked"
QT_MOC_LITERAL(236, 1), // "r"
QT_MOC_LITERAL(238, 1), // "g"
QT_MOC_LITERAL(240, 1), // "b"
QT_MOC_LITERAL(242, 26), // "on_bresline_button_clicked"
QT_MOC_LITERAL(269, 28), // "on_draw_polar_circle_clicked"
QT_MOC_LITERAL(298, 5), // "delay"
QT_MOC_LITERAL(304, 1), // "n"
QT_MOC_LITERAL(306, 27), // "on_draw_bres_circle_clicked"
QT_MOC_LITERAL(334, 29), // "on_draw_polar_ellipse_clicked"
QT_MOC_LITERAL(364, 25), // "on_draw_mp_circle_clicked"
QT_MOC_LITERAL(390, 28), // "on_draw_bres_ellipse_clicked"
QT_MOC_LITERAL(419, 24), // "on_boundary_fill_clicked"
QT_MOC_LITERAL(444, 16), // "boundaryfillutil"
QT_MOC_LITERAL(461, 1), // "x"
QT_MOC_LITERAL(463, 1), // "y"
QT_MOC_LITERAL(465, 4), // "QRgb"
QT_MOC_LITERAL(470, 10), // "edgecolour"
QT_MOC_LITERAL(481, 20), // "on_floodfill_clicked"
QT_MOC_LITERAL(502, 13), // "floodfillutil"
QT_MOC_LITERAL(516, 21), // "on_set_vertex_clicked"
QT_MOC_LITERAL(538, 23), // "on_clear_vertex_clicked"
QT_MOC_LITERAL(562, 13), // "initEdgeTable"
QT_MOC_LITERAL(576, 16), // "storeEdgeInTable"
QT_MOC_LITERAL(593, 2), // "x1"
QT_MOC_LITERAL(596, 2), // "y1"
QT_MOC_LITERAL(599, 2), // "x2"
QT_MOC_LITERAL(602, 2), // "y2"
QT_MOC_LITERAL(605, 23), // "on_scanlinefill_clicked"
QT_MOC_LITERAL(629, 9), // "poly_draw"
QT_MOC_LITERAL(639, 31), // "std::vector<std::pair<int,int>>"
QT_MOC_LITERAL(671, 14), // "translate_func"
QT_MOC_LITERAL(686, 23), // "on_do_translate_clicked"
QT_MOC_LITERAL(710, 19), // "on_do_scale_clicked"
QT_MOC_LITERAL(730, 20), // "on_do_rotate_clicked"
QT_MOC_LITERAL(751, 19), // "on_do_shear_clicked"
QT_MOC_LITERAL(771, 22), // "on_do_reflectx_clicked"
QT_MOC_LITERAL(794, 21), // "on_setcorner1_clicked"
QT_MOC_LITERAL(816, 21), // "on_setcorner2_clicked"
QT_MOC_LITERAL(838, 11), // "draw_Window"
QT_MOC_LITERAL(850, 23), // "on_lineclipping_clicked"
QT_MOC_LITERAL(874, 11), // "computeCode"
QT_MOC_LITERAL(886, 2), // "xa"
QT_MOC_LITERAL(889, 2), // "ya"
QT_MOC_LITERAL(892, 19), // "cohenSutherlandClip"
QT_MOC_LITERAL(912, 11), // "x_intersect"
QT_MOC_LITERAL(924, 2), // "x3"
QT_MOC_LITERAL(927, 2), // "y3"
QT_MOC_LITERAL(930, 2), // "x4"
QT_MOC_LITERAL(933, 2), // "y4"
QT_MOC_LITERAL(936, 11), // "y_intersect"
QT_MOC_LITERAL(948, 4), // "clip"
QT_MOC_LITERAL(953, 12), // "suthHodgClip"
QT_MOC_LITERAL(966, 16), // "on_dda_l_clicked"
QT_MOC_LITERAL(983, 26), // "on_polygonclipping_clicked"
QT_MOC_LITERAL(1010, 26), // "on_drawBezierCurve_clicked"
QT_MOC_LITERAL(1037, 22), // "on_setbezpoint_clicked"
QT_MOC_LITERAL(1060, 24), // "on_clearbezpoint_clicked"
QT_MOC_LITERAL(1085, 22), // "on_do_reflecty_clicked"
QT_MOC_LITERAL(1108, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(1132, 21), // "on_reflection_clicked"
QT_MOC_LITERAL(1154, 25) // "on_scanlinefill_2_clicked"

    },
    "MainWindow\0Mouse_Pressed\0\0showMousePosition\0"
    "QPoint&\0pos\0on_show_axes_clicked\0"
    "on_Draw_clicked\0on_set_point1_clicked\0"
    "on_set_point2_clicked\0on_pushButton_clicked\0"
    "on_grid_spin_box_valueChanged\0arg1\0"
    "on_checkBox_clicked\0on_dda_button_clicked\0"
    "r\0g\0b\0on_bresline_button_clicked\0"
    "on_draw_polar_circle_clicked\0delay\0n\0"
    "on_draw_bres_circle_clicked\0"
    "on_draw_polar_ellipse_clicked\0"
    "on_draw_mp_circle_clicked\0"
    "on_draw_bres_ellipse_clicked\0"
    "on_boundary_fill_clicked\0boundaryfillutil\0"
    "x\0y\0QRgb\0edgecolour\0on_floodfill_clicked\0"
    "floodfillutil\0on_set_vertex_clicked\0"
    "on_clear_vertex_clicked\0initEdgeTable\0"
    "storeEdgeInTable\0x1\0y1\0x2\0y2\0"
    "on_scanlinefill_clicked\0poly_draw\0"
    "std::vector<std::pair<int,int>>\0"
    "translate_func\0on_do_translate_clicked\0"
    "on_do_scale_clicked\0on_do_rotate_clicked\0"
    "on_do_shear_clicked\0on_do_reflectx_clicked\0"
    "on_setcorner1_clicked\0on_setcorner2_clicked\0"
    "draw_Window\0on_lineclipping_clicked\0"
    "computeCode\0xa\0ya\0cohenSutherlandClip\0"
    "x_intersect\0x3\0y3\0x4\0y4\0y_intersect\0"
    "clip\0suthHodgClip\0on_dda_l_clicked\0"
    "on_polygonclipping_clicked\0"
    "on_drawBezierCurve_clicked\0"
    "on_setbezpoint_clicked\0on_clearbezpoint_clicked\0"
    "on_do_reflecty_clicked\0on_pushButton_2_clicked\0"
    "on_reflection_clicked\0on_scanlinefill_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  326,    2, 0x0a,    1 /* Public */,
       3,    1,  327,    2, 0x0a,    2 /* Public */,
       6,    0,  330,    2, 0x08,    4 /* Private */,
       7,    0,  331,    2, 0x08,    5 /* Private */,
       8,    0,  332,    2, 0x08,    6 /* Private */,
       9,    0,  333,    2, 0x08,    7 /* Private */,
      10,    0,  334,    2, 0x08,    8 /* Private */,
      11,    1,  335,    2, 0x08,    9 /* Private */,
      13,    0,  338,    2, 0x08,   11 /* Private */,
      14,    3,  339,    2, 0x08,   12 /* Private */,
      18,    0,  346,    2, 0x08,   16 /* Private */,
      19,    0,  347,    2, 0x08,   17 /* Private */,
      20,    1,  348,    2, 0x08,   18 /* Private */,
      22,    0,  351,    2, 0x08,   20 /* Private */,
      23,    0,  352,    2, 0x08,   21 /* Private */,
      24,    0,  353,    2, 0x08,   22 /* Private */,
      25,    0,  354,    2, 0x08,   23 /* Private */,
      26,    0,  355,    2, 0x08,   24 /* Private */,
      27,    6,  356,    2, 0x08,   25 /* Private */,
      32,    0,  369,    2, 0x08,   32 /* Private */,
      33,    5,  370,    2, 0x08,   33 /* Private */,
      34,    0,  381,    2, 0x08,   39 /* Private */,
      35,    0,  382,    2, 0x08,   40 /* Private */,
      36,    0,  383,    2, 0x08,   41 /* Private */,
      37,    4,  384,    2, 0x08,   42 /* Private */,
      42,    0,  393,    2, 0x08,   47 /* Private */,
      43,    4,  394,    2, 0x08,   48 /* Private */,
      45,    0,  403,    2, 0x08,   53 /* Private */,
      46,    0,  404,    2, 0x08,   54 /* Private */,
      47,    0,  405,    2, 0x08,   55 /* Private */,
      48,    0,  406,    2, 0x08,   56 /* Private */,
      49,    0,  407,    2, 0x08,   57 /* Private */,
      50,    0,  408,    2, 0x08,   58 /* Private */,
      51,    0,  409,    2, 0x08,   59 /* Private */,
      52,    0,  410,    2, 0x08,   60 /* Private */,
      53,    3,  411,    2, 0x08,   61 /* Private */,
      54,    0,  418,    2, 0x08,   65 /* Private */,
      55,    2,  419,    2, 0x08,   66 /* Private */,
      58,    4,  424,    2, 0x08,   69 /* Private */,
      59,    8,  433,    2, 0x08,   74 /* Private */,
      64,    8,  450,    2, 0x08,   83 /* Private */,
      65,    4,  467,    2, 0x08,   92 /* Private */,
      66,    0,  476,    2, 0x08,   97 /* Private */,
      67,    0,  477,    2, 0x08,   98 /* Private */,
      68,    0,  478,    2, 0x08,   99 /* Private */,
      69,    0,  479,    2, 0x08,  100 /* Private */,
      70,    0,  480,    2, 0x08,  101 /* Private */,
      71,    0,  481,    2, 0x08,  102 /* Private */,
      72,    0,  482,    2, 0x08,  103 /* Private */,
      73,    0,  483,    2, 0x08,  104 /* Private */,
      74,    0,  484,    2, 0x08,  105 /* Private */,
      75,    0,  485,    2, 0x08,  106 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   15,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 30, QMetaType::Int, QMetaType::Int, QMetaType::Int,   28,   29,   31,   15,   16,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   28,   29,   15,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   38,   39,   40,   41,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,   56,   57,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   38,   39,   40,   41,
    QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   38,   39,   40,   41,   60,   61,   62,   63,
    QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   38,   39,   40,   41,   60,   61,   62,   63,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   38,   39,   40,   41,
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

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Mouse_Pressed(); break;
        case 1: _t->showMousePosition((*reinterpret_cast< std::add_pointer_t<QPoint&>>(_a[1]))); break;
        case 2: _t->on_show_axes_clicked(); break;
        case 3: _t->on_Draw_clicked(); break;
        case 4: _t->on_set_point1_clicked(); break;
        case 5: _t->on_set_point2_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_grid_spin_box_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_checkBox_clicked(); break;
        case 9: _t->on_dda_button_clicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 10: _t->on_bresline_button_clicked(); break;
        case 11: _t->on_draw_polar_circle_clicked(); break;
        case 12: _t->delay((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_draw_bres_circle_clicked(); break;
        case 14: _t->on_draw_polar_ellipse_clicked(); break;
        case 15: _t->on_draw_mp_circle_clicked(); break;
        case 16: _t->on_draw_bres_ellipse_clicked(); break;
        case 17: _t->on_boundary_fill_clicked(); break;
        case 18: _t->boundaryfillutil((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QRgb>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6]))); break;
        case 19: _t->on_floodfill_clicked(); break;
        case 20: _t->floodfillutil((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 21: _t->on_set_vertex_clicked(); break;
        case 22: _t->on_clear_vertex_clicked(); break;
        case 23: _t->initEdgeTable(); break;
        case 24: _t->storeEdgeInTable((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        //case 25: _t->on_scanlinefill_clicked(); break;
        case 26: _t->poly_draw((*reinterpret_cast< std::add_pointer_t<std::vector<std::pair<int,int>>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
     //   case 27: _t->translate_func(); break;
        case 28: _t->on_do_translate_clicked(); break;
        case 29: _t->on_do_scale_clicked(); break;
        case 30: _t->on_do_rotate_clicked(); break;
        case 31: _t->on_do_shear_clicked(); break;
        case 32: _t->on_do_reflectx_clicked(); break;
        case 33: _t->on_setcorner1_clicked(); break;
        case 34: _t->on_setcorner2_clicked(); break;
        case 35: _t->draw_Window((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 36: _t->on_lineclipping_clicked(); break;
        case 37: { int _r = _t->computeCode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 38: _t->cohenSutherlandClip((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 39: { int _r = _t->x_intersect((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[8])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 40: { int _r = _t->y_intersect((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[8])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 41: _t->clip((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 42: _t->suthHodgClip(); break;
        case 43: _t->on_dda_l_clicked(); break;
        case 44: _t->on_polygonclipping_clicked(); break;
        case 45: _t->on_drawBezierCurve_clicked(); break;
        case 46: _t->on_setbezpoint_clicked(); break;
        case 47: _t->on_clearbezpoint_clicked(); break;
        case 48: _t->on_do_reflecty_clicked(); break;
     //   case 49: _t->on_pushButton_2_clicked(); break;
        case 50: _t->on_reflection_clicked(); break;
    //    case 51: _t->on_scanlinefill_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QRgb, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<std::pair<int,int> >, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 52)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 52;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
