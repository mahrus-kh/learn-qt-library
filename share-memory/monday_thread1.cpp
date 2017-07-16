#include "monday_thread1.h"
#include <QDebug>

extern int xglobal;

monday_thread1::monday_thread1(int delay)
{
    this->delay = delay;
}

void monday_thread1::run()
{
    int i = 0;
    while (i <= delay) {
        int lokal = xglobal;
        qDebug()<<"Ini Monday Thread 1 MAHRUS"<<i;
        i++;

        lokal += 8;
        lokal -= 3;
        lokal += 1;
        xglobal = lokal;
    }
}
