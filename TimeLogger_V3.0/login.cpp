#include "login.h"
#include "ui_login.h"
#include <QStyleFactory>

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    connect(this, SIGNAL(dataUpdated()), &timeStatus, SLOT(onDataUpdated()));
    selectedButton();
    connect(this, SIGNAL(dataUpdatedAdmin()), &adminMode, SLOT(onDataUpdatedAdmin()));
    selectedButton();
    connect(&adminMode, SIGNAL(logoutPressed()), this, SLOT(onLogoutPressed()));
    connect(&timeStatus, SIGNAL(logoutPressed()), this, SLOT(onLogoutPressed()));
    ui->labelForgotPassword->setAlignment(Qt::AlignCenter);
    //Check if is Admin Build
#ifndef ADMIN
    ui->checkBoxSignUpIsAdmin->setVisible(false);
#endif
    //opens a connection to the database, if it can't connect it writes ERROR
    if(!MyDatabase::instance()->openConnection())
    {
        qDebug()<<"ERROR : connection with the database failed";
    }
    else
    {
        if(!MyDatabase::instance()->createTablesQuery())
        {
            qDebug()<<"ERROR : initialization of tables failed";
        }
        else{
            qDebug()<<"Succesfully initiated tables!";
        }
    }
    // Check for saved user/pass
    m_settings = new QSettings();

    if (!m_settings->value("user").toString().isEmpty())
        ui->lineEditUserLog->setText(m_settings->value("user").toString());

    if (!m_settings->value("password").toString().isEmpty())
        ui->lineEditPassLog->setText(m_settings->value("password").toString());
}

void Login::saveCreditentials(const QString &user, const QString &password)
{
    m_settings->setValue("user", user);
    m_settings->setValue("password", password);
}

void Login::deleteCreditentials()
{
    m_settings->setValue("user", "");
    m_settings->setValue("password", "");
}
//On CloseEvent MessageBox popsup, user needs to confirm quitting
void Login::closeEvent(QCloseEvent *event)
{
    QMessageBox msgBox;
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Quit Dialog","Are you sure you want to quit?",QMessageBox::Yes|QMessageBox::Cancel);
    if(reply == QMessageBox::Yes)
    {
        MyDatabase::instance()->closeConnection();
        MyDatabase::instance()->destroyInstance();
        event->accept();
    }
    else
        event->ignore();
}

Login::~Login()
{
    delete ui;
}
//Switch Stacked Widget to LogIn
void Login::on_buttonLogIn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->labelError->setText("");
    ui->lineEditPassLog->setText("");
    ui->lineEditUserLog->setText("");
    selectedButton();
}
//Switch Stacked Widget to SignUp
void Login::on_buttoSignUp_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->labelError->setText("");
    ui->lineEditName->setText("");
    ui->lineEditUser->setText("");
    ui->lineEditSurname->setText("");
    ui->lineEditPassword->setText("");
    selectedButton();
}
//SignUp new user
void Login::on_buttonSignUpCheck_clicked()
{        
    //Gathering the information shown in the input widgets
    QString user,name,surname,password;
    bool isAdminChecked = ui->checkBoxSignUpIsAdmin->isChecked();
    name=ui->lineEditName->text();
    surname=ui->lineEditSurname->text();
    password=ui->lineEditPassword->text();
    user=ui->lineEditUser->text();

    if(!MyDatabase::instance()->signUpCheckQuery(user, password, name, surname,isAdminChecked))
    {
        qDebug()<<"Sign up failed";
        ui->labelError->setEnabled(true);
        ui->labelError->setText("Sing Up failed! Check your input!");
    }
    else
    {
        ui->lineEditName->setText("");
        ui->lineEditSurname->setText("");
        ui->lineEditPassword->setText("");
        ui->lineEditUser->setText("");

        //It returns to the login page
        ui->stackedWidget->setCurrentIndex(0);
        ui->labelError->setEnabled(false);
    }
    selectedButton();
}

