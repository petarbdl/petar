#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    lista = new QStringList(); //Main List

    //SETTING VIEW
    view = new QListView();
    view->setMinimumWidth(200);
    ui->comboBox->setView(view);

    //COMBO BOX SETTING
    lista = new QStringList();
    QFile myFile(":/MyFiles/countries.txt");
    if(myFile.open(QIODevice::ReadOnly))
    {
        QTextStream inText(&myFile);
        while(!inText.atEnd())
        {
            QString line = inText.readLine();
            //String List that is used to insert and match flags
            //with currect countries
            lista->append(line);
        }
        myFile.close();
    }

    //SETTING ICONS AND LIST ITEMS TOGETHER
    QStringList::iterator i = lista->begin();
    while(i != lista->end())
    {
        QStringList tmp = i->split(",");
        QIcon icon(":/MyFiles/"+tmp.at(0).trimmed());
        QString newLine;
        newLine += tmp.at(2).trimmed() +" +" +tmp.at(1).trimmed();
        ui->comboBox->addItem(icon, newLine);
        i++;
    }
    //Start ComboBox index
    ui->comboBox->setCurrentIndex(-1);
    //LineEdit Maximum number of charachters
    ui->lineEdit_2->setMaxLength(160);
}
//Slot for counting entered charachters in LineEdit2
void Dialog::on_lineEdit_2_textChanged(const QString &arg1)
{
    QString text_label = QString("%1/%2").arg(arg1.size()).arg(ui->lineEdit_2->maxLength()-arg1.size());
    //Displaying then on lable_4
    ui->label_4->setText(text_label);
}
//Slot for setting correct flag in comboBox. In cases user uses keyboard to enter phone number
//Or when user uses paste and text enters from external sorce.
void Dialog::on_lineEdit_textChanged(const QString &arg1)
{

    QStringList *prefix = new QStringList(); //Creating new QStringList to hold on all prefixes in comboBox

    QString tmpString;

    QStringList::iterator i = lista->begin(); //iterator for our Main list

    while(i != lista->end())
    {
        QStringList tmp = i->split(",");

        prefix->push_back(tmp.at(1).trimmed()); //Every prefix from Main List enters in prefixList

        i++;
    }
    //This if/else case, it doesn't make difference if user uses + or not when typing on lineEdit
    if(arg1!="" && arg1.at(0)=="+")
    {
        tmpString = arg1.mid(1,arg1.length());
    }
    else
    {
        tmpString = arg1;
    }

    int tmpIndex = prefix->indexOf(tmpString);//tmpIndex hold -1 if there isn't matching string in prefixList for arg1
                                             //Otherwise tmpIndex holds index of matching string

    if(tmpIndex != -1)
    {
        ui->comboBox->setCurrentIndex(tmpIndex);
    }
    //when user uses copy-paste
    if(arg1.size()>5)
    {
        for(int i=3;i>0;i--)
        {
            QString tmpArg = tmpString.mid(0,i);
            int tmpIndexArg = prefix->indexOf(tmpArg);
            if(tmpIndexArg!=-1)
            {
                ui->comboBox->setCurrentIndex(tmpIndexArg);
            }
        }
    }

    if(arg1 == " " || arg1=="+" || arg1 == "")
    {
        ui->comboBox->setCurrentIndex(-1);
    }
}

//SLOT ACTIVATED, when comboBox is used to set prefix
void Dialog::on_comboBox_activated(const QString &arg1)
{
    QStringList prefix = arg1.split("+");
    ui->lineEdit->setText("+"+prefix.at(1));
}
//Dialog Destructor
Dialog::~Dialog()
{
    delete ui;
}
