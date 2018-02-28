#ifndef ATTACHDIALOG_H
#define ATTACHDIALOG_H

#include <QDialog>

namespace Ui {
class AttachDialog;
}

class AttachDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AttachDialog(QWidget *parent = 0);
    ~AttachDialog();

private:
    Ui::AttachDialog *ui;
};

#endif // ATTACHDIALOG_H
