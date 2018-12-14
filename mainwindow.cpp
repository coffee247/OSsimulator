#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    connectClock();
    ui->setupUi(this);
    this->myScheduler = new Scheduler();
    extern CPU *myCPU;
    this->myCPU = myCPU;
    myCPU->setFreeMemory(myCPU->getTotalMemory());
    myCPU->setQuantum(20);
    ui->frame_6->show();
    ui->frame_10->hide();
    this->filesToOpen = 3;
    ui->label_22->hide();

    // Hook it all up
    connect(myScheduler, &Scheduler::NewQueueValueChanged, this, &MainWindow::OnNewQueueValueChanged);  // Connect signals and slots for NewQueue
    connect(myScheduler, &Scheduler::sendFromNewToReadyQueueTail, this, &MainWindow::OnsendFromNewToReady);  // Connect signals and slots for ReadyQueue
    connect(myScheduler, &Scheduler::TerminatedQueueValueChanged, this, &MainWindow::OnTerminatedQueueValueChanged);  // Connect signals and slots for ReadyQueue
    connect(myScheduler, &Scheduler::MemoryChanged, this, &MainWindow::OnMemoryChanged);  // Connect signals and slots for ReadyQueue
    connect(myScheduler, &Scheduler::rotateRunningToReady, this, &MainWindow::ONrotateRunningToReady);  // Connect signals and slots for ReadyQueue
    connect(myScheduler, &Scheduler::SetPCvalueLabel, this, &MainWindow::OnSetPClabel);  // Connect signals and slots for PCvalue label
    connect(myScheduler, &Scheduler::SetBurtTimeValueLabel, this, &MainWindow::On_SetBurstTimeLableValue);  // Connect signals and slots for PCvalue label
    connect(myScheduler, &Scheduler::upDateOutput, this, &MainWindow::OnUpdateOutput);  // Connect signals and slots for PCvalue label
    connect(myScheduler, &Scheduler::setCritical, this, &MainWindow::OnsetCritical);  // Connect signals and slots for PCvalue label
    connect(myScheduler, &Scheduler::sendFromReadyToWaitingQueueTail, this, &MainWindow::ONsendFromReadyToWaitingQueueTail);  // Connect signals and slots for ReadyQueue
    connect(myScheduler, &Scheduler::sendFromWaitingtoReadyQueue, this, &MainWindow::OnsendFromWaitingtoReadyQueue);  // Connect signals and slots for ReadyQueue

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ONrotateRunningToReady()
{
//    qDebug() << "Rotate called: Queue has " << ui->ReadyQueueListWidget->count() << "item(s)";
    ui->ReadyQueueListWidget->insertItem(ui->ReadyQueueListWidget->count(),ui->ReadyQueueListWidget->takeItem(0));
}

void MainWindow::OnSetPClabel(int PCvalue)
{
    QString temp = QString::number(PCvalue);
    ui->PCValueLabel->setText(QString::number(PCvalue));
}

void MainWindow::OnUpdateOutput(QString output)
{
    ui->OutputQueueListWidget->addItem(output);
}

void MainWindow::ONsendFromReadyToWaitingQueueTail()
{
    ui->WaitingQueueListWidget->addItem(ui->ReadyQueueListWidget->takeItem(0));
}

void MainWindow::OnsendFromWaitingtoReadyQueue()
{
    ui->ReadyQueueListWidget->addItem(ui->WaitingQueueListWidget->takeItem(0));
}

void MainWindow::OnNewQueueValueChanged(QString message,PCB *pcb)
{
    message.append(QString::number(pcb->getPID()));
    ui->NewQueueListWidget->insertItem(ui->NewQueueListWidget->count(),message);
}

void MainWindow::OnsendFromNewToReady(QString message, PCB *pcb)
{
    message.append(QString::number(pcb->getPID()));
    ui->ReadyQueueListWidget->insertItem(ui->ReadyQueueListWidget->count(),message);
    ui->NewQueueListWidget->takeItem(0);
}

void MainWindow::OnTerminatedQueueValueChanged(QString message, PCB *pcb)
{
    message.append(QString::number(pcb->getPID()));
    ui->TerminatedQueueListWidget->insertItem(ui->TerminatedQueueListWidget->count(),message);
    ui->FreeMemBar->setValue(myCPU->getFreeMemory());
    ui->ReadyQueueListWidget->takeItem(0);
}



void MainWindow::OnMemoryChanged(int newValue)
{
    ui->FreeMemBar->setValue(newValue);
}



void MainWindow::on_verticalSlider_valueChanged(int value) // RESPOND TO FILES SLIDER
{
    this->filesToOpen = value;
}




