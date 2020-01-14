/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelLogo;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_19;
    QLabel *labelError;
    QSpacerItem *horizontalSpacer_20;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonLogIn;
    QPushButton *buttoSignUp;
    QStackedWidget *stackedWidget;
    QWidget *LoginPage;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutUserImput;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelUserIcon;
    QLineEdit *lineEditUserLog;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayoutPassInput;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelPassIcon;
    QLineEdit *lineEditPassLog;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_15;
    QCheckBox *checkBoxAdminLogIn;
    QCheckBox *checkBoxRememberMe;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_13;
    QLabel *labelForgotPassword;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *buttonLogInCheck;
    QWidget *SignUpPage;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEditSurname;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *verticalSpacer_4;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *lineEditName;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *verticalSpacer_5;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *lineEditUser;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *verticalSpacer_6;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLineEdit *lineEditPassword;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkBoxSignUpIsAdmin;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *buttonSignUpCheck;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(286, 455);
        Login->setMaximumSize(QSize(16777215, 16777215));
        Login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(Login);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelLogo = new QLabel(centralWidget);
        labelLogo->setObjectName(QString::fromUtf8("labelLogo"));
        labelLogo->setEnabled(true);
        labelLogo->setMinimumSize(QSize(0, 150));
        labelLogo->setMaximumSize(QSize(16777215, 16777215));
        labelLogo->setStyleSheet(QString::fromUtf8("border-image:url(:/images/images/logo_small.png);"));
        labelLogo->setScaledContents(false);

        verticalLayout_4->addWidget(labelLogo);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSpacer_19 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_19);

        labelError = new QLabel(centralWidget);
        labelError->setObjectName(QString::fromUtf8("labelError"));
        labelError->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelError->sizePolicy().hasHeightForWidth());
        labelError->setSizePolicy(sizePolicy);
        labelError->setMinimumSize(QSize(0, 0));
        labelError->setStyleSheet(QString::fromUtf8("color:\"red\""));

        horizontalLayout_14->addWidget(labelError);

        horizontalSpacer_20 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_20);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        buttonLogIn = new QPushButton(centralWidget);
        buttonLogIn->setObjectName(QString::fromUtf8("buttonLogIn"));
        buttonLogIn->setMinimumSize(QSize(84, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(10);
        buttonLogIn->setFont(font);
        buttonLogIn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid;\n"
"	border-top-color: rgb(255, 255, 255);\n"
"	border-right-color: rgb(255, 255, 255);\n"
"	border-left-color: rgb(255, 255, 255);\n"
"	border-bottom-color: rgb(157, 157, 157);\n"
"    min-width: 80px;\n"
"	color: rgb(157, 157, 157)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(243, 243, 243);\n"
"	border: 2px solid;\n"
"	border-top-color: rgb(255, 255, 255);\n"
"	border-right-color: rgb(255, 255, 255);\n"
"	border-left-color: rgb(255, 255, 255);\n"
"	border-bottom-color: rgb(109, 118, 126);\n"
"	color: rgb(109, 118, 126)\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(243, 243, 243);\n"
"}"));

        horizontalLayout->addWidget(buttonLogIn);

        buttoSignUp = new QPushButton(centralWidget);
        buttoSignUp->setObjectName(QString::fromUtf8("buttoSignUp"));
        buttoSignUp->setMinimumSize(QSize(84, 40));
        buttoSignUp->setFont(font);
        buttoSignUp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /*background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde); */\n"
"	border: 2px solid;\n"
"	border-top-color: rgb(255, 255, 255);\n"
"	border-right-color: rgb(255, 255, 255);\n"
"	border-left-color: rgb(255, 255, 255);\n"
"	border-bottom-color: rgb(157, 157, 157);\n"
"    min-width: 80px;\n"
"	color: rgb(157, 157, 157)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(243, 243, 243);\n"
"	border: 2px solid;\n"
"	border-top-color: rgb(255, 255, 255);\n"
"	border-right-color: rgb(255, 255, 255);\n"
"	border-left-color: rgb(255, 255, 255);\n"
"	border-bottom-color: rgb(109, 118, 126);\n"
"	color: rgb(109, 118, 126)\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(243, 243, 243);\n"
"}"));

        horizontalLayout->addWidget(buttoSignUp);


        verticalLayout_4->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMaximumSize(QSize(16777215, 16777215));
        LoginPage = new QWidget();
        LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        verticalLayout = new QVBoxLayout(LoginPage);
        verticalLayout->setSpacing(7);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 10, 0, 0);
        horizontalLayoutUserImput = new QHBoxLayout();
        horizontalLayoutUserImput->setSpacing(0);
        horizontalLayoutUserImput->setObjectName(QString::fromUtf8("horizontalLayoutUserImput"));
        horizontalSpacer_3 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutUserImput->addItem(horizontalSpacer_3);

        frame_2 = new QFrame(LoginPage);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(0, 34));
        frame_2->setMaximumSize(QSize(16777215, 34));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border: 2px solid rgb(157, 157, 157);\n"
