#ifndef PROGRAMLINE_H
#define PROGRAMLINE_H

#include <QObject>

class ProgramLine : public QObject
{
    Q_OBJECT
public:
    explicit ProgramLine(QObject *parent = nullptr);
    QString getCommand();
    QString getOutput();
    int getBurstTime();
    int getQuantumRemaining();

    void setCommand(QString command);
    void setOutput(QString output);
    void setBurstTime(int burstTime);
    void decrementLineQuantum();
    void decrementBurstTime();
    void setQuantum(int sysQuantum);

signals:
    void lineCompleted();

public slots:

private:
    QString command;
    QString output;
    int burstTime;
    int QuantumRemaining;
};

#endif // PROGRAMLINE_H
