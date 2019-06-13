#include "consultacliente.h"
#include "ui_consultacliente.h"
#include <fstream>
#include <QMessageBox>
#include <QString>
#include <iostream>

using namespace std;

consultaCliente::consultaCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::consultaCliente)
{
    ui->setupUi(this);
    ui->lineEdit->setFocus();
}

consultaCliente::~consultaCliente()
{
    delete ui;
}
