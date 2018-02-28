#include "headers/entropydialog.h"
#include "ui_EntropyDialog.h"

EntropyDialog::EntropyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EntropyDialog)
{
    ui->setupUi(this);
}

EntropyDialog::~EntropyDialog()
{
    delete ui;
}
