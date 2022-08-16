#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include "ui_MainWindow.h"
#include "../login/Login.h"
#include "../../utils/studentSql.h"
#include "../../components/add-student/addStudent.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private slots:

    void on_plusBtn_clicked();

private:
    Ui::MainWindow *ui;

    Login mLogin;
    StudentSql *mPtrSql;
    AddStudent mAddStudentDialog;
};

#endif // MAIN_WINDOW_H
