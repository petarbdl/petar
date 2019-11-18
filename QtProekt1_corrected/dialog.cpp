#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , _ui(new Ui::Dialog)
{
    _ui->setupUi(this);
    _list = new QStringList(); //Main List
    _view = new QTableView();//Table view for comboBox
    _model = new QStandardItemModel(_list->size(),3,this);//Model for Combo Box rows = number of elements in lista

    //Getting info from "countries.txt" file and appendingit to String list
    //then to a table view
    _list = new QStringList();
    QFile myFile(":/MyFiles/countries.txt");
    int row = 0;//Row for my Standard Item Model
    if(myFile.open(QIODevice::ReadOnly))
    {
        QTextStream inText(&myFile);
        while(!inText.atEnd())
        {
            QString line = inText.readLine();

            Countries myCountry(line);//Creating new Country Object
            //Setting icons and list items together in Standard Item Model
            QModelIndex index;
            index = _model->index(row,0,QModelIndex());//Inserting Flags in the model
            _model->setItem(row,0,myCountry.getCountryFlag());

            index = _model->index(row,1,QModelIndex());//Inserting Countries names in the model
            _model->setData(index,myCountry.getCountryName(),Qt::EditRole);

            index = _model->index(row,2,QModelIndex());//Inserting prefixs in the model
            _model->setData(index,myCountry.getCountryPrefix(),Qt::EditRole);

            _list->append(line);//Appending the line from country.txt to list
            row++;
        }
        myFile.close();
    }

    _view->setModel(_model);
    //Hiding Horizontal and Vertical Hrader
    _view->horizontalHeader()->hide();
    _view->verticalHeader()->hide();
    //Resizing Rows and Columns to Content size
    _view->resizeRowsToContents();
    _view->resizeColumnsToContents();
    //Minnimum Width to sum of columns widths
    _view->setMinimumWidth(_view->columnWidth(0)+_view->columnWidth(1)+_view->columnWidth(2)+17);
    //Items in the View have gray color
    _view->setStyleSheet("QTableView {color: gray;}");
    //Removing borders and frame of table
    _view->setShowGrid(false);
    //Highlights whole row
    _view->setSelectionBehavior(QAbstractItemView::SelectRows);
    //Setting model and view to combo box
    _ui->comboBoxCountries->setModel(_model);
    _ui->comboBoxCountries->setView(_view);
    //Color of Highlighted row
    QPalette p = _ui->comboBoxCountries->palette();
    p.setColor(QPalette::Highlight, Qt::white);
    _ui->comboBoxCountries->setPalette(p);
    //Color of Highlighted text
    p = _ui->comboBoxCountries->view()->palette();
    p.setColor(QPalette::Highlight, Qt::gray);
    p.setColor(QPalette::HighlightedText, Qt::black);
    _ui->comboBoxCountries->view()->setPalette(p);
    //Predefined tex of Text Edit and Line Edit
    _ui->textEditUserMessage->setPlaceholderText("Type message here");
    _ui->lineEditNumber->setPlaceholderText("enter phone number");
}
//When user picks prefix from Combo box
void Dialog::on_comboBoxCountries_activated(int index)
{
    QModelIndex ind;
    ind = _model->index(index,2,QModelIndex());//geting index from the model
    QVariant var = _ui->comboBoxCountries->model()->data(ind);//getting data from the model
    _ui->lineEditNumber->setText(var.toString().trimmed());//setting text
}
//Slot for setting correct flag in comboBox. In cases user uses keyboard to enter phone number
//Or when user uses pastes text from external sorce.
void Dialog::on_lineEditNumber_textChanged(const QString &arg1)
{

    QStringList *prefix = new QStringList(); //Creating new QStringList to hold on all prefixes in comboBox

    QString tmpString;

    QStringList::iterator i = _list->begin(); //iterator for our Main list

    while(i != _list->end())
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
        _ui->comboBoxCountries->setCurrentIndex(tmpIndex);
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
                _ui->comboBoxCountries->setCurrentIndex(tmpIndexArg);
            }
        }
    }
    //when there no number in line edit, index of combo box is set to -1
    if(arg1 == " " || arg1=="+" || arg1 == "")
    {
        _ui->comboBoxCountries->setCurrentIndex(-1);
    }
}
//Dialog Destructor
Dialog::~Dialog()
{
    delete _ui;
}
//Counting charachters and number of messages
void Dialog::on_textEditUserMessage_textChanged()
{
    QString tmpString = _ui->textEditUserMessage->toPlainText();

    QString textLabelCountCharacters = QString("%1").arg(160-(tmpString.size()%160));
    //Displaying charachter count of message
    _ui->labelCountCharacters->setText(textLabelCountCharacters);
    //Displaying Number of messages written
    int var = tmpString.size()/160;
    QString textLabelCountMessages = QString("<span style=color:#8d8d8d;>/ %1</span>").arg(var+1);
    _ui->labelCountMessages->setText(textLabelCountMessages);
}

