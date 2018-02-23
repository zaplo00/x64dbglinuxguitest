#ifndef CPUARGUMENTWIDGET_H
#define CPUARGUMENTWIDGET_H

#include <QWidget>

namespace Ui {
class CPUArgumentWidget;
}

class CPUArgumentWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CPUArgumentWidget(QWidget *parent = 0);
    ~CPUArgumentWidget();

private:
    Ui::CPUArgumentWidget *ui;
};

#endif // CPUARGUMENTWIDGET_H