"	border-radius:3px\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelUserIcon = new QLabel(frame_2);
        labelUserIcon->setObjectName(QString::fromUtf8("labelUserIcon"));
        labelUserIcon->setMinimumSize(QSize(30, 30));
        labelUserIcon->setMaximumSize(QSize(30, 30));
        labelUserIcon->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:0px;\n"
"background-color: rgb(240, 240, 240);	\n"
"anchors.top: parent.top;"));
        labelUserIcon->setPixmap(QPixmap(QString::fromUtf8(":/images/images/userIcon.png")));
        labelUserIcon->setScaledContents(true);

        horizontalLayout_2->addWidget(labelUserIcon);

        lineEditUserLog = new QLineEdit(frame_2);
        lineEditUserLog->setObjectName(QString::fromUtf8("lineEditUserLog"));
        lineEditUserLog->setMinimumSize(QSize(0, 30));
        lineEditUserLog->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setPointSize(10);
        lineEditUserLog->setFont(font1);
        lineEditUserLog->setStyleSheet(QString::fromUtf8("border: none;"));

        horizontalLayout_2->addWidget(lineEditUserLog);


        horizontalLayoutUserImput->addWidget(frame_2);

        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutUserImput->addItem(horizontalSpacer_2);

        horizontalLayoutUserImput->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayoutUserImput);

        horizontalLayoutPassInput = new QHBoxLayout();
        horizontalLayoutPassInput->setSpacing(0);
        horizontalLayoutPassInput->setObjectName(QString::fromUtf8("horizontalLayoutPassInput"));
        horizontalSpacer_4 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutPassInput->addItem(horizontalSpacer_4);

        frame = new QFrame(LoginPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 34));
        frame->setMaximumSize(QSize(16777215, 34));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border: 2px solid rgb(157, 157, 157);\n"
"	border-radius:3px\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelPassIcon = new QLabel(frame);
        labelPassIcon->setObjectName(QString::fromUtf8("labelPassIcon"));
        labelPassIcon->setMinimumSize(QSize(30, 30));
        labelPassIcon->setMaximumSize(QSize(30, 30));
        labelPassIcon->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:0px;\n"
