#include "task4.h"
#include "ui_task4.h"
#include <QString>
#include <QPushButton>
#include <QIntValidator>

task4::task4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::task4)
{
    ui->setupUi(this);
    ui->inputNum->setValidator(new QIntValidator(this));
    connect(ui->resultButton, &QPushButton::clicked, this, [&]()
    {
        int a = ui->inputNum->text().toInt();
        QString isSimple;
        QString result = "Число ";
        if((a == 1) || (a == 2))
                {
                    isSimple = "простое";
                }
        else if (a > 0)
        {
            for (int i = 2; i < a; i++)
            {
                if ((a % i) == 0)
                {
                    isSimple = "не является простым";
                    break;
                }
                else
                {
                    isSimple = "простое";
                }
            }
        }
        else
            {
                isSimple = "не является простым";
            }
        result+= QString::number(a) + " " + isSimple;
        ui->Result->setPlainText(result);
    });
}

task4::~task4()
{
    delete ui;
}

void task4::on_mainMenu_clicked()
{
    this->close();
    emit firstWindow();
}
