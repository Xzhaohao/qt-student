#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    mLogin.show();

    connect(&mLogin, &Login::sendLoginSuccess, this, [=]() {
        mLogin.hide();
        this->show();
    });

    ui->menuContainer->setColumnCount(1);

    auto *item1 = new QTreeWidgetItem(ui->menuContainer, QStringList("学生管理"));
    auto *item2 = new QTreeWidgetItem(ui->menuContainer, QStringList("管理员管理"));
    ui->menuContainer->addTopLevelItem(item1);
    ui->menuContainer->addTopLevelItem(item2);

    ui->stackedWidget->setCurrentIndex(1);

    mPtrSql = StudentSql::getInstance();
    mPtrSql->init();

    auto count = mPtrSql->getStudentCount();
    QList<Student> list = mPtrSql->queryStuByPage(0, count);

    QString countText = QString("数量：%1").arg(count);
    ui->count->setText(countText);
    ui->tableWidget->setRowCount((int) count);
    for (int i = 0; i < list.size(); ++i) {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(list[i].id)));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(list[i].name));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(list[i].age)));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(list[i].grade)));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(list[i].cls)));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(list[i].num)));
        ui->tableWidget->setItem(i, 6, new QTableWidgetItem(list[i].mobile));
        ui->tableWidget->setItem(i, 7, new QTableWidgetItem(list[i].wechat));
    }
}

MainWindow::~MainWindow() {
    delete ui;
}
