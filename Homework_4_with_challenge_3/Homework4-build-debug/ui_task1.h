/********************************************************************************
** Form generated from reading UI file 'task1.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK1_H
#define UI_TASK1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_task1
{
public:
    QPushButton *mainMenu;
    QLabel *label;
    QLineEdit *var1Line;
    QLineEdit *var2Line;
    QPlainTextEdit *varSumm;
    QPlainTextEdit *varResult;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *resultButton;

    void setupUi(QWidget *task1)
    {
        if (task1->objectName().isEmpty())
            task1->setObjectName(QString::fromUtf8("task1"));
        task1->resize(400, 300);
        mainMenu = new QPushButton(task1);
        mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        mainMenu->setGeometry(QRect(10, 10, 75, 23));
        label = new QLabel(task1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 301, 71));
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(true);
        label->setWordWrap(true);
        var1Line = new QLineEdit(task1);
        var1Line->setObjectName(QString::fromUtf8("var1Line"));
        var1Line->setGeometry(QRect(50, 120, 113, 20));
        var2Line = new QLineEdit(task1);
        var2Line->setObjectName(QString::fromUtf8("var2Line"));
        var2Line->setGeometry(QRect(230, 120, 113, 20));
        varSumm = new QPlainTextEdit(task1);
        varSumm->setObjectName(QString::fromUtf8("varSumm"));
        varSumm->setGeometry(QRect(150, 200, 111, 31));
        varSumm->setReadOnly(true);
        varSumm->setOverwriteMode(true);
        varResult = new QPlainTextEdit(task1);
        varResult->setObjectName(QString::fromUtf8("varResult"));
        varResult->setGeometry(QRect(150, 250, 111, 31));
        varResult->setReadOnly(true);
        varResult->setOverwriteMode(true);
        label_2 = new QLabel(task1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 100, 47, 13));
        label_3 = new QLabel(task1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 100, 51, 16));
        label_4 = new QLabel(task1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 200, 47, 13));
        label_5 = new QLabel(task1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 260, 61, 16));
        resultButton = new QPushButton(task1);
        resultButton->setObjectName(QString::fromUtf8("resultButton"));
        resultButton->setGeometry(QRect(160, 160, 75, 23));

        retranslateUi(task1);

        QMetaObject::connectSlotsByName(task1);
    } // setupUi

    void retranslateUi(QWidget *task1)
    {
        task1->setWindowTitle(QCoreApplication::translate("task1", "Homework 4 - Task 1", nullptr));
        mainMenu->setText(QCoreApplication::translate("task1", "Main Menu", nullptr));
        label->setText(QCoreApplication::translate("task1", "\320\235\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203, \320\277\321\200\320\276\320\262\320\265\321\200\321\217\321\216\321\211\321\203\321\216 \321\207\321\202\320\276 \321\201\321\203\320\274\320\274\320\260 \320\264\320\262\321\203\321\205 (\320\262\320\262\320\265\320\264\320\265\320\275\320\275\321\213\321\205 \321\201 \320\272\320\273\320\260\320\262\320\270\320\260\321\202\321\203\321\200\321\213) \321\207\320\270\321\201\320\265\320\273 \320\273\320\265\320\266\320\270\321\202 \320\262 \320\277\321\200\320\265\320\264\320\265\320\273\320\260\321\205 \320\276\321\202 10 \320\264\320\276 20 (\320\262\320\272\320\273\321\216\321\207\320\270\321\202\320\265\320\273\321\214\320\275\320\276), \320\265\321\201\320\273\320\270 \320\264\320\260 \342\200\223 \320\262\321\213\320\262\320\265\321\201\321\202\320\270 \321\201\321\202\321\200\320\276\320\272\321\203 \"true\", \320\262 \320\277\321\200\320\276\321\202\320\270\320\262\320"
                        "\275\320\276\320\274 \321\201\320\273\321\203\321\207\320\260\320\265 \342\200\223 \"false\" ", nullptr));
        label_2->setText(QCoreApplication::translate("task1", "\320\247\320\270\321\201\320\273\320\276 1", nullptr));
        label_3->setText(QCoreApplication::translate("task1", "\320\247\320\270\321\201\320\273\320\276 2", nullptr));
        label_4->setText(QCoreApplication::translate("task1", "\320\241\321\203\320\274\320\274\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("task1", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        resultButton->setText(QCoreApplication::translate("task1", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class task1: public Ui_task1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK1_H
