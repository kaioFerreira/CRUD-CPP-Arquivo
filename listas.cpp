#include "listas.h"
#include "ui_listas.h"
#include "fstream"
#include "mostrarcliente.h"
#include <iostream>

using namespace std;

Listas::Listas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Listas)
{
    ui->setupUi(this);

    fstream arquivo;
        arquivo.open("Clientes.csv");

        string L;

        while(getline(arquivo, L))
        {
            string Nome="";
            cout<<L<<endl;
            for(int i=5; i<(int)L.size(); i++)
            {
                if(L[i]==';')
                {
                    for(int j=i+1; L[j]!=';';j++)
                        Nome +=L[j];

                    break;
                }

            }

            cout<<endl<<Nome<<endl;
            ui->listWidget->addItem(QString::fromStdString(Nome));
        }
}

Listas::~Listas()
{
    delete ui;
}

void Listas::on_listWidget_doubleClicked(const QModelIndex &index)
{
    MostrarCliente M(index.row());
    M.exec ();
}
