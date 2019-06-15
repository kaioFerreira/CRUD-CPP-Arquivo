//#include "Lista.h"

//template <class T>
//Lista<T>::Lista()
//{
//    inicio = final = 0;
//}
//template <class T>
//bool Lista<T>::vazia() const
//{
//    return (inicio == 0);
//}

//template <class T>
//bool Lista<T>::inserir(T *aux)
//{
//    if(aux==0)return false;
//    if(consultar(aux)!=0)return false;
//    No<T> *novo=No<T>::montarNo(aux);
//    if(vazia())
//    {
//        inicio=final=novo;
//        return true;
//    }
//    No<T> *anterior, *atual;
//    for(anterior=atual=inicio; atual!=0 && novo->getDados()->getNome()>atual->getDados()->getNome();
//        anterior=atual,atual=atual->getProx());
//    if(atual==anterior){novo->setProx(atual); inicio=novo; return true;}
//    anterior->setProx(novo);
//    novo->setProx(atual);
//    if(anterior==final){final=novo;}

//    return true;
//}

//template <class T>
//T *Lista<T>::retirar(T *aux)
//{
//    if(aux == 0 ) return 0;

//    No<T> * novo = No<T>::MontaNo(aux);
//    No<T> * an = inicio;
//    No<T> * at = inicio;
//    while(at!=0 && *novo!=at)
//    {
//        an = at;
//        at = at->getProx();
//    }

//    if(at == 0)return 0;

//    if(at == an)
//        inicio = at->getProx();
//    else
//        an->setProx(at->getProx());

//    aux = No<T>::DesmontaNo(at);

//    return aux;
//}

//template <class T>
//T *Lista<T>::buscar(T *aux) const
//{
//    if(aux == 0)return 0;

//    No<T> * novo = No<T>::MontaNo(aux);
//    No<T> * at = inicio;

//    while(at!=0 && *novo!=at)
//    {
//        at = at->getProx();
//    }

//    if(at == 0) return 0;

//    return at->getDados();
//}

//template <class T>
//string Lista<T>::mostrar()
//{
//    string ret;
//    No<T> * aux = inicio;
//    while(aux){
//        ret+= aux->getDados()->Mostrar()+'\n';
//        aux = aux->getProx();
//    }
//    if(vazia())ret = "Fila Vazia\n";
//    return ret;
//}

//template <class T>
//Lista<T>::~Lista()
//{
//    No<T> * aux;
//    while(!vazia())
//    {
//        aux = inicio;
//        inicio = inicio->getProx();
//        delete aux;
//    }
//}
