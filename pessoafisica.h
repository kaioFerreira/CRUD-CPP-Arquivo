#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H
#include "cliente.h"
#include <iostream>

using namespace std;

class PessoaFisica : public Cliente
{
protected:
    string nome, CPF, Celular;

public:
    void setNome(string &value);
    void setCPF(string &value);
    void setCelular(string &value);

    string getNome() const;
    string getCPF() const;
    string getCelular() const;
    string getPessoa()const;

    static bool validaCPF(string aux);
};

#endif // PESSOAFISICA_H
