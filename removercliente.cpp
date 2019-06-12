#include "removercliente.h"
#include "ui_removercliente.h"
#include <QMessageBox>
#include <fstream>
#include <iostream>

using namespace std;

removercliente::removercliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::removercliente)
{
    ui->setupUi(this);
}

removercliente::~removercliente()
{
    delete ui;
}

void removercliente::on_pushButton_clicked()
{
    fstream arquivo;
    arquivo.open("Clientes.csv");

    fstream Arquivo;
    Arquivo.open("Clientes.csv");

    string cod, L, l, aux;
    int i;

    cod= ui->lineEdit->text().toStdString();

    while(getline(arquivo, L))
    {
        cout<<"NAO"<<endl;
        l="";
        aux="";
        if(L.at(0) != cod.at(0) && L.at(1) != cod.at(1) && L.at(2) != cod.at(2))
        {
            for(i=0; i<';'; i++)
            {
                l += L[i];
                if(l.size() == L.size())
                {
                    aux= l;
                }
            }
        }
        if(L.at(0) == cod.at(0) && L.at(1) == cod.at(1) && L.at(2) == cod.at(2))
        {
            QMessageBox::warning(this,"AVISO","Tem Certeza que Deseja Remover Este Cliente?");
            break;
        }
        Arquivo<<aux;
    }

    arquivo.close();
    Arquivo.close();

}
