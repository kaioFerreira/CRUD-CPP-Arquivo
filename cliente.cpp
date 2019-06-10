#include "cliente.h"

int Cliente::getCodigo() const
{
    return codigo;
}

void Cliente::setCodigo(int &value)
{
    codigo = value;
}

string Cliente::getLogradouro() const
{
    return logradouro;
}

void Cliente::setLogradouro(string &value)
{
    logradouro = value;
}

string Cliente::getSetor() const
{
    return setor;
}

void Cliente::setSetor(string &value)
{
    setor = value;
}

string Cliente::getCidade() const
{
    return cidade;
}

void Cliente::setCidade(string &value)
{
    cidade= value;
}

string Cliente::getEstado() const
{
    return estado;
}

void Cliente::setEstado(string &value)
{
    estado = value;
}

string Cliente::getTelefone() const
{
    return telefone;
}

void Cliente::setTelefone(string &value)
{
    telefone = value;
}

string Cliente::getEmail() const
{
    return email;
}

void Cliente::setEmail(string &value)
{
    email = value;
}

Cliente *Cliente::getProximo()const
{
    return proximo;
}

void Cliente::setProximo(Cliente *value)
{
    proximo = value;
}

Cliente *Cliente::getAnterior()const
{
    return anterior;
}

void Cliente::setAnterior(Cliente *value)
{
    anterior = value;
}

Cliente::Cliente()
{

}

