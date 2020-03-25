#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPropertyAnimation>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(MoveOut()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::MoveOut()
{
    int i=39;//first x
    int x=620;// last x
    int y=40;
    int j=83;//增量
    if(ui->pushButton_8->text()=="<<")
    {
        QPropertyAnimation *animation = new QPropertyAnimation(ui->pushButton,"pos");
        animation->setDuration(1000);
        animation->setStartValue(QPoint(x,y));
        animation->setEndValue(QPoint(i,y));
        animation->setEasingCurve(QEasingCurve::InOutBack);
        animation->start(QAbstractAnimation::DeleteWhenStopped);

        i+=j;
        animation = new QPropertyAnimation(ui->pushButton_2,"pos");
        animation->setDuration(1000);
        animation->setStartValue(QPoint(x,y));
        animation->setEndValue(QPoint(i,y));
        animation->setEasingCurve(QEasingCurve::InOutBack);
        animation->start(QAbstractAnimation::DeleteWhenStopped);

        i+=j;
        animation = new QPropertyAnimation(ui->pushButton_3,"pos");
        animation->setDuration(1000);
        animation->setStartValue(QPoint(x,y));
        animation->setEndValue(QPoint(i,y));
        animation->setEasingCurve(QEasingCurve::InOutBack);
        animation->start(QAbstractAnimation::DeleteWhenStopped);

        i+=j;
        animation = new QPropertyAnimation(ui->pushButton_4,"pos");
        animation->setDuration(1000);
        animation->setStartValue(QPoint(x,y));
        animation->setEndValue(QPoint(i,y));
        animation->setEasingCurve(QEasingCurve::InOutBack);
        animation->start(QAbstractAnimation::DeleteWhenStopped);
        i+=j;
        animation = new QPropertyAnimation(ui->pushButton_5,"pos");
        animation->setDuration(1000);
        animation->setStartValue(QPoint(x,y));
        animation->setEndValue(QPoint(i,y));
        animation->setEasingCurve(QEasingCurve::InOutBack);
        animation->start(QAbstractAnimation::DeleteWhenStopped);
        i+=j;
        animation = new QPropertyAnimation(ui->pushButton_6,"pos");
        animation->setDuration(1000);
        animation->setStartValue(QPoint(x,y));
        animation->setEndValue(QPoint(i,y));
        animation->setEasingCurve(QEasingCurve::InOutBack);
        animation->start(QAbstractAnimation::DeleteWhenStopped);
        i+=j;
        animation = new QPropertyAnimation(ui->pushButton_7,"pos");
        animation->setDuration(1000);
        animation->setStartValue(QPoint(x,y));
        animation->setEndValue(QPoint(i,y));
        animation->setEasingCurve(QEasingCurve::InOutBack);
        animation->start(QAbstractAnimation::DeleteWhenStopped);

        ui->widget_Keyboard->setAutoFillBackground(true);//以防看不清
        ui->pushButton_8->setText(">>");}
    else
    {
       ui->widget_Keyboard->setAutoFillBackground(false);//以防看不清

        QPropertyAnimation *animation = new QPropertyAnimation(ui->pushButton,"pos");
        animation->setDuration(1000);
        animation->setStartValue(QPoint(i,y));
        animation->setEndValue(QPoint(x,y));
        animation->setEasingCurve(QEasingCurve::InOutBack);
        animation->start(QAbstractAnimation::DeleteWhenStopped);

        i+=j;
        animation = new QPropertyAnimation(ui->pushButton_2,"pos");
        animation->setDuration(1000);
        animation->setStartValue(QPoint(i,y));
        animation->setEndValue(QPoint(x,y));
        animation->setEasingCurve(QEasingCurve::InOutBack);
        animation->start(QAbstractAnimation::DeleteWhenStopped);

        i+=j;
        animation = new QPropertyAnimation(ui->pushButton_3,"pos");
        animation->setDuration(1000);
        animation->setStartValue(QPoint(i,y));
        animation->setEndValue(QPoint(x,y));
        animation->setEasingCurve(QEasingCurve::InOutBack);
        animation->start(QAbstractAnimation::DeleteWhenStopped);

        i+=j;
        animation = new QPropertyAnimation(ui->pushButton_4,"pos");
        animation->setDuration(1000);
        animation->setStartValue(QPoint(i,y));
        animation->setEndValue(QPoint(x,y));
        animation->setEasingCurve(QEasingCurve::InOutBack);
        animation->start(QAbstractAnimation::DeleteWhenStopped);
        i+=j;
        animation = new QPropertyAnimation(ui->pushButton_5,"pos");
        animation->setDuration(1000);
        animation->setStartValue(QPoint(i,y));
        animation->setEndValue(QPoint(x,y));
        animation->setEasingCurve(QEasingCurve::InOutBack);
        animation->start(QAbstractAnimation::DeleteWhenStopped);
        i+=j;
        animation = new QPropertyAnimation(ui->pushButton_6,"pos");
        animation->setDuration(1000);
        animation->setStartValue(QPoint(i,y));
        animation->setEndValue(QPoint(x,y));
        animation->setEasingCurve(QEasingCurve::InOutBack);
        animation->start(QAbstractAnimation::DeleteWhenStopped);
        i+=j;
        animation = new QPropertyAnimation(ui->pushButton_7,"pos");
        animation->setDuration(1000);
        animation->setStartValue(QPoint(i,y));
        animation->setEndValue(QPoint(x,y));
        animation->setEasingCurve(QEasingCurve::InOutBack);
        animation->start(QAbstractAnimation::DeleteWhenStopped);

        ui->pushButton_8->setText("<<");
    }
}
