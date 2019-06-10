#ifndef ITEM_H
#define ITEM_H
#include "produto.h"

class Item:public Produto
{
protected:
    int quantidade;
    float precoUnitario;
    float valorTotal;

public:
    Item(){
        quantidade=0;
        precoUnitario=valorTotal=0;
    }
    Item(int Quant,float Prec,float Total){
        if(Quant<0 || Prec<0 || Total<0){
            throw "Invalido";
        }
        else {
            quantidade=Quant;
            precoUnitario=Prec;
            valorTotal=Total;
        }
    }

    void setQuantidade(int value){
        quantidade=value;
    }
    void setPrecoUnitario(float value){
        precoUnitario=value;
    }
    void setValorTotal(float value){
        valorTotal=value;
    }

    int getQuantidade()const{
        return quantidade;
    }
    float getPrecoUnitario()const{
        return precoUnitario;
    }
    float getValorTotal()const{
        return valorTotal;
    }
};

#endif // ITEM_H
