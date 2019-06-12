#include "consultacliente.h"
#include "ui_consultacliente.h"
#include <fstream>
#include <QMessageBox>
#include <QString>
#include <iostream>

using namespace std;

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
    arquivo.open("Clientes.csv");

    std::string l, L;
    int i;
    QString cod="", cpfCnpj="", nomeRazao="", telefone="", ddd="", logradouro="", setor="", cidade="", estado="",
            email="", cel="", nomeContato="";

    l= ui->lineEdit->text().toStdString();

    if(arquivo.is_open())
    {
        while(getline(arquivo, L))
            if(L.at(0) == l.at(0) && L.at(1) == l.at(1) && L.at(2) == l.at(2))
            {
                for(i=0; L[i]!=';'; i++)//Pega o Codigo
                {
                    cod += L[i];
                }

                QTableWidgetItem *c= new QTableWidgetItem(cod);
                ui->tableWidget->setItem(0,0,c);

                for(i=i+1; L[i]!=';'; i++)//Pega o CPF ou CNPJ
                {
                    cpfCnpj += L[i];
                }

                QTableWidgetItem *cf= new QTableWidgetItem(cpfCnpj);
                ui->tableWidget->setItem(1,0,cf);

                if(L.at(15) == ';')//Executa se for CPF
                {
                    for(i=16; L[i]!= ';'; i++)//Pega o Nome
                    {
                        nomeRazao += L[i];
                    }
                    QTableWidgetItem *n= new QTableWidgetItem(nomeRazao);
                    ui->tableWidget->setItem(2,0,n);

                    for(i=i+1; L[i]!= ';'; i++)//Pega o Celular
                    {
                        cel += L[i];
                    }
                    QTableWidgetItem *celu= new QTableWidgetItem(cel);
                    ui->tableWidget->setItem(3,0,celu);

                    QTableWidgetItem *nul= new QTableWidgetItem("--------------------------");
                    ui->tableWidget->setItem(4,0,nul);

                    for(i=i+1; L[i]!= ';'; i++)//Pega o Telefone
                    {
                        telefone += L[i];
                    }
                    QTableWidgetItem *tel= new QTableWidgetItem(telefone);
                    ui->tableWidget->setItem(5,0,tel);

                    for(i=i+1; L[i]!= ';'; i++)//Pega o Logradouro
                    {
                        logradouro += L[i];
                    }
                    QTableWidgetItem *log= new QTableWidgetItem(logradouro);
                    ui->tableWidget->setItem(6,0,log);

                    for(i=i+1; L[i]!= ';'; i++)//Pega o Setor / Bairro
                    {
                        setor += L[i];
                    }
                    QTableWidgetItem *se= new QTableWidgetItem(setor);
                    ui->tableWidget->setItem(7,0,se);

                    for(i=i+1; L[i]!= ';'; i++)//Pega a Cidade
                    {
                        cidade += L[i];
                    }
                    QTableWidgetItem *city= new QTableWidgetItem(cidade);
                    ui->tableWidget->setItem(8,0,city);

                    for(i=i+1; L[i]!= ';'; i++)//Pega o Estado
                    {
                        estado += L[i];
                    }
                    QTableWidgetItem *esta= new QTableWidgetItem(estado);
                    ui->tableWidget->setItem(9,0,esta);

                    for(i=i+1; L[i]!= ';'; i++)//Pega o Email
                    {
                        email += L[i];
                    }
                    QTableWidgetItem *em= new QTableWidgetItem(email);
                    ui->tableWidget->setItem(10,0,em);
                }
               else//Executa se for CNPJ
                {
                    for(i=19; L[i]!= ';'; i++)
                    {
                        nomeRazao += L[i];
                    }
                    QTableWidgetItem *nf= new QTableWidgetItem(nomeRazao);
                    ui->tableWidget->setItem(2,0,nf);

                    for(i=i+1; L[i]!= ';'; i++)//Pega o Nome de Contato
                    {
                        nomeContato += L[i];
                    }
                    QTableWidgetItem *nome= new QTableWidgetItem(nomeContato);
                    ui->tableWidget->setItem(4,0,nome);

                    QTableWidgetItem *nul= new QTableWidgetItem("--------------------------");
                    ui->tableWidget->setItem(3,0,nul);

                    for(i=i+1; L[i]!= ';'; i++)//Pega o Telefone
                    {
                        telefone += L[i];
                    }
                    QTableWidgetItem *tel= new QTableWidgetItem(telefone);
                    ui->tableWidget->setItem(5,0,tel);

                    for(i=i+1; L[i]!= ';'; i++)//Pega o Logradouro
                    {
                        logradouro += L[i];
                    }
                    QTableWidgetItem *log= new QTableWidgetItem(logradouro);
                    ui->tableWidget->setItem(6,0,log);

                    for(i=i+1; L[i]!= ';'; i++)//Pega o Setor / Bairro
                    {
                        setor += L[i];
                    }
                    QTableWidgetItem *se= new QTableWidgetItem(setor);
                    ui->tableWidget->setItem(7,0,se);

                    for(i=i+1; L[i]!= ';'; i++)//Pega a Cidade
                    {
                        cidade += L[i];
                    }
                    QTableWidgetItem *city= new QTableWidgetItem(cidade);
                    ui->tableWidget->setItem(8,0,city);

                    for(i=i+1; L[i]!= ';'; i++)//Pega o Estado
                    {
                        estado += L[i];
                    }
                    QTableWidgetItem *esta= new QTableWidgetItem(estado);
                    ui->tableWidget->setItem(9,0,esta);

                    for(i=i+1; L[i]!= ';'; i++)//Pega o Email
                    {
                        email += L[i];
                    }
                    QTableWidgetItem *em= new QTableWidgetItem(email);
                    ui->tableWidget->setItem(10,0,em);
                }
                ui->tableWidget->horizontalHeader()->resizeSections(QHeaderView::ResizeToContents);

            }
    }
    else {
        QMessageBox::warning(this, "ERRO", "CODIGO NÃO REGISTRADO!!");
        return;
    }
}

void consultaCliente::on_pushButton_2_clicked()
{
    close();
}