void Login::validateLog()
{
    if((ui->lineEditUserLog->text() != "") && (ui->lineEditPassLog->text() != ""))
    {
        ui->buttonLogInCheck->setEnabled(true);
        ui->buttonLogInCheck->setStyleSheet("QPushButton {background-color: rgb(7, 55, 99);color: rgb(255, 255, 255);border:none}QPushButton:pressed {background-color: rgb(6, 48, 85);border:none}QPushButton:hover {background-color: rgb(9, 80, 141);border:none}");
    }
    else
    {
        ui->buttonLogInCheck->setEnabled(false);
        ui->buttonLogInCheck->setStyleSheet("QPushButton {	background-color: rgb(5, 45, 80);color: rgb(255, 255, 255);border:none}QPushButton:pressed {background-color: rgb(6, 48, 85);border:none}QPushButton:hover {background-color: rgb(9, 80, 141);border:none}");
    }
}

void Login::validateSign()
{
    if((ui->lineEditName->text() != "") && (ui->lineEditSurname->text() != "") && (ui->lineEditPassword->text() != "") && (ui->lineEditUser->text() != ""))
    {
        ui->buttonSignUpCheck->setEnabled(true);
        ui->buttonSignUpCheck->setStyleSheet("QPushButton {background-color: rgb(7, 55, 99);color: rgb(255, 255, 255);border:none}QPushButton:pressed {background-color: rgb(6, 48, 85);border:none}QPushButton:hover {background-color: rgb(9, 80, 141);border:none}");
    }
    else
    {
        ui->buttonSignUpCheck->setEnabled(false);
        ui->buttonSignUpCheck->setStyleSheet("QPushButton {	background-color: rgb(5, 45, 80);color: rgb(255, 255, 255);border:none}QPushButton:pressed {background-color: rgb(6, 48, 85);border:none}QPushButton:hover {background-color: rgb(9, 80, 141);border:none}");
    }
}

