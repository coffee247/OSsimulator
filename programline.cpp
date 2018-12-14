#include "programline.h"

ProgramLine::ProgramLine(QObject *parent) : QObject(parent)
{

}

QString ProgramLine::getCommand()
{
    return this->command;
}

QString ProgramLine::getOutput()
{
    return this->output;
}

int ProgramLine::getBurstTime()
{
    return this->burstTime;
}

int ProgramLine::getQuantumRemaining()
{
    return this->QuantumRemaining;
}

void ProgramLine::setCommand(QString command)
{
    this->command = command;
}

void ProgramLine::setOutput(QString output)
{
    this->output = output;
}

void ProgramLine::setBurstTime(int burstTime)
{
    this->burstTime = burstTime;
}

void ProgramLine::decrementLineQuantum()
{
    --this->QuantumRemaining;
}

void ProgramLine::decrementBurstTime()
{
    --this->burstTime;
}

void ProgramLine::setQuantum(int sysQuantum)
{
    this->QuantumRemaining = sysQuantum;
}

