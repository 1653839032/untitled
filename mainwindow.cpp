#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "HDevThread.h"
#include "HalconCpp.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
void fun()
{
	qDebug()<<"老狗";
}
MainWindow::~MainWindow()
{
    delete ui;
}
