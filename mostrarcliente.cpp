#include "mostrarcliente.h"
#include "ui_mostrarcliente.h"

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
