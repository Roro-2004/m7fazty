/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QLabel *label_bg;
    QListView *user_listView;
    QLabel *menu_label;
    QPushButton *menu_Button;
    QPushButton *close_list_Button;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *viewBalance_Button;
    QFrame *line;
    QPushButton *sendMoney_Button;
    QFrame *line_2;
    QPushButton *requestMoney_Button;
    QFrame *line_3;
    QPushButton *viewHistory_Button;
    QFrame *line_4;
    QPushButton *editProfile_Button;
    QFrame *line_5;
    QPushButton *logout_Button;

    void setupUi(QWidget *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(971, 724);
        label_bg = new QLabel(user);
        label_bg->setObjectName("label_bg");
        label_bg->setGeometry(QRect(0, 0, 971, 724));
        QPalette palette;
        QBrush brush(QColor(238, 226, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        label_bg->setPalette(palette);
        label_bg->setStyleSheet(QString::fromUtf8("background-image: url(:/material/photos/bg2.png);"));
        user_listView = new QListView(user);
        user_listView->setObjectName("user_listView");
        user_listView->setGeometry(QRect(-20, 10, 371, 701));
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(255, 90, 130, 38));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        QBrush brush5(QColor(0, 0, 0, 255));
        brush5.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        user_listView->setPalette(palette1);
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
        menu_label = new QLabel(user);
        menu_label->setObjectName("menu_label");
        menu_label->setGeometry(QRect(20, 20, 41, 41));
        menu_label->setStyleSheet(QString::fromUtf8("border-image: url(:/material/photos/menu.png);"));
        menu_Button = new QPushButton(user);
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
        close_list_Button = new QPushButton(user);
        close_list_Button->setObjectName("close_list_Button");
        close_list_Button->setGeometry(QRect(380, 0, 591, 731));
        close_list_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: rgba(255, 255, 255, 0); /* Fully transparent background */\n"
"\n"
"}\n"
""));
        layoutWidget = new QWidget(user);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 50, 321, 601));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 10, 0, 0);
        viewBalance_Button = new QPushButton(layoutWidget);
        viewBalance_Button->setObjectName("viewBalance_Button");
        QPalette palette2;
        QBrush brush6(QColor(226, 226, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush7(QColor(255, 255, 255, 0));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush7);
        QBrush brush8(QColor(226, 226, 255, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        viewBalance_Button->setPalette(palette2);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font1.setPointSize(18);
        viewBalance_Button->setFont(font1);
        viewBalance_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout->addWidget(viewBalance_Button, 0, Qt::AlignLeft);

        line = new QFrame(layoutWidget);
        line->setObjectName("line");
        QFont font2;
        font2.setWeight(QFont::Thin);
        line->setFont(font2);
        line->setFrameShadow(QFrame::Raised);
        line->setLineWidth(1);
        line->setFrameShape(QFrame::Shape::HLine);

        verticalLayout->addWidget(line);

        sendMoney_Button = new QPushButton(layoutWidget);
        sendMoney_Button->setObjectName("sendMoney_Button");
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        sendMoney_Button->setPalette(palette3);
        sendMoney_Button->setFont(font1);
        sendMoney_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout->addWidget(sendMoney_Button, 0, Qt::AlignLeft);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName("line_2");
        line_2->setFont(font2);
        line_2->setFrameShadow(QFrame::Raised);
        line_2->setLineWidth(1);
        line_2->setFrameShape(QFrame::Shape::HLine);

        verticalLayout->addWidget(line_2);

        requestMoney_Button = new QPushButton(layoutWidget);
        requestMoney_Button->setObjectName("requestMoney_Button");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(requestMoney_Button->sizePolicy().hasHeightForWidth());
        requestMoney_Button->setSizePolicy(sizePolicy);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        requestMoney_Button->setPalette(palette4);
        requestMoney_Button->setFont(font1);
        requestMoney_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout->addWidget(requestMoney_Button, 0, Qt::AlignLeft);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName("line_3");
        line_3->setFont(font2);
        line_3->setFrameShadow(QFrame::Raised);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::Shape::HLine);

        verticalLayout->addWidget(line_3);

        viewHistory_Button = new QPushButton(layoutWidget);
        viewHistory_Button->setObjectName("viewHistory_Button");
        sizePolicy.setHeightForWidth(viewHistory_Button->sizePolicy().hasHeightForWidth());
        viewHistory_Button->setSizePolicy(sizePolicy);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        viewHistory_Button->setPalette(palette5);
        viewHistory_Button->setFont(font1);
        viewHistory_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout->addWidget(viewHistory_Button, 0, Qt::AlignLeft);

        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName("line_4");
        line_4->setFont(font2);
        line_4->setFrameShadow(QFrame::Raised);
        line_4->setFrameShape(QFrame::Shape::HLine);

        verticalLayout->addWidget(line_4);

        editProfile_Button = new QPushButton(layoutWidget);
        editProfile_Button->setObjectName("editProfile_Button");
        sizePolicy.setHeightForWidth(editProfile_Button->sizePolicy().hasHeightForWidth());
        editProfile_Button->setSizePolicy(sizePolicy);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        editProfile_Button->setPalette(palette6);
        editProfile_Button->setFont(font1);
        editProfile_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout->addWidget(editProfile_Button, 0, Qt::AlignLeft);

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
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        logout_Button->setPalette(palette7);
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
        line_3->raise();
        line_5->raise();
        line_2->raise();
        line->raise();
        logout_Button->raise();
        sendMoney_Button->raise();
        viewBalance_Button->raise();
        viewHistory_Button->raise();
        requestMoney_Button->raise();
        editProfile_Button->raise();
        label_bg->raise();
        user_listView->raise();
        menu_label->raise();
        layoutWidget->raise();
        menu_Button->raise();
        close_list_Button->raise();

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QWidget *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "Form", nullptr));
        label_bg->setText(QString());
        menu_label->setText(QString());
        menu_Button->setText(QString());
        close_list_Button->setText(QString());
        viewBalance_Button->setText(QCoreApplication::translate("user", "\342\227\213 View Balance", nullptr));
        sendMoney_Button->setText(QCoreApplication::translate("user", "\342\227\213 Send Money", nullptr));
        requestMoney_Button->setText(QCoreApplication::translate("user", "\342\227\213 Request Money", nullptr));
        viewHistory_Button->setText(QCoreApplication::translate("user", "\342\227\213 View Transiction History", nullptr));
        editProfile_Button->setText(QCoreApplication::translate("user", "\342\227\213 Edit Profile", nullptr));
        logout_Button->setText(QCoreApplication::translate("user", "\342\227\213 Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
