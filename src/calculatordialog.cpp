#include "headers/calculatordialog.h"
#include "ui_CalculatorDialog.h"

CalculatorDialog::CalculatorDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::CalculatorDialog)
{
    ui->setupUi(this);
}

CalculatorDialog::~CalculatorDialog()
{
    delete ui;
}
