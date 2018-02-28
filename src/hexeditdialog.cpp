#include "headers/hexeditdialog.h"
#include "ui_HexEditDialog.h"

HexEditDialog::HexEditDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HexEditDialog)
{
    ui->setupUi(this);
}

HexEditDialog::~HexEditDialog()
{
    delete ui;
}
