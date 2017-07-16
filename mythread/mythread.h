#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include <QString>


class mythread : public QThread
        //Kita membuat kelas untuk perintah-perintah
        //yang akan dijalankan sebagai thread
{
public:
    explicit mythread(QString s);
    explicit mythread(QString s,int delay);
    void run(); // fungsi ini harus dibuat
                // kalau membuat turunan kelas QThread
                // run() otomatis dijalankan pada thread start
private:
    QString name;
    int delay;
};

#endif // MYTHREAD_H
