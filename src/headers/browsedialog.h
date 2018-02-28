#ifndef BROWSEDIALOG_H
#define BROWSEDIALOG_H

#include <QDialog>

namespace Ui {
class BrowseDialog;
}

class BrowseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BrowseDialog(QWidget *parent = 0);
    ~BrowseDialog();

private:
    Ui::BrowseDialog *ui;
};

#endif // BROWSEDIALOG_H
