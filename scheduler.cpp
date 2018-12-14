#include "scheduler.h"
#include "mainwindow.h"

Scheduler::Scheduler(QObject *parent) : QObject(parent)  // CONSTRUCTOR
{
    connectClock();
    extern CPU *myCPU;
    this->myCPU = myCPU;
    this->NewQueue = QList<PCB*>();
    this->ReadyQueue = QList<PCB*>();
    this->WaitingQueue = QList<PCB*>();
    this->TerminatedQueue = QList<PCB*>();
    emit setCritical(false);
}


void Scheduler::addToNewQueue(PCB *aPCB)
{
    aPCB->setCreationTime(this->clock->getTicks());
    aPCB->setState(NEW);
    this->NewQueue.append(aPCB);
    emit NewQueueValueChanged("PID #", aPCB);  // insert listing in NewQueueWidget
}

void Scheduler::addToWaitingQueue(PCB *aPCB)
{
    this->WaitingQueue.append(aPCB);
    // MUCH more to do here!
}

void Scheduler::addToTerminatedQueue(PCB *aPCB)
{
    int memoryGiveBack = aPCB->getsize();
    emit TerminatedQueueValueChanged("PID #", ReadyQueue.front());
    ReadyQueue.front()->setState(TERMINATED);
    TerminatedQueue.append(ReadyQueue.takeFirst());
    qDebug() << "PID " << TerminatedQueue.front()->getPID() << " terminated";
    myCPU->setFreeMemory(myCPU->getFreeMemory()+memoryGiveBack);
    emit MemoryChanged(myCPU->getFreeMemory());
}

QList<PCB *> Scheduler::getNewQueue()
{
    return this->NewQueue;
}

QList<PCB *> Scheduler::getReadyQueue()
{
    return this->ReadyQueue;
}


void Scheduler::OnClockTick() // Do something on every clock tick
{
    processNewQueue();
    processReadyQueue();
    processWaitingQueue();
}


void Scheduler::resetQuantum()
{
    ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->setQuantum(this->myCPU->getQuantum());
}

void Scheduler::readyQueuePopFront()
{
    if(ReadyQueue.count()>1)
    {
        ReadyQueue.pop_front();
    }
}




void Scheduler::processNewQueue()  // Move items from New to Ready as memory becomes available
{
    if(!(NewQueue.isEmpty()))
    {
        if(NewQueue.front()->getsize() <= myCPU->getFreeMemory())  // if there is room in memory to Load this file ...
        {
            // Record the drop in free memory
            int free = myCPU->getFreeMemory() - NewQueue.front()->getsize();
            myCPU->setFreeMemory(free);
            // Add the Process to ReadyQueue
            ReadyQueue.append(NewQueue.front());
            resetQuantum();
            // Update the UI with Momory Change
             emit sendFromNewToReadyQueueTail("PID #", NewQueue.front());
            // Remove the Process from NewQueue
            NewQueue.pop_front();
            // Update the UI with Momory Change
            emit MemoryChanged(free); // Sets the free Memory value in Free Memory bar

        }
    }
}

void Scheduler::processWaitingQueue()
{
    if(!(WaitingQueue.isEmpty()))
    {
       int burst = WaitingQueue.front()->getProgramLines().at(WaitingQueue.front()->getPC()-1)->getBurstTime();
       if(burst == 0)
       {
            ReadyQueue.append(WaitingQueue.front());
            emit sendFromWaitingtoReadyQueue("PID #", WaitingQueue.front());
            WaitingQueue.front()->advancePC();
            WaitingQueue.pop_front();
       }
       else
       {
           WaitingQueue.front()->getProgramLines().at(WaitingQueue.front()->getPC()-1)->decrementBurstTime();
       }
    }
}

void Scheduler::processOutput()
{
        if((ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->getCommand() == "Output")&&(!(ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->getOutput() =="")))
        {
            QString outputstring = QString::number(ReadyQueue.front()->getPID());
            outputstring.prepend("PID ");
            outputstring.append(" - ");
            emit upDateOutput(outputstring.append(ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->getOutput()));
        }
}

void Scheduler::handleInterrupt()
{
    if(!(ReadyQueue.isEmpty()))
    {
        addToWaitingQueue(ReadyQueue.front());
        emit sendFromReadyToWaitingQueueTail("PID #", ReadyQueue.front());
        ReadyQueue.pop_front();

    }
}

