#include "buttons.h"
#include "ui_buttons.h"

Buttons::Buttons(QModelIndex index, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Buttons)
{
    ui->setupUi(this);
    ui->buttonEdit->setIcon(QIcon(":/images/images/editIcon.png"));
    ui->buttonDelete->setIcon(QIcon(":/images/images/deleteIcon.png"));
    ui->buttonEdit->setIconSize(QSize(30,30));
    ui->buttonDelete->setIconSize(QSize(30,30));

    connect(ui->buttonEdit,SIGNAL(clicked()),this,SLOT(onButtonEditClicked()));
    connect(ui->buttonDelete,SIGNAL(clicked()),this,SLOT(onButtonDeleteClicked()));

    m_index = index;
}

Buttons::~Buttons()
{
    delete ui;
}

QPushButton *Buttons::getButtonEdit()
{
    return ui->buttonEdit;
}

QPushButton *Buttons::getButtonDelete()
{
    return ui->buttonDelete;
}

void Buttons::onButtonEditClicked()
{

    emit buttonEditClicked(this);
}

void Buttons::onButtonDeleteClicked()
{
    emit buttonDeleteClicked(this);
}

QModelIndex Buttons::getIndex() const
{
    return m_index;
}
