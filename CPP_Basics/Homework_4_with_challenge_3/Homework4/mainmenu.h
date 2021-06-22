#pragma once

#ifndef MENU_H
#define MENU_H
#endif // MENU_H

#include <QWidget>
#include <QMainWindow>
#include "anotherwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainMenu; }
QT_END_NAMESPACE


class MainMenu : public QWidget
{
    Q_OBJECT
public:
    explicit MainMenu(QWidget *parent = 0);
    ~MainMenu();

private slots:
    void task1_clicked();
    void task2_clicked();
    void task3_clicked();
    void task4_clicked();
    void task5_clicked();

private:
    Ui::MainMenu *ui;
    AnotherWindow *task1Window;
    AnotherWindow *task2Window;
    AnotherWindow *task3Window;
    AnotherWindow *task4Window;
    AnotherWindow *task5Window;


};
