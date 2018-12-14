#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include <QDebug>
#include <QFileDialog>
#include <QDir>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantList>

#include "clock.h"
#include "pcb.h"
#include "cpu.h"
#include "scheduler.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QStringList getFileNames();
    void DoFileOpen();
    QString getFileContents();
    void ParseMyJson(QString stringToParse);


public slots:
    void OnNewQueueValueChanged(QString message, PCB *pcb);
    void OnsendFromNewToReady(QString message, PCB *pcb);
    void OnTerminatedQueueValueChanged(QString message, PCB *pcb);

    void OnMemoryChanged(int newValue);
    void ONrotateRunningToReady();
    void OnSetPClabel(int PCvalue);
    void OnUpdateOutput(QString output);
    void ONsendFromReadyToWaitingQueueTail();
    void OnsendFromWaitingtoReadyQueue();

private slots:
    void on_pushButton_clicked();
    void PCBvalueChanged();
    void on_verticalSlider_valueChanged(int value);
    void on_pushButton_3_clicked();
    void On_SetBurstTimeLableValue(QString burst);
    void OnsetCritical(bool critical);
    void on_pushButton_7_clicked();
    void on_pushButton_2_clicked();
    void on_verticalSlider_2_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    Clock *clock;
    CPU *myCPU;
    Scheduler *myScheduler;
    QStringListModel *filesListModel;
    QStringList fileNames;
    int filesToOpen = 1;

    void makeModels();
    void setFileNames(QStringList fileNames);
    void connectClock();
};

#endif // MAINWINDOW_H
