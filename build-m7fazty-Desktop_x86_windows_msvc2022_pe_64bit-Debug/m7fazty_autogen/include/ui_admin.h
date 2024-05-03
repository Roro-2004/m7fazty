/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QPushButton *close_list_Button;
    QListView *user_listView;
    QPushButton *menu_Button;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *viewUsers_Button;
    QFrame *line;
    QPushButton *viewTransictions_Button;
    QFrame *line_2;
    QPushButton *add_edit_Button;
    QFrame *line_3;
    QPushButton *delete_suspend_Button;
    QFrame *line_4;
    QPushButton *adjustBalance_Button;
    QFrame *line_5;
    QPushButton *logout_Button;
    QLabel *label_bg;
    QLabel *menu_label;

    void setupUi(QWidget *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(971, 724);
        close_list_Button = new QPushButton(admin);
        close_list_Button->setObjectName("close_list_Button");
        close_list_Button->setGeometry(QRect(360, 0, 611, 731));
        close_list_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: rgba(255, 255, 255, 0); /* Fully transparent background */\n"
"\n"
"}\n"
""));
        user_listView = new QListView(admin);
        user_listView->setObjectName("user_listView");
        user_listView->setGeometry(QRect(-20, 10, 371, 701));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 90, 130, 38));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        user_listView->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font.setPointSize(20);
        user_listView->setFont(font);
        user_listView->setContextMenuPolicy(Qt::DefaultContextMenu);
        user_listView->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 90, 130, 0.15);\n"
"border-radius: 15px;"));
        user_listView->setDragDropOverwriteMode(false);
        user_listView->setSelectionMode(QAbstractItemView::ContiguousSelection);
        user_listView->setTextElideMode(Qt::ElideRight);
        user_listView->setResizeMode(QListView::Adjust);
        menu_Button = new QPushButton(admin);
        menu_Button->setObjectName("menu_Button");
        menu_Button->setGeometry(QRect(20, 20, 41, 41));
        menu_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	image: url(:/material/photos/menu.png);\n"
"	color: rgb(226, 226, 255);\n"
"   \n"
" background-color: rgba(255, 255, 255, 0); /* Fully transparent background */\n"
"text-align: left;\n"
"    border-radius: 20px;\n"
"    border: 1px solid rgba(0, 0, 0,0);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2); /* Semi-transparent background color when hovered */\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3); \n"
"\n"
"}"));
        layoutWidget = new QWidget(admin);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 50, 321, 601));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 10, 0, 0);
        viewUsers_Button = new QPushButton(layoutWidget);
        viewUsers_Button->setObjectName("viewUsers_Button");
        QPalette palette1;
        QBrush brush5(QColor(226, 226, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        QBrush brush6(QColor(255, 255, 255, 0));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush6);
        QBrush brush7(QColor(226, 226, 255, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        viewUsers_Button->setPalette(palette1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font1.setPointSize(18);
        viewUsers_Button->setFont(font1);
        viewUsers_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(226, 226, 255);\n"
"   \n"
" background-color: rgba(255, 255, 255, 0); /* Fully transparent background */\n"
"text-align: left;\n"
"    border-radius: 13px;\n"
"    border: 1px solid rgba(0, 0, 0,0);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 170, 190, 0.09); /* Semi-transparent background color when hovered */\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 150, 200, 0.2); \n"
"\n"
"}"));

        verticalLayout->addWidget(viewUsers_Button, 0, Qt::AlignLeft);

        line = new QFrame(layoutWidget);
        line->setObjectName("line");
        QFont font2;
        font2.setWeight(QFont::Thin);
        line->setFont(font2);
        line->setFrameShadow(QFrame::Raised);
        line->setLineWidth(1);
        line->setFrameShape(QFrame::Shape::HLine);

        verticalLayout->addWidget(line);

        viewTransictions_Button = new QPushButton(layoutWidget);
        viewTransictions_Button->setObjectName("viewTransictions_Button");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(viewTransictions_Button->sizePolicy().hasHeightForWidth());
        viewTransictions_Button->setSizePolicy(sizePolicy);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        viewTransictions_Button->setPalette(palette2);
        viewTransictions_Button->setFont(font1);
        viewTransictions_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(226, 226, 255);\n"
"   \n"
" background-color: rgba(255, 255, 255, 0); /* Fully transparent background */\n"
"text-align: left;\n"
"    border-radius: 13px;\n"
"    border: 1px solid rgba(0, 0, 0,0);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 170, 190, 0.09); /* Semi-transparent background color when hovered */\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 150, 200, 0.2); \n"
"\n"
"}"));

        verticalLayout->addWidget(viewTransictions_Button);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName("line_2");
        line_2->setFont(font2);
        line_2->setFrameShadow(QFrame::Raised);
        line_2->setLineWidth(1);
        line_2->setFrameShape(QFrame::Shape::HLine);

        verticalLayout->addWidget(line_2);

        add_edit_Button = new QPushButton(layoutWidget);
        add_edit_Button->setObjectName("add_edit_Button");
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        add_edit_Button->setPalette(palette3);
        add_edit_Button->setFont(font1);
        add_edit_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(226, 226, 255);\n"
