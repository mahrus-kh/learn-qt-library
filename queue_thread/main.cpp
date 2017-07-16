#include <QCoreApplication>
#include <QDebug>
#include "queue_thread.h"
int main(int argc, char *argv[])
{
 QCoreApplication a(argc, argv);
 queue_thread antrian1("antrian1",2); //membuat obyek antrian 1
 queue_thread antrian2("antrian 2",5), antrian3("antrian3"); //antrian 3 dengan default delay (3 ms)
 antrian1.start();
 antrian2.start();
 antrian3.start();
 return a.exec();
}
