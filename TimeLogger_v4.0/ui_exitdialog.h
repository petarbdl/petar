/********************************************************************************
** Form generated from reading UI file 'exitdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXITDIALOG_H
#define UI_EXITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExitDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *labelLogoutName;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonLogout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonQuit;

    void setupUi(QDialog *ExitDialog)
    {
        if (ExitDialog->objectName().isEmpty())
            ExitDialog->setObjectName(QString::fromUtf8("ExitDialog"));
        ExitDialog->resize(400, 150);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ExitDialog->sizePolicy().hasHeightForWidth());
        ExitDialog->setSizePolicy(sizePolicy);
        ExitDialog->setMinimumSize(QSize(400, 150));
        ExitDialog->setMaximumSize(QSize(400, 150));
        ExitDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 245, 250);"));
        verticalLayout_2 = new QVBoxLayout(ExitDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(ExitDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        labelLogoutName = new QLabel(ExitDialog);
        labelLogoutName->setObjectName(QString::fromUtf8("labelLogoutName"));
        QFont font1;
        font1.setPointSize(14);
        font1.setItalic(true);
        labelLogoutName->setFont(font1);
        labelLogoutName->setStyleSheet(QString::fromUtf8("color: rgb(60, 142, 230);"));

        horizontalLayout_2->addWidget(labelLogoutName);


        verticalLayout->addLayout(horizontalLayout_2);

        label_3 = new QLabel(ExitDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonLogout = new QPushButton(ExitDialog);
        buttonLogout->setObjectName(QString::fromUtf8("buttonLogout"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonLogout->sizePolicy().hasHeightForWidth());
        buttonLogout->setSizePolicy(sizePolicy2);
        buttonLogout->setMinimumSize(QSize(120, 30));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        buttonLogout->setFont(font2);
        buttonLogout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"        background-color: rgb(60, 142, 230);\n"
"        border-radius: 5px;\n"
"        color: rgb(255, 255, 255);\n"
"        border:none\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(57, 134, 217);\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgb(67, 158, 255);\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"background-color: rgb(225, 225, 225);\n"
"}"));

        horizontalLayout->addWidget(buttonLogout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonQuit = new QPushButton(ExitDialog);
        buttonQuit->setObjectName(QString::fromUtf8("buttonQuit"));
        buttonQuit->setMinimumSize(QSize(120, 30));
        buttonQuit->setFont(font2);
        buttonQuit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"        background-color: rgb(60, 142, 230);\n"
"        border-radius: 5px;\n"
"        color: rgb(255, 255, 255);\n"
"        border:none\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(57, 134, 217);\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgb(67, 158, 255);\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"background-color: rgb(225, 225, 225);\n"
"}"));

        horizontalLayout->addWidget(buttonQuit);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(ExitDialog);

        QMetaObject::connectSlotsByName(ExitDialog);
    } // setupUi

    void retranslateUi(QDialog *ExitDialog)
    {
        ExitDialog->setWindowTitle(QCoreApplication::translate("ExitDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ExitDialog", "Goodbye, ", nullptr));
        labelLogoutName->setText(QCoreApplication::translate("ExitDialog", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("ExitDialog", "Would you like to...", nullptr));
        buttonLogout->setText(QCoreApplication::translate("ExitDialog", "LOGOUT", nullptr));
        buttonQuit->setText(QCoreApplication::translate("ExitDialog", "QUIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExitDialog: public Ui_ExitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXITDIALOG_H
