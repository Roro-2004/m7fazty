/********************************************************************************
** Form generated from reading UI file 'view_trans_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_TRANS_DIALOG_H
#define UI_VIEW_TRANS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_view_trans_dialog
{
public:
    QLabel *label_bg;

    void setupUi(QDialog *view_trans_dialog)
    {
        if (view_trans_dialog->objectName().isEmpty())
            view_trans_dialog->setObjectName("view_trans_dialog");
        view_trans_dialog->resize(475, 410);
        label_bg = new QLabel(view_trans_dialog);
        label_bg->setObjectName("label_bg");
        label_bg->setGeometry(QRect(0, 0, 475, 410));
        label_bg->setStyleSheet(QString::fromUtf8("background-image: url(:/material/photos/dialog_bg.png);"));

        retranslateUi(view_trans_dialog);

        QMetaObject::connectSlotsByName(view_trans_dialog);
    } // setupUi

    void retranslateUi(QDialog *view_trans_dialog)
    {
        view_trans_dialog->setWindowTitle(QCoreApplication::translate("view_trans_dialog", "Dialog", nullptr));
        label_bg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class view_trans_dialog: public Ui_view_trans_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_TRANS_DIALOG_H
