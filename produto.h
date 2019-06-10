#ifndef PRODUTO_H
#define PRODUTO_H
#include<iostream>
using namespace std;

class Produto
{
private:
  string codigo, descricao;
  float preco;
  int quantidade;
public:
  Produto();
  string getCodigo() const;
  void setCodigo(const string &value);
  string getDescricao() const;
  void setDescricao(const string &value);
  float getPreco() const;
  void setPreco(float value);
  int getQuantidade() const;
  void setQuantidade(int value);

  bool operator == (const Produto* const mat)const{return (this->getCodigo() == mat->getCodigo());}
  bool operator < (const Produto* const mat)const{return (this->getCodigo() == mat->getCodigo());}
  bool operator <= (const Produto* const mat)const{return (this->getCodigo() == mat->getCodigo());}
  bool operator > (const Produto* const mat)const{return (this->getCodigo() == mat->getCodigo());}
  bool operator >= (const Produto* const mat)const{return (this->getCodigo() == mat->getCodigo());}
  bool operator != (const Produto* const mat)const{return (this->getCodigo() == mat->getCodigo());}
};

#endif // PRODUTO_H
