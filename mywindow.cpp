#include "mywindow.h"

MyWindow::MyWindow()
{
    this->setGeometry(20,30,400,300);

    //QFont *font = new QFont ("Time",22, true);



    lcd = new QLCDNumber(this);
    lcd->setGeometry(50,50,200,30);
    lcd->display(0);


    btn = new QPushButton(this);
    btn ->setGeometry(200,100,100,30);
    btn->setText("Старт");

   timer = new QTimer (this);
   timer ->setInterval(1000);
   second = 0;




    connect(btn, SIGNAL(clicked(bool)),this, SLOT(say()));
    connect(timer, SIGNAL(timeout()),this, SLOT(time()));


}
 void MyWindow::time() {
second++;
lcd->display(second);
 }
 void MyWindow::say() {
timer ->start();

 }
