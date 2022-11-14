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
#include <random>



#define maxHt 1800
#define maxWd 1000
#define maxVer 10000
#define fwidth 700
#define fheight 700
using namespace std::chrono;

 std::vector<std::pair<int,int> > line_endpts;

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

void MainWindow::delay(int n) {
    QTime dieTime= QTime::currentTime().addMSecs(n);
    while (QTime::currentTime() < dieTime)
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}


void MainWindow::point(int x,int y,int r=32,int g=252,int b=3)
{

    int gridsize=ui->grid_spin_box->value();
        if(gridsize == 1) img.setPixel(x,y,qRgb(r, g, b));
        else{
            x = (x/gridsize)*gridsize;
            y = (y/gridsize)*gridsize;
            for(int i=x+1;i <  x + gridsize;i++) {
                for(int j=y+1;j < y + gridsize;j++) {
                    img.setPixel(i,j,qRgb(r, g, b));
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
    point(ui->frame->x,ui->frame->y,207,75,4);
}

void MainWindow::on_show_axes_clicked()
{  int gridsize=ui->grid_spin_box->value();
    if(ui->show_axes->isChecked())
    {
        for(int j=0;j<=ui->frame->width();j+=gridsize)
        {
            point(img.width()/2,j,255,0,0);
        }
        for(int i=0;i<=ui->frame->height();i+=gridsize)
        {
            point(i,img.height()/2,255,0,0);
        }
    }
    else{
        on_checkBox_clicked();
    }
}
void MainWindow::on_set_point1_clicked()
{

        p1.setX(ui->frame->x);
        p1.setY(ui->frame->y);
        int gridsize=ui->grid_spin_box->value();
        int x = (ui->frame->x - ui->frame->width()/2)/gridsize;
        int y = (ui->frame->height()/2 - ui->frame->y)/gridsize;
        ui->p1_label->setText(" X : "+QString::number(x)+", Y : "+QString::number(y));

}

void MainWindow::on_set_point2_clicked()
{

        p2.setX(ui->frame->x);
        p2.setY(ui->frame->y);
        int gridsize=ui->grid_spin_box->value();
        int x = (ui->frame->x - ui->frame->width()/2)/gridsize;
        int y = (ui->frame->height()/2 - ui->frame->y)/gridsize;
        ui->p2_label->setText(" X : "+QString::number(x)+", Y : "+QString::number(y));

}

void MainWindow::on_Draw_clicked()
{
    int r0=ui->circle_radius->value();
    QPainter painter(&img);
    QPen pen;
    pen.setWidth(1);
    pen.setColor(Qt::red);
//    if(ui->draw_circle->isChecked()){
//        p1.setX(ui->frame->x);
//        p1.setY(ui->frame->y);
//        painter.setPen(pen);
//        painter.drawEllipse(p1,r0,r0);
//    }
//    if(ui->draw_line->isChecked()){
//        painter.setPen(Qt::red);
//        painter.drawLine(p1,p2);
//    }
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


void MainWindow::on_dda_button_clicked(int r=32,int g=252,int b=3 )
{

 high_resolution_clock::time_point t1 = high_resolution_clock::now();

    int gridsize=ui->grid_spin_box->value();
    double x1 = p1.x()/gridsize;
    double y1 = p1.y()/gridsize;
    double x2 = p2.x()/gridsize;
    double y2 = p2.y()/gridsize;
    double xinc, yinc, step;

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
        point(x,y,r,g,b);
        x += xinc * gridsize;
        y += yinc * gridsize;
        delay(50);
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
{
     high_resolution_clock::time_point t1 = high_resolution_clock::now();
    int gridsize = ui->grid_spin_box->value();
    int x1 = p1.x()/gridsize;
    int y1 = p1.y()/gridsize;
    int x2 = p2.x()/gridsize;
    int y2 = p2.y()/gridsize;
    int dx = fabs(x2 - x1);
    int dy = fabs(y2 - y1);

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
        else point(y,x,255,0,0);
        if(decision < 0) {
            x += xinc*gridsize;
            decision += 2*dy;
        } else {
            x += xinc*gridsize;
            y += yinc*gridsize;
            decision += 2*dy - 2*dx;
        }
        delay(45);
    }
    high_resolution_clock::time_point t2 = high_resolution_clock::now();

     duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

      ui->dda_time->setText (QLocale ().toString (time_span.count()) + "s");
}


void MainWindow::on_draw_polar_circle_clicked()
{   auto start = high_resolution_clock::now();
    int gridsize=ui->grid_spin_box->value();
       p1.setX(ui->frame->x);
       p1.setY(ui->frame->y);

       int x_center = p1.x()/gridsize;
       int y_center = p1.y()/gridsize;

       x_center = x_center*gridsize + gridsize/2;
       y_center = y_center*gridsize + gridsize/2;

       int radius = ui->circle_radius->value()*gridsize;

       for (int theta = 0; theta<=45; theta++) {
           int xk = radius * cos (theta * 180 / M_PI );
           int yk = radius * sin (theta * 180 / M_PI );
           point (x_center + xk, y_center + yk);
           point (x_center + xk, y_center - yk);
           point (x_center - xk, y_center + yk);
           point (x_center - xk, y_center - yk);
           point (x_center + yk, y_center + xk);
           point (x_center + yk, y_center - xk);
           point (x_center - yk, y_center + xk);
           point (x_center - yk, y_center - xk);
           delay(50);
}

         auto stop = high_resolution_clock::now();

         duration<double> time_span = duration_cast<duration<double>>(stop - start);
           ui->dda_time->setText (QLocale ().toString (time_span.count()) + "s");



}



void MainWindow::on_draw_mp_circle_clicked()
{   auto start = high_resolution_clock::now();
    int r = ui->circle_radius->value();
       p1.setX(ui->frame->x);
       p1.setY(ui->frame->y);
       int gridsize=ui->grid_spin_box->value();
       int x0 = p1.x()/gridsize;
       int y0 = p1.y()/gridsize;
       x0 = x0*gridsize + gridsize/2;
       y0 = y0*gridsize + gridsize/2;
       int x = 0;
       int y = r*gridsize;
       int p= (1-r)*gridsize;

       while(x<=y){
           point(x0 - x, y0 - y);
           point(x0 + x, y0 - y);
           point(x0 - x, y0 + y);
           point(x0 + x, y0 + y);
           point(x0 - y, y0 - x);
           point(x0 + y, y0 - x);
           point(x0 - y, y0 + x);
           point(x0 + y, y0 + x);

           x += gridsize;
           if(p <= 0) {
               p += 2*x + 3;
           } else {
               p += 2*(x-y) + 5;
               y -= gridsize;
           }
              delay(50);

       }

       auto stop = high_resolution_clock::now();

       duration<double> time_span = duration_cast<duration<double>>(stop - start);
    ui->dda_time->setText (QLocale ().toString (time_span.count()) + "s");
}


void MainWindow::on_draw_polar_ellipse_clicked()
{
    auto start = high_resolution_clock::now();
    int gridsize=ui->grid_spin_box->value();

                int rx = ui->ellipse_r1->value();
                int ry = ui->ellipse_r2->value();

                p1.setX(ui->frame->x);
                p1.setY(ui->frame->y);
                int cx = p1.x()/gridsize;
                int cy = p1.y()/gridsize;
                cx = cx*gridsize + gridsize/2;
                cy = cy*gridsize + gridsize/2;

                    for (int i = 0; i <= 90; i++) {
                        double theta = i*(M_PI/180.0);
                        float x = rx*cos(theta)*gridsize;

                        int ix = floor(x + 0.5);

                        float y = ry*sin(theta)*gridsize;
                        int iy = floor(y + 0.5);



                            point(cx+ix,cy+iy);

                            point(cx-ix,cy-iy);
                              point(cx-ix,cy+iy);
                            point(cx+ix,cy-iy);



                         delay(50);


                    }

             auto stop = high_resolution_clock::now();

             duration<double> time_span = duration_cast<duration<double>>(stop - start);
         ui->dda_time->setText (QLocale ().toString (time_span.count()) + "s");
}


void MainWindow::on_draw_bres_circle_clicked()
{auto start = high_resolution_clock::now();
    int r = ui->circle_radius->value();
       p1.setX(ui->frame->x);
       p1.setY(ui->frame->y);
       int gridsize=ui->grid_spin_box->value();
       int x0 = p1.x()/gridsize;
       int y0 = p1.y()/gridsize;
       x0 = x0*gridsize + gridsize/2;
       y0 = y0*gridsize + gridsize/2;
       int x = 0;
       int y = r*gridsize;
       int p = (3 - 2*r)*gridsize;
       while(y >= x) {
           point(x0 - x, y0 - y);
           point(x0 + x, y0 - y);
           point(x0 - x, y0 + y);
           point(x0 + x, y0 + y);
           point(x0 - y, y0 - x);
           point(x0 + y, y0 - x);
           point(x0 - y, y0 + x);
           point(x0 + y, y0 + x);

           x += gridsize;
           if(p <= 0) {
               p += 4*x + 6;
           } else {
               p += 4*(x-y) + 10;
               y -= gridsize;
           }
              delay(50);
       }

       auto stop = high_resolution_clock::now();

       duration<double> time_span = duration_cast<duration<double>>(stop - start);
      ui->dda_time->setText (QLocale ().toString (time_span.count()) + "s");


}


void MainWindow::on_draw_bres_ellipse_clicked()
{
    auto start = high_resolution_clock::now();
    p1.setX(ui->frame->x);
    p1.setY(ui->frame->y);
    int k = ui->grid_spin_box->value();
    int rx = ui->ellipse_r1->value();
    int ry = ui->ellipse_r2->value();

    int xc = (p1.x()/k)*k+k/2;
    int yc = (p1.y()/k)*k+k/2;

    int x=0;
    int y=ry;

    int rx2=rx*rx;
    int ry2=ry*ry;
    int tworx2=2*rx2;
    int twory2=2*ry2;
    int px=0.0;
    int py=tworx2*y;
    //For first region
    int p1=ry2-rx2*ry+(0.25)*rx2; //Initial value of decision paramemter

    while(px<py)
    {
        point(xc+x*k,yc+y*k);
        point(xc-x*k,yc+y*k);
        point(xc-x*k,yc-y*k);
        point(xc+x*k,yc-y*k);
 delay(50);
        x++;
        px+=twory2;
        if(p1>=0) {
            y--;
            py-=tworx2;
            p1=p1+ry2+px-py;

        }  else{
            p1=p1+ry2+px;
        }
    }

    //For second region
    p1=ry2*((double)x+0.5)*((double)x+0.5)+rx2*(y-1)*(y-1)-rx2*ry2; //Initial value of decision paramemter


    while(y>=0)
    {
        point(xc+x*k,yc+y*k);
        point(xc-x*k,yc+y*k);
        point(xc-x*k,yc-y*k);
        point(xc+x*k,yc-y*k);
 delay(50);
        y--;
        py-=tworx2;
        if(p1<=0){
            x++;
            px+=twory2;
            p1=p1+rx2-py+px;

        }  else  {
            p1=p1+rx2-py;
        }
    }

    auto stop = high_resolution_clock::now();

    duration<double> time_span = duration_cast<duration<double>>(stop - start);
     ui->dda_time->setText (QLocale ().toString (time_span.count()) + "s");
}





// Boundary fill algorithm
void MainWindow::boundaryfillutil(int x, int y, QRgb edgecolour, int r, int g, int b) {
   int gridsize = ui->grid_spin_box->value();

  if(x < 0 || y < 0 || x >= img.width() || y >= img.height()) return;

  if(img.pixel(x,y) == edgecolour || img.pixel(x,y) == qRgb(r,g,b)) return;

    point(x,y,r,g,b);
     delay(5);
    boundaryfillutil(x, y + gridsize,qRgb(32,252,3),r,g,b);
    boundaryfillutil(x + gridsize, y,qRgb(32,252,3),r,g,b);
    boundaryfillutil(x, y - gridsize,qRgb(32,252,3),r,g,b);
    boundaryfillutil(x - gridsize, y,qRgb(32,252,3),r,g,b);

    if(ui->connected8_radio->isChecked()){
            boundaryfillutil(x + gridsize, y+ gridsize,qRgb(32,252,3),r,g,b);
            boundaryfillutil(x - gridsize, y- gridsize,qRgb(32,252,3),r,g,b);
            boundaryfillutil(x + gridsize, y- gridsize,qRgb(32,252,3),r,g,b);
            boundaryfillutil(x - gridsize, y+ gridsize,qRgb(32,252,3),r,g,b);
    }



}

void MainWindow::on_boundary_fill_clicked()
{
    int gridsize = ui->grid_spin_box->value();
    p1.setX(ui->frame->x);
    p1.setY(ui->frame->y);
    int x = p1.x()/gridsize;
    int y = p1.y()/gridsize;
    x = x*gridsize + gridsize/2;
    y = y*gridsize + gridsize/2;
    point(x,y,0,0,0);
      if(ui->connected8_radio->isChecked()){
            boundaryfillutil(x,y,qRgb(32,252,3),255,255,255);
      }
      else{
            boundaryfillutil(x,y,qRgb(32,252,3),255,255,0);
      }

}


// Flood fill algorithm
void MainWindow::floodfillutil(int x, int y, int r, int g, int b) {
    if(x < 0 || y < 0 || x >= img.width() || y >= img.height()) return;
    if(img.pixel(x,y) == qRgb(r,g,b) || img.pixel(x,y) == qRgb(0,0,0)){
    int gridsize = ui->grid_spin_box->value();

     if(ui->connected8_radio->isChecked()){
    point(x,y,255,255,0);}
     else{
         point(x,y,255,255,255);
     }
     delay(5);
    floodfillutil(x - gridsize, y, r,g,b);
    floodfillutil(x + gridsize, y, r,g,b);
    floodfillutil(x, y - gridsize, r,g,b);
    floodfillutil(x, y + gridsize, r,g,b);

    if(ui->connected8_radio->isChecked()){
        floodfillutil(x + gridsize, y+gridsize, r,g,b);
        floodfillutil(x - gridsize, y-gridsize, r,g,b);
        floodfillutil(x+gridsize, y - gridsize, r,g,b);
        floodfillutil(x-gridsize, y + gridsize, r,g,b);
    }}
    else return;
}


void MainWindow::on_floodfill_clicked()
{
    int gridsize = ui->grid_spin_box->value();
    p1.setX(ui->frame->x);
    p1.setY(ui->frame->y);
    int x = p1.x()/gridsize;
    int y = p1.y()/gridsize;
    x = x*gridsize + gridsize/2;
    y = y*gridsize + gridsize/2;
    if(ui->connected8_radio->isChecked()){
    point(x,y,255,255,255);}
    else{
         point(x,y,0,0,0);
    }
   if(ui->connected8_radio->isChecked()){
    floodfillutil(x,y,255,255,255);}
   else{
       floodfillutil(x,y,0,0,0);}

}


// polygon drawing
std::vector<std::pair<int,int> > vertex_list;

void MainWindow::on_set_vertex_clicked()
{   int gridsize = ui->grid_spin_box->value();
    vertex_list.push_back(std::make_pair((ui->frame->x/gridsize)*gridsize+gridsize/2,(ui->frame->y/gridsize)*gridsize+gridsize/2));
    int i=vertex_list.size();
    if(i>=2)
    {

        p1.setX(vertex_list[i-1].first);p1.setY(vertex_list[i-1].second);
        p2.setX(vertex_list[i-2].first);p2.setY(vertex_list[i-2].second);
        on_dda_button_clicked();
    }
}


void MainWindow::on_clear_vertex_clicked()
{
    vertex_list.clear();
}


// Scanline Filling
typedef struct edgebucket
{
    int ymax;   //max y-coordinate of edge
    float xofymin;  //x-coordinate of lowest edge point updated only in aet
    float slopeinverse;
}EdgeBucket;

typedef struct edgetabletup
{
    // the array will give the scanline number
    // The edge table (ET) with edges entries sorted
    // in increasing y and x of the lower end

    int countEdgeBucket;    //no. of edgebuckets
    EdgeBucket buckets[maxVer];
}EdgeTableTuple;

EdgeTableTuple EdgeTable[maxHt], ActiveEdgeTuple;
void MainWindow::initEdgeTable()
{
    int i;
    for (i=0; i<maxHt; i++)
    {
        EdgeTable[i].countEdgeBucket = 0;
    }

    ActiveEdgeTuple.countEdgeBucket = 0;
}

void insertionSort(EdgeTableTuple *ett)
{
    int i,j;
    EdgeBucket temp;

    for (i = 1; i < ett->countEdgeBucket; i++)
    {
        temp.ymax = ett->buckets[i].ymax;
        temp.xofymin = ett->buckets[i].xofymin;
        temp.slopeinverse = ett->buckets[i].slopeinverse;
        j = i - 1;

    while ((temp.xofymin < ett->buckets[j].xofymin) && (j >= 0))
    {
        ett->buckets[j + 1].ymax = ett->buckets[j].ymax;
        ett->buckets[j + 1].xofymin = ett->buckets[j].xofymin;
        ett->buckets[j + 1].slopeinverse = ett->buckets[j].slopeinverse;
        j = j - 1;
    }
        ett->buckets[j + 1].ymax = temp.ymax;
        ett->buckets[j + 1].xofymin = temp.xofymin;
        ett->buckets[j + 1].slopeinverse = temp.slopeinverse;
    }
}

void storeEdgeInTuple (EdgeTableTuple *receiver,int ym,int xm,float slopInv)
{
    (receiver->buckets[(receiver)->countEdgeBucket]).ymax = ym;
    (receiver->buckets[(receiver)->countEdgeBucket]).xofymin = (float)xm;
    (receiver->buckets[(receiver)->countEdgeBucket]).slopeinverse = slopInv;

    insertionSort(receiver);
    (receiver->countEdgeBucket)++;
}

void MainWindow::storeEdgeInTable (int x1,int y1, int x2, int y2)
{
    float m,minv;
    int ymaxTS,xwithyminTS, scanline;

    if (x2==x1)
    {
        minv=0.000000;
    }
    else
    {
    m = ((float)(y2-y1))/((float)(x2-x1));

    if (y2==y1)
        return;

    minv = (float)1.0/m;
    }

    if (y1>y2)
    {
        scanline=y2;
        ymaxTS=y1;
        xwithyminTS=x2;
    }
    else
    {
        scanline=y1;
        ymaxTS=y2;
        xwithyminTS=x1;
    }
    storeEdgeInTuple(&EdgeTable[scanline],ymaxTS,xwithyminTS,minv);
}

void removeEdgeByYmax(EdgeTableTuple *Tup,int yy)
{
    int i,j;
    for (i=0; i< Tup->countEdgeBucket; i++)
    {
        if (Tup->buckets[i].ymax == yy)
        {
            for ( j = i ; j < Tup->countEdgeBucket -1 ; j++ )
                {
                Tup->buckets[j].ymax =Tup->buckets[j+1].ymax;
                Tup->buckets[j].xofymin =Tup->buckets[j+1].xofymin;
                Tup->buckets[j].slopeinverse = Tup->buckets[j+1].slopeinverse;
                }
                Tup->countEdgeBucket--;
            i--;
        }
    }
}

void updatexbyslopeinv(EdgeTableTuple *Tup)
{
    int i;

    for (i=0; i<Tup->countEdgeBucket; i++)
    {
        (Tup->buckets[i]).xofymin =(Tup->buckets[i]).xofymin + (Tup->buckets[i]).slopeinverse;
    }
}


void MainWindow::on_scanlinefill_2_clicked()
{
    qDebug()<<"Pressed";
    int i, j, x1, ymax1, x2, ymax2, FillFlag = 0, coordCount;

    for (i=0; i<maxHt; i++)
    {
        for (j=0; j<EdgeTable[i].countEdgeBucket; j++)
        {
            storeEdgeInTuple(&ActiveEdgeTuple,EdgeTable[i].buckets[j].
                     ymax,EdgeTable[i].buckets[j].xofymin,
                    EdgeTable[i].buckets[j].slopeinverse);
        }

        removeEdgeByYmax(&ActiveEdgeTuple, i);

        insertionSort(&ActiveEdgeTuple);

        j = 0;
        FillFlag = 0;
        coordCount = 0;
        x1 = 0;
        x2 = 0;
        ymax1 = 0;
        ymax2 = 0;
        while (j<ActiveEdgeTuple.countEdgeBucket)
        {
            if (coordCount%2==0)
            {
                x1 = (int)(ActiveEdgeTuple.buckets[j].xofymin);
                ymax1 = ActiveEdgeTuple.buckets[j].ymax;
                if (x1==x2)
                {
                    if (((x1==ymax1)&&(x2!=ymax2))||((x1!=ymax1)&&(x2==ymax2)))
                    {
                        x2 = x1;
                        ymax2 = ymax1;
                    }

                    else
                    {
                        coordCount++;
                    }
                }

                else
                {
                        coordCount++;
                }
            }
            else
            {
                x2 = (int)ActiveEdgeTuple.buckets[j].xofymin;
                ymax2 = ActiveEdgeTuple.buckets[j].ymax;

                FillFlag = 0;
                if (x1==x2)
                {
                    if (((x1==ymax1)&&(x2!=ymax2))||((x1!=ymax1)&&(x2==ymax2)))
                    {
                        x1 = x2;
                        ymax1 = ymax2;
                    }
                    else
                    {
                        coordCount++;
                        FillFlag = 1;
                    }
                }
                else
                {
                    coordCount++;
                    FillFlag = 1;
                }

            if(FillFlag==1)
            {
                    p1.setX(x1);p1.setY(i);
                    p2.setX(x2);p2.setY(i);
                    on_dda_button_clicked();
            }

        }

        j++;
    }
    updatexbyslopeinv(&ActiveEdgeTuple);
}

    vertex_list.clear();
    initEdgeTable();
}




/******************************* TRANSFORMATIONS *********************************/

void MainWindow::poly_draw(std::vector<std::pair<int,int> > vlist, int r, int g, int b) {
    for(int i=0;i<(int)vlist.size()-1;i++)
    {
        p1.setX(vlist[i].first); p1.setY(vlist[i].second);
        p2.setX(vlist[i+1].first); p2.setY(vlist[i+1].second);
         on_dda_button_clicked(r,g,b);
    }
}

void mat_mult(double a[3][3], int b[3], double res[3]){
    int i,j;
    for(i=0;i<3;i++){
        res[i]=0;
        for(j=0;j<3;j++)
            res[i]+=(a[i][j]*b[j]);
    }
}

void MainWindow::on_do_translate_clicked()
{
    int tx = ui->translate_x->value();
    int ty = ui->translate_y->value();
    int k = ui->grid_spin_box->value();

//    std::vector<std::pair<int,int> > old_vertex = vertex_list;

    tx*=k;
    ty*=k;
    ty=-ty;
    int i,len=vertex_list.size();

    // matrix for translation
    double mat[3][3]={{1,0,(double)tx},{0,1,(double)ty},{0,0,1}};

    int coord[3];
    double res[3];
    for(i=0;i<len;i++)
    {
        coord[0]=vertex_list[i].first;
        coord[1]=vertex_list[i].second;
        coord[2]=1;
        mat_mult(mat,coord,res);
        vertex_list[i].first= res[0]/res[2];
        vertex_list[i].second= res[1]/res[2];
    }
//       poly_draw(old_vertex,0,0,0);
    poly_draw(vertex_list,255,255,0);


}


void MainWindow::on_do_scale_clicked()
{
    double sx = ui->scale_x->value();
    double sy = ui->scale_y->value();
   int gridsize = ui->grid_spin_box->value();

//    std::vector<std::pair<int,int> > old_vertex = vertex_list;

   //Point about which to be scaled
   int piv_x=(ui->frame->x/gridsize)*gridsize+gridsize/2;
   int piv_y=(ui->frame->y/gridsize)*gridsize+gridsize/2;

   int i,len=vertex_list.size();

   // matrix for scaling
   double mat[3][3]={{(double)sx,0,0},{0,(double)sy,0},{0,0,1}};
   int coord[3];
   double res[3];
   for(i=0;i<len;i++)
   {
       coord[0]=vertex_list[i].first-piv_x;
       coord[1]=piv_y-vertex_list[i].second;
       coord[2]=1;
       mat_mult(mat,coord,res);
       vertex_list[i].first=res[0]/res[2]+piv_x;
       vertex_list[i].second=piv_y-res[1]/res[2];

   }

//   poly_draw(old_vertex,0,0,0);
   poly_draw(vertex_list,255,255,0);
}


void MainWindow::on_do_rotate_clicked()
{
    int angle = ui->rotate_deg->value();
   int gridsize = ui->grid_spin_box->value();

//    std::vector<std::pair<int,int> > old_vertex=vertex_list;


    double dang=(double)angle*M_PI/180.0;
    double sinang=sin(dang);
    double cosang=cos(dang);

    //Point about which to be rotated
    int piv_x=(ui->frame->x/gridsize)*gridsize+gridsize/2;
    int piv_y=(ui->frame->y/gridsize)*gridsize+gridsize/2;

    int i,len=vertex_list.size();

    // matrix for rotation
    double mat[3][3]={{cosang,-sinang,0},{sinang,cosang,0},{0,0,1}};
    int coord[3];
    double res[3];
    for(i=0;i<len;i++)
    {
        coord[0]=vertex_list[i].first-piv_x;
        coord[1]=piv_y-vertex_list[i].second;
        coord[2]=1;
        mat_mult(mat,coord,res);
        vertex_list[i].first=res[0]/res[2]+piv_x;
        vertex_list[i].second=piv_y-res[1]/res[2];
    }

//    poly_draw(old_vertex,0,0,0);
    poly_draw(vertex_list,255,255,0);
}


void MainWindow::on_do_shear_clicked()
{
    double shx = ui->shear_x->value();
    double shy = ui->shear_y->value();
    int gridsize = ui->grid_spin_box->value();

//    std::vector<std::pair<int,int> > old_vertex;
//    for(int i=0;i<(int)vertex_list.size();i++)
//    {
//        old_vertex.push_back(vertex_list[i]);
//    }

    //Point about which to be sheared
    int piv_x=(ui->frame->x/gridsize)*gridsize+gridsize/2;
    int piv_y=(ui->frame->y/gridsize)*gridsize+gridsize/2;

    int i,len=vertex_list.size();

    // matrix for shearing
    double mat[3][3]={{1,shx,0},{shy,1,0},{0,0,1}};
    int coord[3];
    double res[3];
    for(i=0;i<len;i++)
    {
        coord[0]=vertex_list[i].first-piv_x;
        coord[1]=piv_y-vertex_list[i].second;
        coord[2]=1;
        mat_mult(mat,coord,res);
        vertex_list[i].first=res[0]/res[2]+piv_x;
        vertex_list[i].second=piv_y-res[1]/res[2];
    }
//    poly_draw(old_vertex,0,0,0);
    poly_draw(vertex_list,255,255,0);
}

void MainWindow::on_do_reflectx_clicked()
{

//    std::vector<std::pair<int,int> > old_vertex = vertex_list;

    int i,len=vertex_list.size();

    // matrix for reflecting
    double mat[3][3]={{1.0,0,},{0,-1.0,0},{0,0,1}};

    int coord[3];
    double res[3];
    for(i=0;i<len;i++)
    {
        coord[0]=vertex_list[i].first;
        coord[1]=vertex_list[i].second;
        coord[2]=1;
        mat_mult(mat,coord,res);
        vertex_list[i].first= res[0]/res[2];
        vertex_list[i].second= ((res[1]/res[2])/ui->frame->height())*ui->frame->height()+ ui->frame->height();
    }
//    poly_draw(old_vertex,0,0,0);
    poly_draw(vertex_list,255,255,255);
}

void MainWindow::on_do_reflecty_clicked()
{
//    std::vector<std::pair<int,int> > old_vertex = vertex_list;

    int i,len=vertex_list.size();

    // matrix for reflecting
    double mat[3][3]={{-1.0,0,},{0,1.0,0},{0,0,1.0}};

    int coord[3];
    double res[3];
    for(i=0;i<len;i++)
    {
        coord[0]=vertex_list[i].first;
        coord[1]=vertex_list[i].second;
        coord[2]=1;
        mat_mult(mat,coord,res);
        vertex_list[i].first= ((res[0]/res[2])/ui->frame->width())*ui->frame->width()+ ui->frame->width();
        vertex_list[i].second= res[1]/res[2];
    }
//    poly_draw(old_vertex,0,0,0);
    poly_draw(vertex_list,255,255,0);
}



/**************************CLIPPING*********************************/

int clipper_points[4][2];
void MainWindow::on_setcorner1_clicked()
{   int gridsize = ui->grid_spin_box->value();
    cp1.setX((ui->frame->x/gridsize)*gridsize+gridsize/2);
    cp1.setY((ui->frame->y/gridsize)*gridsize+gridsize/2);
}



void MainWindow::on_setcorner2_clicked()
{ int gridsize = ui->grid_spin_box->value();
    cp2.setX((ui->frame->x/gridsize)*gridsize+gridsize/2);
    cp2.setY((ui->frame->y/gridsize)*gridsize+gridsize/2);

    clipper_points[0][0]=cp1.x();
    clipper_points[0][1]=cp1.y();
    clipper_points[1][0]=cp1.x();
    clipper_points[1][1]=cp2.y();
    clipper_points[2][0]=cp2.x();
    clipper_points[2][1]=cp2.y();
    clipper_points[3][0]=cp2.x();
    clipper_points[3][1]=cp1.y();

    draw_Window(0,255,255);
}


void MainWindow::draw_Window(int r=0,int g=255,int b=255)
{


    p1.setX(clipper_points[0][0]);
    p1.setY(clipper_points[0][1]);
    p2.setX(clipper_points[1][0]);
    p2.setY(clipper_points[1][1]);
    on_dda_button_clicked(r,g,b);

    p1.setX(clipper_points[1][0]);
    p1.setY(clipper_points[1][1]);
    p2.setX(clipper_points[2][0]);
    p2.setY(clipper_points[2][1]);
    on_dda_button_clicked(r,g,b);

    p1.setX(clipper_points[2][0]);
    p1.setY(clipper_points[2][1]);
    p2.setX(clipper_points[3][0]);
    p2.setY(clipper_points[3][1]);
    on_dda_button_clicked(r,g,b);

    p1.setX(clipper_points[3][0]);
    p1.setY(clipper_points[3][1]);
    p2.setX(clipper_points[0][0]);
    p2.setY(clipper_points[0][1]);
     on_dda_button_clicked(r,g,b);

    p1 = temp1;
    p2 = temp2;
}
// ************************** LINE CLIPPING ********************************
// Defining region codes

const int INSIDE = 0; // 0000
const int LEFT = 1;   // 0001
const int RIGHT = 2;  // 0010
const int BOTTOM = 4; // 0100
const int TOP = 8;    // 1000


// Function to compute region code for a point(x, y)
int MainWindow::computeCode(int xa, int ya)
{
    int x_min=cp1.x(),x_max=cp2.x(),y_min=cp1.y(),y_max=cp2.y();

    // initialized as being inside
        int code = INSIDE;
        if (xa < x_min)       // to the left of rectangle
            code |= LEFT;
        else if (xa > x_max)  // to the right of rectangle
            code |= RIGHT;
        if (ya < y_min)       // below the rectangle
            code |= BOTTOM;
        else if (ya > y_max)  // above the rectangle
            code |= TOP;

        return code;
}
// Implementing Cohen-Sutherland algorithm
// Clipping a line from P1 = (x2, y2) to P2 = (x2, y2)
void MainWindow::cohenSutherlandClip(int x1, int y1,int x2, int y2)
{
    int x_min=clipper_points[0][0],x_max=clipper_points[2][0],y_min=clipper_points[0][1],y_max=clipper_points[2][1];
    // Compute region codes for P1, P2
    int code1 = computeCode(x1, y1);
    int code2 = computeCode(x2, y2);

    // Initialize line as outside the rectangular window
    bool isInside= false;

    while (true)
    {

        if ((code1 == 0) && (code2 == 0))
        {
            // If both endpoints lie within rectangle
            isInside = true;
            break;
        }
        else if (code1 & code2)
        {
            // If both endpoints are outside rectangle,
            // in same region
            break;
        }
        else
        {
            // Some segment of line lies within the
            // rectangle
            int code_out;
            int x, y;

            // At least one endpoint is outside the
            // rectangle, pick it.
            if (code1 != 0)
                code_out = code1;
            else
                code_out = code2;

            // Find intersection point;
            // using formulas y = y1 + slope * (x - x1),
            // x = x1 + (1 / slope) * (y - y1)
            if (code_out & TOP)
            {
                // point is above the clip rectangle
                x = x1 + (int)((double)(x2 - x1) *(double)(y_max - y1) /(double)(y2 - y1));
                y = y_max;
            }
            else if (code_out & BOTTOM)
            {
                // point is below the rectangle
                x = x1 + (int)((double)(x2 - x1) * (double)(y_min - y1) / (double)(y2 - y1));
                y = y_min;
            }
            else if (code_out & RIGHT)
            {
                // point is to the right of rectangle
                y = y1 + (int)((double)(y2 - y1) * (double)(x_max - x1) / (double)(x2 - x1));
                x = x_max;
            }
            else if (code_out & LEFT)
            {
                // point is to the left of rectangle
                y = y1 + (int)((double)(y2 - y1) * (double)(x_min - x1) / (double)(x2 - x1));
                x = x_min;
            }

            // Now intersection point x,y is found
            // We replace point outside rectangle
            // by intersection point
            if (code_out == code1)
            {
                x1 = x;
                y1 = y;
                code1 = computeCode(x1, y1);
            }
            else
            {
                x2 = x;
                y2 = y;
                code2 = computeCode(x2, y2);
            }
        }
    }
    if (isInside)
    {
        //If accepted
        //Just reset and draw the boundary and the line
        //Reset the screen and draw the grid

        p1.setX(x1);
        p1.setY(y1);

        p2.setX(x2);
        p2.setY(y2);

        on_dda_button_clicked(255,255,255);
        draw_Window();
    }
    else
    {
        //If not accepted
        //Just reset and draw the boundary
        //Reset the screen and draw the grid
        draw_Window();
    }

}
void MainWindow::on_lineclipping_clicked()
{

    for(int i=0;i<(int)line_endpts.size();i+=2)
    {   int x1 =     line_endpts[i].first;
        int y1 = line_endpts[i].second;
        int x2 = line_endpts[i+1].first;
        int y2 = line_endpts[i+1].second;
        p1.setX(x1);
        p1.setY(y1);
        p2.setX(x2);
        p2.setY(y2);
        on_dda_button_clicked(0,0,0);
        cohenSutherlandClip(x1,y1,x2,y2);
    }

    line_endpts.clear();

}



void MainWindow::on_dda_l_clicked()
{
    on_dda_button_clicked();
    temp1 = p1;
    temp2 = p2;
    line_endpts.push_back({p1.x(),p1.y()});
    line_endpts.push_back({p2.x(),p2.y()});
}



// *********************** POLYGON CLIPPING *************************************
const int MAX_POINTS = 20;

// Returns x-value of point of intersectipn of two
// lines
int MainWindow::x_intersect(int x1, int y1, int x2, int y2,int x3, int y3, int x4, int y4)
{
    y1=ui->frame->height()-y1+1;
    y2=ui->frame->height()-y2+1;
    y3=ui->frame->height()-y3+1;
    y4=ui->frame->height()-y4+1;
    int num = (x1*y2 - y1*x2) * (x3-x4) -
              (x1-x2) * (x3*y4 - y3*x4);
    int den = (x1-x2) * (y3-y4) - (y1-y2) * (x3-x4);
    int retx=num/den;
    return retx;
}

// Returns y-value of point of intersection of
// two lines
int MainWindow:: y_intersect(int x1, int y1, int x2, int y2,int x3, int y3, int x4, int y4)
{
    y1=ui->frame->height()-y1+1;
    y2=ui->frame->height()-y2+1;
    y3=ui->frame->height()-y3+1;
    y4=ui->frame->height()-y4+1;
    int num = (x1*y2 - y1*x2) * (y3-y4) -
              (y1-y2) * (x3*y4 - y3*x4);
    int den = (x1-x2) * (y3-y4) - (y1-y2) * (x3-x4);
    int rety= (ui->frame->height()-num/den+1);
    return rety;
}

// This functions clips all the edges w.r.t one clip
// edge of clipping area
void MainWindow:: clip(int x1, int y1, int x2, int y2)
{
    int poly_size=vertex_list.size()-1;
    int new_poly_size = 0;

    std::vector<std::pair<int,int> > new_points;

    // (ix,iy),(kx,ky) are the co-ordinate values of
    // the points
    for (int i = 0; i < poly_size; i++)
    {
        // i and k form a line in polygon
        int k = (i+1) % poly_size;
        int ix = vertex_list[i].first, iy = vertex_list[i].second;
        int kx = vertex_list[k].first, ky = vertex_list[k].second;

        // Calculating position of first and second point

        int i_pos,k_pos;
        if(x2==x1 && ix>x1) i_pos=1;
        else if(x2==x1 && ix<x1) i_pos=-1;
        else if(y2==y1 && iy<y1) i_pos=1;
        else i_pos=-1;

        if(x2==x1 && kx>x1) k_pos=1;
        else if(x2==x1 && kx<x1) k_pos=-1;
        else if(y2==y1 && ky<y1) k_pos=1;
        else k_pos=-1;

        if(y1>y2||x1>x2)
        {
            i_pos=(-1)*i_pos;
            k_pos=(-1)*k_pos;
        }

        // Case 1 : When both points are inside
        if (i_pos >= 0  && k_pos >= 0)
        {
            //Only second point is added
            new_points.push_back(std::make_pair(kx,ky));
            new_poly_size++;
        }

        // Case 2: When only first point is outside
        else if (i_pos < 0  && k_pos >= 0)
        {
            // Point of intersection with edge
            // and the second point is added

            new_points.push_back(std::make_pair(x_intersect(x1,y1, x2, y2, ix, iy, kx, ky),y_intersect(x1,y1, x2, y2, ix, iy, kx, ky)));
            new_poly_size++;

            new_points.push_back(std::make_pair(kx,ky));
            new_poly_size++;
        }

        // Case 3: When only second point is outside
        else if (i_pos >= 0  && k_pos < 0)
        {
            //Only point of intersection with edge is added

            new_points.push_back(std::make_pair(x_intersect(x1,y1, x2, y2, ix, iy, kx, ky),y_intersect(x1,y1, x2, y2, ix, iy, kx, ky)));
            new_poly_size++;
        }

        // Case 4: When both points are outside
        else
        {
            //No points are added
        }
    }

    // Copying new points into original array
    // and changing the no. of vertices
    poly_size = new_poly_size;
    vertex_list.clear();
    for (int i = 0; i < new_points.size(); i++)
    {
        vertex_list.push_back(new_points[i]);
    }
    vertex_list.push_back(new_points[0]);
}

// Implements Sutherland–Hodgman algorithm
void MainWindow::suthHodgClip()
{
    std::vector<std::pair<int,int> > old_vertex = vertex_list;

    int clipper_size=4;
    //i and k are two consecutive indexes
    for (int i=0; i<clipper_size; i++)
    {
        int k = (i+1) % clipper_size;

        // We pass the current array of vertices, it's size
        // and the end points of the selected clipper line
        clip(clipper_points[i][0],
             clipper_points[i][1], clipper_points[k][0],
             clipper_points[k][1]);
    }

    poly_draw(old_vertex,0,0,0);
    draw_Window(0,255,255);
    poly_draw(vertex_list,255,255,255);
//    draw_Window();
}
void MainWindow::on_polygonclipping_clicked()
{
    suthHodgClip();
}

// -----------------------------------------BEZIER CURVE------------------------------------
std::vector<std::pair<int,int> > BezList;

void MainWindow::on_setbezpoint_clicked()
{
    int k=ui->grid_spin_box->value();
    int x=((ui->frame->x)/k)*k+k/2;
    int y=((ui->frame->y)/k)*k+k/2;
    BezList.push_back(std::make_pair(x,y));

    int i=BezList.size();

    if(BezList.size()>1)
    {
        /*storeEdgeInTable(BezList[i-2].first, BezList[i-2].second, BezList[i-1].first, BezList[i-1].second);*///storage of edges in edge table.

        p1.setX(BezList[BezList.size()-1].first);
        p2.setX(BezList[BezList.size()-2].first);

        p1.setY(BezList[BezList.size()-1].second);
        p2.setY(BezList[BezList.size()-2].second);

        on_dda_button_clicked(0,255,0);

    }
}

void MainWindow::on_clearbezpoint_clicked()
{
    BezList.clear();
}

void MainWindow::on_drawBezierCurve_clicked()
{
    double xu = 0.0 , yu = 0.0 , u = 0.0 ;
    for(u = 0.0 ; u <= 1.0 ; u += 0.001) {
        xu = pow(1-u,3)*BezList[0].first+3*u*pow(1-u,2)*BezList[1].first+3*pow(u,2)*(1-u)*BezList[2].first+pow(u,3)*BezList[3].first;
        yu = pow(1-u,3)*BezList[0].second+3*u*pow(1-u,2)*BezList[1].second+3*pow(u,2)*(1-u)*BezList[2].second+pow(u,3)*BezList[3].second;
        point((int)xu , (int)yu,255,0,0) ;
        delay(10);
    }
}



    // Reflection
    void MainWindow::on_reflection_clicked()
    {
        int i,len=vertex_list.size();

        double dx=p1.x()-p2.x();
        double dy=p1.y()-p2.y();

        double a=-dy;
        double b=dx;
        double c=p1.x()*dy-p1.y()*dx;

        for(i=0;i<len;i++)
        {
            int x1=vertex_list[i].first;
            int y1=vertex_list[i].second;

            vertex_list[i].first=(int)((double)x1-(double)(2*a*(a*x1+b*y1+c))/(double)((a*a+b*b)));
            vertex_list[i].second=(int)((double)y1-(double)(2*b*(a*x1+b*y1+c))/(double)((a*a+b*b)));
        }
        poly_draw(vertex_list,255,255,255);
    }









