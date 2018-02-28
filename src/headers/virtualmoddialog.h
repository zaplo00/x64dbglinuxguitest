#ifndef VIRTUALMODDIALOG_H
#define VIRTUALMODDIALOG_H

#include <QDialog>

namespace Ui {
class VirtualModDialog;
}

class VirtualModDialog : public QDialog
{
    Q_OBJECT

public:
    explicit VirtualModDialog(QWidget *parent = 0);
    ~VirtualModDialog();

private:
    Ui::VirtualModDialog *ui;
};

#endif // VIRTUALMODDIALOG_H
