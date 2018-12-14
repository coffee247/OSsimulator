#ifndef CLOCK_H
#define CLOCK_H

#include <QObject>
#include <QTimer>
#include <Thread>

class Clock : public QObject
{
    Q_OBJECT
public:
    explicit Clock(QObject *parent = nullptr);
    QTimer *timer;
    void setInterval(int mSecs);
    int getInterval();

    int getTicks();


signals:
       void ClockTick(int);

public slots:
       void MyTimerSlot();
       void start();

private:
    int ticks = 0;
    int interval = 500;

    void tick();

};

#endif // CLOCK_H
