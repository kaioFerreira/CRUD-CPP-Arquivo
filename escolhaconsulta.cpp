#include "escolhaconsulta.h"
#include "ui_escolhaconsulta.h"
#include "consultacliente.h"

escolhaconsulta::escolhaconsulta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::escolhaconsulta)
{
    ui->setupUi(this);
}

escolhaconsulta::~escolhaconsulta()
{
    delete ui;
}
