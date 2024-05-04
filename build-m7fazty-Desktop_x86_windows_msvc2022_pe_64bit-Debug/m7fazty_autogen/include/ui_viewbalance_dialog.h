/********************************************************************************
** Form generated from reading UI file 'viewbalance_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWBALANCE_DIALOG_H
#define UI_VIEWBALANCE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_viewBalance_dialog
{
public:
    QLabel *label_bg;

    void setupUi(QDialog *viewBalance_dialog)
    {
        if (viewBalance_dialog->objectName().isEmpty())
            viewBalance_dialog->setObjectName("viewBalance_dialog");
        viewBalance_dialog->resize(475, 410);
        label_bg = new QLabel(viewBalance_dialog);
        label_bg->setObjectName("label_bg");
        label_bg->setGeometry(QRect(0, 0, 475, 412));
        label_bg->setStyleSheet(QString::fromUtf8("background-image: url(:/material/photos/dialog_bg.png);"));

        retranslateUi(viewBalance_dialog);

        QMetaObject::connectSlotsByName(viewBalance_dialog);
    } // setupUi

    void retranslateUi(QDialog *viewBalance_dialog)
    {
        viewBalance_dialog->setWindowTitle(QCoreApplication::translate("viewBalance_dialog", "Dialog", nullptr));
        label_bg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class viewBalance_dialog: public Ui_viewBalance_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWBALANCE_DIALOG_H
