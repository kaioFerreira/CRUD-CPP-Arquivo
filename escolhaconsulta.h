#ifndef ESCOLHACONSULTA_H
#define ESCOLHACONSULTA_H

#include <QDialog>

namespace Ui {
class escolhaconsulta;
}

class escolhaconsulta : public QDialog
{
    Q_OBJECT

public:
    explicit escolhaconsulta(QWidget *parent = nullptr);
    ~escolhaconsulta();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::escolhaconsulta *ui;
};

#endif // ESCOLHACONSULTA_H
