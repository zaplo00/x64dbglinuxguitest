#include "headers/patchdialoggroupselector.h"
#include "ui_PatchDialogGroupSelector.h"

PatchDialogGroupSelector::PatchDialogGroupSelector(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::PatchDialogGroupSelector)
{
    ui->setupUi(this);
}

PatchDialogGroupSelector::~PatchDialogGroupSelector()
{
    delete ui;
}
