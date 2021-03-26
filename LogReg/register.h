#ifndef REG_H
#define REG_H

#include <QDialog>

namespace Ui {
class reg;
}

class reg : public QDialog
{
    Q_OBJECT

public:
    explicit reg(QWidget *parent = nullptr);
    ~register();

private:
    Ui::reg *ui;
};

#endif // REG_H
