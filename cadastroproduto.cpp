#include "ui_cadastroproduto.h"
#include "cadastroproduto.h"
#include "QMessageBox"
#include <QString>
#include "produto.h"
#include <fstream>

bool OP;

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

void cadastroProduto::on_pushButton_2_clicked()
{

}

bool cadastroProduto::ValidadorCodigo(string Aux)
{
    cout<<Aux<<endl;
    string Obj;
    fstream ARQ;
    int j,a;

    if((int)Aux[3] <= 57 && (int)Aux[3] >= 48)return false;
    for(j = 0, a = 0 ; j < 3 ; j++)
    {
        if((int)Aux[j]>57 || (int)Aux[j] < 48)
        {
            OP = true;
            return false;
        }
    }

    ARQ.open("Produtoasdasd.txt",ios::in | ios::out | ios::app);
    ARQ.seekg(0);

    while(getline(ARQ,Obj))
    {
        //ARQ.read((char*)&Obj,sizeof(Produto));
        char CodigoObj[3];
        CodigoObj[0] = Obj[0];
        CodigoObj[1] = Obj[1];
        CodigoObj[2] = Obj[2];
        //cout<<'*'<<CodigoObj[0]<<CodigoObj[1]<<CodigoObj[2]<<'*'<<endl;
        int i;
        for(i = 0 ; i < 3 ; i ++)
            if(Aux[i] !=CodigoObj[i])break;

        if(i == 3)
        {
            ARQ.close();
            return false;
        }
    }
    ARQ.close();
    return true;
}

void cadastroProduto::on_BtnVertificadorCD_clicked()
{
    OP = false;
    if(ValidadorCodigo(ui->leCodigo->text().toStdString()))//Codigo Valido
    {
        ui->lePreco->setEnabled(true);
        ui->leQuantidade->setEnabled(true);
        ui->leDEscricao->setEnabled(true);
        ui->BtnCadastrar->setEnabled(true);

    }
    else
    {
        if(OP)
        {
            QMessageBox::warning(this,"Aviso","Codigo deve ser composto por 3 números.");
        }
        else QMessageBox::warning(this,"ERRO","Código já cadastrado ou não possui apenas 3 caracteres.");
    }
}

void cadastroProduto::on_BtnCadastrar_clicked()
{
    fstream ARQ;
    Produto Obj;

    string Verifica;

    Verifica = ui->lePreco->text().toStdString();
    bool ponto = true;
    int i;

    for(i = 0 ; i < (int)sizeof(Verifica) ; i++)
    {
        if(Verifica[i] == '.')
        {
            if(ponto)
            {
                ponto = false;
            }
            else break;
        }
        if(Verifica[i]==',')break;
    }

    if(i != (int)sizeof(Verifica))
    {
        QMessageBox::warning(this,"ERRO","No campo preço utilize apenas um '.', e números.");
        return;
    }


    ARQ.open("Produtoasdasd.txt",ios::out | ios::app);

    float AAAA = ui->lePreco->text().toFloat();
    cout<<AAAA<<endl;
    Obj.setCodigo(ui->leCodigo->text().toStdString());
    Obj.setDescricao(ui->leDEscricao->text().toStdString());
    Obj.setPreco(ui->lePreco->text().toFloat());
    Obj.setQuantidade(ui->leQuantidade->text().toInt());

    ARQ.seekg(ARQ.end);

    char Flag = '#';
    ARQ << Obj.getCodigo();
    ARQ << Flag;
    ARQ << Obj.getPreco();
    ARQ << Flag;
    ARQ << Obj.getQuantidade();
    ARQ << Flag;
    ARQ << Obj.getDescricao();
    ARQ << Flag <<endl;
    ARQ.close();


    QMessageBox::information(this," ","Produto cadastrado com sucesso.");
     close();

    /*
    ARQ.close();
    fstream ARQ1;
    ARQ1.open("Produtoasdasd.txt",ios::in |ios::out | ios::app);
    ARQ1.seekg(0);
    string Ana;

    while(getline(ARQ1, Ana))
    {
     cout<<"*"<<Ana<<"*"<<endl;

    }

    ARQ1.close();
    */
}
