#include "mainmenu.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <QPushButton>

MainMenu::MainMenu(QWidget *parent)
    :QWidget(parent),
     ui(new Ui::MainMenu)
{
    QVBoxLayout *mmenu = new QVBoxLayout(this);
    mmenu->setSpacing(1);

    QPushButton *task1 = new QPushButton("Task 1", this);
    task1->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QPushButton *task2 = new QPushButton("Task 2", this);
    task2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QPushButton *task3 = new QPushButton("Task 3", this);
    task3->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QPushButton *task4 = new QPushButton("Task 4", this);
    task4->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QPushButton *task5 = new QPushButton("Task 5", this);
    task5->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    mmenu->addWidget(task1);
    mmenu->addWidget(task2);
    mmenu->addWidget(task3);
    mmenu->addWidget(task4);
    mmenu->addWidget(task5);


    setLayout(mmenu);
}
