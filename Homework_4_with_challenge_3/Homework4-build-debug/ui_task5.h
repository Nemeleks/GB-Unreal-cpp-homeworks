/********************************************************************************
** Form generated from reading UI file 'task5.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK5_H
#define UI_TASK5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_task5
{
public:
    QPushButton *mainMenu;
    QLabel *label;
    QLineEdit *inputYear;
    QPushButton *resultButton;
    QPlainTextEdit *Result;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *task5)
    {
        if (task5->objectName().isEmpty())
            task5->setObjectName(QString::fromUtf8("task5"));
        task5->resize(400, 300);
        mainMenu = new QPushButton(task5);
        mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        mainMenu->setGeometry(QRect(10, 10, 75, 23));
        label = new QLabel(task5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 291, 111));
        label->setWordWrap(true);
        inputYear = new QLineEdit(task5);
        inputYear->setObjectName(QString::fromUtf8("inputYear"));
        inputYear->setGeometry(QRect(50, 170, 113, 20));
        resultButton = new QPushButton(task5);
        resultButton->setObjectName(QString::fromUtf8("resultButton"));
        resultButton->setGeometry(QRect(200, 170, 111, 21));
        Result = new QPlainTextEdit(task5);
        Result->setObjectName(QString::fromUtf8("Result"));
        Result->setGeometry(QRect(160, 230, 181, 41));
        label_2 = new QLabel(task5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 140, 141, 20));
        label_3 = new QLabel(task5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 240, 61, 20));

        retranslateUi(task5);

        QMetaObject::connectSlotsByName(task5);
    } // setupUi

    void retranslateUi(QWidget *task5)
    {
        task5->setWindowTitle(QCoreApplication::translate("task5", "Homework 4 - Task 5", nullptr));
        mainMenu->setText(QCoreApplication::translate("task5", "Main Menu", nullptr));
        label->setText(QCoreApplication::translate("task5", "\320\241\320\276 \320\267\320\262\321\221\320\267\320\264\320\276\321\207\320\272\320\276\320\271. \320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214 \320\262\320\262\320\276\320\264\320\270\321\202 \321\201 \320\272\320\273\320\260\320\262\320\270\320\260\321\202\321\203\321\200\321\213 \321\207\320\270\321\201\320\273\320\276 (\320\263\320\276\320\264): \320\276\321\202 1 \320\264\320\276 3000. \320\235\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203, \320\272\320\276\321\202\320\276\321\200\320\260\321\217 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\321\217\320\265\321\202 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\273\320\270 \321\215\321\202\320\276\321\202 \320\263\320\276\320\264 \320\262\320\270\321\201\320\276\320\272\320\276\321\201\320\275\321\213\320\274. \320\232\320\260\320\266\320\264\321\213\320\271 4-\320\271 \320\263\320\276\320"
                        "\264 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\262\320\270\321\201\320\276\320\272\320\276\321\201\320\275\321\213\320\274, \320\272\321\200\320\276\320\274\320\265 \320\272\320\260\320\266\320\264\320\276\320\263\320\276 100-\320\263\320\276, \320\277\321\200\320\270 \321\215\321\202\320\276\320\274 \320\272\320\260\320\266\320\264\321\213\320\271 400-\320\271 \342\200\223 \320\262\320\270\321\201\320\276\320\272\320\276\321\201\320\275\321\213\320\271. \320\222\321\213\320\262\320\265\321\201\321\202\320\270 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213 \321\200\320\260\320\261\320\276\321\202\321\213 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213 \320\262 \320\272\320\276\320\275\321\201\320\276\320\273\321\214.", nullptr));
        resultButton->setText(QCoreApplication::translate("task5", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("task5", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\263\320\276\320\264 \320\276\321\202 1 \320\264\320\276 3000", nullptr));
        label_3->setText(QCoreApplication::translate("task5", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class task5: public Ui_task5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK5_H
