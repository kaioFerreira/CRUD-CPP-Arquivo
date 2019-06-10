#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H
#include<iostream>

using namespace std;

class PessoaJuridica
{
private:
    string  CNPJ,RazaoSocial;
    int NomeContato;


public:

    string getCNPJ() const;
    void setCNPJ(const string &value);
    string getRazaoSocial() const;
    void setRazaoSocial(const string &value);
    int getNomeContato() const;
    void setNomeContato(int value);

    int Conversor(string n);

    static bool ValidadorCnpj(string value);


};

#endif // PESSOAJURIDICA_H
