//#include "Lista.h"



//Lista::Lista()
//{
//    Inicio=Fim=0;
//}

//Lista::~Lista()
//{
//    if(Inicio!=0||Fim!=0)
//    {
//        delete Inicio;
//        delete Fim;
//    }
//}

//bool Lista::insert(Cliente *nova)
//{
//    if(JaExiste(nova))
//    return false;

//    int verificador=1;
//    if(Inicio==0)
//    {
//        Inicio=Fim=nova;
//    }
//    else
//    {

//        aux=Inicio;


//        while(verificador!=0)
//        {
//            if(Inicio==aux)
//            {
//                if(nova < aux)
//                {

//                    //chamar a função insere no inicio;
//                    Inicio->setAnterior(nova);
//                    Inicio=Inicio->getAnterior();
//                    Inicio->setProximo(aux);
//                    verificador=0;
//                }
//                else
//                {
//                    aux2=aux->getProximo();
//                    if(aux2==0)
//                    {
//                        aux->setProximo(nova);
//                        aux2=aux->getProximo();
//                        aux2->setAnterior(aux);
//                        verificador=0;

//                    }
//                    else
//                    {
//                        aux=aux->getProximo();
//                    }

//                }
//            }
//            else {
//                if(nova->operator<(aux)){
//                    aux2=aux->getAnterior();
//                    aux->setAnterior(nova);
//                    aux2->setProximo(nova);
//                    nova->setProximo(aux);
//                    nova->setAnterior(aux2);
//                    verificador=0;
//                }
//                else {
//                    aux2=aux->getProximo();
//                    if(aux2==0){
//                        aux->setProximo(nova);
//                        aux2=aux->getProximo();
//                        aux2->setAnterior(aux);
//                        verificador=0;
//                    }
//                }
//                aux= aux->getProximo();
//            }
//        }
//    }
//    return true;
//}

//bool Lista::JaExiste(Cliente *nova)
//{
//    Cliente *aux =Inicio;
//    if(Inicio == 0)return false;

//    while(aux->getCodigo()!=nova->getCodigo())
//    {
//        aux = aux->getProximo();
//        if( aux == 0)return false;
//    }

//    return true;
//}

//void Lista::imprimir(){
//    aux=Inicio;
//    cout << "Imprimindo lista...." <<endl << endl;

//    while(aux->getProximo()!=NULL){
//        cout << ">> " << aux->getCodigo() << endl;
//        aux=aux->getProximo();
//    }
//    cout << ">> " << aux->getCodigo() << endl;
//    cout << "Fim" << endl<<endl;
//}
