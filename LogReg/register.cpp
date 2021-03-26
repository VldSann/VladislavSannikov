#include "reg.h"
#include "ui_reg.h"

register::reg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regr)
{
    ui->setupUi(this);
}

reg::~reg()
{
delete ui;
}
