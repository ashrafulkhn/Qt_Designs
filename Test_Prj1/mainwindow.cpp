#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_pushButton_clicked()
{
    ui->serv_status->setText("Subscribed to Server");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText("Motor Started");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->label->setText("Motor Stoped");
}

void MainWindow::on_actionExit_triggered()
{

}

