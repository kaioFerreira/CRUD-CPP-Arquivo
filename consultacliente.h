#ifndef CONSULTACLIENTE_H
#define CONSULTACLIENTE_H

#include <QDialog>

namespace Ui {
class consultaCliente;
}

class consultaCliente : public QDialog
{
    Q_OBJECT

public:
    explicit consultaCliente(QWidget *parent = nullptr);
    ~consultaCliente();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::consultaCliente *ui;
};

#endif // CONSULTACLIENTE_H
