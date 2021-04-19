/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QWidget *centralWidget;
    QLabel *Output;
    QPushButton *Clear;
    QPushButton *Divide;
    QPushButton *Num7;
    QPushButton *Num8;
    QPushButton *Num9;
    QPushButton *Multiply;
    QPushButton *Num6;
    QPushButton *Num4;
    QPushButton *Num5;
    QPushButton *Subtract;
    QPushButton *Num3;
    QPushButton *Num1;
    QPushButton *Num2;
    QPushButton *Add;
    QPushButton *Num0;
    QPushButton *Equal;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName(QString::fromUtf8("calculator"));
        calculator->resize(539, 608);
        centralWidget = new QWidget(calculator);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Output = new QLabel(centralWidget);
        Output->setObjectName(QString::fromUtf8("Output"));
        Output->setGeometry(QRect(30, 20, 471, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Ebrima"));
        font.setPointSize(40);
        Output->setFont(font);
        Output->setLayoutDirection(Qt::RightToLeft);
        Output->setAutoFillBackground(true);
        Output->setFrameShape(QFrame::Panel);
        Output->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setGeometry(QRect(30, 110, 351, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ebrima"));
        font1.setPointSize(28);
        Clear->setFont(font1);
        Divide = new QPushButton(centralWidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        Divide->setGeometry(QRect(390, 110, 111, 81));
        Divide->setFont(font1);
        Num7 = new QPushButton(centralWidget);
        Num7->setObjectName(QString::fromUtf8("Num7"));
        Num7->setGeometry(QRect(30, 200, 111, 81));
        Num7->setFont(font1);
        Num8 = new QPushButton(centralWidget);
        Num8->setObjectName(QString::fromUtf8("Num8"));
        Num8->setGeometry(QRect(150, 200, 111, 81));
        Num8->setFont(font1);
        Num9 = new QPushButton(centralWidget);
        Num9->setObjectName(QString::fromUtf8("Num9"));
        Num9->setGeometry(QRect(270, 200, 111, 81));
        Num9->setFont(font1);
        Multiply = new QPushButton(centralWidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        Multiply->setGeometry(QRect(390, 200, 111, 81));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Corbel"));
        font2.setPointSize(24);
        Multiply->setFont(font2);
        Num6 = new QPushButton(centralWidget);
        Num6->setObjectName(QString::fromUtf8("Num6"));
        Num6->setGeometry(QRect(270, 290, 111, 81));
        Num6->setFont(font1);
        Num4 = new QPushButton(centralWidget);
        Num4->setObjectName(QString::fromUtf8("Num4"));
        Num4->setGeometry(QRect(30, 290, 111, 81));
        Num4->setFont(font1);
        Num5 = new QPushButton(centralWidget);
        Num5->setObjectName(QString::fromUtf8("Num5"));
        Num5->setGeometry(QRect(150, 290, 111, 81));
        Num5->setFont(font1);
        Subtract = new QPushButton(centralWidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        Subtract->setGeometry(QRect(390, 290, 111, 81));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Leelawadee UI"));
        font3.setPointSize(40);
        Subtract->setFont(font3);
        Num3 = new QPushButton(centralWidget);
        Num3->setObjectName(QString::fromUtf8("Num3"));
        Num3->setGeometry(QRect(270, 380, 111, 81));
        Num3->setFont(font1);
        Num1 = new QPushButton(centralWidget);
        Num1->setObjectName(QString::fromUtf8("Num1"));
        Num1->setGeometry(QRect(30, 380, 111, 81));
        Num1->setFont(font1);
        Num2 = new QPushButton(centralWidget);
        Num2->setObjectName(QString::fromUtf8("Num2"));
        Num2->setGeometry(QRect(150, 380, 111, 81));
        Num2->setFont(font1);
        Add = new QPushButton(centralWidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setGeometry(QRect(390, 380, 111, 81));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Ebrima"));
        font4.setPointSize(33);
        Add->setFont(font4);
        Num0 = new QPushButton(centralWidget);
        Num0->setObjectName(QString::fromUtf8("Num0"));
        Num0->setGeometry(QRect(150, 470, 111, 81));
        Num0->setFont(font1);
        Equal = new QPushButton(centralWidget);
        Equal->setObjectName(QString::fromUtf8("Equal"));
        Equal->setGeometry(QRect(390, 470, 111, 81));
        Equal->setFont(font1);
        calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(calculator);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 539, 21));
        calculator->setMenuBar(menuBar);
        mainToolBar = new QToolBar(calculator);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        calculator->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(calculator);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        calculator->setStatusBar(statusBar);

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QMainWindow *calculator)
    {
        calculator->setWindowTitle(QApplication::translate("calculator", "calculator", nullptr));
        Output->setText(QString());
        Clear->setText(QApplication::translate("calculator", "C", nullptr));
        Divide->setText(QApplication::translate("calculator", "\303\267", nullptr));
        Num7->setText(QApplication::translate("calculator", "7", nullptr));
        Num8->setText(QApplication::translate("calculator", "8", nullptr));
        Num9->setText(QApplication::translate("calculator", "9", nullptr));
        Multiply->setText(QApplication::translate("calculator", "X", nullptr));
        Num6->setText(QApplication::translate("calculator", "6", nullptr));
        Num4->setText(QApplication::translate("calculator", "4", nullptr));
        Num5->setText(QApplication::translate("calculator", "5", nullptr));
        Subtract->setText(QApplication::translate("calculator", "-", nullptr));
        Num3->setText(QApplication::translate("calculator", "3", nullptr));
        Num1->setText(QApplication::translate("calculator", "1", nullptr));
        Num2->setText(QApplication::translate("calculator", "2", nullptr));
        Add->setText(QApplication::translate("calculator", "+", nullptr));
        Num0->setText(QApplication::translate("calculator", "0", nullptr));
        Equal->setText(QApplication::translate("calculator", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
