/********************************************************************************
** Form generated from reading UI file 'adminmode.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMODE_H
#define UI_ADMINMODE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_AdminMode
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelUser;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_9;
    QComboBox *comboBoxUsers;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer_8;
    QLabel *labelChooseUser;
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
    QPushButton *pushButtonAssignProject;
    QPushButton *buttonGetReport;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QTableWidget *tableWidgetProjectDetails;
    QTableWidget *tableWidgetReportDetails;

    void setupUi(QWidget *AdminMode)
    {
        if (AdminMode->objectName().isEmpty())
            AdminMode->setObjectName(QString::fromUtf8("AdminMode"));
        AdminMode->setEnabled(true);
        AdminMode->resize(974, 866);
        AdminMode->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 245, 250);"));
        verticalLayout_4 = new QVBoxLayout(AdminMode);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        labelUser = new QLabel(AdminMode);
        labelUser->setObjectName(QString::fromUtf8("labelUser"));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        labelUser->setFont(font);

        verticalLayout_3->addWidget(labelUser);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(AdminMode);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);

        horizontalLayout_6->addWidget(label_4);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        comboBoxUsers = new QComboBox(AdminMode);
        comboBoxUsers->setObjectName(QString::fromUtf8("comboBoxUsers"));
        sizePolicy.setHeightForWidth(comboBoxUsers->sizePolicy().hasHeightForWidth());
        comboBoxUsers->setSizePolicy(sizePolicy);
        comboBoxUsers->setMinimumSize(QSize(125, 30));
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

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(AdminMode);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout_7->addWidget(label);

        horizontalSpacer_8 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        labelChooseUser = new QLabel(AdminMode);
        labelChooseUser->setObjectName(QString::fromUtf8("labelChooseUser"));
        labelChooseUser->setFont(font);

        horizontalLayout_7->addWidget(labelChooseUser);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonPreviousWeek = new QPushButton(AdminMode);
        buttonPreviousWeek->setObjectName(QString::fromUtf8("buttonPreviousWeek"));
        buttonPreviousWeek->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: transparent;\n"
"        border:none\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(231, 236, 240);\n"
"        border:none\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgb(245, 250, 255);\n"
"        border:none\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/lA.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonPreviousWeek->setIcon(icon);
        buttonPreviousWeek->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(buttonPreviousWeek);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelFirstDay = new QLabel(AdminMode);
        labelFirstDay->setObjectName(QString::fromUtf8("labelFirstDay"));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        labelFirstDay->setFont(font2);

        horizontalLayout->addWidget(labelFirstDay);

        labelLastDay = new QLabel(AdminMode);
        labelLastDay->setObjectName(QString::fromUtf8("labelLastDay"));
        labelLastDay->setFont(font2);

        horizontalLayout->addWidget(labelLastDay);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(65, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        labelYear = new QLabel(AdminMode);
        labelYear->setObjectName(QString::fromUtf8("labelYear"));
        QFont font3;
        font3.setPointSize(10);
        labelYear->setFont(font3);
        labelYear->setStyleSheet(QString::fromUtf8("color: rgb(157, 157, 157);"));

        horizontalLayout_3->addWidget(labelYear);

        horizontalSpacer_6 = new QSpacerItem(65, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        buttonNextWeek = new QPushButton(AdminMode);
        buttonNextWeek->setObjectName(QString::fromUtf8("buttonNextWeek"));
        buttonNextWeek->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: transparent;\n"
"        border:none\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(231, 236, 240);\n"
"        border:none\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgb(245, 250, 255);\n"
"        border:none\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/rA.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonNextWeek->setIcon(icon1);
        buttonNextWeek->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(buttonNextWeek);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(AdminMode);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(157, 157, 157);"));

        horizontalLayout_2->addWidget(label_2);

        labelHours = new QLabel(AdminMode);
        labelHours->setObjectName(QString::fromUtf8("labelHours"));
        sizePolicy1.setHeightForWidth(labelHours->sizePolicy().hasHeightForWidth());
        labelHours->setSizePolicy(sizePolicy1);
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
        pushButtonAssignProject = new QPushButton(AdminMode);
        pushButtonAssignProject->setObjectName(QString::fromUtf8("pushButtonAssignProject"));
        pushButtonAssignProject->setMinimumSize(QSize(100, 30));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Century Gothic"));
        font6.setPointSize(9);
        font6.setBold(true);
        font6.setWeight(75);
        pushButtonAssignProject->setFont(font6);
        pushButtonAssignProject->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
""));

        verticalLayout_2->addWidget(pushButtonAssignProject);

        buttonGetReport = new QPushButton(AdminMode);
        buttonGetReport->setObjectName(QString::fromUtf8("buttonGetReport"));
        buttonGetReport->setMinimumSize(QSize(100, 30));
        buttonGetReport->setFont(font6);
        buttonGetReport->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
""));

        verticalLayout_2->addWidget(buttonGetReport);


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

        label_3 = new QLabel(AdminMode);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        verticalLayout_4->addWidget(label_3);

        tableWidgetProjectDetails = new QTableWidget(AdminMode);
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
"        padding: 4px;\n"
"    font-size: 12pt;\n"
"    border-style: none;\n"
"    border-bottom: 1px solid rgb(64, 150, 244);\n"
"    border-right: 1px solid rgb(231, 236, 240);\n"
"\n"
"}\n"
"\n"
"QTableView {\n"
"    background-color: transparent;\n"
"        border: none;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    gridline-color: rgb(231, 236, 240);\n"
"        padding: 4px;\n"
"\n"
"    font-size: 10pt;\n"
"}"));

        verticalLayout_4->addWidget(tableWidgetProjectDetails);

        tableWidgetReportDetails = new QTableWidget(AdminMode);
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
"        padding: 4px;\n"
"    font-size: 12pt;\n"
"    border-style: none;\n"
"    border-bottom: 1px solid rgb(64, 150, 244);\n"
"    border-right: 1px solid rgb(231, 236, 240);\n"
"\n"
"}\n"
"\n"
"QTableView {\n"
"    background-color: transparent;\n"
"        border: none;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    gridline-color: rgb(231, 236, 240);\n"
"    font-size: 10pt;\n"
"}"));

        verticalLayout_4->addWidget(tableWidgetReportDetails);

        verticalLayout_4->setStretch(1, 1);

        retranslateUi(AdminMode);

        QMetaObject::connectSlotsByName(AdminMode);
    } // setupUi

    void retranslateUi(QWidget *AdminMode)
    {
        AdminMode->setWindowTitle(QCoreApplication::translate("AdminMode", "Form", nullptr));
        labelUser->setText(QCoreApplication::translate("AdminMode", "Admin:", nullptr));
        label_4->setText(QCoreApplication::translate("AdminMode", "Choose User:", nullptr));
        label->setText(QCoreApplication::translate("AdminMode", "Time Status", nullptr));
        labelChooseUser->setText(QCoreApplication::translate("AdminMode", "Current User:", nullptr));
        buttonPreviousWeek->setText(QString());
        labelFirstDay->setText(QCoreApplication::translate("AdminMode", "TextLabel", nullptr));
        labelLastDay->setText(QCoreApplication::translate("AdminMode", "TextLabel", nullptr));
        labelYear->setText(QCoreApplication::translate("AdminMode", "TextLabel", nullptr));
        buttonNextWeek->setText(QString());
        label_2->setText(QCoreApplication::translate("AdminMode", "Hours Logged this Week", nullptr));
        labelHours->setText(QCoreApplication::translate("AdminMode", "0", nullptr));
        pushButtonAssignProject->setText(QCoreApplication::translate("AdminMode", "ASSIGN PROJECT", nullptr));
        buttonGetReport->setText(QCoreApplication::translate("AdminMode", "GET REPORT", nullptr));
        label_3->setText(QCoreApplication::translate("AdminMode", "Details", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetProjectDetails->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AdminMode", "Project", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetProjectDetails->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AdminMode", "Monday", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetProjectDetails->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AdminMode", "Tuesday", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetProjectDetails->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("AdminMode", "Wednesday", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetProjectDetails->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("AdminMode", "Thursday", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetProjectDetails->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("AdminMode", "Friday", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetProjectDetails->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("AdminMode", "Saturday", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetProjectDetails->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("AdminMode", "Sunday", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetProjectDetails->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("AdminMode", "Total", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetReportDetails->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("AdminMode", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetReportDetails->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("AdminMode", "Project", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetReportDetails->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("AdminMode", "Work Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetReportDetails->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("AdminMode", "Hours", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetReportDetails->horizontalHeaderItem(4);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("AdminMode", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMode: public Ui_AdminMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMODE_H
