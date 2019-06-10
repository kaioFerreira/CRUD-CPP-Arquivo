#include "cadastro.h"
#include "ui_cadastro.h"
#include <fstream>
#include <QMessageBox>

Cadastro::Cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cadastro)
{
    ui->setupUi(this);
    ui->lineEditCod->setFocus();
    ui->lineEditCPFouCPNJ->setDisabled(true);
    ui->lineEditNome->setDisabled(true);
    ui->lineEditTelefone->setDisabled(true);
    ui->lineEditDDD->setDisabled(true);
    ui->lineEditLogradouro->setDisabled(true);
    ui->lineEditSetor->setDisabled(true);
    ui->lineEditCidade->setDisabled(true);
    ui->lineEditEstado->setDisabled(true);
    ui->lineEditEmail->setDisabled(true);
    ui->lineEditCelular->setDisabled(true);
    ui->lineEditNomeContato->setDisabled(true);
    ui->lineEditDDD2->setDisabled(true);

    QMessageBox::warning(this,"AVISO","INSIRA OS DADOS A SEGUIR CORRETAMENTE");
}

Cadastro::~Cadastro()
{
    delete ui;
}

void Cadastro::on_pushButtonVerifica_clicked()
{
    string l, L, compara, compara2;
    int i, j;

    l= ui->lineEditCPFouCPNJ->text().toStdString();

    if(l.size()==11)
    {
        PessoaFisica *CPF = new PessoaFisica;
        CPF->setCPF(l);
        if(cpf->validaCPF(l))
        {
            ifstream arquivo;
            arquivo.open("teste.csv");

            if(arquivo.is_open())
            {
                while(getline(arquivo, L))
                {
                    compara = "";
                    for(i=5; i<16; i++)
                    {
                        compara += L[i];
                    }
                    cout<<compara<<"&"<<endl;
                    if(compara == l)
                    {
                        cout<<l<<"=="<<compara<<endl;
                        QMessageBox::warning(this,"ERRO","ESTE CPF JÁ EXISTE!!");
                        ui->lineEditCPFouCPNJ->setFocus();
                        ui->lineEditCPFouCPNJ->selectAll();
                        break;
                    }
                    if(compara != l)
                    {
                        cout<<l<<"!="<<compara<<endl;
                        while(getline(arquivo, L))
                        {
                            compara2 = "";
                            for(j=5; j<16; j++)
                            {
                                compara2 += L[j];
                            }
                            cout<<l<<"COMP"<<compara2<<endl;
                            if(l == compara2 || compara == compara2)
                            {
                                QMessageBox::warning(this,"ERRO","ESTE CPF JÁ EXISTE!!");
                                ui->lineEditCPFouCPNJ->setFocus();
                                ui->lineEditCPFouCPNJ->selectAll();
                                break;
                            }
                        }
                        if(compara2 != l)
                        {
                            cout<<l<<" INSERIDO"<<endl;
                            ui->lineEditNome->setEnabled(true);
                            ui->lineEditTelefone->setEnabled(true);
                            ui->lineEditDDD->setEnabled(true);
                            ui->lineEditLogradouro->setEnabled(true);
                            ui->lineEditSetor->setEnabled(true);
                            ui->lineEditCidade->setEnabled(true);
                            ui->lineEditEstado->setEnabled(true);
                            ui->lineEditEmail->setEnabled(true);
                            ui->lineEditCelular->setEnabled(true);
                            ui->lineEditDDD2->setEnabled(true);
                            break;
                        }
                    }

                }
                arquivo.close();
            }          
            else
            {
                ui->lineEditNome->setEnabled(true);
                ui->lineEditTelefone->setEnabled(true);
                ui->lineEditDDD->setEnabled(true);
                ui->lineEditLogradouro->setEnabled(true);
                ui->lineEditSetor->setEnabled(true);
                ui->lineEditCidade->setEnabled(true);
                ui->lineEditEstado->setEnabled(true);
                ui->lineEditEmail->setEnabled(true);
                ui->lineEditCelular->setEnabled(true);
                ui->lineEditDDD2->setEnabled(true);
            }
        }
        else
        {
            QMessageBox::warning(this, "ERRO","CPF INVALIDO!!");
            ui->lineEditCPFouCPNJ->setFocus();
            ui->lineEditCPFouCPNJ->selectAll();
        }
        return;
    }
    if(l.size()==14)
    {
        PessoaJuridica *CNPJ = new PessoaJuridica;
        CNPJ->setCNPJ(l);
        if(cnpj->ValidadorCnpj(l))
        {
            ifstream arquivo;
            arquivo.open("teste.csv");

            if(arquivo.is_open())
            {
                while(getline(arquivo, L))
                {
                    compara = "";
                    for(i=5; i<19; i++)
                    {
                        compara += L[i];
                    }
                    cout<<compara<<"&"<<endl;
                    if(compara == l)
                    {
                        cout<<l<<"=="<<compara<<endl;
                        QMessageBox::warning(this,"ERRO","ESTE CNPJ JÁ EXISTE!!");
                        ui->lineEditCPFouCPNJ->setFocus();
                        ui->lineEditCPFouCPNJ->selectAll();
                        break;
                    }
                    if(compara != l)
                    {
                        cout<<l<<"!="<<compara<<endl;
                        while(getline(arquivo, L))
                        {
                            compara2 = "";
                            for(j=5; j<19; j++)
                            {
                                compara2 += L[j];
                            }
                            cout<<l<<"COMP"<<compara2<<endl;
                            if(l == compara2 || compara == compara2)
                            {
                                cout<<l<<"=="<<compara<<endl;
                                QMessageBox::warning(this,"ERRO","ESTE CNPJ JÁ EXISTE!!");
                                ui->lineEditCPFouCPNJ->setFocus();
                                ui->lineEditCPFouCPNJ->selectAll();
                                break;
                            }
                        }
                        if(compara2 != l)
                        {
                            cout<<l<<" INSERIDO"<<endl;
                            ui->lineEditNome->setEnabled(true);
                            ui->lineEditTelefone->setEnabled(true);
                            ui->lineEditDDD->setEnabled(true);
                            ui->lineEditLogradouro->setEnabled(true);
                            ui->lineEditSetor->setEnabled(true);
                            ui->lineEditCidade->setEnabled(true);
                            ui->lineEditEstado->setEnabled(true);
                            ui->lineEditEmail->setEnabled(true);
                            ui->lineEditNomeContato->setEnabled(true);
                            break;
                        }
                    }

                }
                arquivo.close();
            }
            else
            {
                ui->lineEditNome->setEnabled(true);
                ui->lineEditTelefone->setEnabled(true);
                ui->lineEditDDD->setEnabled(true);
                ui->lineEditLogradouro->setEnabled(true);
                ui->lineEditSetor->setEnabled(true);
                ui->lineEditCidade->setEnabled(true);
                ui->lineEditEstado->setEnabled(true);
                ui->lineEditEmail->setEnabled(true);
                ui->lineEditNomeContato->setEnabled(true);
            }
        }
        else
        {
            QMessageBox::warning(this, "ERRO","CNPJ INVALIDO!!");
            ui->lineEditCPFouCPNJ->setFocus();
            ui->lineEditCPFouCPNJ->selectAll();
        }
        return;
    }
    if(l.size()==0)
    {
        QMessageBox::warning(this, "ERRO","NENHUM CPF ou CPNJ DIGITADO!!");
        ui->lineEditCPFouCPNJ->setFocus();
        ui->lineEditCPFouCPNJ->selectAll();
    }
    else
    {
        QMessageBox::warning(this, "ERRO","CPF ou CPNJ INVALIDO!!");
        ui->lineEditCPFouCPNJ->setFocus();
        ui->lineEditCPFouCPNJ->selectAll();
    }
}

