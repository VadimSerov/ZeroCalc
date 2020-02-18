#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//
void MainWindow::on_pushButton_clicked()
{
    double x = ui->lineEdit->text().toDouble();
    double y = ui->lineEdit_2->text().toDouble();
    ui->label->setText(QString::number(x+y,'g',15));
}

void MainWindow::on_pushButton_2_clicked()
{
    double x = ui->lineEdit->text().toDouble();
    double y = ui->lineEdit_2->text().toDouble();
    ui->label->setText(QString::number(x-y,'g',15));
}

void MainWindow::on_pushButton_3_clicked()
{
    double x = ui->lineEdit->text().toDouble();
    double y = ui->lineEdit_2->text().toDouble();
    ui->label->setText(QString::number(x*y,'g',15));
}

void MainWindow::on_pushButton_4_clicked()
{
    double x = ui->lineEdit->text().toDouble();
    double y = ui->lineEdit_2->text().toDouble();
    if(y!=0){
        ui->label->setText(QString::number(x/y,'g',15));
    } else {
        ui->label->setText("Infinity");
    }
}
