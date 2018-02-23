#include "headers/selectfields.h"
#include "ui_SelectFields.h"

SelectFields::SelectFields(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectFields)
{
    ui->setupUi(this);
}

SelectFields::~SelectFields()
{
    delete ui;
}
