#include "exitdialog.h"
#include "ui_exitdialog.h"

ExitDialog::ExitDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExitDialog)
{
    ui->setupUi(this);
}

ExitDialog::~ExitDialog()
{
    delete ui;
}

void ExitDialog::setValues(QString name)
{
    ui->labelLogoutName->setText(name);
}

void ExitDialog::on_buttonLogout_clicked()
{
    emit logoutButtonPressed();
}

void ExitDialog::on_buttonQuit_clicked()
{
    emit quitButtonPressed();
}
