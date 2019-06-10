#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "escolhacadastro.h"
#include "escolhaconsulta.h"

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

void MainWindow::on_pushButton_clicked()
{
    EscolhaCadastro ui1;
    ui1.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    close();
}

void MainWindow::on_pushButton_4_clicked()
{
    escolhaconsulta ui1;
    ui1.exec();
}
