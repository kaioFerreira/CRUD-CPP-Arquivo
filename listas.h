#ifndef LISTAS_H
#define LISTAS_H

#include <QDialog>

namespace Ui {
class Listas;
}

class Listas : public QDialog
{
    Q_OBJECT

public:
    explicit Listas(QWidget *parent = nullptr);
    ~Listas();

private:
    Ui::Listas *ui;
};

#endif // LISTAS_H
