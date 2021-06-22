#include "task5.h"
#include "ui_task5.h"
#include <QString>
#include <QPushButton>
#include <QIntValidator>

task5::task5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::task5)
{
    ui->setupUi(this);
    ui->inputYear->setValidator(new QIntValidator(1, 3000, this));
    connect(ui->resultButton, &QPushButton::clicked,this, [&]()
    {
        int year = ui->inputYear->text().toInt();
        QString isLeapYear;
        QString result;
        if (year == 0)
        {
            isLeapYear = " ОШИБКА ВВОДА";
        }
        else if (year % 4 == 0)
            {
                if (year % 100 == 0 && year % 400 != 0)
                {
                    isLeapYear = " год не является високосным";
                }
                else
                {
                    isLeapYear = " год - високосный";
                }
            }
            else
            {
                isLeapYear = " год не является високосным";
            }
        result = QString::number(year) + isLeapYear;
        ui->Result->setPlainText(result);
    });

}

task5::~task5()
{
    delete ui;
}

void task5::on_mainMenu_clicked()
{
    this->close();
    emit firstWindow();
}
