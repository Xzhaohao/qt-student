#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    mLogin.show();

    connect(&mLogin, &Login::sendLoginSuccess, this, [=]() {
        mLogin.hide();
        this->show();
    });
}

MainWindow::~MainWindow() {
    delete ui;
}
