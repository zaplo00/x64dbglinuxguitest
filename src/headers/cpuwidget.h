#ifndef CPUWIDGET_H
#define CPUWIDGET_H

#include <QWidget>

namespace Ui {
class CPUWidget;
}

class CPUWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CPUWidget(QWidget *parent = 0);
    ~CPUWidget();

private:
    Ui::CPUWidget *ui;
};

#endif // CPUWIDGET_H
