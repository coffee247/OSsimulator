#include "clock.h"

Clock::Clock(QObject *parent) : QObject(parent)
{

}

void Clock::setInterval(int mSecs)
{
    this->interval = mSecs;
}

void Clock::updateInterval(int mSecs)
{
    this->interval = mSecs;
    this->timer->setInterval(interval);
}

int Clock::getInterval()
{
    return this->timer->interval();
}


void Clock::MyTimerSlot()
{
    tick();
    emit ClockTick(this->ticks);
}

void Clock::start()
{
    timer = new QTimer(this);
    // setup signal and slot
    connect(timer, SIGNAL(timeout()),
          this, SLOT(MyTimerSlot()));
    timer->start(interval);
}

void Clock::tick()
{
    ++this->ticks;
}

int Clock::getTicks()
{
    return this->ticks;
}
