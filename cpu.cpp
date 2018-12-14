#include "cpu.h"

CPU::CPU(QObject *parent) : QObject(parent)
{
    connectClock();
    setParent(parent);
}

int CPU::getTotalMemory()
{
    return this->totalMemory;
}

int CPU::getFreeMemory()
{
    return this->freeMemory;
}

void CPU::setFreeMemory(int free)
{
    this->freeMemory = free;
}

void CPU::setQuantum(int Quantum)
{
    this->Quantum = Quantum;
}

int CPU::getQuantum()
{
    return this->Quantum;
}

void CPU::OnClockTick()
{
    // Do something on every clock tick
}

void CPU::connectClock()
{
    extern Clock *myClock;
    this->clock = myClock;
    connect(clock, &Clock::ClockTick, this, &CPU::OnClockTick);
}
