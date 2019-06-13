#include "mostrarcliente.h"
#include "ui_mostrarcliente.h"
#include "listas.h"
#include <fstream>
#include <iostream>

using namespace std;

MostrarCliente::MostrarCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MostrarCliente)
{
    ui->setupUi(this);
}

MostrarCliente::~MostrarCliente()
{
    delete ui;
}
