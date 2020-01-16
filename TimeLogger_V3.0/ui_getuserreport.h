/********************************************************************************
** Form generated from reading UI file 'getuserreport.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETUSERREPORT_H
#define UI_GETUSERREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GetUserReport
{
public:
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxPerson;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QDateEdit *dateEditStartDate;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QDateEdit *dateEditEndDate;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QComboBox *comboBoxProject;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonClose;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonSaveReport;

    void setupUi(QDialog *GetUserReport)
    {
        if (GetUserReport->objectName().isEmpty())
            GetUserReport->setObjectName(QString::fromUtf8("GetUserReport"));
        GetUserReport->resize(636, 450);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GetUserReport->sizePolicy().hasHeightForWidth());
        GetUserReport->setSizePolicy(sizePolicy);
        GetUserReport->setMinimumSize(QSize(600, 450));
        GetUserReport->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 245, 250);"));
        verticalLayout_4 = new QVBoxLayout(GetUserReport);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        frame = new QFrame(GetUserReport);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(228, 237, 240);\n"
"border: none;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_5->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBoxPerson = new QComboBox(frame);
        comboBoxPerson->setObjectName(QString::fromUtf8("comboBoxPerson"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxPerson->sizePolicy().hasHeightForWidth());
        comboBoxPerson->setSizePolicy(sizePolicy1);
        comboBoxPerson->setMinimumSize(QSize(150, 30));
        comboBoxPerson->setFont(font);
        comboBoxPerson->setStyleSheet(QString::fromUtf8("QComboBox {\n"
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

        horizontalLayout->addWidget(comboBoxPerson);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        dateEditStartDate = new QDateEdit(frame);
        dateEditStartDate->setObjectName(QString::fromUtf8("dateEditStartDate"));
        sizePolicy1.setHeightForWidth(dateEditStartDate->sizePolicy().hasHeightForWidth());
        dateEditStartDate->setSizePolicy(sizePolicy1);
        dateEditStartDate->setMinimumSize(QSize(100, 30));
        QFont font1;
        font1.setPointSize(10);
        dateEditStartDate->setFont(font1);
        dateEditStartDate->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
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
"}\n"
"border-radius: 2px;\n"
"border: none;\n"
"background-color: rgb(255, 255, 255);"));
        dateEditStartDate->setCalendarPopup(true);

        verticalLayout_3->addWidget(dateEditStartDate);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_6->addWidget(label_3);

        dateEditEndDate = new QDateEdit(frame);
        dateEditEndDate->setObjectName(QString::fromUtf8("dateEditEndDate"));
        sizePolicy1.setHeightForWidth(dateEditEndDate->sizePolicy().hasHeightForWidth());
        dateEditEndDate->setSizePolicy(sizePolicy1);
        dateEditEndDate->setMinimumSize(QSize(100, 30));
        dateEditEndDate->setFont(font1);
        dateEditEndDate->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
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
"}\n"
"border-radius: 2px;\n"
"border: none;\n"
"background-color: rgb(255, 255, 255);"));
        dateEditEndDate->setCalendarPopup(true);

        verticalLayout_6->addWidget(dateEditEndDate);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        comboBoxProject = new QComboBox(frame);
        comboBoxProject->setObjectName(QString::fromUtf8("comboBoxProject"));
        comboBoxProject->setMinimumSize(QSize(150, 30));
        comboBoxProject->setFont(font);
        comboBoxProject->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"border-radius: 2px;\n"
"border: none;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QComboBox::drop-down\n"
"{\n"
"    border: 0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/images/images/dA.png);\n"
"    width: 25px;\n"
"    height: 25px;\n"
"        margin-right: 10px;\n"
"}"));

        verticalLayout->addWidget(comboBoxProject);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMinimumSize(QSize(600, 0));
        tableWidget->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
"    background-color: transparent;\n"
"    /*color: black;\n"
"    padding-left: 4px;*/\n"
"	padding: 4px;\n"
"    font-size: 12pt;\n"
"    border-style: none;\n"
"    border-bottom: 1px solid rgb(64, 150, 244);\n"
"    border-right: 1px solid rgb(231, 236, 240);\n"
"\n"
"}\n"
"\n"
"QTableView {\n"
"    background-color: transparent;\n"
"	border: none;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    gridline-color: rgb(231, 236, 240);\n"
"    font-size: 10pt;\n"
"}"));

        verticalLayout_5->addWidget(tableWidget);


        verticalLayout_4->addWidget(frame);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        buttonClose = new QPushButton(GetUserReport);
        buttonClose->setObjectName(QString::fromUtf8("buttonClose"));
        buttonClose->setEnabled(true);
        buttonClose->setMinimumSize(QSize(100, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        buttonClose->setFont(font2);
        buttonClose->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
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
"}\n"
"\n"
"QPushButton:disabled {\n"
"background-color: rgb(225, 225, 225);\n"
"}\n"
"\n"
"\n"
""));

        horizontalLayout_2->addWidget(buttonClose);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonSaveReport = new QPushButton(GetUserReport);
        pushButtonSaveReport->setObjectName(QString::fromUtf8("pushButtonSaveReport"));
        pushButtonSaveReport->setMinimumSize(QSize(120, 30));
        pushButtonSaveReport->setFont(font2);
        pushButtonSaveReport->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: rgb(64, 150, 244);\n"
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
"\n"
""));

        horizontalLayout_2->addWidget(pushButtonSaveReport);


        verticalLayout_4->addLayout(horizontalLayout_2);


        retranslateUi(GetUserReport);

        QMetaObject::connectSlotsByName(GetUserReport);
    } // setupUi

    void retranslateUi(QDialog *GetUserReport)
    {
        GetUserReport->setWindowTitle(QCoreApplication::translate("GetUserReport", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("GetUserReport", "Person", nullptr));
        label_2->setText(QCoreApplication::translate("GetUserReport", "From Date", nullptr));
        label_3->setText(QCoreApplication::translate("GetUserReport", "To Date", nullptr));
        label_4->setText(QCoreApplication::translate("GetUserReport", "List of all Projects:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("GetUserReport", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("GetUserReport", "Project Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("GetUserReport", "Work Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("GetUserReport", "Hours", nullptr));
        buttonClose->setText(QCoreApplication::translate("GetUserReport", "CANCEL", nullptr));
        pushButtonSaveReport->setText(QCoreApplication::translate("GetUserReport", "SAVE REPORT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetUserReport: public Ui_GetUserReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETUSERREPORT_H
