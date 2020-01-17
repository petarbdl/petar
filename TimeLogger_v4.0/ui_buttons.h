/********************************************************************************
** Form generated from reading UI file 'buttons.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONS_H
#define UI_BUTTONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Buttons
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonEdit;
    QPushButton *buttonDelete;

    void setupUi(QWidget *Buttons)
    {
        if (Buttons->objectName().isEmpty())
            Buttons->setObjectName(QString::fromUtf8("Buttons"));
        Buttons->resize(127, 29);
        horizontalLayout = new QHBoxLayout(Buttons);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonEdit = new QPushButton(Buttons);
        buttonEdit->setObjectName(QString::fromUtf8("buttonEdit"));
        buttonEdit->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"	background-color: transparent;\n"
"	border:none\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(231, 236, 240);\n"
"	border:none\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgb(245, 250, 255);\n"
"	border:none\n"
"}"));

        horizontalLayout->addWidget(buttonEdit);

        buttonDelete = new QPushButton(Buttons);
        buttonDelete->setObjectName(QString::fromUtf8("buttonDelete"));
        buttonDelete->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"	background-color: transparent;\n"
"	border:none\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(231, 236, 240);\n"
"	border:none\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgb(245, 250, 255);\n"
"	border:none\n"
"}"));

        horizontalLayout->addWidget(buttonDelete);


        retranslateUi(Buttons);

        QMetaObject::connectSlotsByName(Buttons);
    } // setupUi

    void retranslateUi(QWidget *Buttons)
    {
        Buttons->setWindowTitle(QCoreApplication::translate("Buttons", "Form", nullptr));
        buttonEdit->setText(QString());
        buttonDelete->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Buttons: public Ui_Buttons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONS_H
