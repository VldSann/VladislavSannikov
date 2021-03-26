#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "user.h"
#include "reg.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_vhod_clicked();

    void on_reg_clicked();

private:
    Ui::Login *ui;
    user *window;
    reg *reglist;

};
#endif // LOGIN_H
