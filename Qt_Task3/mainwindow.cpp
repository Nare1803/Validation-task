#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QIntValidator>
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QIntValidator* roll = new QIntValidator(1,10000000);
    ui->lineEdit_3->setValidator(roll);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->lineEdit->text().isEmpty()  || ui->lineEdit_3->text().isEmpty()){
        QMessageBox::warning(this,"Validation error","Warning message !!");
    }
    else {
      this-> close();
    }
}

