#include "cadastro.h"
#include "ui_cadastro.h"
#include <fstream>
#include <QMessageBox>

Cadastro::Cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cadastro)
{
    ui->setupUi(this);
    ui->lineEditCod->setFocus();
    ui->lineEditCPFouCPNJ->setDisabled(true);
    ui->lineEditNome->setDisabled(true);
    ui->lineEditTelefone->setDisabled(true);
    ui->lineEditDDD->setDisabled(true);
    ui->lineEditLogradouro->setDisabled(true);
    ui->lineEditSetor->setDisabled(true);
    ui->lineEditCidade->setDisabled(true);
    ui->lineEditEstado->setDisabled(true);
    ui->lineEditEmail->setDisabled(true);
    ui->lineEditCelular->setDisabled(true);
    ui->lineEditNomeContato->setDisabled(true);
    ui->lineEditDDD2->setDisabled(true);
}

Cadastro::~Cadastro()
{
    delete ui;
}

