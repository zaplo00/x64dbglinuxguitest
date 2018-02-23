#include "headers/patchdialoggroupselector.h"
#include "ui_PatchDialogGroupSelector.h"

PatchDialogGroupSelector::PatchDialogGroupSelector(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PatchDialogGroupSelector)
{
    ui->setupUi(this);
}

PatchDialogGroupSelector::~PatchDialogGroupSelector()
{
    delete ui;
}
