#ifndef APPEARANCEDIALOG_H
#define APPEARANCEDIALOG_H

#include <QDialog>

namespace Ui {
class AppearanceDialog;
}

class AppearanceDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AppearanceDialog(QWidget *parent = 0);
    ~AppearanceDialog();

private:
    Ui::AppearanceDialog *ui;
};

#endif // APPEARANCEDIALOG_H
