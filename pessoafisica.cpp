#include "pessoafisica.h"

string PessoaFisica::getNome() const
{
    return nome;
}

void PessoaFisica::setNome(string &value)
{
    nome = value;
}

string PessoaFisica::getCPF() const
{
    return CPF;
}

void PessoaFisica::setCPF(string &value)
{
    if(PessoaFisica::validaCPF(value))
    {
        CPF = value;
    }
}

string PessoaFisica::getCelular() const
{
    return Celular;
}

void PessoaFisica::setCelular(string &value)
{
    Celular = value;
}

string PessoaFisica::getPessoa()const
{
    return ("Dados do Cliente\nNome: "+nome+"\nCPF: "+CPF+"\nCelular: "+Celular+"\n--------------------------------------------\n");
}

bool PessoaFisica::validaCPF(string CPF)
{  
    int CPF2[11];
    int soma1=0;
    int soma2=0;

    for(int i=0; i<11; i++)
    {
        CPF2[i]= static_cast<int>(CPF[i])-48;
    }

    soma1= CPF2[0]*10+CPF2[1]*9+CPF2[2]*8+CPF2[3]*7+CPF2[4]*6+CPF2[5]*5+CPF2[6]*4+CPF2[7]*3+CPF2[8]*2;

    soma2= CPF2[0]*11+CPF2[1]*10+CPF2[2]*9+CPF2[3]*8+CPF2[4]*7+CPF2[5]*6+CPF2[6]*5+CPF2[7]*4+CPF2[8]*3+CPF2[9]*2;

    int ver1=(soma2*10)%11;

    int ver2=(soma1*10)%11;

    if(ver1==10)
    {
        (ver1=0);
    }
    if(ver2==10)
    {
        ver2=0;
    }

    if(CPF2[9]==ver2 && CPF2[10]==ver1)
    {
        return 1;
    }
    else
    {
        return 0;
    }   
}
