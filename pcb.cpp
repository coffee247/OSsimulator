#include "pcb.h"


int PCB::GlobalPID = 0;

PCB::PCB(QObject *parent) : QObject(parent)
{
    ++GlobalPID;
    this->PID = GlobalPID;
    setState(NEW);  // Processes are born in the NEW state
    setParent(parent);
}


//GETTERS
int PCB::getPC()
{
    return this->PC;
}

int PCB::getPID()
{
    return this->PID;
}

int PCB::getPriority()
{
    return this->Priority;
}

int PCB::getArrivalTime()
{
    return this->ArrivalTime;
}

int PCB::getLastAccessed()
{
    return this->LastAccessed;
}

int PCB::getsize()
{
    return this->size;
}

int PCB::getioRequests()
{
    return this->ioRequests;
}

int PCB::gettotalRuntime()
{
    return this->totalRuntime;
}

int PCB::getCreationTime()
{
    return this->CreationTime;
}

QList<ProgramLine*> PCB::getProgramLines()
{
    return this->programLinesList;
}

QString PCB::getName()
{
    return this->name;
}


//SETTERS
void PCB::advancePC()
{
    ++this->PC;
}

void PCB::incrementIoRequests()
{
    ++this->ioRequests;
}

void PCB::incrementTotalRuntime()
{
    ++this->totalRuntime;
}

void PCB::setName(QString name)
{
    this->name = name;
}

void PCB::setState(State state)
{
    this->state = state;
}

void PCB::setCreationTime(int ticks)
{
    if(this->CreationTime == -1) this->CreationTime = ticks;  // ONLY set if this is the FIRST time called.
}

void PCB::setSize(int size)
{
    this->size = size;
}

void PCB::addProgramLines(ProgramLine *line)
{
    this->programLinesList.append(line);
}



// OTHER METHODS
