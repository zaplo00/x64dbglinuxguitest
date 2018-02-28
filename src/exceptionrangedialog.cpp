#include "headers/exceptionrangedialog.h"
#include "ui_ExceptionRangeDialog.h"

ExceptionRangeDialog::ExceptionRangeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExceptionRangeDialog)
{
    ui->setupUi(this);
}

ExceptionRangeDialog::~ExceptionRangeDialog()
{
    delete ui;
}
