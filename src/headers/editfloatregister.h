#ifndef EDITFLOATREGISTER_H
#define EDITFLOATREGISTER_H

#include <QWidget>

namespace Ui {
class EditFloatRegister;
}

class EditFloatRegister : public QWidget
{
    Q_OBJECT

public:
    explicit EditFloatRegister(QWidget *parent = 0);
    ~EditFloatRegister();

private:
    Ui::EditFloatRegister *ui;
};

#endif // EDITFLOATREGISTER_H
