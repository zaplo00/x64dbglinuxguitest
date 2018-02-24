#include "headers/pagememoryrights.h"
#include "ui_PageMemoryRights.h"

PageMemoryRights::PageMemoryRights(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::PageMemoryRights)
{
    ui->setupUi(this);
}

PageMemoryRights::~PageMemoryRights()
{
    delete ui;
}
