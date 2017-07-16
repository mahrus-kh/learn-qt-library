#ifndef MONDAY_THREAD2_H
#define MONDAY_THREAD2_H
#include <QThread>
#include <QMutex>


class monday_thread2:public QThread
{
public:
    monday_thread2(int delay);
    void run();

private:
    int delay;
   // QMutex mutex;
};

#endif // MONDAY_THREAD2_H
