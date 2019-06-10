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

void EscolhaCadastro::on_pushButtonCliente_clicked()
{
    Cadastro ui1;
    ui1.exec();
}

void EscolhaCadastro::on_pushButtonProduto_clicked()
{
    cadastroProduto ui;
    ui.exec();
}

void EscolhaCadastro::on_pushButtonPedido_clicked()
{

}

void EscolhaCadastro::on_pushButtonFechar_clicked()
{
    close();
}
