#ifndef OPERATIONS_H
#define OPERATIONS_H
#include <QString>

class operations
{
public:
    operations();
    void prcssUserInpt(QString in);
    QString getAnswer();
    QString getCurrent();
    void clear();

private:
    int state;
    int currentValue;
    int operand1;

    QString oprtr;

    bool isNum(QString check);
    bool isOp(QString check);
    void convertToNum(QString conv);
    void reset();
};

#endif // OPERATIONS_H
