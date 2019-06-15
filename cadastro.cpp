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


void Cadastro::on_pushButtonVerificaCod_clicked()
{
    Cliente *cod= new Cliente;
    int c;
    string l;
    c= ui->lineEditCod->text().toInt();
    l= ui->lineEditCod->text().toStdString();
    cod->setCodigo(c);

    if(cl->inserir(cod))
    {
        if(l.size() < 3)
        {
            QMessageBox::warning(this, "ERRO", "O CODIGO DEVE SER DE 3 DIGITOS!!");
            ui->lineEditCod->setFocus();
            ui->lineEditCod->selectAll();
            return;
        }
        ui->lineEditCPFouCPNJ->setEnabled(true);
        ui->lineEditCPFouCPNJ->setFocus();
    }
    else
    {
        QMessageBox::warning(this, "ERRO", "CODIGO JÁ CADASTRADO");
        ui->lineEditCod->setFocus();
        ui->lineEditCod->selectAll();
    }
}

void Cadastro::on_pushButtonFechar_clicked()
{
    close();
}

void Cadastro::on_pushButtonVerifica_clicked()
{
    PessoaFisica *CPF = new PessoaFisica;
    PessoaJuridica *CNPJ = new PessoaJuridica;
    string l;

    l = ui->lineEditCPFouCPNJ->text().toStdString();

    if(l.size() == 11)
    {
        if(pf->validaCPF(l))
        {
            CPF->setCPF(l);
            ui->lineEditCPFouCPNJ->setEnabled(true);
            ui->lineEditCPFouCPNJ->setFocus();
            else
            {
                QMessageBox::warning(this, "ERRO", "CPF JÁ CADASTRADO");
                ui->lineEditCod->setFocus();
                ui->lineEditCod->selectAll();
            }
        }
        else
        {
            QMessageBox::warning(this, "ERRO", "CPF INVALIDO!!!");
            ui->lineEditCod->setFocus();
            ui->lineEditCod->selectAll();
        }

    }
    if(l.size() == 14)
    {
        CNPJ->setCNPJ(l);
        if(l.size() < 3)
        {
            QMessageBox::warning(this, "ERRO", "O CODIGO DEVE SER DE 3 DIGITOS!!");
            ui->lineEditCod->setFocus();
            ui->lineEditCod->selectAll();
            return;
        }
        ui->lineEditCPFouCPNJ->setEnabled(true);
        ui->lineEditCPFouCPNJ->setFocus();
    }
    else
    {
        QMessageBox::warning(this, "ERRO", "CODIGO JÁ CADASTRADO");
        ui->lineEditCod->setFocus();
        ui->lineEditCod->selectAll();
    }
    }
}
