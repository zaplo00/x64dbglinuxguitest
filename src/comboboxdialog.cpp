#include "headers/comboboxdialog.h"
#include "ui_ComboBoxDialog.h"

ComboBoxDialog::ComboBoxDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::ComboBoxDialog)
{
    ui->setupUi(this);
}

ComboBoxDialog::~ComboBoxDialog()
{
    delete ui;
}
