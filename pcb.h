#ifndef PCB_H
#define PCB_H

#include <QObject>
#include "state.h"
#include <QDebug>
#include "programline.h"

class PCB : public QObject
{
    Q_OBJECT
public:
    explicit PCB(QObject *parent = nullptr);


    //GETTERS
    int getPC();
    int getPID();
    int getPriority();
    int getArrivalTime();
    int getLastAccessed();
    int getsize();
    int getioRequests();
    int gettotalRuntime();
    int getCreationTime();
    QList<ProgramLine*> getProgramLines();
    QString getName();

    //SETTERS
    void advancePC();
    void incrementIoRequests();
    void incrementTotalRuntime();
    void setName(QString name);
    void setState(State state);
    void setCreationTime(int ticks);
    void setLastAccessed(int ticks);
    void setSize(int size);
    void addProgramLines(ProgramLine *line);


signals:
    void PCBvalueChanged();

public slots:

private:
    int static GlobalPID;
    State state;
    int PC = 1;
    int PID = 0;
    int Priority;
    int CreationTime = -1;
    int ArrivalTime;
    int LastAccessed;
    int size;
    int ioRequests = 0;
    int totalRuntime = 0;
    QString name;
    QList<PCB*> subscribers;  // may be used for message passing (observer pattern)
    QList<ProgramLine*> programLinesList;

// Private METHODS
    void setPID();
};

#endif // PCB_H
