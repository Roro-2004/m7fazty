/********************************************************************************
** Form generated from reading UI file 'viewtranshistory_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWTRANSHISTORY_DIALOG_H
#define UI_VIEWTRANSHISTORY_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_viewTransHistory_dialog
{
public:
    QLabel *label_bg;
    QTableWidget *history_table;
    QComboBox *month_cb;

    void setupUi(QDialog *viewTransHistory_dialog)
    {
        if (viewTransHistory_dialog->objectName().isEmpty())
            viewTransHistory_dialog->setObjectName("viewTransHistory_dialog");
        viewTransHistory_dialog->resize(757, 512);
        label_bg = new QLabel(viewTransHistory_dialog);
        label_bg->setObjectName("label_bg");
        label_bg->setGeometry(QRect(0, 0, 759, 512));
        label_bg->setStyleSheet(QString::fromUtf8("background-image: url(:/material/photos/dialog_bg.png);"));
        history_table = new QTableWidget(viewTransHistory_dialog);
        if (history_table->columnCount() < 7)
            history_table->setColumnCount(7);
        history_table->setObjectName("history_table");
        history_table->setGeometry(QRect(20, 70, 711, 431));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 90, 130, 25));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush3(QColor(201, 183, 215, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        QBrush brush4(QColor(37, 0, 42, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush4);
        QBrush brush5(QColor(255, 255, 255, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        history_table->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font.setBold(false);
        history_table->setFont(font);
        history_table->setStyleSheet(QString::fromUtf8("QHeaderView {\n"
"    background-color: rgba(255, 170, 190, 0.7);\n"
"    color: black;\n"
"    font: 10pt \"Arial Rounded MT Bold\";\n"
"    text-align: center; /* Align header text horizontally */\n"
"\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgba(255, 90, 130, 0.3);\n"
"    text-align: center; /* Align header text horizontally */\n"
"\n"
"}\n"
"\n"
"QTableView {\n"
"    background-color: rgba(255, 90, 130, 0.1);\n"
"    color: white;\n"
"    font-size: 12px;\n"
"    font-weight: normal;\n"
"}\n"
"\n"
"\n"
"\n"
"QTableView::item {\n"
"    text-align: center;\n"
"}\n"
"\n"
"\n"
"\n"
"QTableView QTableCornerButton::section {\n"
"    background-color:: transparent;\n"
"}\n"
"\n"
""));
        history_table->setFrameShape(QFrame::StyledPanel);
        history_table->setFrameShadow(QFrame::Sunken);
        history_table->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        history_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        history_table->setSelectionBehavior(QAbstractItemView::SelectItems);
        history_table->setTextElideMode(Qt::ElideRight);
        history_table->setGridStyle(Qt::SolidLine);
        history_table->setCornerButtonEnabled(false);
        history_table->setRowCount(0);
        history_table->setColumnCount(7);
        history_table->horizontalHeader()->setCascadingSectionResizes(false);
        history_table->horizontalHeader()->setHighlightSections(true);
        history_table->verticalHeader()->setVisible(false);
        month_cb = new QComboBox(viewTransHistory_dialog);
        month_cb->addItem(QString());
        month_cb->addItem(QString());
        month_cb->addItem(QString());
        month_cb->addItem(QString());
        month_cb->addItem(QString());
        month_cb->addItem(QString());
        month_cb->addItem(QString());
        month_cb->addItem(QString());
        month_cb->addItem(QString());
        month_cb->addItem(QString());
        month_cb->addItem(QString());
        month_cb->addItem(QString());
        month_cb->setObjectName("month_cb");
        month_cb->setGeometry(QRect(20, 20, 131, 28));
        month_cb->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: rgba(255, 170, 190, 0.9); /* Background color */\n"
"    border-radius: 5px; /* Border radius */\n"
"    border: 1px solid rgb(0, 0, 10); /* Border */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    width: 20px;\n"
"    border: none;\n"
"    border-radius: 5px; /* Border radius */\n"
"    background-color: rgba(255, 170, 190, 0.7);\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"	image: url(:/material/photos/arrow.png);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgba(255, 170, 190, 0.7); /* Background color of the drop-down list */\n"
"    selection-background-color: rgba(255, 150, 200, 0.7); /* Background color of selected item */\n"
"}\n"
"\n"
"QComboBox:pressed {\n"
"    background-color: rgba(255, 150, 200, 0.7); /* Semi-transparent background color when pressed */\n"
"    border: 1px solid black; /* You can customize the border for the pressed state if needed */\n"
"}\n"
""));
        month_cb->setMaxVisibleItems(12);

        retranslateUi(viewTransHistory_dialog);

        month_cb->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(viewTransHistory_dialog);
    } // setupUi

    void retranslateUi(QDialog *viewTransHistory_dialog)
    {
        viewTransHistory_dialog->setWindowTitle(QCoreApplication::translate("viewTransHistory_dialog", "Dialog", nullptr));
        label_bg->setText(QString());
        month_cb->setItemText(0, QCoreApplication::translate("viewTransHistory_dialog", "January", nullptr));
        month_cb->setItemText(1, QCoreApplication::translate("viewTransHistory_dialog", "February", nullptr));
        month_cb->setItemText(2, QCoreApplication::translate("viewTransHistory_dialog", "March", nullptr));
        month_cb->setItemText(3, QCoreApplication::translate("viewTransHistory_dialog", "April", nullptr));
        month_cb->setItemText(4, QCoreApplication::translate("viewTransHistory_dialog", "May", nullptr));
        month_cb->setItemText(5, QCoreApplication::translate("viewTransHistory_dialog", "June", nullptr));
        month_cb->setItemText(6, QCoreApplication::translate("viewTransHistory_dialog", "July", nullptr));
        month_cb->setItemText(7, QCoreApplication::translate("viewTransHistory_dialog", "August", nullptr));
        month_cb->setItemText(8, QCoreApplication::translate("viewTransHistory_dialog", "Septemper", nullptr));
        month_cb->setItemText(9, QCoreApplication::translate("viewTransHistory_dialog", "October", nullptr));
        month_cb->setItemText(10, QCoreApplication::translate("viewTransHistory_dialog", "November", nullptr));
        month_cb->setItemText(11, QCoreApplication::translate("viewTransHistory_dialog", "December", nullptr));

        month_cb->setCurrentText(QString());
        month_cb->setPlaceholderText(QCoreApplication::translate("viewTransHistory_dialog", "Choose Month", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewTransHistory_dialog: public Ui_viewTransHistory_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWTRANSHISTORY_DIALOG_H
