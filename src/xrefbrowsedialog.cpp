#include "headers/xrefbrowsedialog.h"
#include "ui_XrefBrowseDialog.h"

XrefBrowseDialog::XrefBrowseDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::XrefBrowseDialog)
{
    ui->setupUi(this);
}

XrefBrowseDialog::~XrefBrowseDialog()
{
    delete ui;
}
