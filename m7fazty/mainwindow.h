#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include "Login.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void switchToMain();

    void on_login_clicked();

private:
    Ui::MainWindow *ui;
    Login *loginWidget;

    QStackedWidget *stackedWidget;
};

#endif // MAINWINDOW_H
