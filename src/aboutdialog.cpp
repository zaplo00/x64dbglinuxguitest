#include "headers/aboutdialog.h"
#include "ui_AboutDialog.h"

AboutDialog::AboutDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
}

AboutDialog::~AboutDialog()
{
    delete ui;
}
