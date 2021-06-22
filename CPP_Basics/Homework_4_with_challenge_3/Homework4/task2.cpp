#include "task2.h"
#include "ui_task2.h"
#include <QPushButton>
#include <QString>

task2::task2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::task2)
{
    ui->setupUi(this);
    const int a = 10;
    const int b = 5;
    ui->constVar1->setPlainText(QString::number(a));
    ui->constVar2->setPlainText(QString::number(b));
    connect(ui->resultButton, &QPushButton::clicked, this, [&]()
    {
        auto result = a + b;
        if (((a == 10) && (b == 10)) || result == 10)
        {
            ui->Result->setPlainText("TRUE");
        }
        else
        {
            ui->Result->setPlainText("FALSE");
        }
    });
}

task2::~task2()
{
    delete ui;
}

void task2::on_mainMenu_clicked()
{
    this->close();
    emit firstWindow();
}
