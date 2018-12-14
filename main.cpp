#include "mainwindow.h"
#include <QApplication>

Clock *myClock = new Clock();
CPU *myCPU = new CPU();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
