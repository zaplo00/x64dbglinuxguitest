#include "headers/hexlineedit.h"
#include "ui_HexLineEdit.h"

HexLineEdit::HexLineEdit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HexLineEdit)
{
    ui->setupUi(this);
}

HexLineEdit::~HexLineEdit()
{
    delete ui;
}
