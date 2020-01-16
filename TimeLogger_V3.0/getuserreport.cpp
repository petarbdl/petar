#include "getuserreport.h"
#include "ui_getuserreport.h"

GetUserReport::GetUserReport(QWidget *parent) : QDialog(parent),ui(new Ui::GetUserReport)
{
    ui->setupUi(this);
    connect(MyDatabase::instance(), SIGNAL(setCheckBoxProjects(QString)), this, SLOT(onSetCheckBoxProjects(QString)));
    connect(MyDatabase::instance(), SIGNAL(setReportsInGetUserDialog(int,int,QString)), this, SLOT(onSetReportDetails (int  ,int , QString )));
    connect(MyDatabase::instance(), SIGNAL(setComboBoxGetUserReport(QString)), this, SLOT(onSetComboBoxGetUserReport(QString)));
}

GetUserReport::~GetUserReport()
{
    delete ui;
}
//This function is called by AdminMode Class
void GetUserReport::setValues()
{
    ui->comboBoxProject->clear();
    ui->comboBoxPerson->clear();
    ui->dateEditStartDate->setDate(QDate::currentDate());
    ui->dateEditEndDate->setDate(QDate::currentDate());

    int flag = 3;
    if(!MyDatabase::instance()->getUsersQuery(flag))
        qDebug()<<"Fail to setup GetUserReport ComboBox";

    setProjectValues();
    setReportDetails();
}
//Update ComboBox for projects
void GetUserReport::setProjectValues()
{
    ui->comboBoxProject->clear();
    MyDatabase::instance()->getAllUserProjects(ui->comboBoxPerson->currentText());
}
//SetUp ChechBox with project's names
void GetUserReport::onSetCheckBoxProjects(QString text)
{
    ui->comboBoxProject->addItem(text);
}
//When the User is changed, Report Details and ComboBox which contains Projects for the choosen user, they must be updated
void GetUserReport::on_comboBoxPerson_currentIndexChanged(const QString &arg1)
{
    Q_UNUSED(arg1)

    ui->tableWidget->clearContents();
    setProjectValues();
    setReportDetails();
}
//This SLOT recives setReportsInGetUserDialog SIGNAL from MyDatabase Class
void GetUserReport::onSetReportDetails(int m ,int k, QString text)
{
    QTableWidgetItem *filler = new QTableWidgetItem;
    filler->setText(text);
    ui->tableWidget->setItem(m,k,filler);
}

void GetUserReport::setReportDetails()
{
    //Get the number of All Reports for given user
    QString startDate=ui->dateEditStartDate->date().toString("yyyy-MM-dd");
    QString endDate=ui->dateEditEndDate->date().toString("yyyy-MM-dd");
    MyDatabase::instance()->getAllUserReportsCountQuery(ui->comboBoxPerson->currentText(),ui->comboBoxProject->currentText(),startDate,endDate);
    //Create and set the table with initial values and styles
    QFont fnt;
    fnt.setPointSize(10);
    fnt.setFamily("Arial");
    fnt.setBold(true);
    //SetUp the Widget Table
    ui->tableWidget->setRowCount(MyDatabase::instance()->getAllReportsCount()-1);
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->verticalHeader()->hide();
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setFont(fnt);
    ui->tableWidget->horizontalHeader()->setStyleSheet("border: 1px solid; border-top-color: transparent; border-left-color: transparent; border-right-color: transparent; border-bottom-color: rgb(64, 150, 244); background-color: transparent;");
    //Get the data from DB
    MyDatabase::instance()->getAllUserReportsQuery(ui->comboBoxPerson->currentText(),ui->comboBoxProject->currentText(), startDate, endDate);

    ui->tableWidget->sortByColumn(0,Qt::AscendingOrder);
    ui->tableWidget->sortByColumn(1,Qt::AscendingOrder);
    ui->tableWidget->setEditTriggers(QTableWidget::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

}
//Close This Dialog
void GetUserReport::on_buttonClose_clicked()
{
    this->close();
}
//Save user report as CSV File
void GetUserReport::on_pushButtonSaveReport_clicked()
{
    bool isSaved = false;
    //User chooses file path
    QString fileName = QFileDialog::getSaveFileName(this, QString("Save User Report"), "", QString("CSV (Comma delimited) (*.csv)"));

    QFile file(fileName);
    if(file.open(QFile::WriteOnly | QFile::Truncate))
    {
        QTextStream stream(&file);
        stream<<"Date,Project Name,Work Description,Hours,\n";
        //For loop to get all the data from the Table Widget and write it in the CSV File
        for(int i=0;i<MyDatabase::instance()->getAllReportsCount()-1;i++)
        {
            stream<<ui->tableWidget->item(i,0)->text() +"," +ui->tableWidget->item(i,1)->text()+"," + ui->tableWidget->item(i,2)->text()+"," +ui->tableWidget->item(i,3)->text()+"," +"\n";
        }
        file.close();
        isSaved = true;
    }
    if(isSaved)
    {
        qDebug()<<"Report Saved!";
        QMessageBox msgBox;
        msgBox.information(this, "Report Saved","Your report is saved at location: "+fileName,QMessageBox::Ok);
    }
    else
        qDebug()<<"Report not saved...";
}

void GetUserReport::on_comboBoxProject_currentIndexChanged(int index)
{
    Q_UNUSED(index)

    setReportDetails();
}

void GetUserReport::onSetComboBoxGetUserReport(QString user)
{
    ui->comboBoxPerson->addItem(user);
}

void GetUserReport::on_dateEditStartDate_userDateChanged(const QDate &date)
{
    Q_UNUSED(date)

    setReportDetails();
}

void GetUserReport::on_dateEditEndDate_userDateChanged(const QDate &date)
{
    Q_UNUSED(date)

    setReportDetails();
}
