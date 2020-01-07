/********************************************************************************
** Form generated from reading UI file 'timestatus.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMESTATUS_H
#define UI_TIMESTATUS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimeStatus
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelUser;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonPreviousWeek;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelFirstDay;
    QLabel *labelLastDay;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelYear;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *buttonNextWeek;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLabel *labelHours;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_2;
    QPushButton *buttonAddTime;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QTableWidget *tableWidgetProjectDetails;
    QTableWidget *tableWidgetReportDetails;

    void setupUi(QWidget *TimeStatus)
    {
        if (TimeStatus->objectName().isEmpty())
            TimeStatus->setObjectName(QString::fromUtf8("TimeStatus"));
        TimeStatus->setEnabled(true);
        TimeStatus->resize(974, 866);
        TimeStatus->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 245, 250);"));
        verticalLayout_4 = new QVBoxLayout(TimeStatus);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        labelUser = new QLabel(TimeStatus);
        labelUser->setObjectName(QString::fromUtf8("labelUser"));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        labelUser->setFont(font);

        verticalLayout_3->addWidget(labelUser);

        label = new QLabel(TimeStatus);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        verticalLayout_3->addWidget(label);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonPreviousWeek = new QPushButton(TimeStatus);
        buttonPreviousWeek->setObjectName(QString::fromUtf8("buttonPreviousWeek"));
        buttonPreviousWeek->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"	background-color: transparent;\n"
"	border:none\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(231, 236, 240);\n"
"	border:none\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgb(245, 250, 255);\n"
"	border:none\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/lA.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonPreviousWeek->setIcon(icon);
        buttonPreviousWeek->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(buttonPreviousWeek);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelFirstDay = new QLabel(TimeStatus);
        labelFirstDay->setObjectName(QString::fromUtf8("labelFirstDay"));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        labelFirstDay->setFont(font2);

        horizontalLayout->addWidget(labelFirstDay);

        labelLastDay = new QLabel(TimeStatus);
        labelLastDay->setObjectName(QString::fromUtf8("labelLastDay"));
        labelLastDay->setFont(font2);

        horizontalLayout->addWidget(labelLastDay);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        labelYear = new QLabel(TimeStatus);
        labelYear->setObjectName(QString::fromUtf8("labelYear"));
        QFont font3;
        font3.setPointSize(10);
        labelYear->setFont(font3);
        labelYear->setStyleSheet(QString::fromUtf8("color: rgb(157, 157, 157);"));

        horizontalLayout_3->addWidget(labelYear);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        buttonNextWeek = new QPushButton(TimeStatus);
        buttonNextWeek->setObjectName(QString::fromUtf8("buttonNextWeek"));
        buttonNextWeek->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"	background-color: transparent;\n"
"	border:none\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(231, 236, 240);\n"
"	border:none\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgb(245, 250, 255);\n"
"	border:none\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/rA.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonNextWeek->setIcon(icon1);
        buttonNextWeek->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(buttonNextWeek);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(TimeStatus);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(157, 157, 157);"));

        horizontalLayout_2->addWidget(label_2);

        labelHours = new QLabel(TimeStatus);
        labelHours->setObjectName(QString::fromUtf8("labelHours"));
        QFont font5;
        font5.setPointSize(20);
        font5.setBold(true);
        font5.setWeight(75);
        labelHours->setFont(font5);
        labelHours->setStyleSheet(QString::fromUtf8("color: rgb(64, 150, 244);"));

        horizontalLayout_2->addWidget(labelHours);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        buttonAddTime = new QPushButton(TimeStatus);
        buttonAddTime->setObjectName(QString::fromUtf8("buttonAddTime"));
        buttonAddTime->setMinimumSize(QSize(100, 30));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Century Gothic"));
        font6.setPointSize(9);
        font6.setBold(true);
        font6.setWeight(75);
        buttonAddTime->setFont(font6);
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
""));

        verticalLayout_2->addWidget(buttonAddTime);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        horizontalLayout_4->addLayout(gridLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        horizontalLayout_4->addLayout(gridLayout);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout_4);

        label_3 = new QLabel(TimeStatus);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        verticalLayout_4->addWidget(label_3);

        tableWidgetProjectDetails = new QTableWidget(TimeStatus);
        if (tableWidgetProjectDetails->columnCount() < 9)
            tableWidgetProjectDetails->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetProjectDetails->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetProjectDetails->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetProjectDetails->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetProjectDetails->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetProjectDetails->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetProjectDetails->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetProjectDetails->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetProjectDetails->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetProjectDetails->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidgetProjectDetails->setObjectName(QString::fromUtf8("tableWidgetProjectDetails"));
        tableWidgetProjectDetails->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
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
"	padding: 4px;\n"
"\n"
"    font-size: 10pt;\n"
"}"));

        verticalLayout_4->addWidget(tableWidgetProjectDetails);

        tableWidgetReportDetails = new QTableWidget(TimeStatus);
        if (tableWidgetReportDetails->columnCount() < 5)
            tableWidgetReportDetails->setColumnCount(5);
        QFont font7;
        font7.setPointSize(9);
        font7.setBold(true);
        font7.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font7);
        tableWidgetReportDetails->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font7);
        tableWidgetReportDetails->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font7);
        tableWidgetReportDetails->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font7);
        tableWidgetReportDetails->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font7);
        tableWidgetReportDetails->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        tableWidgetReportDetails->setObjectName(QString::fromUtf8("tableWidgetReportDetails"));
        tableWidgetReportDetails->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
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

        verticalLayout_4->addWidget(tableWidgetReportDetails);

        verticalLayout_4->setStretch(1, 1);

        retranslateUi(TimeStatus);

        QMetaObject::connectSlotsByName(TimeStatus);
    } // setupUi

    void retranslateUi(QWidget *TimeStatus)
    {
        TimeStatus->setWindowTitle(QCoreApplication::translate("TimeStatus", "Form", nullptr));
        labelUser->setText(QCoreApplication::translate("TimeStatus", "User:", nullptr));
        label->setText(QCoreApplication::translate("TimeStatus", "Time Status", nullptr));
        buttonPreviousWeek->setText(QString());
        labelFirstDay->setText(QCoreApplication::translate("TimeStatus", "TextLabel", nullptr));
        labelLastDay->setText(QCoreApplication::translate("TimeStatus", "TextLabel", nullptr));
        labelYear->setText(QCoreApplication::translate("TimeStatus", "TextLabel", nullptr));
        buttonNextWeek->setText(QString());
        label_2->setText(QCoreApplication::translate("TimeStatus", "Hours Logged this Week", nullptr));
        labelHours->setText(QCoreApplication::translate("TimeStatus", "0", nullptr));
        buttonAddTime->setText(QCoreApplication::translate("TimeStatus", "ADD TIME", nullptr));
        label_3->setText(QCoreApplication::translate("TimeStatus", "Details", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetProjectDetails->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TimeStatus", "Project", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetProjectDetails->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TimeStatus", "Monday", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetProjectDetails->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TimeStatus", "Tuesday", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetProjectDetails->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TimeStatus", "Wednesday", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetProjectDetails->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("TimeStatus", "Thursday", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetProjectDetails->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("TimeStatus", "Friday", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetProjectDetails->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("TimeStatus", "Saturday", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetProjectDetails->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("TimeStatus", "Sunday", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetProjectDetails->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("TimeStatus", "Total", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetReportDetails->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("TimeStatus", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetReportDetails->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("TimeStatus", "Project", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetReportDetails->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("TimeStatus", "Work Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetReportDetails->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("TimeStatus", "Hours", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetReportDetails->horizontalHeaderItem(4);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("TimeStatus", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimeStatus: public Ui_TimeStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMESTATUS_H
