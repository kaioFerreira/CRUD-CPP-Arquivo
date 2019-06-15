#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H
#include "cliente.h"
#include "lista.h"
#include <iostream>

using namespace std;

class PessoaFisica : public Cliente
{
protected:
    string nome, CPF, Celular;
    No<PessoaFisica> *inicio, *final;
public:
    void setNome(string &value);
    void setCPF(string &value);
    void setCelular(string &value);

    string getNome() const;
    string getCPF() const;
    string getCelular() const;
    string getPessoa()const;

    static bool validaCPF(string aux);
    bool JaExiste(PessoaFisica *aux);
};

#endif // PESSOAFISICA_H
