#ifndef QUEUE_THREAD_H
#define QUEUE_THREAD_H

#include <QThread>
#include <QString>

class queue_thread : public QThread
 //Kita membuat kelas untuk perintah-perintah
 //yang akan dijalankan sebagai thread
{
public:
 explicit queue_thread(QString s);
 explicit queue_thread(QString s,int delay);
 void run(); // fungsi ini harus dibuat
 // kalau membuat turunan kelas QThread
 // run() otomatis dijalankan pada thread start
private:
 QString name;
 int delay;
};



#endif // QUEUE_THREAD_H
