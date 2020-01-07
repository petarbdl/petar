#include "login.h"
#include "ui_login.h"
#include <QStyleFactory>

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    //signal that is used to update the date shown from the base to be the most recent one
    connect(this, SIGNAL(dataUpdated()), &timeStatus, SLOT(onDataUpdated()));
    selectedButton();
    connect(this, SIGNAL(dataUpdatedAdmin()), &adminMode, SLOT(onDataUpdatedAdmin()));
    selectedButton();
    ui->labelForgotPassword->setAlignment(Qt::AlignCenter);
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
    m_settings = new QSettings();
    // Check user/pass
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

void Login::closeEvent(QCloseEvent *event)
{
    MyDatabase::instance()->closeConnection();
    MyDatabase::instance()->destroyInstance();
    event->accept();
}

Login::~Login()
{
    delete ui;
}

void Login::on_buttonLogIn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->lineEditPassLog->setText("");
    ui->lineEditUserLog->setText("");
    selectedButton();
}

void Login::on_buttoSignUp_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->lineEditName->setText("");
    ui->lineEditUser->setText("");
    ui->lineEditSurname->setText("");
    ui->lineEditPassword->setText("");
    selectedButton();
}

void Login::on_buttonSignUpCheck_clicked()
{        
    //Gathering the information shown in the input widgets
    QString user,name,surname,password;
    name=ui->lineEditName->text();
    surname=ui->lineEditSurname->text();
    password=ui->lineEditPassword->text();
    user=ui->lineEditUser->text();
    if(!MyDatabase::instance()->signUpCheckQuery(user, password, name, surname))
    {
        qDebug()<<"Sign up failed";
    }
    else
    {
        ui->lineEditName->setText("");
        ui->lineEditSurname->setText("");
        ui->lineEditPassword->setText("");
        ui->lineEditUser->setText("");
        //It returns to the login page
        ui->stackedWidget->setCurrentIndex(0);
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
    }
    else {
        if(ui->checkBoxAdminLogIn->isChecked())
        {
            MyDatabase::instance()->setIsAdmin(true);
            adminMode.updateComboBoxUsers();
            adminMode.setAdminLabel();
            emit dataUpdatedAdmin();
            adminMode.setWindowTitle("Admin Mode");
            adminMode.show();
            hide();
        }
        else
        {
            MyDatabase::instance()->setIsAdmin(false);
            emit dataUpdated();
            timeStatus.setWindowTitle("Status Window");
            timeStatus.show();
            hide();
        }
    }
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
