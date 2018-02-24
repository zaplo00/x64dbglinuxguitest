#include "headers/selectfields.h"
#include "ui_SelectFields.h"

SelectFields::SelectFields(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::SelectFields)
{
    ui->setupUi(this);
}

SelectFields::~SelectFields()
{
    delete ui;
}
