#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "escolhacadastro.h"
#include "escolhaconsulta.h"
#include "mostrarcliente.h"
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
    fstream arquivo;
    arquivo.open("teste.csv");

    string L;

    while(getline(arquivo, L))
    {
        string Nome="";
        cout<<L<<endl;
        for(int i=5; i<(int)L.size(); i++)
        {
            if(L[i]==';')
            {
                for(int j=i+1; L[j]!=';';j++)
                    Nome +=L[j];

                break;
            }

        }

        cout<<endl<<Nome<<endl;
        ui->listWidget->addItem(QString::fromStdString(Nome));
    }
}

void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index)
{
    MostrarCliente ui1(index.row());
    ui1.exec();
}
