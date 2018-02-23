#include "headers/closedialog.h"
#include "ui_CloseDialog.h"

CloseDialog::CloseDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::CloseDialog)
{
    ui->setupUi(this);
}

CloseDialog::~CloseDialog()
{
    delete ui;
}
