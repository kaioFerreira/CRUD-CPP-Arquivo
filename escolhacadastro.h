#ifndef ESCOLHACADASTRO_H
#define ESCOLHACADASTRO_H

#include <QDialog>

namespace Ui {
class EscolhaCadastro;
}

class EscolhaCadastro : public QDialog
{
    Q_OBJECT

public:
    explicit EscolhaCadastro(QWidget *parent = nullptr);
    ~EscolhaCadastro();

private slots:
    void on_pushButtonFechar_clicked();

    void on_pushButtonCliente_clicked();

private:
    Ui::EscolhaCadastro *ui;
};

#endif // ESCOLHACADASTRO_H
