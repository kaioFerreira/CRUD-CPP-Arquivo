#ifndef ESCOLHAREMOVER_H
#define ESCOLHAREMOVER_H

#include <QDialog>

namespace Ui {
class escolharemover;
}

class escolharemover : public QDialog
{
    Q_OBJECT

public:
    explicit escolharemover(QWidget *parent = nullptr);
    ~escolharemover();

private:
    Ui::escolharemover *ui;
};

#endif // ESCOLHAREMOVER_H
