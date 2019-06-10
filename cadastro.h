#ifndef CADASTRO_H
#define CADASTRO_H

#include <QDialog>
#include "pessoafisica.h"
#include "pessoajuridica.h"
#include "Lista.h"

namespace Ui
{
    class Cadastro;
}

class Cadastro : public QDialog
{
    Q_OBJECT

public:
    explicit Cadastro(QWidget *parent = nullptr);
    ~Cadastro();

private slots:
    void on_pushButtonVerifica_clicked();

    void on_pushButtonFechar_pressed();

    void on_lineEditCPFouCNPJ_returnPressed();

    void on_pushButtonVerificaCod_clicked();

    void on_pushButtonCadastrar_clicked();

private:
    Ui::Cadastro *ui;
    PessoaFisica *cpf;
    PessoaJuridica *cnpj;
    Lista<Cliente> *cl = new Lista<Cliente>;

};

#endif // CADASTRO_H
