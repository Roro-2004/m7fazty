/********************************************************************************
** Form generated from reading UI file 'adjust_balance_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADJUST_BALANCE_DIALOG_H
#define UI_ADJUST_BALANCE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_adjust_balance_dialog
{
public:
    QLabel *label_bg;

    void setupUi(QDialog *adjust_balance_dialog)
    {
        if (adjust_balance_dialog->objectName().isEmpty())
            adjust_balance_dialog->setObjectName("adjust_balance_dialog");
        adjust_balance_dialog->resize(475, 410);
        label_bg = new QLabel(adjust_balance_dialog);
        label_bg->setObjectName("label_bg");
        label_bg->setGeometry(QRect(0, 0, 475, 410));
        label_bg->setStyleSheet(QString::fromUtf8("background-image: url(:/material/photos/dialog_bg.png);"));

        retranslateUi(adjust_balance_dialog);

        QMetaObject::connectSlotsByName(adjust_balance_dialog);
    } // setupUi

    void retranslateUi(QDialog *adjust_balance_dialog)
    {
        adjust_balance_dialog->setWindowTitle(QCoreApplication::translate("adjust_balance_dialog", "Dialog", nullptr));
        label_bg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adjust_balance_dialog: public Ui_adjust_balance_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADJUST_BALANCE_DIALOG_H
