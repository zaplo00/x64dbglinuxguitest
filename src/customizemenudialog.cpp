#include "headers/customizemenudialog.h"
#include "ui_CustomizeMenuDialog.h"

CustomizeMenuDialog::CustomizeMenuDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomizeMenuDialog)
{
    ui->setupUi(this);
}

CustomizeMenuDialog::~CustomizeMenuDialog()
{
    delete ui;
}
