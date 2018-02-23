#ifndef FAVOURITETOOLS_H
#define FAVOURITETOOLS_H

#include <QDialog>

namespace Ui {
class FavouriteTools;
}

class FavouriteTools : public QDialog
{
    Q_OBJECT

public:
    explicit FavouriteTools(QDialog *parent = 0);
    ~FavouriteTools();

private:
    Ui::FavouriteTools *ui;
};

#endif // FAVOURITETOOLS_H
