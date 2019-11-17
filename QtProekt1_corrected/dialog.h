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
    void on_lineEdit_textChanged(const QString &arg1);
    //This slot handles message that user enters
    void on_textEdit_textChanged();
    //When user picks item from Combo Box
    void on_comboBox_activated(int index);

private:
    Ui::Dialog *ui;
    QStringList *lista;//String List
    QTableView *view;//view for Combo Box
    QStandardItemModel *model;//Model for Combo Box
    int timesPressed=1;// Integer to keep number of messages user types

};
#endif // DIALOG_H
