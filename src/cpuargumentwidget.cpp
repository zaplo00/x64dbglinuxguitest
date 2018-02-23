#include "headers/cpuargumentwidget.h"
#include "ui_CPUArgumentWidget.h"

CPUArgumentWidget::CPUArgumentWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CPUArgumentWidget)
{
    ui->setupUi(this);
}

CPUArgumentWidget::~CPUArgumentWidget()
{
    delete ui;
}
