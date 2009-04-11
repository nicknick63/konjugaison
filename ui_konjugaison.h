/********************************************************************************
** Form generated from reading ui file 'konjugaison.ui'
**
** Created: Sat Apr 11 20:26:13 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_KONJUGAISON_H
#define UI_KONJUGAISON_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KonjugaisonClass
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *KonjugaisonClass)
    {
        if (KonjugaisonClass->objectName().isEmpty())
            KonjugaisonClass->setObjectName(QString::fromUtf8("KonjugaisonClass"));
        KonjugaisonClass->resize(800, 600);
        centralwidget = new QWidget(KonjugaisonClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        KonjugaisonClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(KonjugaisonClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        KonjugaisonClass->setMenuBar(menubar);
        statusbar = new QStatusBar(KonjugaisonClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        KonjugaisonClass->setStatusBar(statusbar);

        retranslateUi(KonjugaisonClass);

        QMetaObject::connectSlotsByName(KonjugaisonClass);
    } // setupUi

    void retranslateUi(QMainWindow *KonjugaisonClass)
    {
        KonjugaisonClass->setWindowTitle(QApplication::translate("KonjugaisonClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(KonjugaisonClass);
    } // retranslateUi

};

namespace Ui {
    class KonjugaisonClass: public Ui_KonjugaisonClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KONJUGAISON_H
