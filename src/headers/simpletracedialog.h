#ifndef SIMPLETRACEDIALOG_H
#define SIMPLETRACEDIALOG_H

#include <QDialog>

namespace Ui {
class SimpleTraceDialog;
}

class SimpleTraceDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SimpleTraceDialog(QDialog *parent = 0);
    ~SimpleTraceDialog();

private:
    Ui::SimpleTraceDialog *ui;
};

#endif // SIMPLETRACEDIALOG_H
