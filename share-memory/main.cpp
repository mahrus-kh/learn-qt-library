#include <QCoreApplication>
#include "monday_thread1.h"
#include "monday_thread2.h"
#include <QThread>
#include <QDebug>

int xglobal;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    xglobal = 4;

    monday_thread1 t1(8);
    monday_thread2 t2(8);

    t1.start();
    t2.start();

    t1.wait();
    t2.wait();

  qDebug()<<"Hasil Monday Akhir"<<xglobal;

    //return a.exec();
}
