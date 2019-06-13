#include "removercliente.h"
#include "ui_removercliente.h"
#include <QMessageBox>
#include <fstream>
#include <iostream>

using namespace std;

removercliente::removercliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::removercliente)
{
    ui->setupUi(this);
}

removercliente::~removercliente()
{
    delete ui;
}
