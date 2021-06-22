/********************************************************************************
** Form generated from reading UI file 'task2.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK2_H
#define UI_TASK2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_task2
{
public:
    QPushButton *mainMenu;
    QLabel *label;
    QPlainTextEdit *constVar1;
    QPlainTextEdit *constVar2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *resultButton;
    QPlainTextEdit *Result;
    QLabel *label_4;

    void setupUi(QWidget *task2)
    {
        if (task2->objectName().isEmpty())
            task2->setObjectName(QString::fromUtf8("task2"));
        task2->resize(400, 300);
        mainMenu = new QPushButton(task2);
        mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        mainMenu->setGeometry(QRect(10, 20, 75, 23));
        label = new QLabel(task2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 0, 301, 91));
        label->setWordWrap(true);
        constVar1 = new QPlainTextEdit(task2);
        constVar1->setObjectName(QString::fromUtf8("constVar1"));
        constVar1->setGeometry(QRect(70, 130, 101, 31));
        constVar1->setReadOnly(true);
        constVar2 = new QPlainTextEdit(task2);
        constVar2->setObjectName(QString::fromUtf8("constVar2"));
        constVar2->setGeometry(QRect(230, 130, 101, 31));
        constVar2->setReadOnly(true);
        label_2 = new QLabel(task2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 110, 61, 20));
        label_3 = new QLabel(task2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(256, 110, 51, 20));
        resultButton = new QPushButton(task2);
        resultButton->setObjectName(QString::fromUtf8("resultButton"));
        resultButton->setGeometry(QRect(160, 180, 75, 23));
        Result = new QPlainTextEdit(task2);
        Result->setObjectName(QString::fromUtf8("Result"));
        Result->setGeometry(QRect(150, 230, 104, 31));
        Result->setReadOnly(true);
        Result->setOverwriteMode(true);
        label_4 = new QLabel(task2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 230, 61, 20));

        retranslateUi(task2);

        QMetaObject::connectSlotsByName(task2);
    } // setupUi

    void retranslateUi(QWidget *task2)
    {
        task2->setWindowTitle(QCoreApplication::translate("task2", "Homework 4 - Task 2", nullptr));
        mainMenu->setText(QCoreApplication::translate("task2", "Main Menu", nullptr));
        label->setText(QCoreApplication::translate("task2", "\320\235\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203, \320\262\321\213\320\262\320\276\320\264\321\217\321\211\321\203\321\216 \320\275\320\260 \321\215\320\272\321\200\320\260\320\275 \321\201\321\202\321\200\320\276\320\272\321\203 \342\200\234true\342\200\235, \320\265\321\201\320\273\320\270 \320\264\320\262\320\265 \321\206\320\265\320\273\320\276\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\272\320\276\320\275\321\201\321\202\320\260\320\275\321\202\321\213, \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\275\321\213\320\265 \320\262 \320\265\321\221 \320\275\320\260\321\207\320\260\320\273\320\265 \320\273\320\270\320\261\320\276 \320\276\320\261\320\265 \321\200\320\260\320\262\320\275\321\213 \320\264\320\265\321\201\321\217\321\202\320\270 \321\201\320\260\320\274\320\270 \320\277\320\276 \321\201\320\265\320\261\320\265, \320\273\320\270\320\261\320\276 \320\270\321"
                        "\205 \321\201\321\203\320\274\320\274\320\260 \321\200\320\260\320\262\320\275\320\260 \320\264\320\265\321\201\321\217\321\202\320\270. \320\230\320\275\320\260\321\207\320\265 \"false\".", nullptr));
        label_2->setText(QCoreApplication::translate("task2", "Const int 1", nullptr));
        label_3->setText(QCoreApplication::translate("task2", "Const int 2", nullptr));
        resultButton->setText(QCoreApplication::translate("task2", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("task2", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class task2: public Ui_task2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK2_H
