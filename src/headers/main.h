#ifndef MAIN_H
#define MAIN_H

#include <QApplication>
#include <QAbstractEventDispatcher>
#include <QMessageBox>
#include "types.h"

#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
#include <QAbstractNativeEventFilter>
#endif

class MyApplication : public QApplication
{
public:
    MyApplication(int & argc, char** argv);
};

int main(int argc, char* argv[]);
extern char currentLocale[MAX_SETTING_SIZE];

#endif // MAIN_H
