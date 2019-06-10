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
  cout<<codigo<<endl;
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
  cout<<preco<<endl;
}

int Produto::getQuantidade() const
{
  return quantidade;
}

void Produto::setQuantidade(int value)
{
  quantidade = value;
}

//Produto::Produto()
//{
//  inicio=final=0;
//}
