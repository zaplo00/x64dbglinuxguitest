#ifndef CUSTOMIZEMENUDIALOG_H
#define CUSTOMIZEMENUDIALOG_H

#include <QDialog>

namespace Ui {
class CustomizeMenuDialog;
}

class CustomizeMenuDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CustomizeMenuDialog(QDialog *parent = 0);
    ~CustomizeMenuDialog();

private:
    Ui::CustomizeMenuDialog *ui;
};

#endif // CUSTOMIZEMENUDIALOG_H
