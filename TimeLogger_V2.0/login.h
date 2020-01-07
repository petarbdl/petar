#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QCloseEvent>
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
    void dataUpdated();
    void dataUpdatedAdmin();

private slots:


    void on_buttonLogIn_clicked();

    void on_buttoSignUp_clicked();

    void on_buttonLogInCheck_clicked();

    void on_buttonSignUpCheck_clicked();

    void validateLog();

    void validateSign();

    void selectedButton();


    void on_lineEditSurname_textChanged(const QString &);

    void on_lineEditName_textChanged(const QString &);

    void on_lineEditUser_textChanged(const QString &);

    void on_lineEditPassword_textChanged(const QString &);

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
