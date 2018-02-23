#include "headers/attachdialog.h"
#include "ui_AttachDialog.h"

AttachDialog::AttachDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::AttachDialog)
{
    ui->setupUi(this);
}

AttachDialog::~AttachDialog()
{
    delete ui;
}
