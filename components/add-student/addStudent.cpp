#include "addStudent.h"

AddStudent::AddStudent(QWidget *parent) : QDialog(parent), ui(new Ui::AddStudent) {
    ui->setupUi(this);
}

AddStudent::~AddStudent() {
    delete ui;
}

void AddStudent::on_closeBtn_clicked() {
    hide();
}


void AddStudent::on_saveBtn_clicked() {
    auto ptr = StudentSql::getInstance();
    Student params;
    params.name = ui->nameInput->text();
    params.age = ui->ageInput->text().toUInt();
    params.grade = ui->gradeInput->text().toUInt();
    params.cls = ui->classInput->text().toUInt();
    params.num = ui->numInput->text().toUInt();
    params.mobile = ui->nameInput->text();
    params.wechat = ui->nameInput->text();
    ptr->addStudent(params);
}

