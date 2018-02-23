#ifndef XREFBROWSEDIALOG_H
#define XREFBROWSEDIALOG_H

#include <QDialog>

namespace Ui {
class XrefBrowseDialog;
}

class XrefBrowseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit XrefBrowseDialog(QDialog *parent = 0);
    ~XrefBrowseDialog();

private:
    Ui::XrefBrowseDialog *ui;
};

#endif // XREFBROWSEDIALOG_H
