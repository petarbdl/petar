#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName(QString("TimeLoggerApplication"));
    a.setOrganizationName("QtWinSoft");
    a.setOrganizationDomain("qtwinsoft.com");
    a.setApplicationVersion(QString("1.0"));
    Login w;
    w.show();

    return a.exec();
}

