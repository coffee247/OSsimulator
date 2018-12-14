#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <QObject>
#include "clock.h"
#include "pcb.h"
#include "cpu.h"
#include <chrono>
#include <thread>

class Scheduler : public QObject
{
    Q_OBJECT
public:
    explicit Scheduler(QObject *parent = nullptr);

    void addToNewQueue(PCB *aPCB);
    void addToWaitingQueue(PCB *aPCB);
    void addToTerminatedQueue(PCB *aPCB);
    void processNewQueue();
    void processReadyQueue();
    void processWaitingQueue();
    void processOutput();
    void handleInterrupt();

    QList<PCB*> getNewQueue();
    QList<PCB*> getReadyQueue();

signals:
    void NewQueueValueChanged(QString message, PCB *aPCB);
    void sendFromNewToReadyQueueTail(QString message, PCB *aPCB);  // send PCB to Tail (back) of Ready Queue
    void rotateRunningToReady();
    void WaitingQueueValueChanged(QString message, PCB *aPCB);
    void TerminatedQueueValueChanged(QString message, PCB *aPCB);
    void MemoryChanged(int newValue);
    void SetPCvalueLabel(int PCvalue);
    void SetBurtTimeValueLabel(QString Burst);
    void upDateOutput(QString output);
    void setCritical(bool citical);
    void sendFromReadyToWaitingQueueTail(QString message, PCB *aPCB);  // send PCB to Tail (back) of Waiting Queue
    void sendFromWaitingtoReadyQueue(QString message, PCB *aPCB);


public slots:
    void OnClockTick();

private:
    Clock *clock;
    CPU *myCPU;

    QList<PCB*> NewQueue;
    QList<PCB*> ReadyQueue;
    QList<PCB*> WaitingQueue;
    QList<PCB*> TerminatedQueue;

    void resetQuantum();
    void readyQueuePopFront();



// Private METHODS
    void connectClock();
};

#endif // SCHEDULER_H
