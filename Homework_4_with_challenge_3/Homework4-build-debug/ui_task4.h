/********************************************************************************
** Form generated from reading UI file 'task4.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK4_H
#define UI_TASK4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_task4
{
public:
    QPushButton *mainMenu;
    QLabel *label;
    QLineEdit *inputNum;
    QPlainTextEdit *Result;
    QPushButton *resultButton;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *task4)
    {
        if (task4->objectName().isEmpty())
            task4->setObjectName(QString::fromUtf8("task4"));
        task4->resize(401, 300);
        mainMenu = new QPushButton(task4);
        mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        mainMenu->setGeometry(QRect(10, 10, 75, 23));
        label = new QLabel(task4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 10, 261, 91));
        label->setWordWrap(true);
        inputNum = new QLineEdit(task4);
        inputNum->setObjectName(QString::fromUtf8("inputNum"));
        inputNum->setGeometry(QRect(150, 140, 113, 20));
        Result = new QPlainTextEdit(task4);
        Result->setObjectName(QString::fromUtf8("Result"));
        Result->setGeometry(QRect(150, 230, 241, 31));
        resultButton = new QPushButton(task4);
        resultButton->setObjectName(QString::fromUtf8("resultButton"));
        resultButton->setGeometry(QRect(150, 180, 111, 31));
        label_2 = new QLabel(task4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 140, 81, 16));
        label_3 = new QLabel(task4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 230, 61, 20));

        retranslateUi(task4);

        QMetaObject::connectSlotsByName(task4);
    } // setupUi

    void retranslateUi(QWidget *task4)
    {
        task4->setWindowTitle(QCoreApplication::translate("task4", "Homework 4 - Task 4", nullptr));
        mainMenu->setText(QCoreApplication::translate("task4", "Main Menu", nullptr));
        label->setText(QCoreApplication::translate("task4", "\320\241\320\276 \320\267\320\262\321\221\320\267\320\264\320\276\321\207\320\272\320\276\320\271. \320\235\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203, \320\277\321\200\320\276\320\262\320\265\321\200\321\217\321\216\321\211\321\203\321\216, \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\273\320\270 \320\275\320\265\320\272\320\276\321\202\320\276\321\200\320\276\320\265 \321\207\320\270\321\201\320\273\320\276 - \320\277\321\200\320\276\321\201\321\202\321\213\320\274. \320\237\321\200\320\276\321\201\321\202\320\276\320\265 \321\207\320\270\321\201\320\273\320\276 \342\200\224 \321\215\321\202\320\276 \321\206\320\265\320\273\320\276\320\265 \320\277\320\276\320\273\320\276\320\266\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\265 \321\207\320\270\321\201\320\273\320\276, \320\272\320\276\321\202\320\276\321\200\320\276\320\265 \320\264\320\265\320\273\320\270\321\202\321\201\321\217 \320"
                        "\261\320\265\320\267 \320\276\321\201\321\202\320\260\321\202\320\272\320\260 \321\202\320\276\320\273\321\214\320\272\320\276 \320\275\320\260 \320\265\320\264\320\270\320\275\320\270\321\206\321\203 \320\270 \321\201\320\265\320\261\321\217 \321\201\320\260\320\274\320\276.", nullptr));
        resultButton->setText(QCoreApplication::translate("task4", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("task4", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276", nullptr));
        label_3->setText(QCoreApplication::translate("task4", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class task4: public Ui_task4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK4_H
