#include "getuserreport.h"
#include "ui_getuserreport.h"

GetUserReport::GetUserReport(QWidget *parent) : QDialog(parent),ui(new Ui::GetUserReport)
{
    ui->setupUi(this);
    connect(MyDatabase::instance(), SIGNAL(setCheckBoxProjects(QString)), this, SLOT(onSetCheckBoxProjects(QString)));
    connect(MyDatabase::instance(), SIGNAL(setReportsInGetUserDialog(int,int,QString)), this, SLOT(onSetReportDetails (int  ,int , QString )));
}

GetUserReport::~GetUserReport()
{
    delete ui;
}

void GetUserReport::setValues()
{
    ui->comboBoxProject->clear();
    QStringListModel *model = new QStringListModel();
    model->setStringList(MyDatabase::instance()->getUsersQuery());
    ui->comboBoxPerson->setModel(model);

    setProjectValues();
    setReportDetails();
}

void GetUserReport::setProjectValues()
{
    ui->comboBoxProject->clear();
    MyDatabase::instance()->getAllUserProjects(ui->comboBoxPerson->currentText());
}

void GetUserReport::onSetCheckBoxProjects(QString text)
{
    ui->comboBoxProject->addItem(text);
}

void GetUserReport::on_comboBoxPerson_currentIndexChanged(const QString &arg1)
{
    Q_UNUSED(arg1)

    ui->tableWidget->clearContents();
    setProjectValues();
    setReportDetails();
}

void GetUserReport::onSetReportDetails(int m ,int k, QString text)
{
    QTableWidgetItem *filler = new QTableWidgetItem;
    filler->setText(text);
    ui->tableWidget->setItem(m,k,filler);
}

void GetUserReport::setReportDetails()
{
    MyDatabase::instance()->getAllUserReportsCountQuery();

    //Create and set the table with initial values and styles
    QFont fnt;
    fnt.setPointSize(10);
    fnt.setFamily("Arial");
    fnt.setBold(true);

    ui->tableWidget->setRowCount(MyDatabase::instance()->getAllReportsCount()-1);
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->verticalHeader()->hide();
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setFont(fnt);
    ui->tableWidget->horizontalHeader()->setStyleSheet("border: 1px solid; border-top-color: transparent; border-left-color: transparent; border-right-color: transparent; border-bottom-color: rgb(64, 150, 244); background-color: transparent;");
    MyDatabase::instance()->getAllUserReportsQuery(ui->comboBoxPerson->currentText());
    ui->tableWidget->sortByColumn(0,Qt::AscendingOrder);
    ui->tableWidget->sortByColumn(1,Qt::AscendingOrder);
}

void GetUserReport::on_buttonAddTime_clicked()
{
    this->close();
}
