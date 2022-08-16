#ifndef ADD_STUDENT_H
#define ADD_STUDENT_H

#include <QDialog>
#include "ui_addStudent.h"
#include "../../utils/studentSql.h"

namespace Ui {
    class AddStudent;
}

class AddStudent : public QDialog {
Q_OBJECT

public:
    explicit AddStudent(QWidget *parent = nullptr);

    ~AddStudent() override;

private slots:

    void on_saveBtn_clicked();

    void on_closeBtn_clicked();

private:
    Ui::AddStudent *ui;
};

#endif // ADD_STUDENT_H
