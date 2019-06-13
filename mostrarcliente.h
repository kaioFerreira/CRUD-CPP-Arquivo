#ifndef MOSTRARCLIENTE_H
#define MOSTRARCLIENTE_H

#include <QDialog>

namespace Ui {
class MostrarCliente;
}

class MostrarCliente : public QDialog
{
    Q_OBJECT

public:
    explicit MostrarCliente(QWidget *parent = nullptr);
    ~MostrarCliente();

private:
    Ui::MostrarCliente *ui;
};

#endif // MOSTRARCLIENTE_H
