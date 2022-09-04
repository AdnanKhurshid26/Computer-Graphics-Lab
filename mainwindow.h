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

    void on_dda_button_clicked();


    void on_bresline_button_clicked();

private:
    Ui::MainWindow *ui;
    QPoint p1,p2;
    void point(int,int);
};

#endif // MAINWINDOW_H
