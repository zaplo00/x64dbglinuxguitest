#ifndef HEXEDITDIALOG_H
#define HEXEDITDIALOG_H

#include <QDialog>

namespace Ui {
class HexEditDialog;
}

class HexEditDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HexEditDialog(QDialog *parent = 0);
    ~HexEditDialog();

private:
    Ui::HexEditDialog *ui;
};

#endif // HEXEDITDIALOG_H
