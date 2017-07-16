#include "monday_thread2.h"
#include <QDebug>

extern int xglobal;

monday_thread2::monday_thread2(int delay)
{
    this->delay = delay;
}

void monday_thread2::run()
{
    int i = 0;
    while (i <= delay) {
        int lokal = xglobal;
        qDebug()<<"Ini Monday Thread 2 KHOMAINI"<<i;
        i++;

        lokal += 7;
        lokal -= 6;
        lokal += 2;
        xglobal = lokal;
    }
}
