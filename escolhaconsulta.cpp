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

void escolhaconsulta::on_pushButton_clicked()
{
    consultaCliente ui1;
    ui1.exec();
}

void escolhaconsulta::on_pushButton_4_clicked()
{
    close();
}
