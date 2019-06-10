#include "consultacliente.h"
#include "ui_consultacliente.h"
#include <fstream>
#include <QMessageBox>
#include <QString>

consultaCliente::consultaCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::consultaCliente)
{
    ui->setupUi(this);
    ui->lineEdit->setFocus();
}

consultaCliente::~consultaCliente()
{
    delete ui;
}

void consultaCliente::on_pushButton_clicked()
{
    std::fstream arquivo;
    arquivo.open("teste.csv");

    std::string l, L;
    int i;
    QString cod="", cpfCnpj="", nomeRazao="", telefone="", ddd="", logradouro="", setor="", cidade="", estado="", email="";

    l= ui->lineEdit->text().toStdString();

    if(arquivo.is_open())
    {
        while(getline(arquivo, L))
            if(L.at(0) == l.at(0) && L.at(1) == l.at(1) && L.at(2) == l.at(2))
            {
                for(i=0; i<3; i++)
                {
                    cod += L[i];
                }
                QTableWidgetItem *c= new QTableWidgetItem(cod);
                ui->tableWidget->setItem(0,0,c);

                for(i=5; i<';'; i++)
                {
                    if(L[i] == ';')break;
                    cpfCnpj += L[i];
                }
                QTableWidgetItem *cf= new QTableWidgetItem(cpfCnpj);
                ui->tableWidget->setItem(1,0,cf);

                if(L.at(16) == ';')
                {
                    for(i=18; i<';'; i++)
                    {
                        if(L[i] == ';')break;
                        nomeRazao += L[i];
                    }
                    QTableWidgetItem *n= new QTableWidgetItem(nomeRazao);
                    ui->tableWidget->setItem(2,0,n);
                }
                if(L.at(19) == ';')
                {
                    for(i=21; i<';'; i++)
                    {
                        if(L[i] == ';')break;
                        nomeRazao += L[i];
                    }
                    QTableWidgetItem *nf= new QTableWidgetItem(nomeRazao);
                    ui->tableWidget->setItem(2,0,nf);
                }
            }
    }
    else {
        QMessageBox::warning(this, "ERRO", "DADOS INCOMPLETOS!!!");
        return;
    }
}

void consultaCliente::on_pushButton_2_clicked()
{
    close();
}
