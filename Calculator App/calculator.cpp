#include "calculator.h"
#include "ui_calculator.h"

calculator::calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calculator)
{
    ui->setupUi(this);
    update(false);
}

calculator::~calculator()
{
    delete ui;

}

void calculator::update(bool done)
{
    if (!done)
    {
        ui->Output->setText(myCalc.getCurrent());
    }

    else if (done)
    {
        ui->Output->setText(myCalc.getCurrent() + " = " + myCalc.getAnswer());
    }
}

void calculator::reset()
{
    myCalc.clear();
}



void calculator::on_Clear_clicked()
{
    reset();
    update(false);
}


void calculator::on_Divide_clicked()
{
    myCalc.prcssUserInpt("/");
    update(false);
}

void calculator::on_Num7_clicked()
{
    myCalc.prcssUserInpt("7");
    update(false);
}

void calculator::on_Num8_clicked()
{
    myCalc.prcssUserInpt("8");
    update(false);
}

void calculator::on_Num9_clicked()
{
    myCalc.prcssUserInpt("9");
    update(false);
}

void calculator::on_Multiply_clicked()
{
    myCalc.prcssUserInpt("x");
    update(false);
}

void calculator::on_Num4_clicked()
{
    myCalc.prcssUserInpt("4");
    update(false);
}

void calculator::on_Num5_clicked()
{
    myCalc.prcssUserInpt("5");
    update(false);
}

void calculator::on_Num6_clicked()
{
    myCalc.prcssUserInpt("6");
    update(false);
}

void calculator::on_Subtract_clicked()
{
    myCalc.prcssUserInpt("-");
    update(false);
}

void calculator::on_Num1_clicked()
{
    myCalc.prcssUserInpt("1");
    update(false);
}

void calculator::on_Num2_clicked()
{
    myCalc.prcssUserInpt("2");
    update(false);
}

void calculator::on_Num3_clicked()
{
    myCalc.prcssUserInpt("3");
    update(false);
}

void calculator::on_Add_clicked()
{
    myCalc.prcssUserInpt("+");
    update(false);
}

void calculator::on_Num0_clicked()
{
    myCalc.prcssUserInpt("0");
    update(false);
}

void calculator::on_Equal_clicked()
{
    update(true);
    reset();
}
