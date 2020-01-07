/********************************************************************************
** Form generated from reading UI file 'getuserreport.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETUSERREPORT_H
#define UI_GETUSERREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QComboBox *comboBoxPerson;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QComboBox *comboBoxProject;
    QSpacerItem *verticalSpacer_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonAddTime;

    void setupUi(QDialog *GetUserReport)
    {
        if (GetUserReport->objectName().isEmpty())
            GetUserReport->setObjectName(QString::fromUtf8("GetUserReport"));
        GetUserReport->resize(632, 350);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GetUserReport->sizePolicy().hasHeightForWidth());
        GetUserReport->setSizePolicy(sizePolicy);
        GetUserReport->setMinimumSize(QSize(600, 350));
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
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        comboBoxPerson = new QComboBox(frame);
        comboBoxPerson->setObjectName(QString::fromUtf8("comboBoxPerson"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxPerson->sizePolicy().hasHeightForWidth());
        comboBoxPerson->setSizePolicy(sizePolicy1);
        comboBoxPerson->setMinimumSize(QSize(150, 30));
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

        verticalLayout_2->addWidget(comboBoxPerson);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        comboBoxProject = new QComboBox(frame);
        comboBoxProject->setObjectName(QString::fromUtf8("comboBoxProject"));
        comboBoxProject->setMinimumSize(QSize(150, 30));
        QFont font1;
        font1.setPointSize(10);
        comboBoxProject->setFont(font1);
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
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonAddTime = new QPushButton(GetUserReport);
        buttonAddTime->setObjectName(QString::fromUtf8("buttonAddTime"));
        buttonAddTime->setEnabled(true);
        buttonAddTime->setMinimumSize(QSize(100, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        buttonAddTime->setFont(font2);
        buttonAddTime->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_2->addWidget(buttonAddTime);


        verticalLayout_4->addLayout(horizontalLayout_2);


        retranslateUi(GetUserReport);

        QMetaObject::connectSlotsByName(GetUserReport);
    } // setupUi

    void retranslateUi(QDialog *GetUserReport)
    {
        GetUserReport->setWindowTitle(QCoreApplication::translate("GetUserReport", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("GetUserReport", "Person", nullptr));
        label_4->setText(QCoreApplication::translate("GetUserReport", "List of all assigned Projects:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("GetUserReport", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("GetUserReport", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("GetUserReport", "Work Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("GetUserReport", "Hours", nullptr));
        buttonAddTime->setText(QCoreApplication::translate("GetUserReport", "CLOSE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetUserReport: public Ui_GetUserReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETUSERREPORT_H
