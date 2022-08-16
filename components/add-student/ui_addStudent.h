/********************************************************************************
** Form generated from reading UI file 'addStudent.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENT_H
#define UI_ADDSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStudent
{
public:
    QGridLayout *gridLayout;
    QLabel *labelName;
    QLabel *labelMobile;
    QLabel *labelWechat;
    QLabel *labelAge;
    QLineEdit *classInput;
    QLineEdit *numInput;
    QLineEdit *wechatInput;
    QLabel *labelGrade;
    QLineEdit *mobileInput;
    QLabel *labelNum;
    QLabel *labelClass;
    QLineEdit *nameInput;
    QLineEdit *gradeInput;
    QSpinBox *ageInput;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *saveBtn;
    QPushButton *closeBtn;

    void setupUi(QDialog *AddStudent)
    {
        if (AddStudent->objectName().isEmpty())
            AddStudent->setObjectName(QString::fromUtf8("AddStudent"));
        AddStudent->resize(325, 260);
        gridLayout = new QGridLayout(AddStudent);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelName = new QLabel(AddStudent);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setMinimumSize(QSize(60, 0));
        labelName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelName, 0, 0, 1, 1);

        labelMobile = new QLabel(AddStudent);
        labelMobile->setObjectName(QString::fromUtf8("labelMobile"));
        labelMobile->setMinimumSize(QSize(60, 0));
        labelMobile->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelMobile, 5, 0, 1, 1);

        labelWechat = new QLabel(AddStudent);
        labelWechat->setObjectName(QString::fromUtf8("labelWechat"));
        labelWechat->setMinimumSize(QSize(60, 0));
        labelWechat->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelWechat, 6, 0, 1, 1);

        labelAge = new QLabel(AddStudent);
        labelAge->setObjectName(QString::fromUtf8("labelAge"));
        labelAge->setMinimumSize(QSize(60, 0));
        labelAge->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelAge, 1, 0, 1, 1);

        classInput = new QLineEdit(AddStudent);
        classInput->setObjectName(QString::fromUtf8("classInput"));

        gridLayout->addWidget(classInput, 3, 1, 1, 1);

        numInput = new QLineEdit(AddStudent);
        numInput->setObjectName(QString::fromUtf8("numInput"));

        gridLayout->addWidget(numInput, 4, 1, 1, 1);

        wechatInput = new QLineEdit(AddStudent);
        wechatInput->setObjectName(QString::fromUtf8("wechatInput"));

        gridLayout->addWidget(wechatInput, 6, 1, 1, 1);

        labelGrade = new QLabel(AddStudent);
        labelGrade->setObjectName(QString::fromUtf8("labelGrade"));
        labelGrade->setMinimumSize(QSize(60, 0));
        labelGrade->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelGrade, 2, 0, 1, 1);

        mobileInput = new QLineEdit(AddStudent);
        mobileInput->setObjectName(QString::fromUtf8("mobileInput"));

        gridLayout->addWidget(mobileInput, 5, 1, 1, 1);

        labelNum = new QLabel(AddStudent);
        labelNum->setObjectName(QString::fromUtf8("labelNum"));
        labelNum->setMinimumSize(QSize(60, 0));
        labelNum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelNum, 4, 0, 1, 1);

        labelClass = new QLabel(AddStudent);
        labelClass->setObjectName(QString::fromUtf8("labelClass"));
        labelClass->setMinimumSize(QSize(60, 0));
        labelClass->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelClass, 3, 0, 1, 1);

        nameInput = new QLineEdit(AddStudent);
        nameInput->setObjectName(QString::fromUtf8("nameInput"));

        gridLayout->addWidget(nameInput, 0, 1, 1, 1);

        gradeInput = new QLineEdit(AddStudent);
        gradeInput->setObjectName(QString::fromUtf8("gradeInput"));

        gridLayout->addWidget(gradeInput, 2, 1, 1, 1);

        ageInput = new QSpinBox(AddStudent);
        ageInput->setObjectName(QString::fromUtf8("ageInput"));
        ageInput->setMinimum(1);
        ageInput->setMaximum(130);

        gridLayout->addWidget(ageInput, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 2, 1, 1);

        widget = new QWidget(AddStudent);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        saveBtn = new QPushButton(widget);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));

        gridLayout_2->addWidget(saveBtn, 0, 0, 1, 1);

        closeBtn = new QPushButton(widget);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));

        gridLayout_2->addWidget(closeBtn, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 7, 0, 1, 3);


        retranslateUi(AddStudent);

        QMetaObject::connectSlotsByName(AddStudent);
    } // setupUi

    void retranslateUi(QDialog *AddStudent)
    {
        AddStudent->setWindowTitle(QApplication::translate("AddStudent", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        labelName->setText(QApplication::translate("AddStudent", "\345\247\223\345\220\215", nullptr));
        labelMobile->setText(QApplication::translate("AddStudent", "\347\224\265\350\257\235", nullptr));
        labelWechat->setText(QApplication::translate("AddStudent", "\345\276\256\344\277\241", nullptr));
        labelAge->setText(QApplication::translate("AddStudent", "\345\271\264\351\276\204", nullptr));
        labelGrade->setText(QApplication::translate("AddStudent", "\345\271\264\347\272\247", nullptr));
        labelNum->setText(QApplication::translate("AddStudent", "\345\255\246\345\217\267", nullptr));
        labelClass->setText(QApplication::translate("AddStudent", "\347\217\255\347\272\247", nullptr));
        saveBtn->setText(QApplication::translate("AddStudent", "\344\277\235\345\255\230", nullptr));
        closeBtn->setText(QApplication::translate("AddStudent", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStudent: public Ui_AddStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENT_H
