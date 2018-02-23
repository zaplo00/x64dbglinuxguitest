#include "headers/yararuleselectiondialog.h"
#include "ui_YaraRuleSelectionDialog.h"

YaraRuleSelectionDialog::YaraRuleSelectionDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::YaraRuleSelectionDialog)
{
    ui->setupUi(this);
}

YaraRuleSelectionDialog::~YaraRuleSelectionDialog()
{
    delete ui;
}
