#ifndef TASK4_H
#define TASK4_H

#include <QWidget>

namespace Ui {
class task4;
}

class task4 : public QWidget
{
    Q_OBJECT

public:
    explicit task4(QWidget *parent = nullptr);
    ~task4();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_mainMenu_clicked();

private:
    Ui::task4 *ui;
};

#endif // TASK4_H
