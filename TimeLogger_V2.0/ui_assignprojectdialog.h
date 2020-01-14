/********************************************************************************
** Form generated from reading UI file 'assignprojectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGNPROJECTDIALOG_H
#define UI_ASSIGNPROJECTDIALOG_H

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

class Ui_AssignProjectDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEditProjectName;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *comboBoxUsers;
    QLabel *label_2;
    QTextEdit *textEditProjectDescription;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QDateEdit *dateEditStart;
    QSpacerItem *horizontalSpacer_2;
    QDateEdit *dateEditEnd;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditCompanyName;
    QLineEdit *lineEditClientName;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *buttonCancelProject;
    QLabel *labelRemainingSymbols;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonCreateProject;

    void setupUi(QDialog *AssignProjectDialog)
    {
        if (AssignProjectDialog->objectName().isEmpty())
            AssignProjectDialog->setObjectName(QString::fromUtf8("AssignProjectDialog"));
        AssignProjectDialog->resize(600, 450);
        AssignProjectDialog->setAutoFillBackground(false);
        AssignProjectDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 245, 250);"));
        verticalLayout_2 = new QVBoxLayout(AssignProjectDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(AssignProjectDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(228, 237, 240);\n"
"border: none;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_7->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(145, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        horizontalLayout_7->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lineEditProjectName = new QLineEdit(frame);
        lineEditProjectName->setObjectName(QString::fromUtf8("lineEditProjectName"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditProjectName->sizePolicy().hasHeightForWidth());
        lineEditProjectName->setSizePolicy(sizePolicy);
        lineEditProjectName->setMinimumSize(QSize(300, 30));
        QFont font1;
        font1.setPointSize(10);
        lineEditProjectName->setFont(font1);
        lineEditProjectName->setStyleSheet(QString::fromUtf8("border-radius: 2px;\n"
"border: none;\n"
"background-color: rgb(255, 255, 255);"));
        lineEditProjectName->setFrame(true);

        horizontalLayout_6->addWidget(lineEditProjectName);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        comboBoxUsers = new QComboBox(frame);
        comboBoxUsers->setObjectName(QString::fromUtf8("comboBoxUsers"));
        sizePolicy.setHeightForWidth(comboBoxUsers->sizePolicy().hasHeightForWidth());
        comboBoxUsers->setSizePolicy(sizePolicy);
        comboBoxUsers->setMinimumSize(QSize(200, 0));
        comboBoxUsers->setStyleSheet(QString::fromUtf8("QComboBox {\n"
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

        horizontalLayout_6->addWidget(comboBoxUsers);


        verticalLayout->addLayout(horizontalLayout_6);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        textEditProjectDescription = new QTextEdit(frame);
        textEditProjectDescription->setObjectName(QString::fromUtf8("textEditProjectDescription"));
        QFont font2;
        font2.setPointSize(9);
        textEditProjectDescription->setFont(font2);
        textEditProjectDescription->setStyleSheet(QString::fromUtf8("border-radius: 2px;\n"
"border: none;\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(textEditProjectDescription);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_4->addWidget(label_3);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);
        horizontalLayout_4->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        dateEditStart = new QDateEdit(frame);
        dateEditStart->setObjectName(QString::fromUtf8("dateEditStart"));
        dateEditStart->setMinimumSize(QSize(0, 30));
        dateEditStart->setFont(font1);
        dateEditStart->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"border: none;\n"
"background-color: rgb(255, 255, 255)\n"
"}\n"
"QDateEdit::drop-down\n"
"{\n"
"    border: 0px;\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(:/images/images/calendarIcon.png);\n"
"    width: 25px;\n"
"    height: 25px;\n"
"        margin-right: 10px;\n"
"\n"
"}border-radius: 2px;\n"
"border: none;\n"
"background-color: rgb(255, 255, 255);"));
        dateEditStart->setCalendarPopup(true);

        horizontalLayout->addWidget(dateEditStart);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        dateEditEnd = new QDateEdit(frame);
        dateEditEnd->setObjectName(QString::fromUtf8("dateEditEnd"));
        dateEditEnd->setMinimumSize(QSize(0, 30));
        dateEditEnd->setFont(font1);
        dateEditEnd->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"border: none;\n"
"background-color: rgb(255, 255, 255)\n"
"}\n"
"QDateEdit::drop-down\n"
"{\n"
"    border: 0px;\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: url(:/images/images/calendarIcon.png);\n"
"    width: 25px;\n"
"    height: 25px;\n"
"        margin-right: 10px;\n"
"\n"
"}"));
        dateEditEnd->setCalendarPopup(true);

        horizontalLayout->addWidget(dateEditEnd);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_5->addWidget(label_5);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout_5->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEditCompanyName = new QLineEdit(frame);
        lineEditCompanyName->setObjectName(QString::fromUtf8("lineEditCompanyName"));
        lineEditCompanyName->setMinimumSize(QSize(0, 30));
        lineEditCompanyName->setFont(font1);
        lineEditCompanyName->setStyleSheet(QString::fromUtf8("border-radius: 2px;\n"
"border: none;\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(lineEditCompanyName);

        lineEditClientName = new QLineEdit(frame);
        lineEditClientName->setObjectName(QString::fromUtf8("lineEditClientName"));
        lineEditClientName->setMinimumSize(QSize(0, 30));
        lineEditClientName->setFont(font1);
        lineEditClientName->setStyleSheet(QString::fromUtf8("border-radius: 2px;\n"
"border: none;\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(lineEditClientName);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(frame);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        buttonCancelProject = new QPushButton(AssignProjectDialog);
        buttonCancelProject->setObjectName(QString::fromUtf8("buttonCancelProject"));
        buttonCancelProject->setMinimumSize(QSize(100, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Century Gothic"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        buttonCancelProject->setFont(font3);
        buttonCancelProject->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
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

        horizontalLayout_3->addWidget(buttonCancelProject);

        labelRemainingSymbols = new QLabel(AssignProjectDialog);
        labelRemainingSymbols->setObjectName(QString::fromUtf8("labelRemainingSymbols"));
        labelRemainingSymbols->setFont(font2);
        labelRemainingSymbols->setStyleSheet(QString::fromUtf8("color: rgb(157, 157, 157);"));

        horizontalLayout_3->addWidget(labelRemainingSymbols);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        buttonCreateProject = new QPushButton(AssignProjectDialog);
        buttonCreateProject->setObjectName(QString::fromUtf8("buttonCreateProject"));
        buttonCreateProject->setEnabled(false);
        buttonCreateProject->setMinimumSize(QSize(100, 30));
        buttonCreateProject->setFont(font3);
        buttonCreateProject->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}\n"
"\n"
""));

        horizontalLayout_3->addWidget(buttonCreateProject);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(AssignProjectDialog);

        QMetaObject::connectSlotsByName(AssignProjectDialog);
    } // setupUi

    void retranslateUi(QDialog *AssignProjectDialog)
    {
        AssignProjectDialog->setWindowTitle(QCoreApplication::translate("AssignProjectDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AssignProjectDialog", "Project name", nullptr));
        label_7->setText(QCoreApplication::translate("AssignProjectDialog", "Assign To", nullptr));
        label_2->setText(QCoreApplication::translate("AssignProjectDialog", "Project description", nullptr));
        textEditProjectDescription->setHtml(QCoreApplication::translate("AssignProjectDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        textEditProjectDescription->setPlaceholderText(QCoreApplication::translate("AssignProjectDialog", "Project Description (Min 60 symbols)", nullptr));
        label_4->setText(QCoreApplication::translate("AssignProjectDialog", "Start date", nullptr));
        label_3->setText(QCoreApplication::translate("AssignProjectDialog", "End date", nullptr));
        label_5->setText(QCoreApplication::translate("AssignProjectDialog", "Company name", nullptr));
        label_6->setText(QCoreApplication::translate("AssignProjectDialog", "Client name", nullptr));
        buttonCancelProject->setText(QCoreApplication::translate("AssignProjectDialog", "CANCEL", nullptr));
        labelRemainingSymbols->setText(QCoreApplication::translate("AssignProjectDialog", "Remaining", nullptr));
        buttonCreateProject->setText(QCoreApplication::translate("AssignProjectDialog", "ADD POJECT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AssignProjectDialog: public Ui_AssignProjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNPROJECTDIALOG_H
