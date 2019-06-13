#ifndef REMOVERCLIENTE_H
#define REMOVERCLIENTE_H

#include <QDialog>

namespace Ui {
class removercliente;
}

class removercliente : public QDialog
{
    Q_OBJECT

public:
    explicit removercliente(QWidget *parent = nullptr);
    ~removercliente();

private:
    Ui::removercliente *ui;
};

#endif // REMOVERCLIENTE_H
