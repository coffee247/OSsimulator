#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("ClickMe");
    MainWindow::connectClock();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::connectClock()
{
    Clock *myClock = new Clock();
    myClock->setInterval(500);
    myClock->start();
    this->clock = myClock;
}

void MainWindow::on_pushButton_clicked()
{
    int THEtICKS = this->clock->getTicks();
    QString TicksString = QString::number(THEtICKS);
    this->ui->ClockTicksText->setText(TicksString);
}


void MainWindow::on_verticalSlider_valueChanged(int value)
{
    this->clock->updateInterval(value);
}
