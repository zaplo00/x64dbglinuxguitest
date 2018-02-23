#include "headers/datacopydialog.h"
#include "ui_DataCopyDialog.h"

DataCopyDialog::DataCopyDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::DataCopyDialog)
{
    ui->setupUi(this);
}

DataCopyDialog::~DataCopyDialog()
{
    delete ui;
}
