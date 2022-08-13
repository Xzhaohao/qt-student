/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QWidget *headerContainer;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *title;
    QWidget *userinfoWarp;
    QGridLayout *gridLayout;
    QLabel *avatar;
    QLabel *username;
    QPushButton *exitBtn;
    QTreeWidget *menuContainer;
    QStackedWidget *stackedWidget;
    QWidget *admin;
    QWidget *student;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBox;
    QLineEdit *searchInput;
    QPushButton *searchBtn;
    QPushButton *plusBtn;
    QPushButton *updateBtn;
    QPushButton *deleteBtn;
    QTableWidget *tableWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 480));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        headerContainer = new QWidget(centralwidget);
        headerContainer->setObjectName(QString::fromUtf8("headerContainer"));
        headerContainer->setStyleSheet(QString::fromUtf8("background-color: #00A4FF;\n"
"color: #FFFFFF;"));
        gridLayout_2 = new QGridLayout(headerContainer);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(254, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        title = new QLabel(headerContainer);
        title->setObjectName(QString::fromUtf8("title"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        title->setFont(font);
        title->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(title, 0, 1, 1, 1);

        userinfoWarp = new QWidget(headerContainer);
        userinfoWarp->setObjectName(QString::fromUtf8("userinfoWarp"));
        gridLayout = new QGridLayout(userinfoWarp);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        avatar = new QLabel(userinfoWarp);
        avatar->setObjectName(QString::fromUtf8("avatar"));
        avatar->setMaximumSize(QSize(40, 40));
        avatar->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/avatar.webp);"));

        gridLayout->addWidget(avatar, 0, 0, 1, 1);

        username = new QLabel(userinfoWarp);
        username->setObjectName(QString::fromUtf8("username"));

        gridLayout->addWidget(username, 0, 1, 1, 1);

        exitBtn = new QPushButton(userinfoWarp);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setMinimumSize(QSize(40, 0));
        exitBtn->setMaximumSize(QSize(60, 16777215));
        exitBtn->setStyleSheet(QString::fromUtf8("background-color: #31C27C;\n"
"border-color: #31C27C;\n"
"border-radius: 5px;\n"
"width: 60px;\n"
"height: 20px;"));

        gridLayout->addWidget(exitBtn, 0, 2, 1, 1);


        gridLayout_2->addWidget(userinfoWarp, 0, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 1);
        gridLayout_2->setColumnStretch(2, 1);

        gridLayout_3->addWidget(headerContainer, 0, 0, 1, 2);

        menuContainer = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        menuContainer->setHeaderItem(__qtreewidgetitem);
        menuContainer->setObjectName(QString::fromUtf8("menuContainer"));
        menuContainer->setMaximumSize(QSize(160, 16777215));
        menuContainer->setStyleSheet(QString::fromUtf8("padding-top: 10px;\n"
"background-color: rgb(255, 255, 255);"));
        menuContainer->header()->setVisible(false);

        gridLayout_3->addWidget(menuContainer, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setLineWidth(1);
        admin = new QWidget();
        admin->setObjectName(QString::fromUtf8("admin"));
        stackedWidget->addWidget(admin);
        student = new QWidget();
        student->setObjectName(QString::fromUtf8("student"));
        gridLayout_4 = new QGridLayout(student);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        checkBox = new QCheckBox(student);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_4->addWidget(checkBox, 0, 0, 1, 1);

        searchInput = new QLineEdit(student);
        searchInput->setObjectName(QString::fromUtf8("searchInput"));

        gridLayout_4->addWidget(searchInput, 0, 1, 1, 1);

        searchBtn = new QPushButton(student);
        searchBtn->setObjectName(QString::fromUtf8("searchBtn"));

        gridLayout_4->addWidget(searchBtn, 0, 2, 1, 1);

        plusBtn = new QPushButton(student);
        plusBtn->setObjectName(QString::fromUtf8("plusBtn"));

        gridLayout_4->addWidget(plusBtn, 0, 3, 1, 1);

        updateBtn = new QPushButton(student);
        updateBtn->setObjectName(QString::fromUtf8("updateBtn"));

        gridLayout_4->addWidget(updateBtn, 0, 4, 1, 1);

        deleteBtn = new QPushButton(student);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));

        gridLayout_4->addWidget(deleteBtn, 0, 5, 1, 1);

        tableWidget = new QTableWidget(student);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_4->addWidget(tableWidget, 1, 0, 1, 6);

        stackedWidget->addWidget(student);

        gridLayout_3->addWidget(stackedWidget, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        title->setText(QApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        avatar->setText(QString());
        username->setText(QApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230", nullptr));
        exitBtn->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        searchInput->setPlaceholderText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        searchBtn->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        plusBtn->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        updateBtn->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        deleteBtn->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
