#include "headers/gotodialog.h"
#include "ui_GotoDialog.h"

GotoDialog::GotoDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GotoDialog)
{
    ui->setupUi(this);
}

GotoDialog::~GotoDialog()
{
    delete ui;
}
