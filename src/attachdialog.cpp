#include "headers/attachdialog.h"
#include "ui_AttachDialog.h"

AttachDialog::AttachDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AttachDialog)
{
    ui->setupUi(this);
}

AttachDialog::~AttachDialog()
{
    delete ui;
}