"	background-color: rgb(240, 240, 240);\n"
"	"));
        labelPassIcon->setPixmap(QPixmap(QString::fromUtf8(":/images/images/passIcon.png")));
        labelPassIcon->setScaledContents(true);

        horizontalLayout_4->addWidget(labelPassIcon);

        lineEditPassLog = new QLineEdit(frame);
        lineEditPassLog->setObjectName(QString::fromUtf8("lineEditPassLog"));
        lineEditPassLog->setMinimumSize(QSize(0, 30));
        lineEditPassLog->setMaximumSize(QSize(16777215, 16777215));
        lineEditPassLog->setFont(font1);
        lineEditPassLog->setStyleSheet(QString::fromUtf8("border: none;"));
        lineEditPassLog->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(lineEditPassLog);


        horizontalLayoutPassInput->addWidget(frame);

        horizontalSpacer = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutPassInput->addItem(horizontalSpacer);

        horizontalLayoutPassInput->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayoutPassInput);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_15 = new QSpacerItem(17, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_15);

        checkBoxAdminLogIn = new QCheckBox(LoginPage);
        checkBoxAdminLogIn->setObjectName(QString::fromUtf8("checkBoxAdminLogIn"));
        checkBoxAdminLogIn->setMinimumSize(QSize(0, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(9);
        checkBoxAdminLogIn->setFont(font2);
        checkBoxAdminLogIn->setStyleSheet(QString::fromUtf8("	color: rgb(157, 157, 157)"));

        horizontalLayout_12->addWidget(checkBoxAdminLogIn);

        checkBoxRememberMe = new QCheckBox(LoginPage);
        checkBoxRememberMe->setObjectName(QString::fromUtf8("checkBoxRememberMe"));
        checkBoxRememberMe->setMinimumSize(QSize(0, 30));
        checkBoxRememberMe->setFont(font2);
        checkBoxRememberMe->setStyleSheet(QString::fromUtf8("	color: rgb(157, 157, 157)"));
        checkBoxRememberMe->setChecked(true);

        horizontalLayout_12->addWidget(checkBoxRememberMe);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_16);


        verticalLayout->addLayout(horizontalLayout_12);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalSpacer_13 = new QSpacerItem(17, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_13);

        labelForgotPassword = new QLabel(LoginPage);
        labelForgotPassword->setObjectName(QString::fromUtf8("labelForgotPassword"));
        labelForgotPassword->setMinimumSize(QSize(0, 30));
        labelForgotPassword->setMaximumSize(QSize(16777215, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Century Gothic"));
        font3.setPointSize(8);
        labelForgotPassword->setFont(font3);
        labelForgotPassword->setStyleSheet(QString::fromUtf8("	color: rgb(157, 157, 157)"));

        horizontalLayout_22->addWidget(labelForgotPassword);

        horizontalSpacer_14 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_22);

        buttonLogInCheck = new QPushButton(LoginPage);
        buttonLogInCheck->setObjectName(QString::fromUtf8("buttonLogInCheck"));
        buttonLogInCheck->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonLogInCheck->sizePolicy().hasHeightForWidth());
        buttonLogInCheck->setSizePolicy(sizePolicy1);
        buttonLogInCheck->setMinimumSize(QSize(0, 60));
        buttonLogInCheck->setMaximumSize(QSize(16777215, 16777215));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Century Gothic"));
        font4.setPointSize(11);
        font4.setBold(false);
        font4.setWeight(50);
        buttonLogInCheck->setFont(font4);
        buttonLogInCheck->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(5, 45, 80);\n"
"	border:none\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(6, 48, 85);\n"
"	border:none\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(9, 80, 141);\n"
"	border:none\n"
"}\n"
"\n"
"QPushButton:disabled{\n"
"  border: 1px solid #999999;\n"
"  background-color: #cccccc;\n"
"  color: #666666;\n"
"}"));
        buttonLogInCheck->setAutoDefault(false);
        buttonLogInCheck->setFlat(false);

        verticalLayout->addWidget(buttonLogInCheck);

        stackedWidget->addWidget(LoginPage);
        SignUpPage = new QWidget();
        SignUpPage->setObjectName(QString::fromUtf8("SignUpPage"));
        verticalLayout_2 = new QVBoxLayout(SignUpPage);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalSpacer_3 = new QSpacerItem(17, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_8->addItem(verticalSpacer_3);

        frame_3 = new QFrame(SignUpPage);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(0, 34));
        frame_3->setMaximumSize(QSize(16777215, 34));
        frame_3->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border: 2px solid rgb(157, 157, 157);\n"
"	border-radius:3px;\n"
"padding-bottom:0;\n"
"}\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(55, 30));
        label->setMaximumSize(QSize(200, 200));
        label->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:0px;\n"
"background-color: rgb(240, 240, 240);	\n"
"anchors.top: parent.top;\n"
"padding-left:5;"));

        horizontalLayout_3->addWidget(label);

        lineEditSurname = new QLineEdit(frame_3);
        lineEditSurname->setObjectName(QString::fromUtf8("lineEditSurname"));
        lineEditSurname->setEnabled(true);
        lineEditSurname->setFont(font1);
        lineEditSurname->setStyleSheet(QString::fromUtf8("border: none;"));

        horizontalLayout_3->addWidget(lineEditSurname);


        horizontalLayout_8->addWidget(frame_3);

        horizontalSpacer_7 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        horizontalLayout_8->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalSpacer_4 = new QSpacerItem(17, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_9->addItem(verticalSpacer_4);

        frame_4 = new QFrame(SignUpPage);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMinimumSize(QSize(0, 34));
        frame_4->setMaximumSize(QSize(16777215, 34));
        frame_4->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border: 2px solid rgb(157, 157, 157);\n"
"	border-radius:3px\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_4);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(55, 30));
        label_2->setMaximumSize(QSize(200, 200));
        label_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:0px;\n"
"background-color: rgb(240, 240, 240);	\n"
"anchors.top: parent.top;\n"
"padding-left:5;"));

        horizontalLayout_5->addWidget(label_2);

        lineEditName = new QLineEdit(frame_4);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setFont(font1);
        lineEditName->setStyleSheet(QString::fromUtf8("border: none;"));

        horizontalLayout_5->addWidget(lineEditName);


        horizontalLayout_9->addWidget(frame_4);

        horizontalSpacer_11 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_11);

        horizontalLayout_9->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalSpacer_5 = new QSpacerItem(17, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_10->addItem(verticalSpacer_5);

        frame_5 = new QFrame(SignUpPage);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setMinimumSize(QSize(0, 34));
        frame_5->setMaximumSize(QSize(16777215, 34));
        frame_5->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border: 2px solid rgb(157, 157, 157);\n"
"	border-radius:3px\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_5);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(55, 30));
        label_3->setMaximumSize(QSize(200, 200));
        label_3->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:0px;\n"
"background-color: rgb(240, 240, 240);	\n"
"anchors.top: parent.top;\n"
"padding-left:5;"));

        horizontalLayout_6->addWidget(label_3);

        lineEditUser = new QLineEdit(frame_5);
        lineEditUser->setObjectName(QString::fromUtf8("lineEditUser"));
        lineEditUser->setEnabled(true);
        lineEditUser->setFont(font1);
        lineEditUser->setStyleSheet(QString::fromUtf8("border: none;"));

        horizontalLayout_6->addWidget(lineEditUser);


        horizontalLayout_10->addWidget(frame_5);

        horizontalSpacer_8 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        horizontalLayout_10->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalSpacer_6 = new QSpacerItem(17, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_11->addItem(verticalSpacer_6);

        frame_6 = new QFrame(SignUpPage);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setMinimumSize(QSize(0, 34));
        frame_6->setMaximumSize(QSize(16777215, 34));
        frame_6->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border: 2px solid rgb(157, 157, 157);\n"
"	border-radius:3px\n"
"}"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_6);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(frame_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(55, 30));
        label_4->setMaximumSize(QSize(200, 200));
        label_4->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:0px;\n"
