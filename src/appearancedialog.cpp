#include "headers/appearancedialog.h"
#include "ui_AppearanceDialog.h"

AppearanceDialog::AppearanceDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::AppearanceDialog)
{
    ui->setupUi(this);
}

AppearanceDialog::~AppearanceDialog()
{
    delete ui;
}
