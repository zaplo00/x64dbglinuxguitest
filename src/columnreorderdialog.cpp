#include "headers/columnreorderdialog.h"
#include "ui_ColumnReorderDialog.h"

ColumnReorderDialog::ColumnReorderDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::ColumnReorderDialog)
{
    ui->setupUi(this);
}

ColumnReorderDialog::~ColumnReorderDialog()
{
    delete ui;
}
