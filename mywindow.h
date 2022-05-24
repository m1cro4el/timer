#ifndef MYWINDOW_H
#define MYWINDOW_H
#include<QObject>
#include<QWidget>
#include<QLabel>
#include<QFont>
#include<QLineEdit>
#include<QPushButton>
#include<QMessageBox>
#include <QLCDNumber>
#include <QTimer>
class MyWindow : public QWidget
{
    Q_OBJECT
private:
    QLCDNumber *lcd;
    QPushButton *btn;
    QTimer *timer;
    int second;
public:
    MyWindow();
public slots:
    void time();
    void say();

};

#endif // MYWINDOW_H
