#include "headers/simpletracedialog.h"
#include "ui_SimpleTraceDialog.h"

SimpleTraceDialog::SimpleTraceDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SimpleTraceDialog)
{
    ui->setupUi(this);
}

SimpleTraceDialog::~SimpleTraceDialog()
{
    delete ui;
}
