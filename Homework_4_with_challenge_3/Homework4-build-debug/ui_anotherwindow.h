/********************************************************************************
** Form generated from reading UI file 'anotherwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANOTHERWINDOW_H
#define UI_ANOTHERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnotherWindow
{
public:
    QPushButton *mainMenu;

    void setupUi(QWidget *AnotherWindow)
    {
        if (AnotherWindow->objectName().isEmpty())
            AnotherWindow->setObjectName(QString::fromUtf8("AnotherWindow"));
        AnotherWindow->resize(400, 300);
        mainMenu = new QPushButton(AnotherWindow);
        mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        mainMenu->setGeometry(QRect(10, 10, 75, 23));

        retranslateUi(AnotherWindow);

        QMetaObject::connectSlotsByName(AnotherWindow);
    } // setupUi

    void retranslateUi(QWidget *AnotherWindow)
    {
        AnotherWindow->setWindowTitle(QCoreApplication::translate("AnotherWindow", "Form", nullptr));
        mainMenu->setText(QCoreApplication::translate("AnotherWindow", "Main Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnotherWindow: public Ui_AnotherWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANOTHERWINDOW_H
