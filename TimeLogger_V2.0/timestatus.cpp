#include "timestatus.h"
#include "ui_timestatus.h"

#include "QCalendarWidget"
#include "QLabel"
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCore/QDebug>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QPoint>
#include <QDate>
#include <QMenu>
#include <QAction>

QT_CHARTS_USE_NAMESPACE

TimeStatus::TimeStatus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TimeStatus)
{
    ui->setupUi(this);
    QDate currentDate;
    currentDate=QDate::currentDate();
    //Connect signals and slots
    connect(&m_addTimeDialog, SIGNAL(dataUpdated()), this, SLOT(onDataUpdated()));
    connect(MyDatabase::instance(), SIGNAL(dataUpdated()), this, SLOT(onDataUpdated()));
    connect(MyDatabase::instance(), SIGNAL(updateHours(QString)), this, SLOT(onUpdatedHours(QString )));
    connect(MyDatabase::instance(), SIGNAL(setValues(QPieSeries*)), this, SLOT(onSetValues(QPieSeries*)));
    connect(MyDatabase::instance(), SIGNAL(setDays(int ,int , int , int , int , int , int )), this, SLOT(onSetDays(int ,int , int , int , int , int , int )));
    connect(MyDatabase::instance(), SIGNAL(setProjects(QString ,int )), this, SLOT(onSetProjects (QString ,int )));
    connect(MyDatabase::instance(), SIGNAL(setHours(QString ,QString, int )), this, SLOT(onSetHours (QString , QString, int )));
    connect(MyDatabase::instance(), SIGNAL(setReports(int , int , QString )), this, SLOT(onSetReports (int  ,int , QString )));
    connect(MyDatabase::instance(), SIGNAL(addButtons(int)), this, SLOT(onAddButtons(int)));

    ui->tableWidgetProjectDetails->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidgetReportDetails->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidgetProjectDetails->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidgetReportDetails->setSelectionBehavior(QAbstractItemView::SelectRows);

    m_firstDayOfWeek = currentDate.addDays(-(currentDate.dayOfWeek()) + 1);
    m_lastDayOfWeek = m_firstDayOfWeek.addDays(6);
    ui->labelFirstDay->setText(m_firstDayOfWeek.toString("MMMM dd   -"));
    ui->labelLastDay->setText(m_lastDayOfWeek.toString("    MMMM dd"));
    ui->labelYear->setText(m_firstDayOfWeek.toString("yyyy"));

    m_chartView = new QChartView();
    m_chartView->setRenderHint(QPainter::Antialiasing);
    m_chartView->chart()->setTitle("Top Porojects");
    m_chartView->chart()->legend()->hide();

    m_chart = new QChart();
    m_chart->setTitle("Weekly Summary");
    m_chart->legend()->setVisible(false);
    m_chartViewBar = new QChartView();
    m_chartViewBar->setRenderHint(QPainter::Antialiasing);

    m_categories << "MON" << "TUE" << "WED" << "THU" << "FRI" << "SAT" << "SUN";
    m_axisX = new QBarCategoryAxis();
    m_axisX->append(m_categories);
    m_chart->addAxis(m_axisX, Qt::AlignBottom);
}

TimeStatus::~TimeStatus()
{
    delete ui;
}
//Setting the information shown to be for the next week
void TimeStatus::on_buttonNextWeek_clicked()
{
    m_firstDayOfWeek=m_firstDayOfWeek.addDays(7);
    m_lastDayOfWeek=m_lastDayOfWeek.addDays(7);
    ui->labelFirstDay->setText(m_firstDayOfWeek.toString("MMMM dd   -"));
    ui->labelLastDay->setText(m_lastDayOfWeek.toString("   MMMM dd"));
    ui->labelYear->setText(m_firstDayOfWeek.toString("yyyy"));

    onDataUpdated();
}
//Setting the information shown to be for the previous week
void TimeStatus::on_buttonPreviousWeek_clicked()
{
    m_firstDayOfWeek=m_firstDayOfWeek.addDays(-7);
    m_lastDayOfWeek=m_lastDayOfWeek.addDays(-7);
    ui->labelFirstDay->setText(m_firstDayOfWeek.toString("MMMM dd   -"));
    ui->labelLastDay->setText(m_lastDayOfWeek.toString("   MMMM dd"));
    ui->labelYear->setText(m_firstDayOfWeek.toString("yyyy"));

    onDataUpdated();
}
//Opens the Time Window dialog
void TimeStatus::on_buttonAddTime_clicked()
{
    MyDatabase::instance()->setAction(0);
    m_addTimeDialog.setValues();
    m_addTimeDialog.setWindowTitle("Time Window");
    m_addTimeDialog.exec();
}
//Method for updating the information with the most recent database data
void TimeStatus::onDataUpdated()
{
    ui->labelUser->setText("User: "+MyDatabase::instance()->getCurrentUser());
    setDonutChart();
    setBarChart();
    setProjectDetails();
    setReportDetails();
}

