#include "listas.h"
#include "ui_listas.h"
#include "fstream"
#include "mostrarcliente.h"
#include <iostream>

using namespace std;

Listas::Listas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Listas)
{
    ui->setupUi(this);
}

Listas::~Listas()
{
    delete ui;
}
