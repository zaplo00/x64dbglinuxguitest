#ifndef MISCUTIL_H
#define MISCUTIL_H

#include <QIcon>
#include "types.h"

class QWidget;
class QByteArray;

void SetApplicationIcon(WId winId);
QByteArray & ByteReverse(QByteArray & array);
QByteArray ByteReverse(QByteArray && array);
bool SimpleInputBox(QWidget* parent, const QString & title, QString defaultValue, QString & output, const QString & placeholderText, QIcon* icon = nullptr);
bool SimpleChoiceBox(QWidget* parent, const QString & title, QString defaultValue, const QStringList & choices, QString & output, bool editable, const QString & placeholderText, QIcon* icon = nullptr, int minimumContentsLength = -1);
void SimpleErrorBox(QWidget* parent, const QString & title, const QString & text);
void SimpleWarningBox(QWidget* parent, const QString & title, const QString & text);
void SimpleInfoBox(QWidget* parent, const QString & title, const QString & text);
QString getSymbolicName(duint addr);
bool isEaster();
QString couldItBeSeasonal(QString icon);

#define DIcon(file) QIcon(QString(":/icons/images/").append(couldItBeSeasonal(file)))
#endif // MISCUTIL_H
