/********************************************************************************
** Form generated from reading UI file 'sign_up.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_UP_H
#define UI_SIGN_UP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sign_up
{
public:
    QLabel *label_bg;
    QLabel *password_label;
    QLabel *username_label;
    QLineEdit *password_textBox;
    QLineEdit *userName_textBox;
    QLabel *city_label;
    QLabel *email_label;
    QLineEdit *city_textBox;
    QLineEdit *email_textBox;
    QLabel *age_label;
    QLineEdit *age_textBox;
    QPushButton *back_button;
    QLabel *back_label;
    QPushButton *pushButton;
    QPushButton *sign_up2_button;
    QLabel *label;
    QLabel *logo_label;

    void setupUi(QWidget *sign_up)
    {
        if (sign_up->objectName().isEmpty())
            sign_up->setObjectName("sign_up");
        sign_up->resize(971, 724);
        label_bg = new QLabel(sign_up);
        label_bg->setObjectName("label_bg");
        label_bg->setGeometry(QRect(0, 0, 971, 724));
        QPalette palette;
        label_bg->setPalette(palette);
        label_bg->setStyleSheet(QString::fromUtf8("background-image: url(:/material/photos/plain_bg.png);\n"
""));
        password_label = new QLabel(sign_up);
        password_label->setObjectName("password_label");
        password_label->setGeometry(QRect(340, 460, 111, 31));
        QPalette palette1;
        QBrush brush(QColor(255, 219, 252, 255));
        brush.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        password_label->setPalette(palette1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font.setPointSize(12);
        password_label->setFont(font);
        username_label = new QLabel(sign_up);
        username_label->setObjectName("username_label");
        username_label->setGeometry(QRect(340, 90, 111, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        username_label->setPalette(palette2);
        username_label->setFont(font);
        password_textBox = new QLineEdit(sign_up);
        password_textBox->setObjectName("password_textBox");
        password_textBox->setGeometry(QRect(340, 490, 251, 31));
        password_textBox->setAcceptDrops(true);
        password_textBox->setEchoMode(QLineEdit::Normal);
        password_textBox->setClearButtonEnabled(true);
        userName_textBox = new QLineEdit(sign_up);
        userName_textBox->setObjectName("userName_textBox");
        userName_textBox->setGeometry(QRect(340, 120, 251, 31));
        userName_textBox->setFrame(true);
        userName_textBox->setEchoMode(QLineEdit::Normal);
        userName_textBox->setClearButtonEnabled(true);
        city_label = new QLabel(sign_up);
        city_label->setObjectName("city_label");
        city_label->setGeometry(QRect(340, 370, 111, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        city_label->setPalette(palette3);
        city_label->setFont(font);
        email_label = new QLabel(sign_up);
        email_label->setObjectName("email_label");
        email_label->setGeometry(QRect(340, 180, 111, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        email_label->setPalette(palette4);
        email_label->setFont(font);
        city_textBox = new QLineEdit(sign_up);
        city_textBox->setObjectName("city_textBox");
        city_textBox->setGeometry(QRect(340, 400, 251, 31));
        city_textBox->setClearButtonEnabled(true);
        email_textBox = new QLineEdit(sign_up);
        email_textBox->setObjectName("email_textBox");
        email_textBox->setGeometry(QRect(340, 210, 251, 31));
        email_textBox->setFrame(true);
        email_textBox->setEchoMode(QLineEdit::Normal);
        email_textBox->setClearButtonEnabled(true);
        age_label = new QLabel(sign_up);
        age_label->setObjectName("age_label");
        age_label->setGeometry(QRect(340, 270, 111, 31));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        age_label->setPalette(palette5);
        age_label->setFont(font);
        age_textBox = new QLineEdit(sign_up);
        age_textBox->setObjectName("age_textBox");
        age_textBox->setGeometry(QRect(340, 300, 251, 31));
        age_textBox->setFrame(true);
        age_textBox->setEchoMode(QLineEdit::Normal);
        age_textBox->setClearButtonEnabled(true);
        back_button = new QPushButton(sign_up);
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
        back_label = new QLabel(sign_up);
        back_label->setObjectName("back_label");
        back_label->setGeometry(QRect(20, 680, 31, 31));
        pushButton = new QPushButton(sign_up);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 70, 411, 561));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgba(255, 90, 130, 0.15);\n"
"    border-radius: 20px;\n"
"}\n"
""));
        sign_up2_button = new QPushButton(sign_up);
        sign_up2_button->setObjectName("sign_up2_button");
        sign_up2_button->setGeometry(QRect(380, 560, 171, 41));
        QPalette palette6;
        QBrush brush2(QColor(255, 170, 190, 178));
        brush2.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush2);
        QBrush brush3(QColor(67, 27, 55, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        sign_up2_button->setPalette(palette6);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font1.setPointSize(14);
        sign_up2_button->setFont(font1);
        sign_up2_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label = new QLabel(sign_up);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 30, 91, 31));
        QPalette palette7;
        QBrush brush4(QColor(115, 211, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        label->setPalette(palette7);
        label->setFont(font);
        logo_label = new QLabel(sign_up);
        logo_label->setObjectName("logo_label");
        logo_label->setGeometry(QRect(30, 30, 31, 31));
        logo_label->setStyleSheet(QString::fromUtf8("image: url(:/material/photos/logo.png);"));
        label_bg->raise();
        pushButton->raise();
        password_label->raise();
        username_label->raise();
        password_textBox->raise();
        userName_textBox->raise();
        city_label->raise();
        email_label->raise();
        city_textBox->raise();
        email_textBox->raise();
        age_label->raise();
        age_textBox->raise();
        back_label->raise();
        sign_up2_button->raise();
        label->raise();
        logo_label->raise();
        back_button->raise();

        retranslateUi(sign_up);

        QMetaObject::connectSlotsByName(sign_up);
    } // setupUi

    void retranslateUi(QWidget *sign_up)
    {
        sign_up->setWindowTitle(QCoreApplication::translate("sign_up", "Form", nullptr));
        label_bg->setText(QString());
        password_label->setText(QCoreApplication::translate("sign_up", "Passsword", nullptr));
        username_label->setText(QCoreApplication::translate("sign_up", "Username", nullptr));
        password_textBox->setText(QString());
        password_textBox->setPlaceholderText(QCoreApplication::translate("sign_up", "Enter Password", nullptr));
        userName_textBox->setInputMask(QString());
        userName_textBox->setText(QString());
        userName_textBox->setPlaceholderText(QCoreApplication::translate("sign_up", "Enter Username", nullptr));
        city_label->setText(QCoreApplication::translate("sign_up", "City", nullptr));
        email_label->setText(QCoreApplication::translate("sign_up", "Email", nullptr));
        city_textBox->setText(QString());
        city_textBox->setPlaceholderText(QCoreApplication::translate("sign_up", "Enter city", nullptr));
        email_textBox->setInputMask(QString());
        email_textBox->setText(QString());
        email_textBox->setPlaceholderText(QCoreApplication::translate("sign_up", "Enter Email", nullptr));
        age_label->setText(QCoreApplication::translate("sign_up", "Age", nullptr));
        age_textBox->setInputMask(QString());
        age_textBox->setText(QString());
        age_textBox->setPlaceholderText(QCoreApplication::translate("sign_up", "Enter Age", nullptr));
        back_button->setText(QString());
        back_label->setText(QString());
        pushButton->setText(QString());
        sign_up2_button->setText(QCoreApplication::translate("sign_up", "Sign Up", nullptr));
        label->setText(QCoreApplication::translate("sign_up", "Ma7fazty", nullptr));
        logo_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class sign_up: public Ui_sign_up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_H
