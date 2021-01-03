#include "mainwindow.h"

#include <QApplication>
#include "glview.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    glView win;
    win.show();

//    MainWindow w;
//    w.show();
    return a.exec();
}
