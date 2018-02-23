#include "headers/codepageselectiondialog.h"
#include "ui_CodepageSelectionDialog.h"

CodepageSelectionDialog::CodepageSelectionDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::CodepageSelectionDialog)
{
    ui->setupUi(this);
}

CodepageSelectionDialog::~CodepageSelectionDialog()
{
    delete ui;
}
