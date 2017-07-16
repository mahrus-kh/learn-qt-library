#ifndef MONDAY_THREAD1_H
#define MONDAY_THREAD1_H
#include <QThread>
#include <QMutex>


class monday_thread1:public QThread
{
public:
    monday_thread1(int delay);
    void run();

private:
    int delay;
    //QMutex mutex;

};

#endif // MONDAY_THREAD1_H

