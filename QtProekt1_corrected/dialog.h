#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTableView>
#include <QStringListModel>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <QStandardItemModel>
#include <QHeaderView>
#include <countries.h>
#include <QVector>


QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

signals:

private slots:
    //This slot Handles data entered by user i.e. phone number entered by user
    void on_lineEditNumber_textChanged(const QString &arg1);
    //This slot handles message that user enters
    void on_textEditUserMessage_textChanged();
    //When user picks item from Combo Box
    void on_comboBoxCountries_activated(int index);

private:
    Ui::Dialog *_ui;
    QStringList *_list;//String List
    QTableView *_view;//view for Combo Box
    QStandardItemModel *_model;//Model for Combo Box
    QList<Countries> *_countryList;//List with custom Objects Countries
};
#endif // DIALOG_H
