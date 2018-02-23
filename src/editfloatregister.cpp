#include "headers/editfloatregister.h"
#include "ui_EditFloatRegister.h"

EditFloatRegister::EditFloatRegister(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::EditFloatRegister)
{
    ui->setupUi(this);
}

EditFloatRegister::~EditFloatRegister()
{
    delete ui;
}
