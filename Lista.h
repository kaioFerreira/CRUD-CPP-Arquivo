#ifndef LISTA_H
#define LISTA_H

#include <bits/stdc++.h>
#include "cliente.h"
#include <no.h>

using namespace std;

template <class T>
class Lista
{
private:
    No<T> * inicio, *final;
public:
    Lista<T>();
    ~Lista <T>();
    bool vazia()const;
    bool inserir(T *);
    T *retirar(T *);
    T *buscar(T *)const;
    string mostrar();
//    bool JaExiste(T *);

    bool operator == (const Lista<T> & No)const;
    bool operator < (const Lista<T> & No)const;
    bool operator <= (const Lista<T> & No)const;
    bool operator > (const Lista<T> & No)const;
    bool operator >= (const Lista<T> & No)const;
    bool operator != (const Lista<T> & No)const;
};
template <class T>
Lista<T>::Lista()
{
    inicio = final = 0;
}
template <class T>
bool Lista<T>::vazia() const
{
    return (inicio == 0);
}

template <class T>
bool Lista<T>::inserir(T *aux)
{
//    if(JaExiste(aux)) return false;
    if(aux==0)return false;
    if(buscar(aux)!=0)return false;
    No<T> *novo= 0;
    if(vazia())
    {
        inicio=final=novo;
        return true;
    }
    No<T> *anterior, *atual;
    for(anterior=atual=inicio; atual!=0 && novo->getDados()->getCodigo()>atual->getDados()->getCodigo();
        anterior=atual,atual=atual->getProx());
    if(atual==anterior){novo->setProx(atual); inicio=novo; return true;}
    anterior->setProx(novo);
    novo->setProx(atual);
    if(anterior==final){final=novo;}

    return true;
}

template <class T>
T *Lista<T>::retirar(T *aux)
{
    if(aux==0||vazia()) return 0;
    No<T> *ptr = inicio, *ant=0;
    for( ; ptr != 0 && aux->getCodigo() != ptr->getDados()->getCodigo(); ant = ptr,ptr=ptr->getProx());
    if(ptr==0) return 0;
    T * aux2 = 0;
    if(ptr==inicio)
    {
        inicio= ptr->getProx();
        aux2= delete(ptr);

        return aux2;
    }
    ant->setProx(ptr->getProx());
    aux2= delete(ptr);

    return aux2;
}

template <class T>
T *Lista<T>::buscar(T *aux) const
{
    if(aux==0||vazia())return 0;
    No<T> *ptr=inicio;

    for( ;ptr != 0 && aux->getCodigo() != ptr->getDados()->getCodigo(); ptr = ptr->getProx());

    if(ptr==0)return 0;
    *aux=*ptr->getDados();

    return aux;
}

template <class T>
string Lista<T>::mostrar()
{
    if(vazia()) return "Lista Vazia\n";
    string aux="";
    No<T> *ptr=inicio;
    while(ptr!=0)
    {
        aux= aux + ptr->getDados()->getCliente() + "\n";
        ptr= ptr->getProx();
    }
    return aux;
}

template <class T>
Lista<T>::~Lista()
{
    No<T> * aux;
    while(!vazia())
    {
        aux = inicio;
        inicio = inicio->getProx();
        delete aux;
    }
}

//template <class T>
//bool Lista<T>::JaExiste(T *aux)
//{
//    T *aux2 = inicio;
//    if(inicio == 0)return false;

//    while(aux2->getCodigo()!=aux->getCodigo())
//    {
//        aux2 = aux2->getProximo();
//        if( aux2 == 0)return false;
//    }

//    return true;
//}

#endif // LISTA_H
