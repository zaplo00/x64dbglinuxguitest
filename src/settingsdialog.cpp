#include "headers/settingsdialog.h"
#include "ui_SettingsDialog.h"

SettingsDialog::SettingsDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
}