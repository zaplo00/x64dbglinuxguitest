#include "src/headers/mainwindow.h"
#include "headers/main.h"
#include "headers/types.h"
#include <QTextCodec>
#include <QFile>
#include <QTranslator>
#include <QTextStream>
#include <QLibraryInfo>

MyApplication::MyApplication(int & argc, char** argv)
    : QApplication(argc, argv)
{
}

char currentLocale[MAX_SETTING_SIZE] = "";

static bool isValidLocale(const QString & locale)
{
    auto allLocales = QLocale::matchingLocales(QLocale::AnyLanguage, QLocale::AnyScript, QLocale::AnyCountry);
    for(auto & l : allLocales)
        if(l.name() == locale || l.name().replace(QRegExp("_.+"), "") == locale)
            return true;
    return false;
}

int main(int argc, char **argv) {
   qputenv("QT_AUTO_SCREEN_SCALE_FACTOR", "1");
   QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
   MyApplication application(argc, argv);

   // Load translations for Qt
       QTranslator qtTranslator;
       if(qtTranslator.load(QString("qt_%1").arg(currentLocale), QLibraryInfo::location(QLibraryInfo::TranslationsPath)))
   application.installTranslator(&qtTranslator);

   //x64dbg and x32dbg can share the same translation
   QTranslator x64dbgTranslator;
   auto path = QString("%1/../translations").arg(QCoreApplication::applicationDirPath());
   if(x64dbgTranslator.load(QString("x64dbg_%1").arg(currentLocale), path))
       application.installTranslator(&x64dbgTranslator);

   // Set QString codec to UTF-8
   QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#if QT_VERSION < QT_VERSION_CHECK(5,0,0)
   QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
   QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
#endif

   qRegisterMetaType<dsint>("dsint");
   qRegisterMetaType<duint>("duint");
   qRegisterMetaType<byte_t>("byte_t");

   // Start GUI
   MainWindow* mainWindow;
   mainWindow = new MainWindow();
   mainWindow->show();

   //execute the application
   int result = application.exec();

   delete mainWindow;
   return result;
}
