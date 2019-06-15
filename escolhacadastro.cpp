#include "escolhacadastro.h"
#include "ui_escolhacadastro.h"
#include "cadastro.h"
#include "cadastroproduto.h"

EscolhaCadastro::EscolhaCadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EscolhaCadastro)
{
    ui->setupUi(this);
}

EscolhaCadastro::~EscolhaCadastro()
{
    delete ui;
}

void EscolhaCadastro::on_pushButtonFechar_clicked()
{
    close();
}

void EscolhaCadastro::on_pushButtonCliente_clicked()
{
    Cadastro ui1;
    ui1.exec();
}
