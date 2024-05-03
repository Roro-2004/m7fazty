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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_view_users_dialog
{
public:
    QLabel *label_3;
    QListWidget *listWidget;
    QComboBox *comboBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_18;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_19;
    QLabel *label_20;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLabel *label_5;

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
        layoutWidget = new QWidget(view_users_dialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(300, 180, 133, 180));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");

        verticalLayout->addWidget(label_12);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName("label_14");

        verticalLayout->addWidget(label_14);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName("label_16");

        verticalLayout->addWidget(label_16);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName("label_18");

        verticalLayout->addWidget(label_18);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        verticalLayout_2->addWidget(label_9);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");

        verticalLayout_2->addWidget(label_10);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");

        verticalLayout_2->addWidget(label_11);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");

        verticalLayout_2->addWidget(label_13);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName("label_15");

        verticalLayout_2->addWidget(label_15);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName("label_17");

        verticalLayout_2->addWidget(label_17);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName("label_19");

        verticalLayout_2->addWidget(label_19);


        horizontalLayout->addLayout(verticalLayout_2);

        label_20 = new QLabel(view_users_dialog);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(40, 20, 131, 31));
        QFont font2;
        font2.setPointSize(16);
        label_20->setFont(font2);
        widget = new QWidget(view_users_dialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(270, 40, 147, 52));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font3;
        font3.setPointSize(12);
        label->setFont(font3);

        verticalLayout_3->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font3);

        verticalLayout_3->addWidget(label_2);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout_4->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        verticalLayout_4->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout_4);


        retranslateUi(view_users_dialog);

        QMetaObject::connectSlotsByName(view_users_dialog);
    } // setupUi

    void retranslateUi(QDialog *view_users_dialog)
    {
        view_users_dialog->setWindowTitle(QCoreApplication::translate("view_users_dialog", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("view_users_dialog", "Choose transaction ID:", nullptr));
        comboBox->setPlaceholderText(QString());
        label_6->setText(QCoreApplication::translate("view_users_dialog", "trans id :", nullptr));
        label_7->setText(QCoreApplication::translate("view_users_dialog", "amount :", nullptr));
        label_8->setText(QCoreApplication::translate("view_users_dialog", "sender:", nullptr));
        label_12->setText(QCoreApplication::translate("view_users_dialog", "receiver:", nullptr));
        label_14->setText(QCoreApplication::translate("view_users_dialog", "Date:", nullptr));
        label_16->setText(QCoreApplication::translate("view_users_dialog", "Time:", nullptr));
        label_18->setText(QCoreApplication::translate("view_users_dialog", "Status:", nullptr));
        label_9->setText(QCoreApplication::translate("view_users_dialog", "text", nullptr));
        label_10->setText(QCoreApplication::translate("view_users_dialog", "text", nullptr));
        label_11->setText(QCoreApplication::translate("view_users_dialog", "text", nullptr));
        label_13->setText(QCoreApplication::translate("view_users_dialog", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("view_users_dialog", "TextLabel", nullptr));
        label_17->setText(QCoreApplication::translate("view_users_dialog", "TextLabel", nullptr));
        label_19->setText(QCoreApplication::translate("view_users_dialog", "TextLabel", nullptr));
        label_20->setText(QCoreApplication::translate("view_users_dialog", "Choose User :", nullptr));
        label->setText(QCoreApplication::translate("view_users_dialog", "User's name:", nullptr));
        label_2->setText(QCoreApplication::translate("view_users_dialog", "current balance:", nullptr));
        label_4->setText(QCoreApplication::translate("view_users_dialog", "text", nullptr));
        label_5->setText(QCoreApplication::translate("view_users_dialog", "text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class view_users_dialog: public Ui_view_users_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_USERS_DIALOG_H
