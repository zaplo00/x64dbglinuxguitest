#ifndef ENTROPYDIALOG_H
#define ENTROPYDIALOG_H

#include <QDialog>

namespace Ui {
class EntropyDialog;
}

class EntropyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EntropyDialog(QWidget *parent = 0);
    ~EntropyDialog();

private:
    Ui::EntropyDialog *ui;
};

#endif // ENTROPYDIALOG_H