void Scheduler::processReadyQueue()
{
    if(!(ReadyQueue.isEmpty()))
    {
        if((ReadyQueue.front()->getPC() < ReadyQueue.front()->getProgramLines().count()) && (ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->getCommand()=="IO"))
        {
            emit sendFromReadyToWaitingQueueTail("PID #", ReadyQueue.front());
            WaitingQueue.append(ReadyQueue.front());
            ReadyQueue.pop_front();
        }
    }

    if(!(ReadyQueue.isEmpty()))
    {
        int burst = ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->getBurstTime();

        int PC = ReadyQueue.front()->getPC();
        emit SetPCvalueLabel(PC);
        emit SetBurtTimeValueLabel(QString::number(burst)); // Emit with BurstTime of line at PC
        emit setCritical(false);
        processOutput();


        // CRITICAL SECTION
        if((ReadyQueue.front()->getPC() < ReadyQueue.front()->getProgramLines().count()) && (ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->getCommand()=="CriCalculate"))
        {
            emit setCritical(true);
            qDebug() << "RUNNING CRITICAL SECTION IN PID " <<  ReadyQueue.front()->getPID() << " at PC" << ReadyQueue.front()->getPC() << " BurstTime Remaining" << burst;
            int timeout = 1000;
            if((ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->getBurstTime()>0) && (timeout > 0))
            {
                ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->decrementBurstTime();
                --timeout;
            }
            else
            {
                ReadyQueue.front()->advancePC();
            }
        }  // End IF Critical Sectioon


        // NON CRITICAL SECTIONS
        else if(ReadyQueue.front()->getPC() < ReadyQueue.front()->getProgramLines().count()) // If PC not past last line ...
        {
            qDebug() << "RUNNING PID " <<  ReadyQueue.front()->getPID() << " at PC" << ReadyQueue.front()->getPC() << " BurstTime Remaining" << burst << " QUANTUM " << ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->getQuantumRemaining();
            int burst = ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->getBurstTime();


            // Good to go ----> If burstTime & Quantum are greater than zero, DECREMENT THEM BOTH / don't move or rotate.  1
            if((burst > 0) && ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->getQuantumRemaining() > 0)
            {
                ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->decrementBurstTime();
                ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->decrementLineQuantum();
            }




            // ELSE If BurstTime is zero, but NOT Quantum ---> Advance PC & Rotate ReadyQueue or Move to Terminated  2
            else if((ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->getBurstTime() == 0) && ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->getQuantumRemaining() > 0)
            {

                emit rotateRunningToReady();
                ReadyQueue.append(ReadyQueue.front());
                ReadyQueue.front()->advancePC();
                if(ReadyQueue.count()>1)
                {
                    ReadyQueue.pop_front();
                }
            }


            // If Quantum is zero, Ran out of time.  Rotate in ReaadyQueue  3
            else if((ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->getBurstTime() > 0) && ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->getQuantumRemaining() == 0)
            {
                emit rotateRunningToReady();
                ReadyQueue.append(ReadyQueue.front());
                resetQuantum();
                readyQueuePopFront();
            }

            // ELSE If Quantum is zero, AND  BurstTime is zero  4
            else if((ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->getBurstTime() == 0) &&
                    ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC()-1)->getQuantumRemaining() == 0)
            {
                emit rotateRunningToReady();
                //                qDebug() << "Rotate & Advance ---> Moved PID #" << ReadyQueue.front()->getPID();
                ReadyQueue.front()->advancePC();
                ReadyQueue.append(ReadyQueue.front());
                resetQuantum();
                if(ReadyQueue.count()>1)
                {
                    ReadyQueue.pop_front();
                }

            }
        }
        else
        {
            //  qDebug() << "PID-" << ReadyQueue.front()->getPID() << " PC-" << ReadyQueue.front()->getPC() << " Burst-" << ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC())->getBurstTime() << " | Quantum-" << ReadyQueue.front()->getProgramLines().at(ReadyQueue.front()->getPC())->getQuantumRemaining();
            addToTerminatedQueue(ReadyQueue.front());
            if(!(ReadyQueue.isEmpty()))
            {
                emit SetPCvalueLabel(0);
            }
            else
            {
                emit SetPCvalueLabel(0);
                emit SetBurtTimeValueLabel(0);
                qDebug() << "NEED to empty Terminated Queue after respources released, memory returned, child processes closes, etc...";
            }
        }
    } // End if Not Empty ReadyQueue
}

void Scheduler::connectClock()
{
    extern Clock *myClock;
    this->clock = myClock;
    connect(clock, &Clock::ClockTick, this, &Scheduler::OnClockTick);
}
