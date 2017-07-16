#include "queue_thread.h"
#include <QDebug>
queue_thread::queue_thread(QString s)
{
 delay = 3;
 this->name = s;
}
queue_thread::queue_thread(QString s, int delay)
{
 this->delay = delay;
 this->name = s;
}
void queue_thread::run()
{
 int i = 0;
 while(i <= 20)
 {
 qDebug() <<this->name << " " << i;
 QThread::sleep(this->delay);
 i++;
 }
}
