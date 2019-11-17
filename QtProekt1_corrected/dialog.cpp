#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    lista = new QStringList(); //Main List
    view = new QTableView();//Table view for comboBox
    model = new QStandardItemModel(lista->size(),3,this);//Model for Combo Box rows = number of elements in lista

    //Getting info from "countries.txt" file and appendingit to String list
    //then to a table view
    lista = new QStringList();
    QFile myFile(":/MyFiles/countries.txt");
    if(myFile.open(QIODevice::ReadOnly))
    {
        QTextStream inText(&myFile);
        while(!inText.atEnd())
        {
            QString line = inText.readLine();
            lista->append(line);
        }
        myFile.close();
    }

    //Setting icons and list items together in Standard Item Model
    QStringList::iterator i = lista->begin();
    for(int row=0; row<lista->size(); row++)
    {

            if(i != lista->end())
            {
                QStringList tmp = i->split(",");

                QIcon icon(":/MyFiles/"+tmp.at(0).trimmed());//Icon for country flag
                QString countryName = tmp.at(2).trimmed();//Country Name
                QString countryPrefix = "+"+tmp.at(1);//Country Prefix

                QStandardItem *item = new QStandardItem();
                item->setIcon(icon);//Creating Flag Icon

                QModelIndex index;
                index = model->index(row,0,QModelIndex());//Inserting Flags in the model
                model->setItem(row,0,item);

                index = model->index(row,1,QModelIndex());//Inserting Countries names in the model
                model->setData(index,countryName,Qt::EditRole);

                index = model->index(row,2,QModelIndex());//Inserting prefixs in the model
                model->setData(index,countryPrefix,Qt::EditRole);
            }
            i++;
    }

    view->setModel(model);
    //Hiding Horizontal and Vertical Hrader
    view->horizontalHeader()->hide();
    view->verticalHeader()->hide();
    //Resizing Rows and Columns to Content size
    view->resizeRowsToContents();
    view->resizeColumnsToContents();
    //Minnimum Width to sum of columns widths
    view->setMinimumWidth(view->columnWidth(0)+view->columnWidth(1)+view->columnWidth(2)+17);
    //Items in the View have gray color
    view->setStyleSheet("QTableView {color: gray;}");
    //Removing borders and frame of table
    view->setShowGrid(false);
    //Highlights whole row
    view->setSelectionBehavior(QAbstractItemView::SelectRows);
    //Setting model and view to combo box
    ui->comboBox->setModel(model);
    ui->comboBox->setView(view);
    //Color of Highlighted row
    QPalette p = ui->comboBox->palette();
    p.setColor(QPalette::Highlight, Qt::white);
    ui->comboBox->setPalette(p);
    //Color of Highlighted text
    p = ui->comboBox->view()->palette();
    p.setColor(QPalette::Highlight, Qt::gray);
    p.setColor(QPalette::HighlightedText, Qt::black);
    ui->comboBox->view()->setPalette(p);
    //Predefined tex of Text Edit and Line Edit
    ui->textEdit->setPlaceholderText("Type message here");
    ui->lineEdit->setPlaceholderText("enter phone number");
}
//When user picks prefix from Combo box
void Dialog::on_comboBox_activated(int index)
{
    QModelIndex ind;
    ind = model->index(index,2,QModelIndex());//geting index from the model
    QVariant var = ui->comboBox->model()->data(ind);//getting data from the model
    ui->lineEdit->setText(var.toString().trimmed());//setting text
}
//Slot for setting correct flag in comboBox. In cases user uses keyboard to enter phone number
//Or when user uses pastes text from external sorce.
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
    if(arg1.size()>4)
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
    //when there no number in line edit, index of combo box is set to -1
    if(arg1 == " " || arg1=="+" || arg1 == "")
    {
        ui->comboBox->setCurrentIndex(-1);
    }
}

//Dialog Destructor
Dialog::~Dialog()
{
    delete ui;
}
//Counting charachters and number of messages
void Dialog::on_textEdit_textChanged()
{
    QString tmpString = ui->textEdit->toPlainText();

    QString text_label = QString("%1").arg(160-(tmpString.size()%160));
    //Displaying then on lable_4
    if(tmpString.size()%160==0)
    {
        ++timesPressed;
        QString text_label2 = QString("/ %1").arg(timesPressed);
        ui->label_3->setText(text_label2);
    }
    ui->label_4->setText(text_label);

}

