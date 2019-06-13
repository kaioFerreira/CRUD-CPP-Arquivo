#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "escolhacadastro.h"
#include "escolhaconsulta.h"
#include "mostrarcliente.h"
#include "escolharemover.h"
#include "listas.h"
#include <fstream>
#include <iostream>

using namespace std;

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

void MainWindow::on_pushButton_5_clicked()
{
   Listas ui1;
   ui1.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    escolharemover ui1;
    ui1.exec();
}