void Login::selectedButton()
{
    if(ui->stackedWidget->currentIndex() == 0)
    {
        ui->buttonLogIn->setStyleSheet("QPushButton {border: 3px solid;border-top-color: rgb(255, 255, 255);border-right-color: rgb(255, 255, 255);border-left-color: rgb(255, 255, 255);border-bottom-color: rgb(109, 118, 126);min-width: 80px;color: rgb(109, 118, 126)}QPushButton:pressed {background-color: rgb(243, 243, 243);border: 2px solid;border-top-color: rgb(255, 255, 255); border-right-color: rgb(255, 255, 255); border-left-color: rgb(255, 255, 255);border-bottom-color: rgb(109, 118, 126);color: rgb(109, 118, 126)}QPushButton:hover {background-color: rgb(243, 243, 243);}");
        ui->buttoSignUp->setStyleSheet("QPushButton {border: 3px solid;border-top-color: rgb(255, 255, 255);border-right-color: rgb(255, 255, 255);border-left-color: rgb(255, 255, 255);border-bottom-color: rgb(157, 157, 157);min-width: 80px;color: rgb(157, 157, 157)}QPushButton:pressed {background-color: rgb(243, 243, 243);border: 2px solid;border-top-color: rgb(255, 255, 255); border-right-color: rgb(255, 255, 255); border-left-color: rgb(255, 255, 255);border-bottom-color: rgb(109, 118, 126);color: rgb(109, 118, 126)}QPushButton:hover {background-color: rgb(243, 243, 243);}");
    }
    if(ui->stackedWidget->currentIndex() == 1)
    {
        ui->buttonLogIn->setStyleSheet("QPushButton {border: 3px solid;border-top-color: rgb(255, 255, 255);border-right-color: rgb(255, 255, 255);border-left-color: rgb(255, 255, 255);border-bottom-color: rgb(157, 157, 157);min-width: 80px;color: rgb(157, 157, 157)}QPushButton:pressed {background-color: rgb(243, 243, 243);border: 2px solid;border-top-color: rgb(255, 255, 255); border-right-color: rgb(255, 255, 255); border-left-color: rgb(255, 255, 255);border-bottom-color: rgb(109, 118, 126);color: rgb(109, 118, 126)}QPushButton:hover {background-color: rgb(243, 243, 243);}");
        ui->buttoSignUp->setStyleSheet("QPushButton {border: 3px solid;border-top-color: rgb(255, 255, 255);border-right-color: rgb(255, 255, 255);border-left-color: rgb(255, 255, 255);border-bottom-color: rgb(109, 118, 126);min-width: 80px;color: rgb(109, 118, 126)}QPushButton:pressed {background-color: rgb(243, 243, 243);border: 2px solid;border-top-color: rgb(255, 255, 255); border-right-color: rgb(255, 255, 255); border-left-color: rgb(255, 255, 255);border-bottom-color: rgb(109, 118, 126);color: rgb(109, 118, 126)}QPushButton:hover {background-color: rgb(243, 243, 243);}");
    }
}
//LogIn user or admin
void Login::on_buttonLogInCheck_clicked()
{
    //gets the log in information
    QString user;
    QString password;
    user=ui->lineEditUserLog->text();
    password=ui->lineEditPassLog->text();
    //Encripting the password so it can be compared with the one written in the database
    QByteArray cryptedPassword;
    cryptedPassword = QCryptographicHash::hash(password.toUtf8(),QCryptographicHash::Md5);
    if(!MyDatabase::instance()->logInCheckQuery(user,cryptedPassword))
    {
        qDebug()<<"ERROR : Login information did not match";
        ui->labelError->setEnabled(true);
        ui->labelError->setText("Invalid username or password");
    }
    else {
        //If User without admin priviliges trys to login
        if(ui->checkBoxAdminLogIn->isChecked() && !MyDatabase::instance()->getIsAdmin())
        {
            ui->labelError->setEnabled(true);
            ui->labelError->setText("User "+ui->lineEditUserLog->text()+" doesn't have administrator privilages!");
        }
        //If Admin is Logging in
        else if(ui->checkBoxAdminLogIn->isChecked() && MyDatabase::instance()->getIsAdmin())
        {
            MyDatabase::instance()->setIsUser(0);
            emit dataUpdatedAdmin();
            adminMode.setAdminLabel();
            adminMode.updateComboBoxUsers();      
            adminMode.setWindowTitle("Admin Mode");
            adminMode.showFullScreen();
            hide();
        }
        else
        {
            MyDatabase::instance()->setIsUser(1);
            emit dataUpdated();
            timeStatus.setWindowTitle("Status Window");
            timeStatus.showFullScreen();
            hide();
        }
    }
    //Remember user
    if(ui->checkBoxRememberMe->isChecked())
    {
        saveCreditentials(ui->lineEditUserLog->text(),ui->lineEditPassLog->text());
    }
    else
    {
        deleteCreditentials();
    }
}
//After finishing with editing it checks if all the requested information is there and it enables the sign up button accordingly
void Login::on_lineEditSurname_textChanged(const QString &/* unused */)
{
    validateSign();
}
//After finishing with editing, it checks if all the requested information is there and it enables the log in button accordingly
void Login::on_lineEditName_textChanged(const QString &/* unused */)
{
    validateSign();
}
//After finishing with editing it checks if all the requested information is there and it enables the sign up button accordingly
void Login::on_lineEditUser_textChanged(const QString &/* unused */)
{
   validateSign();
}
//After finishing with editing it checks if all the requested information is there and it enables the sign up button accordingly
void Login::on_lineEditPassword_textChanged(const QString &/* unused */)
{
    validateSign();
}
//After finishing with editing it checks if all the requested information is there and it enables the log in button accordingly
void Login::on_lineEditUserLog_textChanged(const QString &/* unused */)
{
    validateLog();
}
//After finishing with editing it checks if all the requested information is there and it enables the log in button accordingly
void Login::on_lineEditPassLog_textChanged(const QString &/* unused */)
{
    validateLog();
}

void Login::onLogoutPressed()
{
    show();
}
