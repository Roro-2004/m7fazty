#ifndef VIEWTRANSHISTORY_DIALOG_H
#define VIEWTRANSHISTORY_DIALOG_H
#include <QDialog>
#include "account.h"
#include<vector>
#include<unordered_map>
#include "transiction.h"
using namespace std;
namespace Ui {
class viewTransHistory_dialog;
}

class viewTransHistory_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit viewTransHistory_dialog(QWidget *parent = nullptr);
    ~viewTransHistory_dialog();

    unordered_map<string, vector<transiction*>> transactions_map;
    void transiction_history();
    void search_by_month(string s);
    string encoding(string s);
    void show_whole_history();



private slots:

    void on_month_cb_currentTextChanged(const QString &arg1);

private:
    Ui::viewTransHistory_dialog *ui;
};

#endif // VIEWTRANSHISTORY_DIALOG_H
