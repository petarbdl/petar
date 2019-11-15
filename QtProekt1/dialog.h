#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QListView>
#include <QStringList>
#include <QFile>
#include <QTextStream>


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
    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_comboBox_activated(const QString &arg1);

private:
    Ui::Dialog *ui;
    QStringList *lista;
    QListView *view;
};
#endif // DIALOG_H
