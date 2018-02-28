#ifndef EDITBREAKPOINTDIALOG_H
#define EDITBREAKPOINTDIALOG_H

#include <QDialog>

namespace Ui {
class EditBreakpointDialog;
}

class EditBreakpointDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditBreakpointDialog(QWidget *parent = 0);
    ~EditBreakpointDialog();

private:
    Ui::EditBreakpointDialog *ui;
};

#endif // EDITBREAKPOINTDIALOG_H
