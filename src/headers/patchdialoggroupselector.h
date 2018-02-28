#ifndef PATCHDIALOGGROUPSELECTOR_H
#define PATCHDIALOGGROUPSELECTOR_H

#include <QDialog>

namespace Ui {
class PatchDialogGroupSelector;
}

class PatchDialogGroupSelector : public QDialog
{
    Q_OBJECT

public:
    explicit PatchDialogGroupSelector(QWidget *parent = 0);
    ~PatchDialogGroupSelector();

private:
    Ui::PatchDialogGroupSelector *ui;
};

#endif // PATCHDIALOGGROUPSELECTOR_H
