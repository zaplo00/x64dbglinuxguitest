#include "headers/lineeditdialog.h"
#include "ui_LineEditDialog.h"

LineEditDialog::LineEditDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::LineEditDialog)
{
    ui->setupUi(this);
}

LineEditDialog::~LineEditDialog()
{
    delete ui;
}
