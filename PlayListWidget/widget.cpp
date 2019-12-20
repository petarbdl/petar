#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //Setting up the StandardItemModel, It has two columns and Horizontal Header
    _model = new QStandardItemModel(_list.count(),2);
    _model->setHeaderData(0,Qt::Horizontal,"File Name",Qt::DisplayRole);
    _model->setHeaderData(1,Qt::Horizontal,"Duration",Qt::DisplayRole);
    //Setting up the TableView view
    ui->tableView->setModel(_model);
    ui->tableView->verticalHeader()->hide();//The Vertical header is not visible
    ui->tableView->horizontalHeader()->resizeSection(0,200);//Resizing Column 0
    ui->tableView->horizontalHeader()->resizeSection(1,90);//Resizeing Column 1
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);//TableView is not editable
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);//When Item is selected, the whole row is automaticly selected
    ui->tableView->setShowGrid(false);//Removing Borders in the TableView
    //Setting up Highlight Color
    QPalette p = ui->tableView->palette();
    QColor color = {217,235,249};
    p.setColor(QPalette::Highlight, color);
    p.setColor(QPalette::HighlightedText, Qt::black);
    ui->tableView->setPalette(p);
}

Widget::~Widget()
{
    delete ui;
}
//Function thats called by the slots to add new Item in the List
void Widget::appendFile(QString name, QString duration)
{
    Items newItem(name,duration);
    _list.append(newItem);
    //Two rows are added, one with file name value the other with file duration
    _model->insertRow(_model->rowCount(QModelIndex()),QModelIndex());
    QModelIndex modelIndex;
    modelIndex = _model->index(_list.count()-1, 0);
    _model->setData(modelIndex, Qt::AlignVCenter, Qt::TextAlignmentRole);
    _model->setData(modelIndex,name,Qt::DisplayRole);
    modelIndex = _model->index(_list.count()-1, 1);
    _model->setData(modelIndex,duration,Qt::DisplayRole);
    _model->setData(modelIndex, Qt::AlignCenter, Qt::TextAlignmentRole);
    //Resize Columns
    ui->tableView->resizeColumnsToContents();
}
//This Slot is called when "..." button is presed
void Widget::browseFiles()
{
    QString name;//Name of file user choses
    QString duration = "12:12";//Dummy Data for file duration
    const QString downloadsFolder = QStandardPaths::writableLocation(QStandardPaths::DownloadLocation);
    //Variable name get the string value of the video name
    name = QFileDialog::getOpenFileName(this,tr("Chose File"),downloadsFolder,tr("*.mp4 *.wmv *.avi *.mkv"));
    //Only the file name is taken
    QStringList tmp = name.split("/");
    name = tmp.at(tmp.count()-1);
    //New Item is created and appended to list
    if(name != "")
    {
        appendFile(name,duration);
    }
}
//This Slot is called when Find Button is pressed
void Widget::pushButtonFind_clicked()
{
    QString filePath = lineEdit->text();//Get Text from LineEdit
    QString name;//Name of file user choses
    QString duration = "12:12";//Dummy Data for file duration
    QFileInfo newFile(filePath);//Get File Infos
    //If File path exsists continue, else exes MessageBox for error
    if(QFileInfo::exists(newFile.filePath()))
    {
        if(newFile.isDir())
        {
            name = QFileDialog::getOpenFileName(this,tr("Choose File"),filePath,tr("*.mp4, *.wmv, *.avi, *.mkv"));
            QStringList tmp = name.split("/");
            name = tmp.at(tmp.count()-1);
            if(name != "")
            {
                appendFile(name, duration);
            }
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setIcon(QMessageBox::Warning);
            msgBox.setText("Path you entered is not folder!");
            msgBox.exec();
        }
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setText("Invalid folder path!");
        msgBox.exec();
    }
}

//When Add button is clicked this function is called
void Widget::on_pushButtonAdd_clicked()
{
    //Setup Dialog
    _dialog = new QDialog(this);
    _dialog->setWindowTitle("Add Video");
    _dialog->setMinimumWidth(450);
    _dialog->setGeometry(616,316,350,50);
    //Create Label
    QLabel *label = new QLabel("Folder Path: ");
    //Create Line Edit
    lineEdit = new QLineEdit();
    //Create two buttons
    QPushButton *buttonBrowse = new QPushButton("...");
    buttonBrowse->setMaximumWidth(40);
    QPushButton *pushButtonFind = new QPushButton("Find");
    //Connect the buttons to coresponding Slot
    connect(pushButtonFind, SIGNAL(clicked()), SLOT(pushButtonFind_clicked()));
    connect(buttonBrowse, SIGNAL(clicked()), SLOT(browseFiles()));
    //Create Horizontal Layout for the buttons
    QHBoxLayout *horizontalLayout = new QHBoxLayout();
    horizontalLayout->addWidget(pushButtonFind);
    horizontalLayout->addWidget(buttonBrowse);
    //Create horizontal Layout for the Dialog
    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(label);
    layout->addWidget(lineEdit);
    layout->addLayout(horizontalLayout);
    //Set Layout in the Dialog and show it
    _dialog->setLayout(layout);
    _dialog->show();
}
//When Close button is clicked this function is called, it just closes the widget
void Widget::on_pushButtonClose_clicked()
{
    this->close();
}
//This slot is called when Up Button is clicked
void Widget::on_pushButtonUp_clicked()
{
    QStandardItemModel *item = qobject_cast<QStandardItemModel *>(ui->tableView->model());
    int row = ui->tableView->currentIndex().row();
    if(row == 0) // if the item is in first row
    {
        return;
    }
    int newRow = row-1;
    QList<QStandardItem *> list = item->takeRow(row);
    item->insertRow(newRow,list);
    QModelIndex currentIndex = _model->index(newRow,0);
    ui->tableView->setCurrentIndex(currentIndex);
}
//This slot is called when Up Button is clicked
void Widget::on_pushButtonDown_clicked()
{
    QStandardItemModel *item = qobject_cast<QStandardItemModel *>(ui->tableView->model());
    int row = ui->tableView->currentIndex().row();
    if(row == _list.count()-1) // if the item is in first row
    {
        return;
    }
    int newRow = row+1;
    QList<QStandardItem *> list = item->takeRow(row);
    item->insertRow(newRow,list);
    QModelIndex currentIndex = _model->index(newRow,0);
    ui->tableView->setCurrentIndex(currentIndex);
}
