#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QCloseEvent>
#include <QMessageBox>

#include "timestatus.h"
#include "mydatabase.h"
#include "adminmode.h"

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);

    ~Login();

signals:
    //This SIGNAL is emitted for TimeStatus Class i.e. when user logs in his/hers account
    void dataUpdated();
    //This SIGNAL is emitted for AdminMode Class i.e. when admin logs in
    void dataUpdatedAdmin();

private slots:
    //Switch stacked widget to login page
    void on_buttonLogIn_clicked();
    //Switch stacked widget to sing up page
    void on_buttoSignUp_clicked();
    //Check credentials and log in the user
    void on_buttonLogInCheck_clicked();
    //SignUp new user
    void on_buttonSignUpCheck_clicked();
    //Validate user input for LogIn
    void validateLog();
    //Validate user input for SignUp
    void validateSign();

    void selectedButton();

    //LineEdits for SignUp page
    void on_lineEditSurname_textChanged(const QString &);
    void on_lineEditName_textChanged(const QString &);
    void on_lineEditUser_textChanged(const QString &);
    void on_lineEditPassword_textChanged(const QString &);

    //LineEdits for Login page
    void on_lineEditUserLog_textChanged(const QString &);
    void on_lineEditPassLog_textChanged(const QString &);

private:
    Ui::Login *ui;
    TimeStatus timeStatus;
    QSettings *m_settings;
    AdminMode adminMode;
    //Remembers the user login information for future use
    void saveCreditentials(const QString &user,const QString &password);
    void deleteCreditentials();

protected:
    void closeEvent(QCloseEvent *event);
};

#endif // LOGIN_H
