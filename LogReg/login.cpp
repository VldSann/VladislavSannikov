#include "login.h"
#include "./ui_login.h"
#include <QString>
#include <QMessageBox>

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
       this->setStyleSheet("background-color: 255, 255, 255;");
}

Login::~Login()
{
    delete ui;
}


void Login::on_vhod_clicked()
{

    QString login = ui -> lineLogin -> text();
    QString password = ui -> linePass -> text();

    if(login == "BestPrice" && password == "12345") {
        hide();
        window = new user(this);
        window->show();
    }else {
        QMessageBox::warning(this, "Ошибка входа", "Неверный логин или пароль");

    }


}

void Login::on_reg_clicked()
{
    hide();
    reglist = new reg(this);
    reglist -> show();
}
