#ifndef HEXLINEEDIT_H
#define HEXLINEEDIT_H

#include <QWidget>

namespace Ui {
class HexLineEdit;
}

class HexLineEdit : public QWidget
{
    Q_OBJECT

public:
    explicit HexLineEdit(QWidget *parent = 0);
    ~HexLineEdit();

private:
    Ui::HexLineEdit *ui;
};

#endif // HEXLINEEDIT_H
