#include "operations.h"

operations::operations()
{
    state = 0;
    currentValue = 0;
    operand1 = 0;
    oprtr = "";
}

void operations::prcssUserInpt(QString in)
{
    switch(state)
    {
    case 0:
        if (in == "C" || in == "0")
        {
            currentValue = 0;
        }

        else if (isNum(in))
        {
            convertToNum(in);
            state = 1;
        }

        else if (isOp(in))
        {
           operand1 = currentValue;
           oprtr = in;
           state = 2;
        }
        break;

    case 1:
        if (isNum(in))
        {
            convertToNum(in);
        }

        else if (isOp(in))
        {
            operand1 = currentValue;
            currentValue = 0;
            oprtr = in;
            state = 2;
        }
        break;

    case 2:
        if (isNum(in))
        {
            convertToNum(in);
            state = 3;
        }

        else if (isOp(in))
        {
            oprtr = in;
        }
        break;

    case 3:
        if (isNum(in))
        {
            convertToNum(in);
        }

        else if (isOp(in))
        {
            oprtr = in;
        }
        break;
    }
}

QString operations::getAnswer()
{
    int answer = 0;

    if (oprtr == "/")
    {
        answer = operand1 / currentValue;
    }

    else if (oprtr == "x")
    {
        answer = operand1 * currentValue;
    }

    else if (oprtr == "+")
    {
        answer = operand1 + currentValue;
    }

    else if (oprtr == "-")
    {
        answer = operand1 - currentValue;
    }

    return QString::number(answer);
}

QString operations::getCurrent()
{
    //what I really want from current is the curent equation, not just the number in currentValue
    QString sendBack = "";
    if (state == 0 || state == 1)
    {
        sendBack += QString::number(currentValue);
    }

    else if (state == 2)
    {
        sendBack += QString::number(operand1) + " " + oprtr + " 0";
    }

    else if (state == 3)
    {
        sendBack += QString::number(operand1) + " " + oprtr + " " + QString::number(currentValue);
    }

    if (sendBack == "")
    {
        return "0";
    }

    else
    {
        return sendBack;
    }

}

void operations::clear()
{
    reset();
}

bool operations::isNum(QString check)
{
    if (check == "0")
    {
        return true;
    }
    else if (check == "1")
    {
        return true;
    }
    else if (check == "2")
    {
        return true;
    }
    else if (check == "3")
    {
        return true;
    }
    else if (check == "4")
    {
        return true;
    }
    else if (check == "5")
    {
        return true;
    }
    else if (check == "6")
    {
        return true;
    }
    else if (check == "7")
    {
        return true;
    }
    else if (check == "8")
    {
        return true;
    }
    else if (check == "9")
    {
        return true;
    }

    return false;
}

bool operations::isOp(QString check)
{
    if (check == "/")
    {
        return true;
    }
    else if (check == "x")
    {
        return true;
    }
    else if (check == "+")
    {
        return true;
    }
    else if (check == "-")
    {
        return true;
    }

    else return false;
}

void operations::convertToNum(QString conv)
{
    //takes care of if there is already a digit inside of currentValue
    if (currentValue != 0)
    {
        currentValue *= 10;
    }

    currentValue += conv.toInt();
}

void operations::reset()
{
    state = 0;
    currentValue = 0;
    operand1 = 0;
    oprtr = "";
}

