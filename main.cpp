#include "konjugaison.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Konjugaison w;
    w.show();
    return a.exec();
}
