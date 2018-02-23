#ifndef FAVOURITETOOLS_H
#define FAVOURITETOOLS_H

#include <QWidget>

namespace Ui {
class FavouriteTools;
}

class FavouriteTools : public QWidget
{
    Q_OBJECT

public:
    explicit FavouriteTools(QWidget *parent = 0);
    ~FavouriteTools();

private:
    Ui::FavouriteTools *ui;
};

#endif // FAVOURITETOOLS_H
