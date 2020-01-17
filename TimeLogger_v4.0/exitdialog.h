#ifndef EXITDIALOG_H
#define EXITDIALOG_H

#include <QDialog>

namespace Ui {
class ExitDialog;
}

class ExitDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ExitDialog(QWidget *parent = nullptr);
    ~ExitDialog();

    void setValues(QString name);

private slots:

    void on_buttonLogout_clicked();

    void on_buttonQuit_clicked();

signals:
    void logoutButtonPressed();
    void quitButtonPressed();

private:
    Ui::ExitDialog *ui;
};

#endif // EXITDIALOG_H
