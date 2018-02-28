#include "headers/assembledialog.h"
#include "ui_AssembleDialog.h"

AssembleDialog::AssembleDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AssembleDialog)
{
    ui->setupUi(this);
}

AssembleDialog::~AssembleDialog()
{
    delete ui;
}
