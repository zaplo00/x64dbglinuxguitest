#ifndef DATACOPYDIALOG_H
#define DATACOPYDIALOG_H

#include <QDialog>

namespace Ui {
class DataCopyDialog;
}

class DataCopyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DataCopyDialog(QWidget *parent = 0);
    ~DataCopyDialog();

private:
    Ui::DataCopyDialog *ui;
};

#endif // DATACOPYDIALOG_H
