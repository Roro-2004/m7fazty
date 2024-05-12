#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QStackedWidget>
#include "Login.h"
#include"sign_up.h"
#include"QCloseEvent"
namespace fs = std::filesystem;
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QStackedWidget static *stackedWidget;

    Login *loginWidget;
    sign_up *sign_up_widget;
protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_login_clicked();

    void on_sign_up_clicked();


private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
