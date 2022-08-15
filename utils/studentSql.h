#ifndef __STUDENT_SQL_H
#define __STUDENT_SQL_H

#include <QObject>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>

struct Student {
    int id;
    QString name;
    quint8 age;
    quint16 grade;
    quint16 cls;
    quint32 num;
    QString mobile;
    QString wechat;
};

struct User {
    int id;
    QString username;
    QString password;
    QString aut;
};

class StudentSql : public QObject {
Q_OBJECT

public:
    static StudentSql *ptrSql;

    static StudentSql *getInstance() {
        if (nullptr == ptrSql) {
            ptrSql = new StudentSql;
        }
        return ptrSql;
    }

    explicit StudentSql(QObject *parent = nullptr);

    void init();

    // 查询所有学生数量
    quint32 getStudentCount();

    // 分页查询学生数据
    QList<Student> queryStuByPage(quint32 page, quint32 size);

    // 添加学生
    bool addStudent(const Student &);

    // 删除学生
    bool deleteStudent(int id);

    // 清空学生表
    bool clear();

    // 修改学生信息
    bool updateStudent(Student &);

    // 查询所有用户
    QList<User> queryAllUser();

    // 查询用户是否存在
    bool isExit(const QString &username);

    // 添加用户
    bool addUser(const User &user);

    // 修改用户
    bool updateUser(const User &user);

    // 修改用户
    bool deleteUser(int id);

private:
    QSqlDatabase mDb;
};

#endif // __STUDENT_SQL_H
