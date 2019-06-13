#ifndef CADASTROPRODUTO_H
#define CADASTROPRODUTO_H

#include <QDialog>
#include <bits/stdc++.h>
using namespace std;
namespace Ui {
  class cadastroProduto;
}

class cadastroProduto : public QDialog
{
  Q_OBJECT

public:
  explicit cadastroProduto(QWidget *parent = nullptr);
  ~cadastroProduto();

private:
  Ui::cadastroProduto *ui;
};

#endif // CADASTROPRODUTO_H
