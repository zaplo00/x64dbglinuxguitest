#ifndef EXCEPTIONRANGEDIALOG_H
#define EXCEPTIONRANGEDIALOG_H

#include <QDialog>

namespace Ui {
class ExceptionRangeDialog;
}

class ExceptionRangeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ExceptionRangeDialog(QWidget *parent = 0);
    ~ExceptionRangeDialog();

private:
    Ui::ExceptionRangeDialog *ui;
};

#endif // EXCEPTIONRANGEDIALOG_H
