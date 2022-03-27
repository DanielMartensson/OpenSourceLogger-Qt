#ifndef CALLPERIODTHREAD_H
#define CALLPERIODTHREAD_H

#include <QThread>

class CallPeriodThread : public QThread
{
    Q_OBJECT
public:
    CallPeriodThread();

signals:
    void signalCallFunction();

public slots:
    void slotSetCallPeriodThreadActive(bool active, int periodTime);

private:
    /* Function */
    void run();

    /* Other fields */
    bool callPeriodThreadActive;
    int periodTime;

};

#endif // CALLPERIODTHREAD_H
