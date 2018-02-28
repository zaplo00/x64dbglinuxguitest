#include "headers/messagesbreakpoints.h"
#include "ui_MessagesBreakpoints.h"

MessagesBreakpoints::MessagesBreakpoints(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MessagesBreakpoints)
{
    ui->setupUi(this);
}

MessagesBreakpoints::~MessagesBreakpoints()
{
    delete ui;
}
