#include "mainwindow.h"
#include <QWidget>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("pictures/3.png"));

    MainWindow w;
    w.setWindowTitle("Neptun");
    w.show();
    return a.exec();



}
