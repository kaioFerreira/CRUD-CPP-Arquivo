#include "pessoajuridica.h"

string PessoaJuridica::getCNPJ() const
{
  return CNPJ;
}

void PessoaJuridica::setCNPJ(const string &value)
{
  CNPJ = value;
}

string PessoaJuridica::getRazaoSocial() const
{
  return RazaoSocial;
}

void PessoaJuridica::setRazaoSocial(const string &value)
{
  RazaoSocial = value;
}

int PessoaJuridica::getNomeContato() const
{
  return NomeContato;
}

void PessoaJuridica::setNomeContato(int value)
{
  NomeContato = value;
}

bool PessoaJuridica::ValidadorCnpj(string CNPJ)
{
  {
      int x[14];
      int Digito1=0;
      int Digito2=0;

      for(int i=0; i<14; i++)
      {
          x[i]= static_cast<int>(CNPJ[i])-48; //TABELA ASCII
      }
  //CALCULO DIGITO 1
      Digito1= x[0]*6+x[1]*7+x[2]*8+x[3]*9+x[4]*2+x[5]*3+x[6]*4+x[7]*5+x[8]*6+x[9]*7+x[10]*8+x[11]*9;

  //CALCULO DIGITO 2
      Digito2= x[0]*5+x[1]*6+x[2]*7+x[3]*8+x[4]*9+x[5]*2+x[6]*3+x[7]*4+x[8]*5+x[9]*6+x[10]*7+x[11]*8+x[12]*9;

      int D1=(Digito1)%11;
      int D2=(Digito2)%11;

      //O DV MODULO 11 CORRESPONDE AO RESTO DA DIVISAO POR 11 DO SOMATORIO DA MULTIPLICAÇÃO DE CADA ALGARISMO DA BASE
      //RESPECTIVAMENTE POR 9,8,7,6,5,4,3,2,9,8,7,6,5, RESTO 10 DETERMINA SE 0 PARA O DV.
      if(D2==10)
      {
          (D2=0);
      }
      if(D1==10)
      {
          D1=0;
      }

      if(x[12]==D1 && x[13]==D2)
      {
          cout<<"Valido"<<endl;
          return true;
          cout<<"Valido"<<endl;
      }
      else
      {
         cout<<"Nao e valido"<<endl;
          return false;

      }
  }

 }
