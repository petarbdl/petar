#ifndef ASSIGNPROJECTDIALOG_H
#define ASSIGNPROJECTDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "mydatabase.h"

namespace Ui {
class AssignProjectDialog;
}

class AssignProjectDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AssignProjectDialog(QWidget *parent = nullptr);
    ~AssignProjectDialog();

    void setValues();

private slots:
    void on_buttonCreateProject_clicked();

    void on_buttonCancelProject_clicked();

    void on_textEditProjectDescription_textChanged();

    void on_lineEditProjectName_textChanged(const QString &arg1);

    void on_lineEditCompanyName_textChanged(const QString &arg1);

    void validateInfo();

    void on_lineEditClientName_textChanged(const QString &arg1);

signals:
    void dataUpdatedAdmin();//Update values in AdminMode window when new Project is added

private:
    Ui::AssignProjectDialog *ui;
};

#endif // ASSIGNPROJECTDIALOG_H
