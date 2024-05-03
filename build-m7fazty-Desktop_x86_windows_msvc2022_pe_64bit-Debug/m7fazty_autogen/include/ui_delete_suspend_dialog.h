/********************************************************************************
** Form generated from reading UI file 'delete_suspend_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_SUSPEND_DIALOG_H
#define UI_DELETE_SUSPEND_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_delete_suspend_dialog
{
public:
    QLabel *label_bg;

    void setupUi(QDialog *delete_suspend_dialog)
    {
        if (delete_suspend_dialog->objectName().isEmpty())
            delete_suspend_dialog->setObjectName("delete_suspend_dialog");
        delete_suspend_dialog->resize(475, 410);
        label_bg = new QLabel(delete_suspend_dialog);
        label_bg->setObjectName("label_bg");
        label_bg->setGeometry(QRect(0, 0, 475, 410));
        label_bg->setStyleSheet(QString::fromUtf8("background-image: url(:/material/photos/dialog_bg.png);"));

        retranslateUi(delete_suspend_dialog);

        QMetaObject::connectSlotsByName(delete_suspend_dialog);
    } // setupUi

    void retranslateUi(QDialog *delete_suspend_dialog)
    {
        delete_suspend_dialog->setWindowTitle(QCoreApplication::translate("delete_suspend_dialog", "Dialog", nullptr));
        label_bg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class delete_suspend_dialog: public Ui_delete_suspend_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_SUSPEND_DIALOG_H
