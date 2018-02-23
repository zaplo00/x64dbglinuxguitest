#ifndef WORDEDITDIALOG_H
#define WORDEDITDIALOG_H

#include <QDialog>

namespace Ui {
class WordEditDialog;
}

class WordEditDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WordEditDialog(QDialog *parent = 0);
    ~WordEditDialog();

private:
    Ui::WordEditDialog *ui;
};

#endif // WORDEDITDIALOG_H
