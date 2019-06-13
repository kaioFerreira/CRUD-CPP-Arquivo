#include "no.h"

template <class T>

T * No<T>::getDados() const
{
    return Dados;
}

template <class T>
void No<T>::setDados(T *value)
{
    Dados = value;
}

template <class T>
No<T> *No<T>::getProx() const
{
    return Prox;
}

template <class T>
void No<T>::setProx(No<T> *value)
{
    Prox = value;
}

template <class T>
No<T> *No<T>::MontaNo(T *Aux)
{
    if(Aux == 0 ) return 0;
    No * variavel = new No;

    variavel->Dados = Aux;
    variavel->Prox = 0;

    return variavel;
}

template <class T>
bool No<T>::operator >(No<T> *Aux)
{
    return this->Dados > Aux->Dados;
}

template <class T>
bool No<T>::operator !=(No<T> *Aux)
{
    return (this->Dados->getNome() != Aux->Dados->getNome());
}

template <class T>
T *No<T>::DesmontaNo(No<T>  *Aux)
{
    if(Aux == 0)return 0;
    T *Novo = Aux->Dados;
    delete Aux;
    return Novo;
}
