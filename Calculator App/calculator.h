#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include "operations.h"

namespace Ui {
class calculator;
}

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit calculator(QWidget *parent = nullptr);
    ~calculator();

private slots:
    void on_Clear_clicked();

    void on_Divide_clicked();

    void on_Num7_clicked();

    void on_Num8_clicked();

    void on_Num9_clicked();

    void on_Multiply_clicked();

    void on_Num4_clicked();

    void on_Num5_clicked();

    void on_Num6_clicked();

    void on_Subtract_clicked();

    void on_Num1_clicked();

    void on_Num2_clicked();

    void on_Num3_clicked();

    void on_Add_clicked();

    void on_Num0_clicked();

    void on_Equal_clicked();

private:
    Ui::calculator *ui;
    void update(bool done);
    void reset();

    operations myCalc;
    QString equation;
    QString num1;
    QString oprtr;
    QString num2;
};

#endif // CALCULATOR_H