"background-color: rgb(240, 240, 240);	\n"
"anchors.top: parent.top;\n"
"padding-left:5;"));

        horizontalLayout_7->addWidget(label_4);

        lineEditPassword = new QLineEdit(frame_6);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setEnabled(true);
        lineEditPassword->setFont(font1);
        lineEditPassword->setStyleSheet(QString::fromUtf8("border: none;"));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_7->addWidget(lineEditPassword);


        horizontalLayout_11->addWidget(frame_6);

        horizontalSpacer_12 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_12);

        horizontalLayout_11->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        verticalSpacer = new QSpacerItem(17, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_13->addItem(verticalSpacer);

        checkBoxSignUpIsAdmin = new QCheckBox(SignUpPage);
        checkBoxSignUpIsAdmin->setObjectName(QString::fromUtf8("checkBoxSignUpIsAdmin"));
        checkBoxSignUpIsAdmin->setStyleSheet(QString::fromUtf8("	color: rgb(157, 157, 157)"));

        horizontalLayout_13->addWidget(checkBoxSignUpIsAdmin);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_18);


        verticalLayout_2->addLayout(horizontalLayout_13);

        buttonSignUpCheck = new QPushButton(SignUpPage);
        buttonSignUpCheck->setObjectName(QString::fromUtf8("buttonSignUpCheck"));
        buttonSignUpCheck->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonSignUpCheck->sizePolicy().hasHeightForWidth());
        buttonSignUpCheck->setSizePolicy(sizePolicy2);
        buttonSignUpCheck->setMinimumSize(QSize(0, 60));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Century Gothic"));
        font5.setPointSize(11);
        buttonSignUpCheck->setFont(font5);
        buttonSignUpCheck->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"	background-color: rgb(7, 55, 99);\n"
"	color: rgb(255, 255, 255);\n"
"	border:none\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(6, 48, 85);\n"
"	border:none\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(9, 80, 141);\n"
"	border:none\n"
"}"));

        verticalLayout_2->addWidget(buttonSignUpCheck);

        stackedWidget->addWidget(SignUpPage);

        verticalLayout_4->addWidget(stackedWidget);

        Login->setCentralWidget(centralWidget);

        retranslateUi(Login);

        stackedWidget->setCurrentIndex(0);
        buttonLogInCheck->setDefault(false);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        labelLogo->setText(QString());
        labelError->setText(QString());
        buttonLogIn->setText(QCoreApplication::translate("Login", "Log In", nullptr));
        buttoSignUp->setText(QCoreApplication::translate("Login", "Sign Up", nullptr));
        labelUserIcon->setText(QString());
        lineEditUserLog->setText(QString());
        labelPassIcon->setText(QString());
        lineEditPassLog->setText(QString());
        checkBoxAdminLogIn->setText(QCoreApplication::translate("Login", "Log In as admin", nullptr));
        checkBoxRememberMe->setText(QCoreApplication::translate("Login", "Remember me!", nullptr));
        labelForgotPassword->setText(QCoreApplication::translate("Login", "Forgot your password?", nullptr));
        buttonLogInCheck->setText(QCoreApplication::translate("Login", "LOG IN >", nullptr));
        label->setText(QCoreApplication::translate("Login", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Surname", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "User", nullptr));
        label_4->setText(QCoreApplication::translate("Login", "Password", nullptr));
        checkBoxSignUpIsAdmin->setText(QCoreApplication::translate("Login", "Sign Up as Administrator", nullptr));
        buttonSignUpCheck->setText(QCoreApplication::translate("Login", "< SIGN UP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
