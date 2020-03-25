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
    if(ui->pushButton_8->text()=="<<")
     {int i=27;
     QPropertyAnimation *animation = new QPropertyAnimation(ui->pushButton,"pos");
     animation->setDuration(1000);
     animation->setStartValue(QPoint(608,113));
     animation->setEndValue(QPoint(i,113));
     animation->setEasingCurve(QEasingCurve::InOutBack);
     animation->start(QAbstractAnimation::DeleteWhenStopped);

     i+=83;
     animation = new QPropertyAnimation(ui->pushButton_2,"pos");
     animation->setDuration(1000);
     animation->setStartValue(QPoint(608,113));
     animation->setEndValue(QPoint(i,113));
     animation->setEasingCurve(QEasingCurve::InOutBack);
     animation->start(QAbstractAnimation::DeleteWhenStopped);

     i+=83;
     animation = new QPropertyAnimation(ui->pushButton_3,"pos");
     animation->setDuration(1000);
     animation->setStartValue(QPoint(608,113));
     animation->setEndValue(QPoint(i,113));
     animation->setEasingCurve(QEasingCurve::InOutBack);
     animation->start(QAbstractAnimation::DeleteWhenStopped);

     i+=83;
     animation = new QPropertyAnimation(ui->pushButton_4,"pos");
     animation->setDuration(1000);
     animation->setStartValue(QPoint(608,113));
     animation->setEndValue(QPoint(i,113));
     animation->setEasingCurve(QEasingCurve::InOutBack);
     animation->start(QAbstractAnimation::DeleteWhenStopped);
     i+=83;
     animation = new QPropertyAnimation(ui->pushButton_5,"pos");
     animation->setDuration(1000);
     animation->setStartValue(QPoint(608,113));
     animation->setEndValue(QPoint(i,113));
     animation->setEasingCurve(QEasingCurve::InOutBack);
     animation->start(QAbstractAnimation::DeleteWhenStopped);
     i+=83;
     animation = new QPropertyAnimation(ui->pushButton_6,"pos");
     animation->setDuration(1000);
     animation->setStartValue(QPoint(608,113));
     animation->setEndValue(QPoint(i,113));
     animation->setEasingCurve(QEasingCurve::InOutBack);
     animation->start(QAbstractAnimation::DeleteWhenStopped);
     i+=83;
     animation = new QPropertyAnimation(ui->pushButton_7,"pos");
     animation->setDuration(1000);
     animation->setStartValue(QPoint(608,113));
     animation->setEndValue(QPoint(i,113));
     animation->setEasingCurve(QEasingCurve::InOutBack);
     animation->start(QAbstractAnimation::DeleteWhenStopped);
    ui->pushButton_8->setText(">>");}
    else
    {
        int i=27;
    QPropertyAnimation *animation = new QPropertyAnimation(ui->pushButton,"pos");
    animation->setDuration(1000);
    animation->setStartValue(QPoint(i,113));
    animation->setEndValue(QPoint(608,113));
    animation->setEasingCurve(QEasingCurve::InOutBack);
    animation->start(QAbstractAnimation::DeleteWhenStopped);

    i+=83;
    animation = new QPropertyAnimation(ui->pushButton_2,"pos");
    animation->setDuration(1000);
    animation->setStartValue(QPoint(i,113));
    animation->setEndValue(QPoint(608,113));
    animation->setEasingCurve(QEasingCurve::InOutBack);
    animation->start(QAbstractAnimation::DeleteWhenStopped);

    i+=83;
    animation = new QPropertyAnimation(ui->pushButton_3,"pos");
    animation->setDuration(1000);
    animation->setStartValue(QPoint(i,113));
    animation->setEndValue(QPoint(608,113));
    animation->setEasingCurve(QEasingCurve::InOutBack);
    animation->start(QAbstractAnimation::DeleteWhenStopped);

    i+=83;
    animation = new QPropertyAnimation(ui->pushButton_4,"pos");
    animation->setDuration(1000);
    animation->setStartValue(QPoint(i,113));
    animation->setEndValue(QPoint(608,113));
    animation->setEasingCurve(QEasingCurve::InOutBack);
    animation->start(QAbstractAnimation::DeleteWhenStopped);
    i+=83;
    animation = new QPropertyAnimation(ui->pushButton_5,"pos");
    animation->setDuration(1000);
    animation->setStartValue(QPoint(i,113));
    animation->setEndValue(QPoint(608,113));
    animation->setEasingCurve(QEasingCurve::InOutBack);
    animation->start(QAbstractAnimation::DeleteWhenStopped);
    i+=83;
    animation = new QPropertyAnimation(ui->pushButton_6,"pos");
    animation->setDuration(1000);
    animation->setStartValue(QPoint(i,113));
    animation->setEndValue(QPoint(608,113));
    animation->setEasingCurve(QEasingCurve::InOutBack);
    animation->start(QAbstractAnimation::DeleteWhenStopped);
    i+=83;
    animation = new QPropertyAnimation(ui->pushButton_7,"pos");
    animation->setDuration(1000);
    animation->setStartValue(QPoint(i,113));
    animation->setEndValue(QPoint(608,113));
    animation->setEasingCurve(QEasingCurve::InOutBack);
    animation->start(QAbstractAnimation::DeleteWhenStopped);

    ui->pushButton_8->setText("<<");
    }
 }
