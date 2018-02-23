#include "headers/customizemenudialog.h"
#include "ui_CustomizeMenuDialog.h"

CustomizeMenuDialog::CustomizeMenuDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::CustomizeMenuDialog)
{
    ui->setupUi(this);
}

CustomizeMenuDialog::~CustomizeMenuDialog()
{
    delete ui;
}
