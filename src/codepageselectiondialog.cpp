#include "headers/codepageselectiondialog.h"
#include "ui_CodepageSelectionDialog.h"

CodepageSelectionDialog::CodepageSelectionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CodepageSelectionDialog)
{
    ui->setupUi(this);
}

CodepageSelectionDialog::~CodepageSelectionDialog()
{
    delete ui;
}
