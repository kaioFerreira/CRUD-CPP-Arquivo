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
