#include "headers/entropydialog.h"
#include "ui_EntropyDialog.h"

EntropyDialog::EntropyDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::EntropyDialog)
{
    ui->setupUi(this);
}

EntropyDialog::~EntropyDialog()
{
    delete ui;
}
