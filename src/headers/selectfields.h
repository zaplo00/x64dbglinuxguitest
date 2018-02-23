#ifndef SELECTFIELDS_H
#define SELECTFIELDS_H

#include <QWidget>

namespace Ui {
class SelectFields;
}

class SelectFields : public QWidget
{
    Q_OBJECT

public:
    explicit SelectFields(QWidget *parent = 0);
    ~SelectFields();

private:
    Ui::SelectFields *ui;
};

#endif // SELECTFIELDS_H