void TimeStatus::onUpdatedHours(QString value)
{
    ui->labelHours->setText(value);
}

void TimeStatus::onSetValues(QPieSeries *series)
{
    //Shows the final chart
    m_chartView->chart()->removeAllSeries();
    m_chartView->chart()->addSeries(series);
    ui->gridLayout->addWidget(m_chartView,0,0);
}

void TimeStatus::onSetDays(int monday, int tuesday, int wednesday, int thursday, int friday, int saturday, int sunday)
{
    //Create and initialise the BarSet
    QBarSet *set = new QBarSet("");
    *set<<monday<<tuesday<<wednesday<<thursday<<friday<<saturday<<sunday;
    //Create and initialise the BarSeries
    QBarSeries *series = new QBarSeries();
    series->append(set);
    series->setLabelsVisible(true);
    series->setLabelsPosition(QAbstractBarSeries::LabelsInsideEnd);

    m_chart->removeAllSeries();
    m_chart->addSeries(series);
    //m_chart->setAnimationOptions(QChart::SeriesAnimations);
    series->attachAxis(m_axisX);
    /*If I want to make the bar go to a certain range, (currently the biggest value always reaches the top of the Bar)
        QValueAxis *axisY = new QValueAxis();
        axisY->setRange(0,16);
        axisY->setTickCount(5);
        chart->addAxis(axisY, Qt::AlignLeft);
        series->attachAxis(axisY);*/

    m_chartViewBar->setChart(m_chart);

    //Show the final BarChart
    ui->gridLayout_2->addWidget(m_chartViewBar,0,0);
}

void TimeStatus::onSetProjects(QString project, int i)
{
    QTableWidgetItem *filler = new QTableWidgetItem;
    filler->setText(project);
    ui->tableWidgetProjectDetails->setItem(i,0,filler);
}

void TimeStatus::onSetHours(QString date, QString value, int j)
{
    int k=1;
    while(k<8)
    {
        if(date==ui->tableWidgetProjectDetails->horizontalHeaderItem(k)->text())
        {
            QTableWidgetItem *filler = new QTableWidgetItem;
            filler->setText(value);
            ui->tableWidgetProjectDetails->setItem(j,k,filler);
            break;
        }
        k++;
    }
}

void TimeStatus::onSetReports(int m, int k, QString text)
{
    QTableWidgetItem *filler = new QTableWidgetItem;
    filler->setText(text);
    ui->tableWidgetReportDetails->setItem(m,k,filler);
}

void TimeStatus::onAddButtons(int m)
{
    Buttons *buttons=new Buttons(ui->tableWidgetReportDetails->model()->index(m,4));
    connect(buttons,SIGNAL(buttonEditClicked(Buttons * )),this,SLOT(onButtonEditClicked(Buttons *)));
    connect(buttons,SIGNAL(buttonDeleteClicked(Buttons *)),this,SLOT(onButtonDeleteClicked(Buttons *)));
    ui->tableWidgetReportDetails->setCellWidget(m,4,static_cast<QWidget *>(buttons));
}
//Method for setting the donut chart
void TimeStatus::setDonutChart()
{
    MyDatabase::instance()->setDonutChartQuery(m_firstDayOfWeek,m_lastDayOfWeek);
}
//Method for setting the bar chart
void TimeStatus::setBarChart()
{
    MyDatabase::instance()->setBarChartQuery(m_firstDayOfWeek,m_lastDayOfWeek);
}
//Method for seting the project details in the table
void TimeStatus::setProjectDetails()
{
    MyDatabase::instance()->getProjectCountQuery();
    int rowNumber=MyDatabase::instance()->getProjectCount();

    //Create and set the table with initial values and styles
    QFont fnt;
    fnt.setPointSize(10);
    fnt.setFamily("Arial");
    fnt.setBold(true);
    ui->tableWidgetProjectDetails->setRowCount(rowNumber);
    ui->tableWidgetProjectDetails->setColumnCount(9);
    ui->tableWidgetProjectDetails->verticalHeader()->hide();
    ui->tableWidgetProjectDetails->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidgetProjectDetails->horizontalHeader()->setFont(fnt);
    ui->tableWidgetProjectDetails->horizontalHeader()->setStyleSheet("border: 1px solid; border-top-color: transparent; border-left-color: transparent; border-right-color: transparent; border-bottom-color: rgb(64, 150, 244); background-color: transparent;");
    ui->tableWidgetProjectDetails->sortByColumn(0,Qt::AscendingOrder);
    for(int i=0;i<rowNumber-1;i++)
    {
        for(int j=1;j<8;j++)
        {
            QTableWidgetItem *def=new QTableWidgetItem;
            def->setText("0");
            ui->tableWidgetProjectDetails->setItem(i,j,def);
        }
    }

    QTableWidgetItem *bottom = new QTableWidgetItem;
    bottom->setText("Totals");
    ui->tableWidgetProjectDetails->setItem(rowNumber-1,0,bottom);

    //Loop that fills in the Horizontal Header of the table
    int i=1;
    QDate startDate,endDate;
    startDate=m_firstDayOfWeek;
    endDate=startDate.addDays(7);
    while(startDate<endDate)
    {
        QTableWidgetItem *filler = new QTableWidgetItem;
        filler->setText(startDate.toString("yyyy-MM-dd"));
        ui->tableWidgetProjectDetails->setHorizontalHeaderItem(i,filler);
        startDate=startDate.addDays(1);
        i++;
    }
    int flag=1;
    MyDatabase::instance()->getProjectQuery(flag);

    //loop that fills in the hours for each project each day
    m_j=0;
    while(m_j<ui->tableWidgetProjectDetails->rowCount()-1)
    {
        QString projectName;
        projectName=ui->tableWidgetProjectDetails->item(m_j,0)->text();
        MyDatabase::instance()->getHoursQuery(projectName,m_firstDayOfWeek,m_lastDayOfWeek,m_j);
        m_j++;
    }

    //This sums the time for each project this week and displays it in the last column
    for(int i=0;i<rowNumber-1;i++)
    {
        int total=0;
        for(int j=1;j<8;j++)
        {
            total+=ui->tableWidgetProjectDetails->item(i,j)->text().toInt();
        }
        QTableWidgetItem *def=new QTableWidgetItem;
        def->setText(QString::number(total));
        ui->tableWidgetProjectDetails->setItem(i,8,def);
    }

    //This Sums the time spent on projects each day and displays it in the lat row
    for(int i=1;i<9;i++)
    {
        int total=0;
        for(int j=0;j<rowNumber-1;j++)
        {
            total+=ui->tableWidgetProjectDetails->item(j,i)->text().toInt();
        }
        QTableWidgetItem *def=new QTableWidgetItem;
        def->setText(QString::number(total));
        ui->tableWidgetProjectDetails->setItem(rowNumber-1,i,def);
    }
}

