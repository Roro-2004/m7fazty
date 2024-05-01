#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include "Login.h"
#include "sign_up.h"

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


private slots:
    void on_login_clicked();

    void on_sign_up_clicked();

private:
    Ui::MainWindow *ui;
    Login *loginWidget;
    sign_up *sign_up_widget;

};

#endif // MAINWINDOW_H
