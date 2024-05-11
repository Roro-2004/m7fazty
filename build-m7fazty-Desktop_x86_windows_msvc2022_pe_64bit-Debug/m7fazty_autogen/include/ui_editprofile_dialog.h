/********************************************************************************
** Form generated from reading UI file 'editprofile_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILE_DIALOG_H
#define UI_EDITPROFILE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_editProfile_dialog
{
public:
    QLabel *label_bg;

    void setupUi(QDialog *editProfile_dialog)
    {
        if (editProfile_dialog->objectName().isEmpty())
            editProfile_dialog->setObjectName("editProfile_dialog");
        editProfile_dialog->resize(475, 410);
        label_bg = new QLabel(editProfile_dialog);
        label_bg->setObjectName("label_bg");
        label_bg->setGeometry(QRect(0, 0, 475, 412));
        label_bg->setStyleSheet(QString::fromUtf8("background-image: url(:/material/photos/dialog_bg.png);"));

        retranslateUi(editProfile_dialog);

        QMetaObject::connectSlotsByName(editProfile_dialog);
    } // setupUi

    void retranslateUi(QDialog *editProfile_dialog)
    {
        editProfile_dialog->setWindowTitle(QCoreApplication::translate("editProfile_dialog", "Dialog", nullptr));
        label_bg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class editProfile_dialog: public Ui_editProfile_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILE_DIALOG_H
