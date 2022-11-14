#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>




namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public slots:
    void Mouse_Pressed();
    void showMousePosition(QPoint& pos);
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_show_axes_clicked();

    void on_Draw_clicked();

    void on_set_point1_clicked();

    void on_set_point2_clicked();

    void on_pushButton_clicked();

    void on_grid_spin_box_valueChanged(int arg1);

    void on_checkBox_clicked();

    void on_dda_button_clicked(int r,int g,int b);


    void on_bresline_button_clicked();

   // void draw_polar_circle(int x,int y,int r);

    void on_draw_polar_circle_clicked();

    void delay(int n);

    void on_draw_bres_circle_clicked();

    void on_draw_polar_ellipse_clicked();

    void on_draw_mp_circle_clicked();

    void on_draw_bres_ellipse_clicked();

    //void on_pushButton_2_clicked();

    void on_boundary_fill_clicked();
    void boundaryfillutil(int x, int y, QRgb edgecolour, int r, int g, int b);

    void on_floodfill_clicked();
    void floodfillutil(int x, int y, int r, int g, int b);

    void on_set_vertex_clicked();

    void on_clear_vertex_clicked();

    void initEdgeTable();

    void storeEdgeInTable (int x1,int y1, int x2, int y2);

    void on_scanlinefill_clicked();

    void poly_draw(std::vector<std::pair<int,int> >, int , int , int );
    void translate_func();



    void on_do_translate_clicked();

    void on_do_scale_clicked();

    void on_do_rotate_clicked();

    void on_do_shear_clicked();

    void on_do_reflectx_clicked();

    void on_setcorner1_clicked();

    void on_setcorner2_clicked();
    void draw_Window(int ,int ,int );

    void on_lineclipping_clicked();
    int computeCode(int xa, int ya);
    void cohenSutherlandClip(int x1, int y1,int x2, int y2);

    int x_intersect(int x1, int y1, int x2, int y2,int x3, int y3, int x4, int y4);
int  y_intersect(int x1, int y1, int x2, int y2,int x3, int y3, int x4, int y4);
void  clip(int x1, int y1, int x2, int y2);
void suthHodgClip();


    void on_dda_l_clicked();

    void on_polygonclipping_clicked();

    void on_drawBezierCurve_clicked();

    void on_setbezpoint_clicked();

    void on_clearbezpoint_clicked();

    void on_do_reflecty_clicked();

    void on_pushButton_2_clicked();

    void on_reflection_clicked();

    void on_scanlinefill_2_clicked();

private:
    Ui::MainWindow *ui;
    QPoint p1,p2;
     QPoint cp1,cp2;
     QPoint temp1,temp2;
    void point(int,int,int,int,int);
};

#endif // MAINWINDOW_H
