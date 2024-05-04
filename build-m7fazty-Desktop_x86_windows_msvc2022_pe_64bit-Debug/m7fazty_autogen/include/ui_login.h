/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QPushButton *pushButton;
    QPushButton *Login_2;
    QLineEdit *password_textBox;
    QLabel *label_plain_bg;
    QLineEdit *userName_textBox;
    QLabel *username_label;
    QLabel *password_label;
    QLabel *logo_label;
    QLabel *label;
    QLabel *personlogo_label;
    QLabel *back_label;
    QPushButton *back_button;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(971, 724);
        pushButton = new QPushButton(Login);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 170, 371, 401));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgba(255, 90, 130, 0.15);\n"
"    border-radius: 15px;\n"
"}\n"
""));
        Login_2 = new QPushButton(Login);
        Login_2->setObjectName("Login_2");
        Login_2->setGeometry(QRect(390, 480, 171, 41));
        QPalette palette;
        QBrush brush(QColor(255, 170, 190, 178));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(67, 27, 55, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Login_2->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font.setPointSize(14);
        Login_2->setFont(font);
        Login_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"/*background-color: rgba(230, 170, 245, 0.7);*/\n"
"    background-color: rgba(255, 170, 190, 0.7);\n"
"    border-radius: 13px;\n"
"    border: 1px solid rgb(0, 0, 10);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 170, 190, 0.4); /* Semi-transparent background color when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 150, 200, 0.7); /* Semi-transparent background color when pressed */\n"
"    border: 2px solid black; /* You can customize the border for the pressed state if needed */\n"
"}\n"
""));
        password_textBox = new QLineEdit(Login);
        password_textBox->setObjectName("password_textBox");
        password_textBox->setGeometry(QRect(340, 390, 251, 31));
        password_textBox->setEchoMode(QLineEdit::Password);
        password_textBox->setClearButtonEnabled(true);
        label_plain_bg = new QLabel(Login);
        label_plain_bg->setObjectName("label_plain_bg");
        label_plain_bg->setGeometry(QRect(0, 0, 971, 724));
        label_plain_bg->setStyleSheet(QString::fromUtf8("background-image: url(:/material/photos/plain_bg.png);"));
        userName_textBox = new QLineEdit(Login);
        userName_textBox->setObjectName("userName_textBox");
        userName_textBox->setGeometry(QRect(340, 280, 251, 31));
        userName_textBox->setAutoFillBackground(false);
        userName_textBox->setFrame(true);
        userName_textBox->setEchoMode(QLineEdit::Normal);
        userName_textBox->setClearButtonEnabled(true);
        username_label = new QLabel(Login);
        username_label->setObjectName("username_label");
        username_label->setGeometry(QRect(340, 240, 111, 31));
        QPalette palette1;
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        username_label->setPalette(palette1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font1.setPointSize(12);
        username_label->setFont(font1);
        password_label = new QLabel(Login);
        password_label->setObjectName("password_label");
        password_label->setGeometry(QRect(340, 350, 111, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        password_label->setPalette(palette2);
        password_label->setFont(font1);
        logo_label = new QLabel(Login);
        logo_label->setObjectName("logo_label");
        logo_label->setGeometry(QRect(30, 30, 31, 31));
        logo_label->setStyleSheet(QString::fromUtf8("image: url(:/material/photos/logo.png);"));
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 30, 91, 31));
        QPalette palette3;
        QBrush brush3(QColor(115, 211, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        label->setPalette(palette3);
        label->setFont(font1);
        personlogo_label = new QLabel(Login);
        personlogo_label->setObjectName("personlogo_label");
        personlogo_label->setGeometry(QRect(420, 110, 111, 111));
        personlogo_label->setStyleSheet(QString::fromUtf8("border-image: url(:/material/photos/person logo.png);"));
        back_label = new QLabel(Login);
        back_label->setObjectName("back_label");
        back_label->setGeometry(QRect(20, 680, 31, 31));
        back_button = new QPushButton(Login);
        back_button->setObjectName("back_button");
        back_button->setGeometry(QRect(20, 680, 31, 31));
        back_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	image: url(:/material/photos/white back button.png);\n"
"	color: rgb(226, 226, 255);\n"
"   \n"
" background-color: rgba(255, 255, 255, 0); /* Fully transparent background */\n"
"text-align: left;\n"
"    border-radius: 13px;\n"
"    border: 1px solid rgba(0, 0, 0,0);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2); /* Semi-transparent background color when hovered */\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3); \n"
"\n"
"}"));
        label_plain_bg->raise();
        pushButton->raise();
        Login_2->raise();
        userName_textBox->raise();
        username_label->raise();
        password_label->raise();
        password_textBox->raise();
        logo_label->raise();
        label->raise();
        personlogo_label->raise();
        back_label->raise();
        back_button->raise();

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        pushButton->setText(QString());
        Login_2->setText(QCoreApplication::translate("Login", "Login", nullptr));
        password_textBox->setText(QString());
        password_textBox->setPlaceholderText(QCoreApplication::translate("Login", "Enter Password", nullptr));
        label_plain_bg->setText(QString());
        userName_textBox->setInputMask(QString());
        userName_textBox->setText(QString());
        userName_textBox->setPlaceholderText(QCoreApplication::translate("Login", "Enter Username", nullptr));
        username_label->setText(QCoreApplication::translate("Login", "Username", nullptr));
        password_label->setText(QCoreApplication::translate("Login", "Passsword", nullptr));
        logo_label->setText(QString());
        label->setText(QCoreApplication::translate("Login", "Ma7fazty", nullptr));
        personlogo_label->setText(QString());
        back_label->setText(QString());
        back_button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
