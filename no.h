#ifndef NO_H
#define NO_H

template <class T>
class No
{
private:
    T * Dados;
    No * Prox, *Ant ;
public:

    No(T *obj);
    ~No();
    No *getProx() const;
    void setProx(No *value);
    No *getAnt()const;
    void setAnt(No *value);
    T *getDados(){return Dados;}
//    static T * MontaNo(T *Aux);
//    static T * DesmontaNo(No<T> *Aux);

    bool operator == (const No<T> & No)const;
    bool operator < (const No<T> & No)const;
    bool operator <= (const No<T> & No)const;
    bool operator > (const No<T> & No)const;
    bool operator >= (const No<T> & No)const;
    bool operator != (const No<T> & No)const;
};

#include "no.h"

template <class T>
No<T>::No(T *obj)
{
    Dados = obj;
    Prox = 0;
    Ant = 0;
}

template <class T>
No<T>::~No()
{
    if(Prox != 0)delete Prox;
    if(Ant != 0)delete Ant;
}

template <class T>
No<T> *No<T>::getProx() const
{
    return this->Prox;
}

template <class T>
void No<T>::setProx(No<T> *value)
{
    this->Prox = value;
}

//template <class T>
//T *No<T>::MontaNo(T *Aux)
//{
//    if(Aux == 0 ) return 0;
//    No<T> * variavel = new No<T>;

//    variavel->Dados = Aux;
//    variavel->Prox = 0;

//    return variavel;
//}

//template <class T>
//T *No<T>::DesmontaNo(No<T>  *Aux)
//{
//    if(Aux == 0)return 0;
//    T *Novo = Aux->Dados;
//    delete Aux;
//    return Novo;
//}

#endif // NO_H
