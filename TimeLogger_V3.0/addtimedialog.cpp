#include "addtimedialog.h"
#include "ui_addtimedialog.h"
#include "QCalendarWidget"

AddTimeDialog::AddTimeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddTimeDialog)
{
    ui->setupUi(this);
    QValidator *validator = new QIntValidator(0, 24, this);
    ui->lineEditTime->setValidator(validator);

    connect(MyDatabase::instance(), SIGNAL(setCheckBox(QString)), this, SLOT(onSetCheckBox(QString)));
}
//used for setting the initial values when the window is opened
void AddTimeDialog::setValues()
{
    ui->lineEditPerson->setText(MyDatabase::instance()->getCurrentUser());
    ui->dateEditDate->setDate(QDate::currentDate());
    ui->comboBoxProject->clear();
    ui->lineEditTime->setText("");
    ui->textEditDescription->setText("");

    if(MyDatabase::instance()->getAction() == 0)
    {
        ui->comboBoxProject->setEnabled(true);
    }

    int flag=2;
    MyDatabase::instance()->getProjectQuery(flag);
}
//used for setting the values when the window is opened through the edit button in the table rows
void AddTimeDialog::setUpdateValues(QDate date, QString project, QString description, QString hours)
{
    ui->comboBoxProject->setEnabled(false);
    ui->lineEditPerson->setText(MyDatabase::instance()->getCurrentUser());
    ui->dateEditDate->setDate(date);
    ui->comboBoxProject->clear();
    ui->lineEditTime->setText(hours);
    ui->textEditDescription->setText(description);
    int flag=3;
    MyDatabase::instance()->getProjectQuery(flag);
    int counter= MyDatabase::instance()->getProjectCount();
    for(int i = 0; i < counter; i++)
    {
        if(ui->comboBoxProject->itemText(i) == project)
        {
            ui->comboBoxProject->setCurrentIndex(i);
        }
    }
}

AddTimeDialog::~AddTimeDialog()
{
    delete ui;
}
//when this button is clicked all the information from the input fields is gathered and inserted in the database
void AddTimeDialog::on_buttonAddTime_clicked()
{
    QString person,date,project,description,time;
    person=ui->lineEditPerson->text();
    date=ui->dateEditDate->date().toString("yyyy-MM-dd");
    time=ui->lineEditTime->text();
    project=ui->comboBoxProject->itemData(ui->comboBoxProject->currentIndex(), Qt::DisplayRole).toString();
    description=ui->textEditDescription->toPlainText();

    //Action 0 means inserting a new row in the reports table
    if(MyDatabase::instance()->getAction() == 0)
    {
        if(MyDatabase::instance()->createReportsRowQuery(person, project, time, description, date))
        {
            qDebug()<<"Successfuly added report...";
            ui->lineEditPerson->setText("");
            ui->textEditDescription->setText("");
            ui->lineEditTime->setText("");
            ui->comboBoxProject->clear();
            ui->dateEditDate->setDate(QDate::currentDate());
            //emiting this signal tells the application that there were changes in the data so it can be replaced with the newest information
            emit dataUpdated();
            this->close();
        }
        else
        {
            QMessageBox messageBox;
            messageBox.warning(this,"Issue", "Cannot add more than one report for same day");
        }
        setValues();
    }
    //Action 1 means editing/updating a row in the reports table
    if(MyDatabase::instance()->getAction() == 1)
    {
        if(MyDatabase::instance()->updateReportsRowQuery(person, project, time, description, date))
        {
            qDebug()<<"Successfuly edited report...";
            ui->lineEditPerson->setText("");
            ui->textEditDescription->setText("");
            ui->lineEditTime->setText("");
            ui->comboBoxProject->clear();
            ui->dateEditDate->setDate(QDate::currentDate());
            //emiting this signal tells the application that there were changes in the data so it can be replaced with the newest information
            emit dataUpdated();

            this->close();
        }
        setValues();
    }
}

//closes the window
void AddTimeDialog::on_buttonCancel_clicked()
{
    this->close();
}
//this is a requirement that needs to be validated in order to be able to insert new information in the database
void AddTimeDialog::on_textEditDescription_textChanged()
{
    int remainingSymbols = 60 - ui->textEditDescription->toPlainText().length();
    if(remainingSymbols < 0)
    {
        remainingSymbols = 0;
    }
    ui->labelRemainingSymbols->setText(QString::number(remainingSymbols));
    validateInfo();
}

void AddTimeDialog::on_lineEditTime_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1)

    validateInfo();
}

void AddTimeDialog::validateInfo()
{
    if(ui->textEditDescription->toPlainText().length() > 60 && ui->lineEditTime->text() != "" && ui->lineEditTime->text().toInt() < 24 && ui->comboBoxProject->count() != 0)
    {
        ui->buttonAddTime->setEnabled(true);
        ui->buttonAddTime->setStyleSheet("QPushButton {background-color: rgb(64, 150, 244);border-radius: 5px;color: rgb(255, 255, 255);border:none}QPushButton:pressed {background-color: rgb(57, 134, 217);}QPushButton:hover {background-color: rgb(67, 158, 255);}");
    }
    else {
        ui->buttonAddTime->setEnabled(false);
        ui->buttonAddTime->setStyleSheet("QPushButton {background-color: rgb(56, 132, 213);border-radius: 5px;color: rgb(255, 255, 255);border:none}QPushButton:pressed {background-color: rgb(57, 134, 217);}QPushButton:hover {background-color: rgb(67, 158, 255);}");
    }
}

void AddTimeDialog::onSetCheckBox(QString text)
{
    ui->comboBoxProject->addItem(text);
}
