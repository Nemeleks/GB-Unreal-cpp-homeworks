#ifndef TASK5_H
#define TASK5_H

#include <QWidget>

namespace Ui {
class task5;
}

class task5 : public QWidget
{
    Q_OBJECT

public:
    explicit task5(QWidget *parent = nullptr);
    ~task5();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_mainMenu_clicked();

private:
    Ui::task5 *ui;
};

#endif // TASK5_H
