#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFile>
#include <QStandardItemModel>
#include <QFileDialog>
#include <QVector>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QMessageBox>
#include <QStandardPaths>
#include <QDebug>

//Struct to keep Item name and duration
struct Items
{
    QString fileName;//Name of the Video
    QString fileDuration;//Duration of the Video
    //Constructor for this Struck
    Items(QString name, QString duration) {
        fileName = name;
        fileDuration = duration;
    }
};

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    //This Function appends new Item to the vector list
    void appendFile(QString name, QString duration);
    //This Function returns string name of the next file
    QString getNextFile();

private slots:
    void on_pushButtonAdd_clicked();

    void on_pushButtonClose_clicked();

    void browseFiles();

    void pushButtonFind_clicked();

    void on_pushButtonUp_clicked();

    void on_pushButtonDown_clicked();

private:
    Ui::Widget *ui;//The Widget
    QStandardItemModel *_model;//Data Model
    QVector<Items> _list;//List where Items are stored
    QDialog *_dialog;//This Dialog is opened when Add Button is clicked
    QLineEdit *lineEdit;//LineEdit used in the Dialog
};
#endif // WIDGET_H
