#ifndef SYMBOLVIEW_H
#define SYMBOLVIEW_H

#include <QWidget>

namespace Ui {
class SymbolView;
}

class SymbolView : public QWidget
{
    Q_OBJECT

public:
    explicit SymbolView(QWidget *parent = 0);
    ~SymbolView();

private:
    Ui::SymbolView *ui;
};

#endif // SYMBOLVIEW_H
