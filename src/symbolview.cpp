#include "headers/symbolview.h"
#include "ui_SymbolView.h"

SymbolView::SymbolView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SymbolView)
{
    ui->setupUi(this);
}

SymbolView::~SymbolView()
{
    delete ui;
}
