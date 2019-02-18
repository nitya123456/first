#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"second_window.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_click_clicked()
{
    second_window *obj = new second_window();
    obj->show();
    QMessageBox::information(this,"shift","second window");
    this->hide();
}