void Cadastro::on_pushButtonFechar_pressed()
{
    close();
}

void Cadastro::on_lineEditCPFouCNPJ_returnPressed()
{
    ui->pushButtonVerifica->setFocus();
    ui->pushButtonVerifica->click();
}

void Cadastro::on_pushButtonVerificaCod_clicked()
{
    ifstream arquivo;
    arquivo.open("teste.csv");

    Cliente *cod = new Cliente;
    int c;
    string L, l;

    c = ui->lineEditCod->text().toInt();
    l = ui->lineEditCod->text().toStdString();
    cod->setCodigo(c);

    if(l.size() < 3)
    {
        QMessageBox::warning(this, "ERRO", "O CODIGO DEVE SER DE 3 DIGITOS!!");
        ui->lineEditCod->setFocus();
        ui->lineEditCod->selectAll();
        return;
    }
    if(arquivo.is_open())
    {
        while(getline(arquivo, L))
        {
            if(l.size() < 3)
            {
                QMessageBox::warning(this, "ERRO", "O CODIGO DEVE SER DE 3 DIGITOS!!");
                ui->lineEditCod->setFocus();
                ui->lineEditCod->selectAll();
                return;
            }
            if(L.at(0) == l.at(0) && L.at(1) == l.at(1) && L.at(2) == l.at(2))
            {
                QMessageBox::warning(this, "ERRO", "CODIGO JÁ CADASTRADO");
                ui->lineEditCod->setFocus();
                ui->lineEditCod->selectAll();
                return;
            }
        }
    }
    if(cl->insert(cod))
    {
        if(l.size() < 3)
        {
            QMessageBox::warning(this, "ERRO", "O CODIGO DEVE SER DE 3 DIGITOS!!");
            ui->lineEditCod->setFocus();
            ui->lineEditCod->selectAll();
            return;
        }
        ui->lineEditCPFouCPNJ->setEnabled(true);
        ui->lineEditCPFouCPNJ->setFocus();
    }
    else
    {
        QMessageBox::warning(this, "ERRO", "CODIGO JÁ CADASTRADO");
        ui->lineEditCod->setFocus();
        ui->lineEditCod->selectAll();
    }

    arquivo.close();
}

