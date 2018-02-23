#ifndef GOTODIALOG_H
#define GOTODIALOG_H

#include <QDialog>

namespace Ui {
class GotoDialog;
}

class GotoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GotoDialog(QDialog *parent = 0);
    ~GotoDialog();

private:
    Ui::GotoDialog *ui;
};

#endif // GOTODIALOG_H
