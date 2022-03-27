#include "callperiodthread.h"

#include <QDebug>

CallPeriodThread::CallPeriodThread()
{

}

void CallPeriodThread::run(){
    while(true){

        /* A wait statement */
        while(!callPeriodThreadActive){
            msleep(1000);
        }

        /* Loop this */
        while (true) {
            emit signalCallFunction();
            msleep(periodTime);
        }

    }
}

void CallPeriodThread::slotSetCallPeriodThreadActive(bool active, int periodTime){
    callPeriodThreadActive = active;
    this->periodTime = periodTime;
}

