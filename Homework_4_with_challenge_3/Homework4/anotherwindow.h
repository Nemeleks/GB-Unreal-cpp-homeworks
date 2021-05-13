#ifndef ANOTHERWINDOW_H
#define ANOTHERWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class AnotherWindow; }
QT_END_NAMESPACE

class AnotherWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AnotherWindow(QWidget *parent = nullptr);
    ~AnotherWindow();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_mainMenu_clicked();

private:
    Ui::AnotherWindow *ui;
};

#endif // ANOTHERWINDOW_H
