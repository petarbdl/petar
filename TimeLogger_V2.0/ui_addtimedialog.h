/********************************************************************************
** Form generated from reading UI file 'addtimedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTIMEDIALOG_H
#define UI_ADDTIMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddTimeDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditPerson;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QDateEdit *dateEditDate;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditTime;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QComboBox *comboBoxProject;
    QSpacerItem *horizontalSpacer_3;
    QTextEdit *textEditDescription;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonCancel;
    QLabel *labelRemainingSymbols;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonAddTime;

    void setupUi(QDialog *AddTimeDialog)
    {
        if (AddTimeDialog->objectName().isEmpty())
            AddTimeDialog->setObjectName(QString::fromUtf8("AddTimeDialog"));
        AddTimeDialog->resize(600, 350);
        AddTimeDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 245, 250);"));
        verticalLayout_4 = new QVBoxLayout(AddTimeDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        frame = new QFrame(AddTimeDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(228, 237, 240);\n"
"border: none;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_5->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEditPerson = new QLineEdit(frame);
        lineEditPerson->setObjectName(QString::fromUtf8("lineEditPerson"));
        lineEditPerson->setEnabled(false);
        lineEditPerson->setMinimumSize(QSize(0, 30));
        QFont font1;
        font1.setPointSize(10);
        lineEditPerson->setFont(font1);
        lineEditPerson->setStyleSheet(QString::fromUtf8("border: 1px solid white;\n"
"border-radius: 3px;\n"
"background-color: rgb(233, 236, 239);"));

        horizontalLayout_3->addWidget(lineEditPerson);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        dateEditDate = new QDateEdit(frame);
        dateEditDate->setObjectName(QString::fromUtf8("dateEditDate"));
        dateEditDate->setMinimumSize(QSize(150, 30));
        dateEditDate->setFont(font1);
        dateEditDate->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"border: none;\n"
"background-color: rgb(255, 255, 255)\n"
"}\n"
"QDateEdit::drop-down \n"
"{\n"
"    border: 0px;\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(:/images/images/calendarIcon.png);\n"
"    width: 25px;\n"
"    height: 25px;\n"
"	margin-right: 10px;\n"
"\n"
"}"));
        dateEditDate->setCalendarPopup(true);

        verticalLayout->addWidget(dateEditDate);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        lineEditTime = new QLineEdit(frame);
        lineEditTime->setObjectName(QString::fromUtf8("lineEditTime"));
        lineEditTime->setMinimumSize(QSize(0, 30));
        lineEditTime->setFont(font1);
        lineEditTime->setStyleSheet(QString::fromUtf8("border-radius: 2px;\n"
"border: none;\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(lineEditTime);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout_3->addWidget(label_4);

        comboBoxProject = new QComboBox(frame);
        comboBoxProject->setObjectName(QString::fromUtf8("comboBoxProject"));
        comboBoxProject->setMinimumSize(QSize(0, 30));
        comboBoxProject->setFont(font1);
        comboBoxProject->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"border-radius: 2px;\n"
"border: none;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QComboBox::drop-down \n"
"{\n"
"    border: 0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/images/images/dA.png);\n"
"    width: 25px;\n"
"    height: 25px;\n"
"	margin-right: 10px;\n"
"}"));

        verticalLayout_3->addWidget(comboBoxProject);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(140, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_5->addLayout(horizontalLayout);

        textEditDescription = new QTextEdit(frame);
        textEditDescription->setObjectName(QString::fromUtf8("textEditDescription"));
        textEditDescription->setEnabled(true);
        QFont font2;
        font2.setPointSize(9);
        textEditDescription->setFont(font2);
        textEditDescription->setStyleSheet(QString::fromUtf8("border-radius: 2px;\n"
"border: none;\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(textEditDescription);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        verticalLayout_4->addWidget(frame);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        buttonCancel = new QPushButton(AddTimeDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setMinimumSize(QSize(100, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Century Gothic"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        buttonCancel->setFont(font3);
        buttonCancel->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {	\n"
"border: none;\n"
"color: rgb(64, 150, 244);\n"
"background-color: transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"alternate-background-color: rgb(231, 236, 240);\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgb(245, 250, 255);\n"
"}"));

        horizontalLayout_2->addWidget(buttonCancel);

        labelRemainingSymbols = new QLabel(AddTimeDialog);
        labelRemainingSymbols->setObjectName(QString::fromUtf8("labelRemainingSymbols"));
        labelRemainingSymbols->setFont(font2);
        labelRemainingSymbols->setStyleSheet(QString::fromUtf8("color: rgb(157, 157, 157);"));

        horizontalLayout_2->addWidget(labelRemainingSymbols);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonAddTime = new QPushButton(AddTimeDialog);
        buttonAddTime->setObjectName(QString::fromUtf8("buttonAddTime"));
        buttonAddTime->setEnabled(false);
        buttonAddTime->setMinimumSize(QSize(100, 30));
        buttonAddTime->setFont(font3);
        buttonAddTime->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"	background-color: rgb(64, 150, 244);\n"
"	border-radius: 5px;\n"
"	color: rgb(255, 255, 255);\n"
"	border:none\n"
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
"}\n"
"\n"
"\n"
""));

        horizontalLayout_2->addWidget(buttonAddTime);


        verticalLayout_4->addLayout(horizontalLayout_2);


        retranslateUi(AddTimeDialog);

        QMetaObject::connectSlotsByName(AddTimeDialog);
    } // setupUi

    void retranslateUi(QDialog *AddTimeDialog)
    {
        AddTimeDialog->setWindowTitle(QCoreApplication::translate("AddTimeDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddTimeDialog", "Person", nullptr));
        label_2->setText(QCoreApplication::translate("AddTimeDialog", "Date", nullptr));
        label_3->setText(QCoreApplication::translate("AddTimeDialog", "Time", nullptr));
        label_4->setText(QCoreApplication::translate("AddTimeDialog", "Project", nullptr));
        textEditDescription->setPlaceholderText(QCoreApplication::translate("AddTimeDialog", "Work Description (Min 60 symbols)", nullptr));
        buttonCancel->setText(QCoreApplication::translate("AddTimeDialog", "CANCEL", nullptr));
        labelRemainingSymbols->setText(QCoreApplication::translate("AddTimeDialog", "Remaining", nullptr));
        buttonAddTime->setText(QCoreApplication::translate("AddTimeDialog", "ADD TIME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTimeDialog: public Ui_AddTimeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTIMEDIALOG_H
