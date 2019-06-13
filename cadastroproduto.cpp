#include "ui_cadastroproduto.h"
#include "cadastroproduto.h"
#include "QMessageBox"
#include <QString>
#include "produto.h"
#include <fstream>

cadastroProduto::cadastroProduto(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::cadastroProduto)
{
  ui->setupUi(this);
}

cadastroProduto::~cadastroProduto()
{
    delete ui;
}
