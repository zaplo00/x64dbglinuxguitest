#include "headers/shortcutsdialog.h"
#include "ui_ShortcutsDialog.h"

ShortcutsDialog::ShortcutsDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::ShortcutsDialog)
{
    ui->setupUi(this);
}

ShortcutsDialog::~ShortcutsDialog()
{
    delete ui;
}
