#include <QCoreApplication>
#include <QDebug>
#include "mythread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    mythread antrian1("antrian1",5);
    mythread antrian2("antrian 2",15), antrian3("antrian3");

    antrian1.start();
    antrian2.start();
    antrian3.start();


    return a.exec();
}
