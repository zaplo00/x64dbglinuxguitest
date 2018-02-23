#include "headers/favouritetools.h"
#include "ui_FavouriteTools.h"

FavouriteTools::FavouriteTools(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FavouriteTools)
{
    ui->setupUi(this);
}

FavouriteTools::~FavouriteTools()
{
    delete ui;
}
