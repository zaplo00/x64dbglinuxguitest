#ifndef MESSAGESBREAKPOINTS_H
#define MESSAGESBREAKPOINTS_H

#include <QWidget>

namespace Ui {
class MessagesBreakpoints;
}

class MessagesBreakpoints : public QWidget
{
    Q_OBJECT

public:
    explicit MessagesBreakpoints(QWidget *parent = 0);
    ~MessagesBreakpoints();

private:
    Ui::MessagesBreakpoints *ui;
};

#endif // MESSAGESBREAKPOINTS_H
