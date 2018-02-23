#include "headers/pagememoryrights.h"
#include "ui_PageMemoryRights.h"

PageMemoryRights::PageMemoryRights(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageMemoryRights)
{
    ui->setupUi(this);
}

PageMemoryRights::~PageMemoryRights()
{
    delete ui;
}
