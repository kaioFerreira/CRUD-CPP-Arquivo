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

private:
    Ui::EscolhaCadastro *ui;
};

#endif // ESCOLHACADASTRO_H
