#include "second_window.h"
#include "ui_second_window.h"
#include"mainwindow.h"
#include<QMessageBox>

second_window::second_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::second_window)
{
    ui->setupUi(this);
}

second_window::~second_window()
{
    delete ui;
}

void second_window::on_pushButton_clicked()
{
    MainWindow *fobj= new MainWindow();
    fobj->show();
    QMessageBox::information(this,"shift","Back to First window");
    this->hide();
}
