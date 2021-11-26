#include "mainwindow.h"
#include <QWidget>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("C:/Users/User/Desktop/build-32bit-Desktop_Qt_5_12_11_MinGW_32_bit-Release/pictures/3.png"));

    MainWindow w;
    w.setWindowTitle("Comsize");
    w.show();
    return a.exec();



}
