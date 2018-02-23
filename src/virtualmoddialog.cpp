#include "headers/virtualmoddialog.h"
#include "ui_VirtualModDialog.h"

VirtualModDialog::VirtualModDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::VirtualModDialog)
{
    ui->setupUi(this);
}

VirtualModDialog::~VirtualModDialog()
{
    delete ui;
}
