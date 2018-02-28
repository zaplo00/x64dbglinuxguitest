#ifndef ASSEMBLEDIALOG_H
#define ASSEMBLEDIALOG_H

#include <QDialog>

namespace Ui {
class AssembleDialog;
}

class AssembleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AssembleDialog(QWidget *parent = 0);
    ~AssembleDialog();

private:
    Ui::AssembleDialog *ui;
};

#endif // ASSEMBLEDIALOG_H
