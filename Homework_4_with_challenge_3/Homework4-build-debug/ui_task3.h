/********************************************************************************
** Form generated from reading UI file 'task3.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK3_H
#define UI_TASK3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_task3
{
public:
    QPushButton *mainMenu;
    QLabel *label;
    QPushButton *resultButton;
    QPlainTextEdit *Result;

    void setupUi(QWidget *task3)
    {
        if (task3->objectName().isEmpty())
            task3->setObjectName(QString::fromUtf8("task3"));
        task3->resize(400, 300);
        mainMenu = new QPushButton(task3);
        mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        mainMenu->setGeometry(QRect(10, 10, 75, 23));
        label = new QLabel(task3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 281, 71));
        label->setWordWrap(true);
        resultButton = new QPushButton(task3);
        resultButton->setObjectName(QString::fromUtf8("resultButton"));
        resultButton->setGeometry(QRect(130, 110, 141, 41));
        Result = new QPlainTextEdit(task3);
        Result->setObjectName(QString::fromUtf8("Result"));
        Result->setGeometry(QRect(10, 170, 371, 111));
        Result->setReadOnly(true);

        retranslateUi(task3);

        QMetaObject::connectSlotsByName(task3);
    } // setupUi

    void retranslateUi(QWidget *task3)
    {
        task3->setWindowTitle(QCoreApplication::translate("task3", "Homework 4 - Task 3", nullptr));
        mainMenu->setText(QCoreApplication::translate("task3", "Main Menu", nullptr));
        label->setText(QCoreApplication::translate("task3", "\320\235\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203 \320\272\320\276\321\202\320\276\321\200\320\260\321\217 \320\262\321\213\320\262\320\276\320\264\320\270\321\202 \320\275\320\260 \321\215\320\272\321\200\320\260\320\275 \321\201\320\277\320\270\321\201\320\276\320\272 \320\262\321\201\320\265\321\205 \320\275\320\265\321\207\320\265\321\202\320\275\321\213\321\205 \321\207\320\270\321\201\320\265\320\273 \320\276\321\202 1 \320\264\320\276 50. \320\235\320\260\320\277\321\200\320\270\320\274\320\265\321\200: \"Your numbers: 1 3 5 7 9 11 13 \342\200\246\". \320\224\320\273\321\217 \321\200\320\265\321\210\320\265\320\275\320\270\321\217 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \320\273\321\216\320\261\320\276\320\271 \320\241++ \321\206\320\270\320\272\320\273.", nullptr));
        resultButton->setText(QCoreApplication::translate("task3", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \321\205\320\276\321\200\320\276\321\210\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class task3: public Ui_task3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK3_H
