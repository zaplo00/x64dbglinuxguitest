#ifndef COLUMNREORDERDIALOG_H
#define COLUMNREORDERDIALOG_H

#include <QDialog>

namespace Ui {
class ColumnReorderDialog;
}

class ColumnReorderDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ColumnReorderDialog(QDialog *parent = 0);
    ~ColumnReorderDialog();

private:
    Ui::ColumnReorderDialog *ui;
};

#endif // COLUMNREORDERDIALOG_H