"   \n"
" background-color: rgba(255, 255, 255, 0); /* Fully transparent background */\n"
"text-align: left;\n"
"    border-radius: 13px;\n"
"    border: 1px solid rgba(0, 0, 0,0);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 170, 190, 0.09); /* Semi-transparent background color when hovered */\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 150, 200, 0.2); \n"
"\n"
"}"));

        verticalLayout->addWidget(add_edit_Button);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName("line_3");
        line_3->setFont(font2);
        line_3->setFrameShadow(QFrame::Raised);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::Shape::HLine);

        verticalLayout->addWidget(line_3);

        delete_suspend_Button = new QPushButton(layoutWidget);
        delete_suspend_Button->setObjectName("delete_suspend_Button");
        sizePolicy.setHeightForWidth(delete_suspend_Button->sizePolicy().hasHeightForWidth());
        delete_suspend_Button->setSizePolicy(sizePolicy);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        delete_suspend_Button->setPalette(palette4);
        delete_suspend_Button->setFont(font1);
        delete_suspend_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(226, 226, 255);\n"
"   \n"
" background-color: rgba(255, 255, 255, 0); /* Fully transparent background */\n"
"text-align: left;\n"
"    border-radius: 13px;\n"
"    border: 1px solid rgba(0, 0, 0,0);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 170, 190, 0.09); /* Semi-transparent background color when hovered */\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 150, 200, 0.2); \n"
"\n"
"}"));

        verticalLayout->addWidget(delete_suspend_Button);

        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName("line_4");
        line_4->setFont(font2);
        line_4->setFrameShadow(QFrame::Raised);
        line_4->setFrameShape(QFrame::Shape::HLine);

        verticalLayout->addWidget(line_4);

        adjustBalance_Button = new QPushButton(layoutWidget);
        adjustBalance_Button->setObjectName("adjustBalance_Button");
        sizePolicy.setHeightForWidth(adjustBalance_Button->sizePolicy().hasHeightForWidth());
        adjustBalance_Button->setSizePolicy(sizePolicy);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        adjustBalance_Button->setPalette(palette5);
        adjustBalance_Button->setFont(font1);
        adjustBalance_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(226, 226, 255);\n"
"   \n"
" background-color: rgba(255, 255, 255, 0); /* Fully transparent background */\n"
"text-align: left;\n"
"    border-radius: 13px;\n"
"    border: 1px solid rgba(0, 0, 0,0);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 170, 190, 0.09); /* Semi-transparent background color when hovered */\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 150, 200, 0.2); \n"
"\n"
"}"));

        verticalLayout->addWidget(adjustBalance_Button, 0, Qt::AlignLeft);

        line_5 = new QFrame(layoutWidget);
        line_5->setObjectName("line_5");
        line_5->setFont(font2);
        line_5->setFrameShadow(QFrame::Raised);
        line_5->setFrameShape(QFrame::Shape::HLine);

        verticalLayout->addWidget(line_5);

        logout_Button = new QPushButton(layoutWidget);
        logout_Button->setObjectName("logout_Button");
        sizePolicy.setHeightForWidth(logout_Button->sizePolicy().hasHeightForWidth());
        logout_Button->setSizePolicy(sizePolicy);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        logout_Button->setPalette(palette6);
        logout_Button->setFont(font1);
        logout_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(226, 226, 255);\n"
"   \n"
" background-color: rgba(255, 255, 255, 0); /* Fully transparent background */\n"
"text-align: left;\n"
"    border-radius: 13px;\n"
"    border: 1px solid rgba(0, 0, 0,0);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 170, 190, 0.09); /* Semi-transparent background color when hovered */\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 150, 200, 0.2); \n"
"\n"
"}"));

        verticalLayout->addWidget(logout_Button, 0, Qt::AlignLeft);

        line_4->raise();
        line_5->raise();
        line_2->raise();
        line->raise();
        viewUsers_Button->raise();
        adjustBalance_Button->raise();
        logout_Button->raise();
        viewTransictions_Button->raise();
        add_edit_Button->raise();
        delete_suspend_Button->raise();
        line_3->raise();
        label_bg = new QLabel(admin);
        label_bg->setObjectName("label_bg");
        label_bg->setGeometry(QRect(0, 0, 971, 724));
        QPalette palette7;
        QBrush brush8(QColor(238, 226, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        label_bg->setPalette(palette7);
        label_bg->setStyleSheet(QString::fromUtf8("background-image: url(:/material/photos/bg2.png);"));
        menu_label = new QLabel(admin);
        menu_label->setObjectName("menu_label");
        menu_label->setGeometry(QRect(20, 20, 41, 41));
        menu_label->setStyleSheet(QString::fromUtf8("border-image: url(:/material/photos/menu.png);"));
        label_bg->raise();
        user_listView->raise();
        layoutWidget->raise();
        menu_label->raise();
        menu_Button->raise();
        close_list_Button->raise();

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QWidget *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Form", nullptr));
        close_list_Button->setText(QString());
        menu_Button->setText(QString());
        viewUsers_Button->setText(QCoreApplication::translate("admin", "\342\227\213 View List of Users", nullptr));
        viewTransictions_Button->setText(QCoreApplication::translate("admin", "\342\227\213 View List of Transiction", nullptr));
        add_edit_Button->setText(QCoreApplication::translate("admin", "\342\227\213 Add / Edit", nullptr));
        delete_suspend_Button->setText(QCoreApplication::translate("admin", "\342\227\213 Delete / Suspend", nullptr));
        adjustBalance_Button->setText(QCoreApplication::translate("admin", "\342\227\213 Adjust Balance", nullptr));
        logout_Button->setText(QCoreApplication::translate("admin", "\342\227\213 Log Out", nullptr));
        label_bg->setText(QString());
        menu_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
