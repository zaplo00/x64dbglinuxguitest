#include "headers/patchdialog.h"
#include "ui_PatchDialog.h"

PatchDialog::PatchDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::PatchDialog)
{
    ui->setupUi(this);
}

PatchDialog::~PatchDialog()
{
    delete ui;
}
