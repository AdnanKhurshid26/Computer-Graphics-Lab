#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QImage>
#include <iostream>
#include <QMouseEvent>
#include <QPainter>
#include <QPaintDevice>
#include <QPoint>
#include <chrono>

using namespace std::chrono;


QImage img=QImage(700,700,QImage::Format_RGB888);
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->x_axis->hide();
    ui->y_axis->hide();
    connect(ui->frame,SIGNAL(Mouse_Pos()),this,SLOT(Mouse_Pressed()));
    connect(ui->frame,SIGNAL(sendMousePosition(QPoint&)),this,SLOT(showMousePosition(QPoint&)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::point(int x,int y)
{

    int gridsize=ui->grid_spin_box->value();
        if(gridsize == 1) img.setPixel(x,y,qRgb(207, 75, 4));
        else{
            x = (x/gridsize)*gridsize;
            y = (y/gridsize)*gridsize;
            for(int i=x+1;i <  x + gridsize;i++) {
                for(int j=y+1;j < y + gridsize;j++) {
                    img.setPixel(i,j,qRgb(207, 75, 4));
                }
            }
        }

    ui->frame->setPixmap(QPixmap::fromImage(img));
}


void MainWindow::showMousePosition(QPoint &pos)
{   int gridsize=ui->grid_spin_box->value();
    int x = (pos.x() - ui->frame->width()/2)/gridsize;
    int y = (ui->frame->height()/2 - pos.y())/gridsize;
    ui->mouse_movement->setText(" X : "+QString::number(x)+", Y : "+QString::number(y));
}
void MainWindow::Mouse_Pressed()
{    int gridsize=ui->grid_spin_box->value();
    int x = (ui->frame->x - ui->frame->width()/2)/gridsize;
    int y = (ui->frame->height()/2 - ui->frame->y)/gridsize;
    ui->mouse_pressed->setText(" X : "+QString::number(x)+", Y : "+QString::number(y));
    point(ui->frame->x,ui->frame->y);
}

void MainWindow::on_show_axes_clicked()
{  int gridsize=ui->grid_spin_box->value();
    if(ui->show_axes->isChecked())
    {
        for(int j=0;j<=ui->frame->width();j+=gridsize)
        {
            point(img.width()/2,j);
        }
        for(int i=0;i<=ui->frame->height();i+=gridsize)
        {
            point(i,img.height()/2);
        }
    }
    else{
        on_checkBox_clicked();
    }
}
void MainWindow::on_set_point1_clicked()
{
    if(ui->draw_line->isChecked()){
        p1.setX(ui->frame->x);
        p1.setY(ui->frame->y);
        int gridsize=ui->grid_spin_box->value();
        int x = (ui->frame->x - ui->frame->width()/2)/gridsize;
        int y = (ui->frame->height()/2 - ui->frame->y)/gridsize;
        ui->p1_label->setText(" X : "+QString::number(x)+", Y : "+QString::number(y));
    }
}

void MainWindow::on_set_point2_clicked()
{
    if(ui->draw_line->isChecked()){
        p2.setX(ui->frame->x);
        p2.setY(ui->frame->y);
        int gridsize=ui->grid_spin_box->value();
        int x = (ui->frame->x - ui->frame->width()/2)/gridsize;
        int y = (ui->frame->height()/2 - ui->frame->y)/gridsize;
        ui->p2_label->setText(" X : "+QString::number(x)+", Y : "+QString::number(y));
    }
}

void MainWindow::on_Draw_clicked()
{
    int r0=ui->circle_radius->value();
    QPainter painter(&img);
    QPen pen;
    pen.setWidth(1);
    pen.setColor(Qt::red);
    if(ui->draw_circle->isChecked()){
        p1.setX(ui->frame->x);
        p1.setY(ui->frame->y);
        painter.setPen(pen);
        painter.drawEllipse(p1,r0,r0);
    }
    if(ui->draw_line->isChecked()){
        painter.setPen(Qt::red);
        painter.drawLine(p1,p2);
    }
    ui->frame->setPixmap(QPixmap::fromImage(img));
}

void MainWindow::on_pushButton_clicked()
{
    for(int j=0;j<img.height();j++)
    {
        for(int i=0;i<img.width();i++)
        {
            img.setPixel(i,j,qRgb(0,0,0));
        }
    }
    ui->frame->setPixmap(QPixmap::fromImage(img));
}

void MainWindow::on_grid_spin_box_valueChanged(int arg1)
{
    if(ui->checkBox->isChecked()){
        on_pushButton_clicked();
        int gridsize=ui->grid_spin_box->value();
        if(gridsize>1)
        {
            for(int i=0;i<img.width();i+=gridsize)
            {
                for(int j=0;j<img.height();j++)
                {
                    img.setPixel(i,j,qRgb(2, 84, 184));
                    img.setPixel(j,i,qRgb(2, 84, 184));
                }
            }
            ui->frame->setPixmap(QPixmap::fromImage(img));
        }
    }
    else{
           int gridsize=ui->grid_spin_box->value();
           if(gridsize>1)
           {
               for(int i=0;i<img.width();i+=gridsize)
               {
                   for(int j=0;j<img.height();j++)
                   {
                       img.setPixel(i,j,qRgb(0,0,0));
                       img.setPixel(j,i,qRgb(0,0,0));
                   }
               }
               ui->frame->setPixmap(QPixmap::fromImage(img));
           }
    }

}


void MainWindow::on_checkBox_clicked()
{
    on_grid_spin_box_valueChanged(1);
}


void MainWindow::on_dda_button_clicked()
{



    int gridsize=ui->grid_spin_box->value();
    double x1 = p1.x()/gridsize;
    double y1 = p1.y()/gridsize;
    double x2 = p2.x()/gridsize;
    double y2 = p2.y()/gridsize;
    double xinc, yinc, step;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    double slope = fabs(y2-y1)/fabs(x2-x1);
    if(slope  <= 1.00) {
        xinc = 1;
        yinc = slope;
        step = fabs(x2 - x1);
    } else {
        xinc = 1/slope;
        yinc = 1;
        step = fabs(y2 - y1);
    }
    if(x1 > x2) xinc *= -1;
    if(y1 > y2) yinc *= -1;
    double x = x1*gridsize + gridsize/2;
    double y = y1*gridsize + gridsize/2;
    for(int i=0;i<=step;i++) {
        point(x,y);
        x += xinc * gridsize;
        y += yinc * gridsize;
    }

    high_resolution_clock::time_point t2 = high_resolution_clock::now();

     duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

      ui->dda_time->setText (QLocale ().toString (time_span.count()) + "s");
}


void swap(int &a, int &b) {
    int temp = b;
    b = a;
    a = temp;
}


void MainWindow::on_bresline_button_clicked()
{    int gridsize=ui->grid_spin_box->value();
    int x1 = p1.x()/gridsize;
    int y1 = p1.y()/gridsize;
    int x2 = p2.x()/gridsize;
    int y2 = p2.y()/gridsize;
    int dx = fabs(x2 - x1);
    int dy = fabs(y2 - y1);
high_resolution_clock::time_point t1 = high_resolution_clock::now();
    int xinc = (x1 > x2 ? -1 : 1);
    int yinc = (y1 > y2 ? -1 : 1);
    bool flag = 1;
    int x = x1*gridsize + gridsize/2;
    int y = y1*gridsize + gridsize/2;
    if(dy > dx) { // if slope > 1, then swap
        swap(dx,dy);
        swap(x,y);
        swap(xinc,yinc);
        flag = 0;
    }
    int decision = 2*dy - dx;
    int step = dx;
    for(int i=0;i<=step;i++) {
        if(flag) point(x,y);
        else point(y,x);
        if(decision < 0) {
            x += xinc*gridsize;
            decision += 2*dy;
        } else {
            x += xinc*gridsize;
            y += yinc*gridsize;
            decision += 2*dy - 2*dx;
        }
    }
     high_resolution_clock::time_point t2 = high_resolution_clock::now();

      duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

       ui->bresline_time->setText (QLocale ().toString (time_span.count()) + "s");
}

