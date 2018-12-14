#ifndef CPU_H
#define CPU_H

#include <QObject>
#include "clock.h"
#include "pagetableentry.h"

class CPU : public QObject
{
    Q_OBJECT
public:
    explicit CPU(QObject *parent = nullptr);

    int getTotalMemory();
    int getFreeMemory();

    void setFreeMemory(int consumed);
    void setQuantum(int Quantum);
    int getQuantum();

signals:

public slots:
    void OnClockTick();

private:
    Clock *clock;
    int const totalMemory = 2048;
    int freeMemory;
    int Quantum;
    QVector<PageTableEntry> *PageTable;


// Private METHODS
    void connectClock();
};

#endif // CPU_H
