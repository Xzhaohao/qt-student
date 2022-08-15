/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *loginTitle;
    QWidget *formWrap;
    QGridLayout *gridLayout;
    QLabel *accountLabel;
    QLineEdit *accountInput;
    QSpacerItem *formSpacerLeft;
    QLabel *passwordLabel;
    QLineEdit *passwordInput;
    QSpacerItem *formSpacerRight;
    QWidget *btnRow;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *btnSpacerLeft;
    QPushButton *loginBtn;
    QSpacerItem *btnSpacerCenter;
    QPushButton *quitBtn;
    QSpacerItem *btnSpacerRight;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(360, 240);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        Login->setMinimumSize(QSize(360, 240));
        Login->setMaximumSize(QSize(360, 240));
        verticalLayout = new QVBoxLayout(Login);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        loginTitle = new QLabel(Login);
        loginTitle->setObjectName(QString::fromUtf8("loginTitle"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginTitle->sizePolicy().hasHeightForWidth());
        loginTitle->setSizePolicy(sizePolicy1);
        loginTitle->setMinimumSize(QSize(0, 58));
        loginTitle->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\346\245\267\344\275\223\347\256\200\344\275\223"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        loginTitle->setFont(font);
        loginTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(loginTitle);

        formWrap = new QWidget(Login);
        formWrap->setObjectName(QString::fromUtf8("formWrap"));
        gridLayout = new QGridLayout(formWrap);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        accountLabel = new QLabel(formWrap);
        accountLabel->setObjectName(QString::fromUtf8("accountLabel"));
        accountLabel->setMinimumSize(QSize(60, 0));
        accountLabel->setMaximumSize(QSize(60, 16777215));
        accountLabel->setStyleSheet(QString::fromUtf8("color: rgb(52, 73, 94);"));
        accountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(accountLabel, 0, 1, 1, 1);

        accountInput = new QLineEdit(formWrap);
        accountInput->setObjectName(QString::fromUtf8("accountInput"));
        accountInput->setMinimumSize(QSize(180, 24));
        accountInput->setMaximumSize(QSize(150, 16777215));
        accountInput->setStyleSheet(QString::fromUtf8("border: 2px solid #BDC3C7;\n"
"border-radius: 6;\n"
"min-height: 20;\n"
"padding-left: 5;"));
        accountInput->setMaxLength(12);

        gridLayout->addWidget(accountInput, 0, 2, 1, 1);

        formSpacerLeft = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(formSpacerLeft, 1, 0, 1, 1);

        passwordLabel = new QLabel(formWrap);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setMinimumSize(QSize(60, 0));
        passwordLabel->setMaximumSize(QSize(60, 16777215));
        passwordLabel->setStyleSheet(QString::fromUtf8("color: rgb(52, 73, 94);"));
        passwordLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(passwordLabel, 1, 1, 1, 1);

        passwordInput = new QLineEdit(formWrap);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        passwordInput->setMinimumSize(QSize(180, 24));
        passwordInput->setMaximumSize(QSize(180, 16777215));
        passwordInput->setStyleSheet(QString::fromUtf8("border: 2px solid #BDC3C7;\n"
"border-radius: 6;\n"
"min-height: 20;\n"
"padding-left: 5;"));
        passwordInput->setMaxLength(16);
        passwordInput->setEchoMode(QLineEdit::Password);
        passwordInput->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(passwordInput, 1, 2, 1, 1);

        formSpacerRight = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(formSpacerRight, 1, 3, 1, 1);


        verticalLayout->addWidget(formWrap);

        btnRow = new QWidget(Login);
        btnRow->setObjectName(QString::fromUtf8("btnRow"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnRow->sizePolicy().hasHeightForWidth());
        btnRow->setSizePolicy(sizePolicy2);
        btnRow->setMinimumSize(QSize(0, 60));
        btnRow->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_3 = new QHBoxLayout(btnRow);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnSpacerLeft = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(btnSpacerLeft);

        loginBtn = new QPushButton(btnRow);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #31C27C;\n"
"border-color: #31C27C;\n"
"border-radius: 12px;\n"
"width: 80px;\n"
"height: 24px;"));

        horizontalLayout_3->addWidget(loginBtn);

        btnSpacerCenter = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(btnSpacerCenter);

        quitBtn = new QPushButton(btnRow);
        quitBtn->setObjectName(QString::fromUtf8("quitBtn"));
        quitBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #909399;\n"
"border-color: #909399;\n"
"border-radius: 12px;\n"
"width: 80px;\n"
"height: 24px;"));

        horizontalLayout_3->addWidget(quitBtn);

        btnSpacerRight = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(btnSpacerRight);


        verticalLayout->addWidget(btnRow);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
#ifndef QT_NO_TOOLTIP
        Login->setToolTip(QApplication::translate("Login", "\347\231\273\345\275\225\347\252\227\345\217\243", nullptr));
#endif // QT_NO_TOOLTIP
        loginTitle->setText(QApplication::translate("Login", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        accountLabel->setText(QApplication::translate("Login", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        accountInput->setPlaceholderText(QApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        passwordLabel->setText(QApplication::translate("Login", "\345\257\206\347\240\201\357\274\232", nullptr));
        passwordInput->setPlaceholderText(QApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        loginBtn->setText(QApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        quitBtn->setText(QApplication::translate("Login", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
