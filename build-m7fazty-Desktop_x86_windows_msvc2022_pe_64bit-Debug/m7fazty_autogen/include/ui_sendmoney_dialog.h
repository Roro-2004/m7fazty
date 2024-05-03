/********************************************************************************
** Form generated from reading UI file 'sendmoney_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMONEY_DIALOG_H
#define UI_SENDMONEY_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_sendMoney_dialog
{
public:
    QLineEdit *amount_textBox;
    QLineEdit *userName_textBox;
    QLabel *label_bg;
    QLabel *amount_label;
    QLabel *username_label;
    QPushButton *send_Button;
    QPushButton *pushButton;

    void setupUi(QDialog *sendMoney_dialog)
    {
        if (sendMoney_dialog->objectName().isEmpty())
            sendMoney_dialog->setObjectName("sendMoney_dialog");
        sendMoney_dialog->resize(475, 410);
        amount_textBox = new QLineEdit(sendMoney_dialog);
        amount_textBox->setObjectName("amount_textBox");
        amount_textBox->setGeometry(QRect(110, 200, 251, 31));
        amount_textBox->setClearButtonEnabled(true);
        userName_textBox = new QLineEdit(sendMoney_dialog);
        userName_textBox->setObjectName("userName_textBox");
        userName_textBox->setGeometry(QRect(110, 110, 251, 31));
        userName_textBox->setFrame(true);
        userName_textBox->setEchoMode(QLineEdit::Normal);
        userName_textBox->setClearButtonEnabled(true);
        label_bg = new QLabel(sendMoney_dialog);
        label_bg->setObjectName("label_bg");
        label_bg->setGeometry(QRect(0, 0, 475, 412));
        label_bg->setStyleSheet(QString::fromUtf8("background-image: url(:/material/photos/dialog_bg.png);"));
        amount_label = new QLabel(sendMoney_dialog);
        amount_label->setObjectName("amount_label");
        amount_label->setGeometry(QRect(110, 170, 111, 31));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        amount_label->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font.setPointSize(12);
        amount_label->setFont(font);
        username_label = new QLabel(sendMoney_dialog);
        username_label->setObjectName("username_label");
        username_label->setGeometry(QRect(110, 80, 111, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        username_label->setPalette(palette1);
        username_label->setFont(font);
        send_Button = new QPushButton(sendMoney_dialog);
        send_Button->setObjectName("send_Button");
        send_Button->setGeometry(QRect(160, 300, 141, 31));
        QPalette palette2;
        QBrush brush1(QColor(255, 170, 190, 178));
        brush1.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(67, 27, 55, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        send_Button->setPalette(palette2);
        send_Button->setFont(font);
        send_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton = new QPushButton(sendMoney_dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 20, 431, 371));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgba(255, 90, 130, 0.15);\n"
"    border-radius: 15px;\n"
"}\n"
""));
        label_bg->raise();
        pushButton->raise();
        amount_textBox->raise();
        userName_textBox->raise();
        amount_label->raise();
        username_label->raise();
        send_Button->raise();

        retranslateUi(sendMoney_dialog);

        QMetaObject::connectSlotsByName(sendMoney_dialog);
    } // setupUi

    void retranslateUi(QDialog *sendMoney_dialog)
    {
        sendMoney_dialog->setWindowTitle(QCoreApplication::translate("sendMoney_dialog", "Dialog", nullptr));
        amount_textBox->setText(QString());
        amount_textBox->setPlaceholderText(QCoreApplication::translate("sendMoney_dialog", "Enter Amount", nullptr));
        userName_textBox->setInputMask(QString());
        userName_textBox->setText(QString());
        userName_textBox->setPlaceholderText(QCoreApplication::translate("sendMoney_dialog", "Enter Username", nullptr));
        label_bg->setText(QString());
        amount_label->setText(QCoreApplication::translate("sendMoney_dialog", "Amount", nullptr));
        username_label->setText(QCoreApplication::translate("sendMoney_dialog", "Username", nullptr));
        send_Button->setText(QCoreApplication::translate("sendMoney_dialog", "Send", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class sendMoney_dialog: public Ui_sendMoney_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMONEY_DIALOG_H
