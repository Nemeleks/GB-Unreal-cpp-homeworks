/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *task1;
    QPushButton *task2;
    QPushButton *task3;
    QPushButton *task4;
    QPushButton *task5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(433, 259);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        task1 = new QPushButton(centralwidget);
        task1->setObjectName(QString::fromUtf8("task1"));
        task1->setGeometry(QRect(160, 10, 111, 31));
        sizePolicy.setHeightForWidth(task1->sizePolicy().hasHeightForWidth());
        task1->setSizePolicy(sizePolicy);
        task2 = new QPushButton(centralwidget);
        task2->setObjectName(QString::fromUtf8("task2"));
        task2->setGeometry(QRect(160, 50, 111, 31));
        sizePolicy.setHeightForWidth(task2->sizePolicy().hasHeightForWidth());
        task2->setSizePolicy(sizePolicy);
        task3 = new QPushButton(centralwidget);
        task3->setObjectName(QString::fromUtf8("task3"));
        task3->setGeometry(QRect(160, 90, 111, 31));
        sizePolicy.setHeightForWidth(task3->sizePolicy().hasHeightForWidth());
        task3->setSizePolicy(sizePolicy);
        task4 = new QPushButton(centralwidget);
        task4->setObjectName(QString::fromUtf8("task4"));
        task4->setGeometry(QRect(160, 130, 111, 31));
        sizePolicy.setHeightForWidth(task4->sizePolicy().hasHeightForWidth());
        task4->setSizePolicy(sizePolicy);
        task5 = new QPushButton(centralwidget);
        task5->setObjectName(QString::fromUtf8("task5"));
        task5->setGeometry(QRect(160, 170, 111, 31));
        sizePolicy.setHeightForWidth(task5->sizePolicy().hasHeightForWidth());
        task5->setSizePolicy(sizePolicy);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 433, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Homework 4 - Main Menu", nullptr));
        task1->setText(QCoreApplication::translate("MainWindow", "Task 1", nullptr));
        task2->setText(QCoreApplication::translate("MainWindow", "Task 2", nullptr));
        task3->setText(QCoreApplication::translate("MainWindow", "Task 3", nullptr));
        task4->setText(QCoreApplication::translate("MainWindow", "Task 4", nullptr));
        task5->setText(QCoreApplication::translate("MainWindow", "Task 5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