void MainWindow::setFileNames(QStringList fileNames)
{
    this->fileNames = fileNames;
    QList<int> list;
}


void MainWindow::connectClock()
{
    extern Clock *myClock;  // defined outside of (just above) main
    myClock->setInterval(500);
    myClock->start();
    this->clock = myClock;
}





void MainWindow::on_pushButton_clicked()
{
    ui->frame_4->hide();
    ui->label_18->hide();
    ui->label_21->hide();
    ui->pushButton_3->hide();
   DoFileOpen();
   for(int i = 0; i < this->filesToOpen; i++)
       ParseMyJson(getFileContents());

}

void MainWindow::PCBvalueChanged()
{

}


// ROUTINES TO PARSE JSON BELOW THIS LINE  (Also loads resultant PCB into the NEW Queue)
QStringList MainWindow::getFileNames()
{
    return this->fileNames;
}
void MainWindow::DoFileOpen()
{
    this->fileNames.append(QFileDialog::getOpenFileNames(this, tr("Open JSON file"),QDir::currentPath(),tr("JSON files (*.json)")));
    if(this->getFileNames().empty()) DoFileOpen();
}
QString MainWindow::getFileContents()
{
    QFile file(getFileNames().last());  // Use the last file path opened.
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return "";
    }
    QString outLines;
    QTextStream in(&file);  // Create an input stream from file path
    while (!in.atEnd())
    {
        QString line = in.readLine();
        outLines.append(line);
    }
    return outLines;
}
void MainWindow::ParseMyJson(QString stringToParse)
{
    const QByteArray jsonDoc = stringToParse.toUtf8();
    QJsonDocument itemDoc = QJsonDocument::fromJson(jsonDoc);
    if(itemDoc.isNull())
    {
        qDebug() << "Failed to create a JSON document.";
        exit(2);
    }
    if(!itemDoc.isObject())
    {
        qDebug() << "JSON does not describe an object.";
        exit(3);
    }
    QJsonObject json_obj = itemDoc.object();
    if(json_obj.isEmpty())
    {
        qDebug() << "JSON object is empty.";
        exit(4);
    }

    // JSON IS GOOD, so lets extract the data
    QVariantMap json_map = json_obj.toVariantMap();
    QString programName = json_map.find("name").value().toString();  // extract program name
    int programSize = json_map.find("size").value().toInt();  // extract program memory requirement

    // Create and connect a PCB to hold the data
    PCB *newPCB = new PCB();

    newPCB->setName(programName);
    newPCB->setSize(programSize);

    // Add PCB to New Queue
    this->myScheduler->addToNewQueue(newPCB);

    QVariantList linesList = json_map["lines"].toList();
    foreach(QVariant item, linesList)
    {
        QJsonObject temp = item.toJsonObject();
        QVariantMap tempMap = temp.toVariantMap();
        ProgramLine *line = new ProgramLine();
        line->setBurstTime(tempMap.find("burst").value().toInt());
        line->setCommand(tempMap.find("command").value().toString());
        line->setOutput(tempMap.find("output").value().toString());
        line->setQuantum(myCPU->getQuantum());
         newPCB->addProgramLines(line);
    }

}


void MainWindow::on_pushButton_3_clicked()
{
    ui->label_21->hide();
    ui->label_22->show();
    int test = ui->label_5->text().toInt();
    this->myCPU->setQuantum(test);
    qDebug() << myCPU->getQuantum();
}





void MainWindow::On_SetBurstTimeLableValue(QString burst)
{
    ui->BurstTime->setText(burst);
}

void MainWindow::OnsetCritical(bool critical)
{
    if(!critical)
    {
        ui->frame_6->show();
        ui->label_19->show();
        ui->frame_10->hide();
        ui->label_20->hide();
    }
    else if (critical)
    {
        ui->frame_6->hide();
        ui->label_19->hide();
        ui->frame_10->show();
        ui->label_20->show();
    }
}



void MainWindow::on_pushButton_7_clicked()
{
    int test = ui->ClockSpeed->text().toInt();
    clock->timer->setInterval(test);
}

void MainWindow::on_pushButton_2_clicked()
{
    if(!(myScheduler->getReadyQueue().isEmpty()))
    {
    if(!(myScheduler->getReadyQueue().front()->getProgramLines().at(myScheduler->getReadyQueue().front()->getPC()-1)->getCommand()=="CriCalculate"))
    {
    qDebug() << "INTERRUPT";
    myScheduler->handleInterrupt();
    }
    }
}

void MainWindow::on_verticalSlider_2_valueChanged(int value)
{
    ui->label_18->hide();
}
