#ifndef TASK1_H
#define TASK1_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class task1;
}
QT_END_NAMESPACE

class task1 : public QWidget
{
    Q_OBJECT

public:
    explicit task1(QWidget *parent = nullptr);
    ~task1();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_mainMenu_clicked();

private:
    Ui::task1 *ui;
};
#endif // TASK1_H
