#ifndef NO_H
#define NO_H

template <class T>
class No
{
private:
    T * Dados;
    No<T> * Prox ;
public:

    No<T> *getProx() const;
    void setProx(No<T> *value);
    static No<T> * MontaNo(T *Aux);
    static T * DesmontaNo(No<T> *Aux);
    bool operator > (No<T> *Aux);
    bool operator != (No<T> *Aux);
    T *getDados() const;
    void setDados(T *value);
};

#endif // NO_H
