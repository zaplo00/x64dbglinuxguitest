#include "headers/patchdialog.h"
#include "ui_PatchDialog.h"

PatchDialog::PatchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PatchDialog)
{
    ui->setupUi(this);
}

PatchDialog::~PatchDialog()
{
    delete ui;
}
