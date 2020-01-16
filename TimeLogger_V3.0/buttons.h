#ifndef BUTTONS_H
#define BUTTONS_H

#include <QWidget>
#include <QPushButton>
#include <QModelIndex>

namespace Ui {
class Buttons;
}

class Buttons : public QWidget
{
    Q_OBJECT

public:
    explicit Buttons(QModelIndex index, QWidget *parent = nullptr);

    ~Buttons();

    QPushButton *getButtonEdit();

    QPushButton *getButtonDelete();

    QModelIndex getIndex() const;

private slots:
    void onButtonEditClicked();

    void onButtonDeleteClicked();

signals:
    void buttonEditClicked(Buttons *button);

    void buttonDeleteClicked(Buttons *button);

private:
    Ui::Buttons *ui;
    QModelIndex m_index;
};

#endif // BUTTONS_H
