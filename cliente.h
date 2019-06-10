#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>

using namespace std;

class Cliente
{
protected:
    Cliente *anterior, *proximo;
    string logradouro, setor, cidade, estado, telefone, email;
    int codigo;
public:
    Cliente();

    void setCodigo(int &value);
    void setLogradouro(string &value);
    void setSetor(string &value);
    void setCidade(string &value);
    void setEstado(string &value);
    void setTelefone(string &value);
    void setEmail(string &value);
    void setAnterior(Cliente*);
    void setProximo(Cliente*);

    int getCodigo()const;
    string getLogradouro()const;
    string getSetor()const;
    string getCidade()const;
    string getEstado()const;
    string getTelefone()const;
    string getEmail()const;
    Cliente *getAnterior()const;
    Cliente *getProximo()const;

    bool operator == (const Cliente* const mat)const{return (this->getCodigo() == mat->getCodigo());}
    bool operator < (const Cliente* const mat)const{return (this->getCodigo() < mat->getCodigo());}
    bool operator <= (const Cliente* const mat)const{return (this->getCodigo() <= mat->getCodigo());}
    bool operator > (const Cliente* const mat)const{return (this->getCodigo() > mat->getCodigo());}
    bool operator >= (const Cliente* const mat)const{return (this->getCodigo() >= mat->getCodigo());}
    bool operator != (const Cliente* const mat)const{return (this->getCodigo() != mat->getCodigo());}
};

#endif // CLIENTE_H
