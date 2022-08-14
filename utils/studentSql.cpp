#include "studentSql.h"

StudentSql::StudentSql(QObject *parent) : QObject(parent) {
    init();
}

void StudentSql::init() {
    mDb = QSqlDatabase::addDatabase("QMYSQL");
    mDb.setHostName("127.0.0.1");
    mDb.setPort(3306);
    mDb.setDatabaseName("qt-student");
    mDb.setUserName("root");
    mDb.setPassword("123456");

    bool result = mDb.open();
    if (!result) {
        qDebug() << "数据库连接失败！";
    }
}

quint32 StudentSql::getStudentCount() {
    QSqlQuery query(mDb);
    query.exec("select count(*) from student;");

    quint32 count = 0;
    while (query.next()) {
        count = query.value(0).toUInt();
    }
    return count;
}

QList<Student> StudentSql::queryStuByPage(quint32 page, quint32 size) {
    QList<Student> list;
    QSqlQuery query(mDb);
    QString sql = QString("select * from student order by id desc limit %1 offset %2;")
            .arg(page).arg(page * size);
    query.exec(sql);

    Student item;
    while (query.next()) {
        item.id = query.value(0).toUInt();
        item.name = query.value(1).toString();
        item.age = query.value(2).toUInt();
        item.grade = query.value(3).toUInt();
        item.cls = query.value(4).toUInt();
        item.num = query.value(5).toUInt();
        item.mobile = query.value(6).toString();
        item.wechat = query.value(7).toString();

        list.push_back(item);
    }
    return list;
}

bool StudentSql::addStudent(const Student &student) {
    QSqlQuery query(mDb);
    QString sql = QString("INSERT INTO student VALUES (NULL, '%1', %2, %3, %4, %5, '%6', '%7')")
            .arg(student.name).arg(student.age).arg(student.grade)
            .arg(student.cls).arg(student.num).arg(student.mobile).arg(student.wechat);
    return query.exec(sql);
}

bool StudentSql::deleteStudent(int id) {
    QSqlQuery query(mDb);
    return query.exec(QString("delete from student where id = %1").arg(id));
}

bool StudentSql::clear() {
    QSqlQuery query(mDb);
    return query.exec(QString("delete from student"));
}

bool StudentSql::updateStudent(Student &student) {
    QSqlQuery query(mDb);
    QString sql = QString(
            "update student set name = '%1', age = %2, grade = %3, cls = %4, num = %5, mobile = '%6', wechat = %'7' where id = %8")
            .arg(student.name).arg(student.age).arg(student.grade).arg(student.cls)
            .arg(student.num).arg(student.mobile).arg(student.wechat).arg(student.id);
    return query.exec(sql);
}

QList<User> StudentSql::queryAllUser() {
    QList<User> list;
    QSqlQuery query(mDb);
    QString sql = QString("select * from user;");
    query.exec(sql);

    User item;
    while (query.next()) {
        item.id = query.value(0).toUInt();
        item.username = query.value(1).toString();
        item.password = query.value(2).toString();
        item.aut = query.value(3).toString();

        list.push_back(item);
    }
    return list;
}

bool StudentSql::isExit(const QString &username) {
    QSqlQuery query(mDb);
    QString sql = QString("select * from user where username = '%1';").arg(username);
    query.exec(sql);
    return query.next();
}

bool StudentSql::addUser(const User &user) {
    QSqlQuery query(mDb);
    QString sql = QString("INSERT INTO user VALUES (NULL, '%1', '%2', '%3')")
            .arg(user.username).arg(user.password).arg(user.aut);
    return query.exec(sql);
}

bool StudentSql::updateUser(const User &user) {
    QSqlQuery query(mDb);
    QString sql = QString("update user set password = '%1', aut = '%2' where id = %3;")
            .arg(user.password).arg(user.aut).arg(user.id);
    return query.exec(sql);
}

bool StudentSql::deleteUser(int id) {
    QSqlQuery query(mDb);
    return query.exec(QString("delete from user where id = %1;").arg(id));
}
