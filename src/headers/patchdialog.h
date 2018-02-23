#ifndef PATCHDIALOG_H
#define PATCHDIALOG_H

#include <QDialog>

namespace Ui {
class PatchDialog;
}

class PatchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PatchDialog(QDialog *parent = 0);
    ~PatchDialog();

private:
    Ui::PatchDialog *ui;
};

#endif // PATCHDIALOG_H
