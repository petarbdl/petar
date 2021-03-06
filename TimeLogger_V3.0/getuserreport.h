#ifndef GETUSERREPORT_H
#define GETUSERREPORT_H

#include <QDialog>
#include <QStringListModel>
#include <QFileDialog>
#include <QMessageBox>

#include "mydatabase.h"

namespace Ui {
class GetUserReport;
}

class GetUserReport : public QDialog
{
    Q_OBJECT

public:
    explicit GetUserReport(QWidget *parent = nullptr);

    ~GetUserReport();

    void setValues();

    void setProjectValues();

    void setReportDetails();

private slots:
    void onSetCheckBoxProjects(QString text);

    void onSetReportDetails(int m, int k, QString text);

    void on_comboBoxPerson_currentIndexChanged(const QString &arg1);

    void on_buttonClose_clicked();

    void on_pushButtonSaveReport_clicked();

    void on_comboBoxProject_currentIndexChanged(int index);

    void onSetComboBoxGetUserReport(QString user);

    void on_dateEditStartDate_userDateChanged(const QDate &date);

    void on_dateEditEndDate_userDateChanged(const QDate &date);

private:
    Ui::GetUserReport *ui;
};

#endif // GETUSERREPORT_H
