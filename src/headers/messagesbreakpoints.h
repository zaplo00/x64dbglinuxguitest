#ifndef MESSAGESBREAKPOINTS_H
#define MESSAGESBREAKPOINTS_H

#include <QDialog>

namespace Ui {
class MessagesBreakpoints;
}

class MessagesBreakpoints : public QDialog
{
    Q_OBJECT

public:
    explicit MessagesBreakpoints(QDialog *parent = 0);
    ~MessagesBreakpoints();

private:
    Ui::MessagesBreakpoints *ui;
};

#endif // MESSAGESBREAKPOINTS_H
