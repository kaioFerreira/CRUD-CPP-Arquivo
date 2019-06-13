#include "escolharemover.h"
#include "ui_escolharemover.h"
#include "removercliente.h"

escolharemover::escolharemover(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::escolharemover)
{
    ui->setupUi(this);
}

escolharemover::~escolharemover()
{
    delete ui;
}
