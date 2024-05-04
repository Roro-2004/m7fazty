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
    void showUserInfo(int index);

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_listWidget_currentTextChanged(const QString &currentText);
    void updateLabels(QString username);
    void updateTransactionsList(QString username);
    void updateTransInfo(QString transID);

private:
    Ui::view_users_dialog *ui;
    QString currentUser;
};

#endif // VIEW_USERS_DIALOG_H
