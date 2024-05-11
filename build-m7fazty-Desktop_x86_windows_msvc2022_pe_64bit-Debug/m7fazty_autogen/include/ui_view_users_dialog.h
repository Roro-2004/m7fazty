/********************************************************************************
** Form generated from reading UI file 'view_users_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_USERS_DIALOG_H
#define UI_VIEW_USERS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_view_users_dialog
{
public:
    QLabel *label_3;
    QListWidget *listWidget;
    QComboBox *comboBox;
    QLabel *label_20;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *label_17;
    QLabel *label_19;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_9;
    QLabel *label_15;
    QLabel *label_10;

    void setupUi(QDialog *view_users_dialog)
    {
        if (view_users_dialog->objectName().isEmpty())
            view_users_dialog->setObjectName("view_users_dialog");
        view_users_dialog->resize(612, 410);
        QFont font;
        font.setPointSize(11);
        view_users_dialog->setFont(font);
        label_3 = new QLabel(view_users_dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 150, 201, 16));
        QFont font1;
        font1.setPointSize(14);
        label_3->setFont(font1);
        listWidget = new QListWidget(view_users_dialog);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 180, 256, 192));
        comboBox = new QComboBox(view_users_dialog);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(30, 70, 181, 22));
        label_20 = new QLabel(view_users_dialog);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(40, 20, 131, 31));
        QFont font2;
        font2.setPointSize(16);
        label_20->setFont(font2);
        label_4 = new QLabel(view_users_dialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(400, 40, 81, 20));
        label_4->setFont(font);
        label_5 = new QLabel(view_users_dialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(400, 70, 81, 20));
        label = new QLabel(view_users_dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(264, 44, 91, 21));
        QFont font3;
        font3.setPointSize(12);
        label->setFont(font3);
        label_2 = new QLabel(view_users_dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(264, 71, 121, 21));
        label_2->setFont(font3);
        label_6 = new QLabel(view_users_dialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(318, 184, 56, 20));
        label_7 = new QLabel(view_users_dialog);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(320, 210, 58, 20));
        label_8 = new QLabel(view_users_dialog);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(320, 236, 47, 20));
        label_12 = new QLabel(view_users_dialog);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(320, 262, 55, 20));
        label_14 = new QLabel(view_users_dialog);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(320, 288, 35, 20));
        label_16 = new QLabel(view_users_dialog);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(320, 314, 36, 20));
        label_18 = new QLabel(view_users_dialog);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(320, 340, 43, 20));
        label_17 = new QLabel(view_users_dialog);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(400, 314, 91, 20));
        label_19 = new QLabel(view_users_dialog);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(400, 340, 111, 20));
        label_11 = new QLabel(view_users_dialog);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(400, 236, 101, 20));
        label_13 = new QLabel(view_users_dialog);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(400, 262, 121, 20));
        label_9 = new QLabel(view_users_dialog);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(400, 184, 131, 20));
        label_15 = new QLabel(view_users_dialog);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(400, 288, 101, 20));
        label_10 = new QLabel(view_users_dialog);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(400, 210, 121, 20));

        retranslateUi(view_users_dialog);

        QMetaObject::connectSlotsByName(view_users_dialog);
    } // setupUi

    void retranslateUi(QDialog *view_users_dialog)
    {
        view_users_dialog->setWindowTitle(QCoreApplication::translate("view_users_dialog", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("view_users_dialog", "Choose transaction ID:", nullptr));
        comboBox->setPlaceholderText(QString());
        label_20->setText(QCoreApplication::translate("view_users_dialog", "Choose User :", nullptr));
        label_4->setText(QCoreApplication::translate("view_users_dialog", "text", nullptr));
        label_5->setText(QCoreApplication::translate("view_users_dialog", "text", nullptr));
        label->setText(QCoreApplication::translate("view_users_dialog", "User's name:", nullptr));
        label_2->setText(QCoreApplication::translate("view_users_dialog", "current balance:", nullptr));
        label_6->setText(QCoreApplication::translate("view_users_dialog", "trans id :", nullptr));
        label_7->setText(QCoreApplication::translate("view_users_dialog", "amount :", nullptr));
        label_8->setText(QCoreApplication::translate("view_users_dialog", "sender:", nullptr));
        label_12->setText(QCoreApplication::translate("view_users_dialog", "receiver:", nullptr));
        label_14->setText(QCoreApplication::translate("view_users_dialog", "Date:", nullptr));
        label_16->setText(QCoreApplication::translate("view_users_dialog", "Time:", nullptr));
        label_18->setText(QCoreApplication::translate("view_users_dialog", "Status:", nullptr));
        label_17->setText(QCoreApplication::translate("view_users_dialog", "TextLabel", nullptr));
        label_19->setText(QCoreApplication::translate("view_users_dialog", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("view_users_dialog", "text", nullptr));
        label_13->setText(QCoreApplication::translate("view_users_dialog", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("view_users_dialog", "text", nullptr));
        label_15->setText(QCoreApplication::translate("view_users_dialog", "TextLabel", nullptr));
        label_10->setText(QCoreApplication::translate("view_users_dialog", "text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class view_users_dialog: public Ui_view_users_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_USERS_DIALOG_H
