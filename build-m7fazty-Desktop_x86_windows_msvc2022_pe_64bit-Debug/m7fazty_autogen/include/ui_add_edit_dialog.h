/********************************************************************************
** Form generated from reading UI file 'add_edit_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_EDIT_DIALOG_H
#define UI_ADD_EDIT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_add_edit_dialog
{
public:
    QLabel *label_bg;

    void setupUi(QDialog *add_edit_dialog)
    {
        if (add_edit_dialog->objectName().isEmpty())
            add_edit_dialog->setObjectName("add_edit_dialog");
        add_edit_dialog->resize(475, 410);
        label_bg = new QLabel(add_edit_dialog);
        label_bg->setObjectName("label_bg");
        label_bg->setGeometry(QRect(0, 0, 475, 410));
        label_bg->setStyleSheet(QString::fromUtf8("background-image: url(:/material/photos/dialog_bg.png);"));

        retranslateUi(add_edit_dialog);

        QMetaObject::connectSlotsByName(add_edit_dialog);
    } // setupUi

    void retranslateUi(QDialog *add_edit_dialog)
    {
        add_edit_dialog->setWindowTitle(QCoreApplication::translate("add_edit_dialog", "Dialog", nullptr));
        label_bg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class add_edit_dialog: public Ui_add_edit_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_EDIT_DIALOG_H
