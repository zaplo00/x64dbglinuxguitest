#ifndef CODEPAGESELECTIONDIALOG_H
#define CODEPAGESELECTIONDIALOG_H

#include <QDialog>

namespace Ui {
class CodepageSelectionDialog;
}

class CodepageSelectionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CodepageSelectionDialog(QWidget *parent = 0);
    ~CodepageSelectionDialog();

private:
    Ui::CodepageSelectionDialog *ui;
};

#endif // CODEPAGESELECTIONDIALOG_H