void Cadastro::on_pushButtonCadastrar_clicked()
{
    fstream arquivo;
    arquivo.open("teste.csv",ios::app|ios::in|ios::out);
    arquivo.seekg(0, arquivo.end);

    string cod, cpfCnpj, nomeRazao, telefone, ddd, ddd2, logradouro, setor, cidade, estado, email, celular, nomeContato;

    cod= ui->lineEditCod->text().toStdString();
    cpfCnpj= ui->lineEditCPFouCPNJ->text().toStdString();
    nomeRazao= ui->lineEditNome->text().toStdString();
    telefone= ui->lineEditTelefone->text().toStdString();
    ddd= ui->lineEditDDD->text().toStdString();
    logradouro= ui->lineEditLogradouro->text().toStdString();
    setor= ui->lineEditSetor->text().toStdString();
    cidade= ui->lineEditCidade->text().toStdString();
    estado= ui->lineEditEstado->text().toStdString();
    email= ui->lineEditEmail->text().toStdString();
    ddd2= ui->lineEditDDD2->text().toStdString();
    celular= ui->lineEditCelular->text().toStdString();
    nomeContato= ui->lineEditNomeContato->text().toStdString();

    if(cpfCnpj.size() == 11)
    {
        if(nomeRazao.size() == 0 || logradouro.size() == 0 || setor.size() == 0 || cidade.size() == 0
                || estado.size() == 0 || email.size() == 0 || celular.size() == 0)
        {
            QMessageBox::warning(this, "ERRO", "DADOS INCOMPLETOS!!!");
            return;
        }
        if(ddd.size() < 2 || ddd.size() > 2 || ddd2.size() < 2 || ddd2.size() > 2)
        {
            QMessageBox::warning(this, "ERRO", "DDD Invalido ou Obrigatorio!");
        }
        else
        {
            arquivo<<cod<<"; "
                  <<cpfCnpj<<"; "
                 <<nomeRazao<<"; "
                <<ddd<<"-"
               <<telefone<<"; "
              <<ddd2<<"-"
             <<celular<<"; "
            <<logradouro<<"; "
            <<setor<<"; "
            <<cidade<<"; "
            <<estado<<"; "
            <<email
            <<endl;

            QMessageBox::information(this,"SUCESSO","CADASTRO EFETUADO");
        }
    }
    if(cpfCnpj.size() == 14)
    {
        if(nomeRazao.size() == 0 || logradouro.size() == 0 || setor.size() == 0 || cidade.size() == 0
                || estado.size() == 0 || email.size() == 0 || nomeContato.size() == 0)
        {
            QMessageBox::warning(this, "ERRO", "DADOS INCOMPLETOS!!!");
            return;
        }
        if(telefone.size() < 9 || telefone.size() > 9)
        {
            QMessageBox::warning(this, "ERRO", "Telefone Invalido ou Obrigatorio!");
            return;
        }
        if(ddd.size() < 2 || ddd.size() > 2)
        {
            QMessageBox::warning(this, "ERRO", "DDD Invalido ou Obrigatorio!");
        }
        else
        {
            arquivo<<cod<<"; "
                  <<cpfCnpj<<"; "
                 <<nomeRazao<<"; "
                <<ddd<<"-"
               <<telefone<<"; "
              <<nomeContato<<"; "
             <<logradouro<<"; "
            <<setor<<"; "
            <<cidade<<"; "
            <<estado<<"; "
            <<email
            <<endl;

            QMessageBox::information(this,"SUCESSO","CADASTRO EFETUADO");
        }
    }
    arquivo.close();
}
