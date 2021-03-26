#include "reg.h"
#include "ui_reg.h"
#include <QMessageBox>

reg::reg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reg)
{
    ui->setupUi(this);
}

reg::~reg()
{
    delete ui;
}



void reg::on_pushButton_clicked()
{
    if(ui ->checkBox ->isChecked()) {

    }else {
        QMessageBox::warning(this, "Ошибка входа", "Вы не согласны на обработку персональных данных!");
    }

    if(ui ->checkBox_2 ->isChecked()) {

    }else {
        QMessageBox::warning(this, "Ошибка входа", "Вы не ознакомились с пользовательским соглашением!");
    }
}
