#include "Login.h"
#include "ui_Login.h"

Login::Login(QWidget *parent) : QWidget(parent), ui(new Ui::Login) {
    ui->setupUi(this);
}

Login::~Login() {
    delete ui;
}

void Login::on_loginBtn_clicked() {
    QString account = ui->accountInput->text();
    QString password = ui->passwordInput->text();

    if (account.length() < 5) {
        QMessageBox::information(this, "提示", "账号长度不能小于5位!");
        return;
    }
    QRegExp rx("^[A-Za-z0-9]{5,16}");
    if (!rx.exactMatch(password)) {
        QMessageBox::information(this, "提示", "密码由5-16位英文数字组成!");
        ui->passwordInput->clear();
        ui->passwordInput->setFocus();
        return;
    }

    emit sendLoginSuccess();
}


void Login::on_quitBtn_clicked() {
    exit(0);
}

