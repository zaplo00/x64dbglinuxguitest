#ifndef YARARULESELECTIONDIALOG_H
#define YARARULESELECTIONDIALOG_H

#include <QDialog>

namespace Ui {
class YaraRuleSelectionDialog;
}

class YaraRuleSelectionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit YaraRuleSelectionDialog(QWidget *parent = 0);
    ~YaraRuleSelectionDialog();

private:
    Ui::YaraRuleSelectionDialog *ui;
};

#endif // YARARULESELECTIONDIALOG_H