void TimeStatus::setReportDetails()
{
    MyDatabase::instance()->getReportsCountQuery(m_firstDayOfWeek,m_lastDayOfWeek);

    //Create and set the table with initial values and styles
    QFont fnt;
    fnt.setPointSize(10);
    fnt.setFamily("Arial");
    fnt.setBold(true);
    ui->tableWidgetReportDetails->setRowCount(MyDatabase::instance()->getReportsCount()-1);
    ui->tableWidgetReportDetails->setColumnCount(5);
    ui->tableWidgetReportDetails->verticalHeader()->hide();
    ui->tableWidgetReportDetails->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidgetReportDetails->horizontalHeader()->setFont(fnt);
    ui->tableWidgetReportDetails->horizontalHeader()->setStyleSheet("border: 1px solid; border-top-color: transparent; border-left-color: transparent; border-right-color: transparent; border-bottom-color: rgb(64, 150, 244); background-color: transparent;");
    MyDatabase::instance()->getReportsQuery(m_firstDayOfWeek,m_lastDayOfWeek);
    ui->tableWidgetReportDetails->sortByColumn(0,Qt::AscendingOrder);
    ui->tableWidgetReportDetails->sortByColumn(1,Qt::AscendingOrder);
}

void TimeStatus::onButtonEditClicked(Buttons *button)
{
    QModelIndex index;
    index=button->getIndex();
    QDate date;
    QString dateString;
    dateString=ui->tableWidgetReportDetails->item(index.row(),0)->text();
    date=QDate::fromString(dateString,"yyyy-MM-dd");
    QString project;
    project=ui->tableWidgetReportDetails->item(index.row(),1)->text();
    QString description;
    description=ui->tableWidgetReportDetails->item(index.row(),2)->text();
    QString hours;
    hours=ui->tableWidgetReportDetails->item(index.row(),3)->text();
    MyDatabase::instance()->setAction(1);
    m_addTimeDialog.setUpdateValues(date,project,description,hours);
    m_addTimeDialog.setWindowTitle("Time Window");
    m_addTimeDialog.exec();
}

void TimeStatus::onButtonDeleteClicked(Buttons *button)
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Delete Report", "Are you sure you want to delete this report?",QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QModelIndex index;
        index=button->getIndex();
        QString dateString;
        dateString=ui->tableWidgetReportDetails->item(index.row(),0)->text();
        QString person;
        person=MyDatabase::instance()->getCurrentUser();
        QString project;
        project=ui->tableWidgetReportDetails->item(index.row(),1)->text();
        MyDatabase::instance()->deleteRowReportsQuery(person,project,dateString);
        delete button;
    }
}
