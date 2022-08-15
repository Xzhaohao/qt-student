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
    QPushButton *deleteBtn;
    QPushButton *updateBtn;
    QPushButton *searchBtn;
    QCheckBox *checkBox;
    QTableWidget *tableWidget;
    QPushButton *plusBtn;
    QLineEdit *searchInput;
    QLabel *count;

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
        headerContainer->setMinimumSize(QSize(0, 40));
        headerContainer->setMaximumSize(QSize(16777215, 50));
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
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        avatar = new QLabel(userinfoWarp);
        avatar->setObjectName(QString::fromUtf8("avatar"));
        avatar->setMinimumSize(QSize(45, 45));
        avatar->setMaximumSize(QSize(45, 45));
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
"background-color: #3a4e61;\n"
"color: #FFFFFF;"));
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
        deleteBtn = new QPushButton(student);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));
        deleteBtn->setStyleSheet(QString::fromUtf8("background-color: #FF9999;\n"
"border-color: #FF9999;\n"
"border-radius: 5px;\n"
"width: 60px;\n"
"height: 20px;\n"
"color: #FFFFFF;"));

        gridLayout_4->addWidget(deleteBtn, 0, 5, 1, 1);

        updateBtn = new QPushButton(student);
        updateBtn->setObjectName(QString::fromUtf8("updateBtn"));
        updateBtn->setStyleSheet(QString::fromUtf8("background-color: #FFCC00;\n"
"border-color: #FFCC00;\n"
"border-radius: 5px;\n"
"width: 60px;\n"
"height: 20px;\n"
"color: #FFFFFF;"));

        gridLayout_4->addWidget(updateBtn, 0, 4, 1, 1);

        searchBtn = new QPushButton(student);
        searchBtn->setObjectName(QString::fromUtf8("searchBtn"));
        searchBtn->setStyleSheet(QString::fromUtf8("background-color: #00A4FF;\n"
"border-color: #00A4FF;\n"
"border-radius: 5px;\n"
"width: 60px;\n"
"height: 20px;\n"
"color: #FFFFFF;\n"
"margin-right: 20;"));

        gridLayout_4->addWidget(searchBtn, 0, 2, 1, 1);

        checkBox = new QCheckBox(student);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_4->addWidget(checkBox, 0, 0, 1, 1);

        tableWidget = new QTableWidget(student);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setStyleSheet(QString::fromUtf8("color: #909399;"));

        gridLayout_4->addWidget(tableWidget, 1, 0, 1, 6);

        plusBtn = new QPushButton(student);
        plusBtn->setObjectName(QString::fromUtf8("plusBtn"));
        plusBtn->setStyleSheet(QString::fromUtf8("background-color: #31C27C;\n"
"border-color: #31C27C;\n"
"border-radius: 5px;\n"
"width: 60px;\n"
"height: 20px;\n"
"color: #FFFFFF;"));

        gridLayout_4->addWidget(plusBtn, 0, 3, 1, 1);

        searchInput = new QLineEdit(student);
        searchInput->setObjectName(QString::fromUtf8("searchInput"));
        searchInput->setStyleSheet(QString::fromUtf8("border: 1px solid #dcdfe6;\n"
"border-radius: 3;\n"
"min-height: 20;\n"
"padding-left: 6;"));

        gridLayout_4->addWidget(searchInput, 0, 1, 1, 1);

        count = new QLabel(student);
        count->setObjectName(QString::fromUtf8("count"));

        gridLayout_4->addWidget(count, 2, 0, 1, 1);

        stackedWidget->addWidget(student);

        gridLayout_3->addWidget(stackedWidget, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        title->setText(QApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        avatar->setText(QString());
        username->setText(QApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230", nullptr));
        exitBtn->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        deleteBtn->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        updateBtn->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        searchBtn->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\345\271\264\351\276\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\345\271\264\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\347\217\255\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\346\211\213\346\234\272\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\345\276\256\344\277\241", nullptr));
        plusBtn->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        searchInput->setPlaceholderText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        count->setText(QApplication::translate("MainWindow", "\346\225\260\351\207\217\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
