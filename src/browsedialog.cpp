#include "headers/browsedialog.h"
#include "ui_BrowseDialog.h"

BrowseDialog::BrowseDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::BrowseDialog)
{
    ui->setupUi(this);
}

BrowseDialog::~BrowseDialog()
{
    delete ui;
}
