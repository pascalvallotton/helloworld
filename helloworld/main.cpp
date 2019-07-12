#include "mainwindow.h"
#include <QApplication>
//another small change
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
