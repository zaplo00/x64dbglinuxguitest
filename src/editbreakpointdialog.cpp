#include "headers/editbreakpointdialog.h"
#include "ui_EditBreakpointDialog.h"

EditBreakpointDialog::EditBreakpointDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::EditBreakpointDialog)
{
    ui->setupUi(this);
}

EditBreakpointDialog::~EditBreakpointDialog()
{
    delete ui;
}
