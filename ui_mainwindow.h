/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <my_label.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    my_label *frame;
    QLabel *mouse_movement;
    QLabel *label_3;
    QLabel *mouse_pressed;
    QLabel *label_5;
    QFrame *x_axis;
    QFrame *y_axis;
    QPushButton *Draw;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *dda_l;
    QPushButton *bresline_button;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *grid_spin_box;
    QCheckBox *checkBox;
    QCheckBox *show_axes;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *set_point1;
    QLabel *p1_label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *set_point2;
    QLabel *p2_label;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton;
    QLabel *dda_time;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QPushButton *set_vertex;
    QPushButton *clear_vertex;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_10;
    QPushButton *floodfill;
    QPushButton *boundary_fill;
    QRadioButton *connected8_radio;
    QPushButton *scanlinefill;
    QPushButton *do_reflectx;
    QPushButton *do_reflecty;
    QPushButton *reflection;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *do_rotate;
    QLabel *label_17;
    QSpinBox *rotate_deg;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *do_translate;
    QLabel *label_11;
    QSpinBox *translate_x;
    QLabel *label_12;
    QSpinBox *translate_y;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *do_scale;
    QLabel *label_15;
    QDoubleSpinBox *scale_x;
    QLabel *label_16;
    QDoubleSpinBox *scale_y;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpinBox *circle_radius;
    QPushButton *draw_polar_circle;
    QPushButton *draw_bres_circle;
    QPushButton *draw_mp_circle;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QSpinBox *ellipse_r1;
    QLabel *label_6;
    QSpinBox *ellipse_r2;
    QPushButton *draw_polar_ellipse;
    QPushButton *draw_bres_ellipse;
    QWidget *layoutWidget11;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *setcorner1;
    QPushButton *setcorner2;
    QPushButton *lineclipping;
    QPushButton *polygonclipping;
    QWidget *layoutWidget12;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *do_shear;
    QLabel *label_18;
    QDoubleSpinBox *shear_x;
    QLabel *label_19;
    QDoubleSpinBox *shear_y;
    QWidget *layoutWidget13;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *setbezpoint;
    QPushButton *clearbezpoint;
    QPushButton *drawBezierCurve;
    QPushButton *scanlinefill_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1259, 893);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new my_label(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 700, 700));
        frame->setCursor(QCursor(Qt::CrossCursor));
        frame->setMouseTracking(true);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        frame->setFrameShape(QFrame::Box);
        frame->setLineWidth(1);
        mouse_movement = new QLabel(centralWidget);
        mouse_movement->setObjectName(QString::fromUtf8("mouse_movement"));
        mouse_movement->setGeometry(QRect(720, 80, 121, 41));
        mouse_movement->setFrameShape(QFrame::Panel);
        mouse_movement->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(720, 60, 121, 20));
        mouse_pressed = new QLabel(centralWidget);
        mouse_pressed->setObjectName(QString::fromUtf8("mouse_pressed"));
        mouse_pressed->setGeometry(QRect(860, 80, 111, 41));
        mouse_pressed->setFrameShape(QFrame::Panel);
        mouse_pressed->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(860, 60, 111, 20));
        x_axis = new QFrame(centralWidget);
        x_axis->setObjectName(QString::fromUtf8("x_axis"));
        x_axis->setGeometry(QRect(0, 225, 700, 1));
        x_axis->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 255);"));
        x_axis->setFrameShape(QFrame::HLine);
        x_axis->setFrameShadow(QFrame::Sunken);
        y_axis = new QFrame(centralWidget);
        y_axis->setObjectName(QString::fromUtf8("y_axis"));
        y_axis->setGeometry(QRect(225, 0, 1, 700));
        y_axis->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(85, 255, 255);"));
        y_axis->setFrameShape(QFrame::VLine);
        y_axis->setFrameShadow(QFrame::Sunken);
        Draw = new QPushButton(centralWidget);
        Draw->setObjectName(QString::fromUtf8("Draw"));
        Draw->setGeometry(QRect(1060, 780, 101, 41));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(720, 170, 461, 81));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 421, 45));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        dda_l = new QPushButton(layoutWidget);
        dda_l->setObjectName(QString::fromUtf8("dda_l"));

        horizontalLayout_4->addWidget(dda_l);

        bresline_button = new QPushButton(layoutWidget);
        bresline_button->setObjectName(QString::fromUtf8("bresline_button"));

        horizontalLayout_4->addWidget(bresline_button);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(720, 10, 441, 41));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        grid_spin_box = new QSpinBox(layoutWidget1);
        grid_spin_box->setObjectName(QString::fromUtf8("grid_spin_box"));
        grid_spin_box->setMinimum(1);
        grid_spin_box->setMaximum(350);

        horizontalLayout->addWidget(grid_spin_box);


        horizontalLayout_8->addLayout(horizontalLayout);

        checkBox = new QCheckBox(layoutWidget1);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_8->addWidget(checkBox);

        show_axes = new QCheckBox(layoutWidget1);
        show_axes->setObjectName(QString::fromUtf8("show_axes"));

        horizontalLayout_8->addWidget(show_axes);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(722, 130, 441, 33));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        set_point1 = new QPushButton(layoutWidget2);
        set_point1->setObjectName(QString::fromUtf8("set_point1"));

        horizontalLayout_3->addWidget(set_point1);

        p1_label = new QLabel(layoutWidget2);
        p1_label->setObjectName(QString::fromUtf8("p1_label"));
        p1_label->setFrameShape(QFrame::Panel);
        p1_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(p1_label);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        set_point2 = new QPushButton(layoutWidget2);
        set_point2->setObjectName(QString::fromUtf8("set_point2"));

        horizontalLayout_2->addWidget(set_point2);

        p2_label = new QLabel(layoutWidget2);
        p2_label->setObjectName(QString::fromUtf8("p2_label"));
        p2_label->setFrameShape(QFrame::Panel);
        p2_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(p2_label);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(770, 650, 301, 31));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_11->addWidget(pushButton);

        dda_time = new QLabel(layoutWidget3);
        dda_time->setObjectName(QString::fromUtf8("dda_time"));
        dda_time->setFrameShape(QFrame::Panel);
        dda_time->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(dda_time);

        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(720, 340, 331, 31));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_12->addWidget(label_9);

        set_vertex = new QPushButton(layoutWidget4);
        set_vertex->setObjectName(QString::fromUtf8("set_vertex"));

        horizontalLayout_12->addWidget(set_vertex);

        clear_vertex = new QPushButton(layoutWidget4);
        clear_vertex->setObjectName(QString::fromUtf8("clear_vertex"));

        horizontalLayout_12->addWidget(clear_vertex);

        layoutWidget5 = new QWidget(centralWidget);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(720, 370, 331, 31));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_13->addWidget(label_10);

        floodfill = new QPushButton(layoutWidget5);
        floodfill->setObjectName(QString::fromUtf8("floodfill"));

        horizontalLayout_13->addWidget(floodfill);

        boundary_fill = new QPushButton(layoutWidget5);
        boundary_fill->setObjectName(QString::fromUtf8("boundary_fill"));

        horizontalLayout_13->addWidget(boundary_fill);

        connected8_radio = new QRadioButton(centralWidget);
        connected8_radio->setObjectName(QString::fromUtf8("connected8_radio"));
        connected8_radio->setGeometry(QRect(1060, 370, 112, 26));
        scanlinefill = new QPushButton(centralWidget);
        scanlinefill->setObjectName(QString::fromUtf8("scanlinefill"));
        scanlinefill->setGeometry(QRect(600, 770, 83, 29));
        do_reflectx = new QPushButton(centralWidget);
        do_reflectx->setObjectName(QString::fromUtf8("do_reflectx"));
        do_reflectx->setGeometry(QRect(720, 500, 83, 29));
        do_reflecty = new QPushButton(centralWidget);
        do_reflecty->setObjectName(QString::fromUtf8("do_reflecty"));
        do_reflecty->setGeometry(QRect(820, 500, 83, 29));
        reflection = new QPushButton(centralWidget);
        reflection->setObjectName(QString::fromUtf8("reflection"));
        reflection->setGeometry(QRect(920, 500, 83, 29));
        layoutWidget6 = new QWidget(centralWidget);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(720, 460, 200, 31));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        do_rotate = new QPushButton(layoutWidget6);
        do_rotate->setObjectName(QString::fromUtf8("do_rotate"));

        horizontalLayout_16->addWidget(do_rotate);

        label_17 = new QLabel(layoutWidget6);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_16->addWidget(label_17);

        rotate_deg = new QSpinBox(layoutWidget6);
        rotate_deg->setObjectName(QString::fromUtf8("rotate_deg"));

        horizontalLayout_16->addWidget(rotate_deg);

        layoutWidget7 = new QWidget(centralWidget);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(721, 421, 261, 31));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        do_translate = new QPushButton(layoutWidget7);
        do_translate->setObjectName(QString::fromUtf8("do_translate"));

        horizontalLayout_14->addWidget(do_translate);

        label_11 = new QLabel(layoutWidget7);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_14->addWidget(label_11);

        translate_x = new QSpinBox(layoutWidget7);
        translate_x->setObjectName(QString::fromUtf8("translate_x"));
        translate_x->setMinimum(-100);
        translate_x->setMaximum(100);

        horizontalLayout_14->addWidget(translate_x);

        label_12 = new QLabel(layoutWidget7);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_14->addWidget(label_12);

        translate_y = new QSpinBox(layoutWidget7);
        translate_y->setObjectName(QString::fromUtf8("translate_y"));
        translate_y->setMinimum(-100);
        translate_y->setMaximum(100);

        horizontalLayout_14->addWidget(translate_y);

        layoutWidget8 = new QWidget(centralWidget);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(981, 420, 271, 31));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        do_scale = new QPushButton(layoutWidget8);
        do_scale->setObjectName(QString::fromUtf8("do_scale"));

        horizontalLayout_15->addWidget(do_scale);

        label_15 = new QLabel(layoutWidget8);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_15->addWidget(label_15);

        scale_x = new QDoubleSpinBox(layoutWidget8);
        scale_x->setObjectName(QString::fromUtf8("scale_x"));

        horizontalLayout_15->addWidget(scale_x);

        label_16 = new QLabel(layoutWidget8);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_15->addWidget(label_16);

        scale_y = new QDoubleSpinBox(layoutWidget8);
        scale_y->setObjectName(QString::fromUtf8("scale_y"));

        horizontalLayout_15->addWidget(scale_y);

        layoutWidget9 = new QWidget(centralWidget);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(721, 260, 471, 31));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget9);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFrameShape(QFrame::StyledPanel);

        horizontalLayout_6->addWidget(label_7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        label_2 = new QLabel(layoutWidget9);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        circle_radius = new QSpinBox(layoutWidget9);
        circle_radius->setObjectName(QString::fromUtf8("circle_radius"));

        horizontalLayout_6->addWidget(circle_radius);

        draw_polar_circle = new QPushButton(layoutWidget9);
        draw_polar_circle->setObjectName(QString::fromUtf8("draw_polar_circle"));

        horizontalLayout_6->addWidget(draw_polar_circle);

        draw_bres_circle = new QPushButton(layoutWidget9);
        draw_bres_circle->setObjectName(QString::fromUtf8("draw_bres_circle"));

        horizontalLayout_6->addWidget(draw_bres_circle);

        draw_mp_circle = new QPushButton(layoutWidget9);
        draw_mp_circle->setObjectName(QString::fromUtf8("draw_mp_circle"));

        horizontalLayout_6->addWidget(draw_mp_circle);

        layoutWidget10 = new QWidget(centralWidget);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(720, 300, 471, 33));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget10);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget10);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFrameShape(QFrame::StyledPanel);

        horizontalLayout_9->addWidget(label_8);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(layoutWidget10);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        ellipse_r1 = new QSpinBox(layoutWidget10);
        ellipse_r1->setObjectName(QString::fromUtf8("ellipse_r1"));

        horizontalLayout_7->addWidget(ellipse_r1);

        label_6 = new QLabel(layoutWidget10);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        ellipse_r2 = new QSpinBox(layoutWidget10);
        ellipse_r2->setObjectName(QString::fromUtf8("ellipse_r2"));

        horizontalLayout_7->addWidget(ellipse_r2);

        draw_polar_ellipse = new QPushButton(layoutWidget10);
        draw_polar_ellipse->setObjectName(QString::fromUtf8("draw_polar_ellipse"));

        horizontalLayout_7->addWidget(draw_polar_ellipse);

        draw_bres_ellipse = new QPushButton(layoutWidget10);
        draw_bres_ellipse->setObjectName(QString::fromUtf8("draw_bres_ellipse"));

        horizontalLayout_7->addWidget(draw_bres_ellipse);


        horizontalLayout_9->addLayout(horizontalLayout_7);

        layoutWidget11 = new QWidget(centralWidget);
        layoutWidget11->setObjectName(QString::fromUtf8("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(720, 540, 401, 31));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget11);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        setcorner1 = new QPushButton(layoutWidget11);
        setcorner1->setObjectName(QString::fromUtf8("setcorner1"));

        horizontalLayout_10->addWidget(setcorner1);

        setcorner2 = new QPushButton(layoutWidget11);
        setcorner2->setObjectName(QString::fromUtf8("setcorner2"));

        horizontalLayout_10->addWidget(setcorner2);

        lineclipping = new QPushButton(layoutWidget11);
        lineclipping->setObjectName(QString::fromUtf8("lineclipping"));

        horizontalLayout_10->addWidget(lineclipping);

        polygonclipping = new QPushButton(layoutWidget11);
        polygonclipping->setObjectName(QString::fromUtf8("polygonclipping"));

        horizontalLayout_10->addWidget(polygonclipping);

        layoutWidget12 = new QWidget(centralWidget);
        layoutWidget12->setObjectName(QString::fromUtf8("layoutWidget12"));
        layoutWidget12->setGeometry(QRect(941, 460, 271, 31));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget12);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        do_shear = new QPushButton(layoutWidget12);
        do_shear->setObjectName(QString::fromUtf8("do_shear"));

        horizontalLayout_17->addWidget(do_shear);

        label_18 = new QLabel(layoutWidget12);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_17->addWidget(label_18);

        shear_x = new QDoubleSpinBox(layoutWidget12);
        shear_x->setObjectName(QString::fromUtf8("shear_x"));

        horizontalLayout_17->addWidget(shear_x);

        label_19 = new QLabel(layoutWidget12);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_17->addWidget(label_19);

        shear_y = new QDoubleSpinBox(layoutWidget12);
        shear_y->setObjectName(QString::fromUtf8("shear_y"));

        horizontalLayout_17->addWidget(shear_y);

        layoutWidget13 = new QWidget(centralWidget);
        layoutWidget13->setObjectName(QString::fromUtf8("layoutWidget13"));
        layoutWidget13->setGeometry(QRect(720, 590, 351, 31));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget13);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        setbezpoint = new QPushButton(layoutWidget13);
        setbezpoint->setObjectName(QString::fromUtf8("setbezpoint"));

        horizontalLayout_18->addWidget(setbezpoint);

        clearbezpoint = new QPushButton(layoutWidget13);
        clearbezpoint->setObjectName(QString::fromUtf8("clearbezpoint"));

        horizontalLayout_18->addWidget(clearbezpoint);

        drawBezierCurve = new QPushButton(layoutWidget13);
        drawBezierCurve->setObjectName(QString::fromUtf8("drawBezierCurve"));

        horizontalLayout_18->addWidget(drawBezierCurve);

        scanlinefill_2 = new QPushButton(centralWidget);
        scanlinefill_2->setObjectName(QString::fromUtf8("scanlinefill_2"));
        scanlinefill_2->setGeometry(QRect(1070, 340, 101, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1259, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        frame->setText(QString());
        mouse_movement->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Mouse Movement", nullptr));
        mouse_pressed->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Mouse Pressed", nullptr));
        Draw->setText(QCoreApplication::translate("MainWindow", "Draw", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Line", nullptr));
        dda_l->setText(QCoreApplication::translate("MainWindow", "DDA", nullptr));
        bresline_button->setText(QCoreApplication::translate("MainWindow", "Bresenham", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Grid Size", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Show Grid", nullptr));
        show_axes->setText(QCoreApplication::translate("MainWindow", "Show Axes", nullptr));
        set_point1->setText(QCoreApplication::translate("MainWindow", "Set point 1", nullptr));
        p1_label->setText(QString());
        set_point2->setText(QCoreApplication::translate("MainWindow", "Set point 2", nullptr));
        p2_label->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
        dda_time->setText(QCoreApplication::translate("MainWindow", "Time taken", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Draw Polygon :", nullptr));
        set_vertex->setText(QCoreApplication::translate("MainWindow", "Set vertex", nullptr));
        clear_vertex->setText(QCoreApplication::translate("MainWindow", "Clear vertex", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Polygon Filling :", nullptr));
        floodfill->setText(QCoreApplication::translate("MainWindow", "Flood FIll", nullptr));
        boundary_fill->setText(QCoreApplication::translate("MainWindow", "Boundary Fill", nullptr));
        connected8_radio->setText(QCoreApplication::translate("MainWindow", "8 connected", nullptr));
        scanlinefill->setText(QCoreApplication::translate("MainWindow", "Scanline Fill", nullptr));
        do_reflectx->setText(QCoreApplication::translate("MainWindow", "Reflect X", nullptr));
        do_reflecty->setText(QCoreApplication::translate("MainWindow", "Reflect Y", nullptr));
        reflection->setText(QCoreApplication::translate("MainWindow", "Reflect", nullptr));
        do_rotate->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Degree :", nullptr));
        do_translate->setText(QCoreApplication::translate("MainWindow", "Translate", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "X :", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        do_scale->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "X :", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "CIRCLE", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Radius :", nullptr));
        draw_polar_circle->setText(QCoreApplication::translate("MainWindow", "Polar", nullptr));
        draw_bres_circle->setText(QCoreApplication::translate("MainWindow", "Bresenham", nullptr));
        draw_mp_circle->setText(QCoreApplication::translate("MainWindow", "Midpoint", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "ELLIPSE", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "R1", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "R2", nullptr));
        draw_polar_ellipse->setText(QCoreApplication::translate("MainWindow", "Polar", nullptr));
        draw_bres_ellipse->setText(QCoreApplication::translate("MainWindow", "Bresenham", nullptr));
        setcorner1->setText(QCoreApplication::translate("MainWindow", "Set Corner 1", nullptr));
        setcorner2->setText(QCoreApplication::translate("MainWindow", "Set Corner 2", nullptr));
        lineclipping->setText(QCoreApplication::translate("MainWindow", "Line Clip", nullptr));
        polygonclipping->setText(QCoreApplication::translate("MainWindow", "Polygon Clip", nullptr));
        do_shear->setText(QCoreApplication::translate("MainWindow", "Shear", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "X :", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        setbezpoint->setText(QCoreApplication::translate("MainWindow", "Set Bezier Points", nullptr));
        clearbezpoint->setText(QCoreApplication::translate("MainWindow", "Clear Points", nullptr));
        drawBezierCurve->setText(QCoreApplication::translate("MainWindow", "Draw Bezier", nullptr));
        scanlinefill_2->setText(QCoreApplication::translate("MainWindow", "Scanline Fill", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
