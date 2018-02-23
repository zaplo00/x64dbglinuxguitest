#include "headers/commandhelpview.h"
#include "ui_CommandHelpView.h"

CommandHelpView::CommandHelpView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CommandHelpView)
{
    ui->setupUi(this);
}

CommandHelpView::~CommandHelpView()
{
    delete ui;
}
