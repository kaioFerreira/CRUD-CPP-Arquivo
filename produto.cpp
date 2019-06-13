#include "produto.h"

Produto::Produto()
{

}

string Produto::getCodigo() const
{
  return codigo;
}

void Produto::setCodigo(const string &value)
{
  codigo = value;
}

string Produto::getDescricao() const
{
  return descricao;
}

void Produto::setDescricao(const string &value)
{
  descricao = value;
}

float Produto::getPreco() const
{
  return preco;
}

void Produto::setPreco(float value)
{
  preco = value;
}

int Produto::getQuantidade() const
{
  return quantidade;
}

void Produto::setQuantidade(int value)
{
  quantidade = value;
}
