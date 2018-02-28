#include "headers/favouritetools.h"
#include "ui_FavouriteTools.h"

FavouriteTools::FavouriteTools(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FavouriteTools)
{
    ui->setupUi(this);
}

FavouriteTools::~FavouriteTools()
{
    delete ui;
}
