#include "headers/gotodialog.h"
#include "ui_GotoDialog.h"

GotoDialog::GotoDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::GotoDialog)
{
    ui->setupUi(this);
}

GotoDialog::~GotoDialog()
{
    delete ui;
}
