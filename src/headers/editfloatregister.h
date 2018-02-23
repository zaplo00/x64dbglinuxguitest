#ifndef EDITFLOATREGISTER_H
#define EDITFLOATREGISTER_H

#include <QDialog>

namespace Ui {
class EditFloatRegister;
}

class EditFloatRegister : public QDialog
{
    Q_OBJECT

public:
    explicit EditFloatRegister(QDialog *parent = 0);
    ~EditFloatRegister();

private:
    Ui::EditFloatRegister *ui;
};

#endif // EDITFLOATREGISTER_H
