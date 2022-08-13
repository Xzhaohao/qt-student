#include "MainWindow.h"
#include "ui_MainWindow.h"

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
}

MainWindow::~MainWindow() {
    delete ui;
}
