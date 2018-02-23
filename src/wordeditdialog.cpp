#include "headers/wordeditdialog.h"
#include "ui_WordEditDialog.h"

WordEditDialog::WordEditDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::WordEditDialog)
{
    ui->setupUi(this);
}

WordEditDialog::~WordEditDialog()
{
    delete ui;
}
