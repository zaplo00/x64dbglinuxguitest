#include "headers/cpuwidget.h"
#include "ui_CPUWidget.h"

CPUWidget::CPUWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CPUWidget)
{
    ui->setupUi(this);
}

CPUWidget::~CPUWidget()
{
    delete ui;
}
