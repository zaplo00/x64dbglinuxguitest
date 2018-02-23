#ifndef PAGEMEMORYRIGHTS_H
#define PAGEMEMORYRIGHTS_H

#include <QWidget>

namespace Ui {
class PageMemoryRights;
}

class PageMemoryRights : public QWidget
{
    Q_OBJECT

public:
    explicit PageMemoryRights(QWidget *parent = 0);
    ~PageMemoryRights();

private:
    Ui::PageMemoryRights *ui;
};

#endif // PAGEMEMORYRIGHTS_H
