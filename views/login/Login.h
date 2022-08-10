#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
    class Login;
}

class Login : public QWidget {
Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);

    ~Login() override;

private slots:

    void on_loginBtn_clicked();

    void on_quitBtn_clicked();

signals:

    void sendLoginSuccess();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
