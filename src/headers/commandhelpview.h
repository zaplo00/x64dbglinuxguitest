#ifndef COMMANDHELPVIEW_H
#define COMMANDHELPVIEW_H

#include <QWidget>

namespace Ui {
class CommandHelpView;
}

class CommandHelpView : public QWidget
{
    Q_OBJECT

public:
    explicit CommandHelpView(QWidget *parent = 0);
    ~CommandHelpView();

private:
    Ui::CommandHelpView *ui;
};

#endif // COMMANDHELPVIEW_H
