#ifndef ADDTIMEDIALOG_H
#define ADDTIMEDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "mydatabase.h"

namespace Ui {
class AddTimeDialog;
}

class AddTimeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddTimeDialog(QWidget *parent = nullptr);

    void setValues();

    void setUpdateValues(QDate date,QString project,QString description,QString hours);

    ~AddTimeDialog();

private slots:
    void on_buttonAddTime_clicked();

    void on_buttonCancel_clicked();

    void on_textEditDescription_textChanged();

    void on_lineEditTime_textChanged(const QString &arg1);

    void validateInfo();

    void onSetCheckBox(QString text);

signals:
    void dataUpdated();

private:
    Ui::AddTimeDialog *ui;

};

#endif // ADDTIMEDIALOG_H
