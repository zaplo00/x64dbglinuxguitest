#ifndef SELECTFIELDS_H
#define SELECTFIELDS_H

#include <QDialog>

namespace Ui {
class SelectFields;
}

class SelectFields : public QDialog
{
    Q_OBJECT

public:
    explicit SelectFields(QWidget *parent = 0);
    ~SelectFields();

private:
    Ui::SelectFields *ui;
};

#endif // SELECTFIELDS_H
