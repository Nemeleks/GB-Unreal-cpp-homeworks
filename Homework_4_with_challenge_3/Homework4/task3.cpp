#include "task3.h"
#include "ui_task3.h"
#include "QString"
#include "QPushButton"
#include <string>

task3::task3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::task3)
{
    ui->setupUi(this);
    connect(ui->resultButton, &QPushButton::clicked, this, [&]()
    {
        QString result = "Your numbers: ";
        for (int i = 0; i <= 50; ++i)
        {
            if (i % 2 != 0)
            {
                result += QString::number(i)+ " ";
            }
        }
        ui->Result->setPlainText(result);
    });
}

task3::~task3()
{
    delete ui;
}

void task3::on_mainMenu_clicked()
{
    this->close();
    emit firstWindow();
}
