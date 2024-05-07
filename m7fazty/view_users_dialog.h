#ifndef VIEW_USERS_DIALOG_H
#define VIEW_USERS_DIALOG_H

#include <QDialog>

namespace Ui {
class view_users_dialog;
}

class view_users_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit view_users_dialog(QWidget *parent = nullptr);
    ~view_users_dialog();

    void populateComboBox();

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);
    void populateTable(QString username);
    void updateLabels(QString username);

private:
    Ui::view_users_dialog *ui;

};

#endif // VIEW_USERS_DIALOG_H
