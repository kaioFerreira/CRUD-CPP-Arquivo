#ifndef LISTA_H
#define LISTA_H

#include <bits/stdc++.h>
using namespace std;
#include <no.h>


template <class T>
class Lista
{
private:
    No<T> * inicio;
public:
    Lista<T>();
    bool vazia()const;
    void inserir(T * aux);
    T *retirar(T * aux);
    T *buscar(T * aux);
    string mostrar();
    ~Lista <T>();
};

#endif // LISTA_H
