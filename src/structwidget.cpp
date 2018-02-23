#include "headers/structwidget.h"
#include "ui_StructWidget.h"

StructWidget::StructWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StructWidget)
{
    ui->setupUi(this);
}

StructWidget::~StructWidget()
{
    delete ui;
}
