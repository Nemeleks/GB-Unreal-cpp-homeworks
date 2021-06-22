#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    task1Window = new task1;
    connect(task1Window, &task1::firstWindow,this, &MainWindow::show);

    task2Window = new task2;
    connect(task2Window, &task2::firstWindow,this, &MainWindow::show);

    task3Window = new task3;
    connect(task3Window, &task3::firstWindow,this, &MainWindow::show);

    task4Window = new task4;
    connect(task4Window, &task4::firstWindow,this, &MainWindow::show);

    task5Window = new task5;
    connect(task5Window, &task5::firstWindow,this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_task1_clicked()
{
    task1Window->show();
    this->close();
}

void MainWindow::on_task2_clicked()
{
    task2Window->show();
    this->close();
}

void MainWindow::on_task3_clicked()
{
    task3Window->show();
    this->close();
}

void MainWindow::on_task4_clicked()
{
    task4Window->show();
    this->close();
}

void MainWindow::on_task5_clicked()
{
    task5Window->show();
    this->close();
}
