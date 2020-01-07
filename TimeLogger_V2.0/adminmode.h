#ifndef ADMINMODE_H
#define ADMINMODE_H

#include <QWidget>
#include "mydatabase.h"
#include "addtimedialog.h"
#include "buttons.h"
#include "getuserreport.h"
#include "assignprojectdialog.h"
#include <QPieSeries>
#include <QtCharts/QBarCategoryAxis>
QT_CHARTS_USE_NAMESPACE

namespace Ui {
class AdminMode;
}

class AdminMode : public QWidget
{
    Q_OBJECT

public:
    explicit AdminMode(QWidget *parent = nullptr);

    ~AdminMode();

    void updateComboBoxUsers();

    void setAdminLabel();

private slots:

    void on_buttonNextWeek_clicked();

    void on_buttonPreviousWeek_clicked();

    void onDataUpdatedAdmin();

    void onUpdatedHours(QString hours);

    void onSetValues(QPieSeries *series);

    void onSetDays(int monday,int tuesday, int wednesday, int thursday, int friday, int saturday, int sunday);

    void onSetProjects (QString project,int i);

    void onSetHours (QString date, QString value, int j);

    void onSetReports (int m ,int k, QString text);

    void onAddButtons(int m);

    void setDonutChart();

    void setBarChart();

    void setProjectDetails();

    void setReportDetails();

    void onButtonEditClicked(Buttons *button);

    void onButtonDeleteClicked(Buttons *);

    void on_comboBoxUsers_currentIndexChanged(const QString &arg1);

    void on_pushButtonAssignProject_clicked();

    void on_buttonGetReport_clicked();

private:
    Ui::AdminMode *ui;
    AddTimeDialog m_addTimeDialog;
    QDate m_firstDayOfWeek;
    QDate m_lastDayOfWeek;
    QChartView *m_chartView;
    QChartView *m_chartViewBar;
    QChart *m_chart;
    QPieSlice *m_slice;
    QStringList m_categories;
    QBarCategoryAxis *m_axisX;
    GetUserReport m_getUserReportDialog;
    AssignProjectDialog m_assignProjectDialog;
    int m_year;
    int m_month;
    int m_day;
    int m_j;
};

#endif // ADMINMODE_H
