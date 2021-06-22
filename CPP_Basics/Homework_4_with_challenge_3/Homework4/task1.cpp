#include "task1.h"
#include "ui_task1.h"
#include <QPushButton>
#include <QString>
#include <QIntValidator>

task1::task1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::task1)
{
    ui->setupUi(this);
    connect(ui->resultButton,&QPushButton::clicked, this, [&]()
    {
        auto a1 = ui->var1Line->text().toFloat();
        auto a2 = ui->var2Line->text().toFloat();
        auto summ = a1 + a2;
        QString result;
        if (summ >= 10 && summ <= 20 )
        {
            result = "true";
        }
        else
        {
            result = "false";
        }
        ui->varSumm->setPlainText(QString::number(summ));
        ui->varResult->setPlainText(QString(result));
    });
}

task1::~task1()
{
    delete ui;
}

void task1::on_mainMenu_clicked()
{
    this->close();
    emit firstWindow();
}

