#include "headers/xrefbrowsedialog.h"
#include "ui_XrefBrowseDialog.h"

XrefBrowseDialog::XrefBrowseDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::XrefBrowseDialog)
{
    ui->setupUi(this);
}

XrefBrowseDialog::~XrefBrowseDialog()
{
    delete ui;
}
