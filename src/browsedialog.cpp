#include "headers/browsedialog.h"
#include "ui_BrowseDialog.h"

BrowseDialog::BrowseDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BrowseDialog)
{
    ui->setupUi(this);
}

BrowseDialog::~BrowseDialog()
{
    delete ui;
}
