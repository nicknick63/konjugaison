#ifndef KONJUGAISON_H
#define KONJUGAISON_H

#include <QtGui/QMainWindow>
#include "ui_konjugaison.h"

class Konjugaison : public QMainWindow
{
    Q_OBJECT

public:
    Konjugaison(QWidget *parent = 0);
    ~Konjugaison();

private:
    Ui::KonjugaisonClass ui;
};

#endif // KONJUGAISON_H
