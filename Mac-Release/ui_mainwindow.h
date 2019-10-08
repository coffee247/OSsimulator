/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QFrame *frame;
    QLabel *label_2;
    QSlider *verticalSlider;
    QLabel *label_3;
    QFrame *frame_2;
    QListWidget *NewQueueListWidget;
    QLabel *label_4;
    QFrame *frame_3;
    QListWidget *ReadyQueueListWidget;
    QFrame *frame_6;
    QPushButton *pushButton_3;
    QFrame *frame_4;
    QLabel *label_6;
    QSlider *verticalSlider_2;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_22;
    QProgressBar *FreeMemBar;
    QLabel *label_7;
    QFrame *frame_5;
    QListWidget *TerminatedQueueListWidget;
    QLabel *label_8;
    QFrame *line;
    QLabel *PCValueLabel;
    QLabel *label_10;
    QLabel *BurstTime;
    QFrame *frame_7;
    QLabel *label_14;
    QSlider *ClockSpeedSlider;
    QLabel *ClockSpeed;
    QLabel *label_16;
    QPushButton *pushButton_7;
    QFrame *frame_8;
    QListWidget *WaitingQueueListWidget;
    QLabel *label_15;
    QLabel *label_17;
    QFrame *frame_9;
    QListWidget *OutputQueueListWidget;
    QFrame *frame_10;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *pushButton_2;
    QLabel *label_18;
    QLabel *label_21;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1202, 686);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 220, 131, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 100, 41, 21));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 9, 151, 241));
        frame->setStyleSheet(QString::fromUtf8("background:rgb(248, 248, 248);\n"
"border: 1px solid;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(6, 190, 141, 20));
        label_2->setStyleSheet(QString::fromUtf8("border: none;"));
        label_2->setAlignment(Qt::AlignCenter);
        verticalSlider = new QSlider(frame);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(60, 20, 22, 160));
        verticalSlider->setMinimum(1);
        verticalSlider->setPageStep(3);
        verticalSlider->setValue(3);
        verticalSlider->setOrientation(Qt::Vertical);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 20, 141, 21));
        QFont font1;
        font1.setPointSize(12);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(180, 10, 161, 241));
        frame_2->setAutoFillBackground(false);
        frame_2->setStyleSheet(QString::fromUtf8("background:rgb(255, 253, 231);\n"
"border: 1px solid;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        NewQueueListWidget = new QListWidget(frame_2);
        NewQueueListWidget->setObjectName(QString::fromUtf8("NewQueueListWidget"));
        NewQueueListWidget->setGeometry(QRect(0, 40, 161, 201));
        NewQueueListWidget->setAutoFillBackground(true);
        NewQueueListWidget->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(370, 20, 141, 21));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(360, 10, 161, 241));
        frame_3->setAutoFillBackground(false);
        frame_3->setStyleSheet(QString::fromUtf8("background:rgb(255, 253, 231);\n"
"border: 1px solid;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        ReadyQueueListWidget = new QListWidget(frame_3);
        ReadyQueueListWidget->setObjectName(QString::fromUtf8("ReadyQueueListWidget"));
        ReadyQueueListWidget->setGeometry(QRect(0, 40, 161, 201));
        ReadyQueueListWidget->setAutoFillBackground(true);
        ReadyQueueListWidget->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);"));
        frame_6 = new QFrame(frame_3);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setEnabled(false);
        frame_6->setGeometry(QRect(0, 40, 161, 19));
        frame_6->setStyleSheet(QString::fromUtf8("background:rgba(0, 255, 0, 0.2)"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1040, 490, 131, 23));
        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(1030, 279, 151, 241));
        frame_4->setStyleSheet(QString::fromUtf8("background:rgb(248, 248, 248);\n"
"border: 1px solid;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(6, 190, 141, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("border: none;"));
        label_6->setAlignment(Qt::AlignCenter);
        verticalSlider_2 = new QSlider(frame_4);
        verticalSlider_2->setObjectName(QString::fromUtf8("verticalSlider_2"));
        verticalSlider_2->setGeometry(QRect(115, 20, 22, 160));
        verticalSlider_2->setMinimum(5);
        verticalSlider_2->setMaximum(50);
        verticalSlider_2->setSingleStep(1);
        verticalSlider_2->setPageStep(5);
        verticalSlider_2->setValue(20);
        verticalSlider_2->setSliderPosition(20);
        verticalSlider_2->setOrientation(Qt::Vertical);
        pushButton_4 = new QPushButton(frame_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 211, 131, 23));
        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 60, 91, 81));
        QFont font3;
        font3.setPointSize(24);
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8(""));
        label_5->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(frame_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 40, 91, 20));
        label_9->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(frame_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 5, 91, 31));
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setWeight(75);
        label_22->setFont(font4);
        label_22->setStyleSheet(QString::fromUtf8("background:rgba(0, 170, 0,0.2)"));
        label_22->setAlignment(Qt::AlignCenter);
        verticalSlider_2->raise();
        pushButton_4->raise();
        label_5->raise();
        label_9->raise();
        label_22->raise();
        label_6->raise();
        FreeMemBar = new QProgressBar(centralWidget);
        FreeMemBar->setObjectName(QString::fromUtf8("FreeMemBar"));
        FreeMemBar->setGeometry(QRect(10, 310, 511, 41));
        FreeMemBar->setMaximum(2048);
        FreeMemBar->setValue(2048);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(740, 20, 141, 21));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);
        frame_5 = new QFrame(centralWidget);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(730, 10, 161, 241));
        frame_5->setAutoFillBackground(false);
        frame_5->setStyleSheet(QString::fromUtf8("background:rgb(255, 253, 231);\n"
"border: 1px solid;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        TerminatedQueueListWidget = new QListWidget(frame_5);
        TerminatedQueueListWidget->setObjectName(QString::fromUtf8("TerminatedQueueListWidget"));
        TerminatedQueueListWidget->setGeometry(QRect(0, 40, 161, 201));
        TerminatedQueueListWidget->setAutoFillBackground(true);
        TerminatedQueueListWidget->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(550, 51, 71, 16));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(520, 51, 31, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        PCValueLabel = new QLabel(centralWidget);
        PCValueLabel->setObjectName(QString::fromUtf8("PCValueLabel"));
        PCValueLabel->setGeometry(QRect(630, 52, 61, 16));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(550, 78, 71, 16));
        BurstTime = new QLabel(centralWidget);
        BurstTime->setObjectName(QString::fromUtf8("BurstTime"));
        BurstTime->setEnabled(true);
        BurstTime->setGeometry(QRect(600, 80, 47, 13));
        BurstTime->setTextFormat(Qt::AutoText);
        frame_7 = new QFrame(centralWidget);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(1030, 10, 151, 241));
        frame_7->setStyleSheet(QString::fromUtf8("background:rgb(248, 248, 248);\n"
"border: 1px solid;"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_14 = new QLabel(frame_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(6, 190, 141, 20));
        label_14->setStyleSheet(QString::fromUtf8("border: none;"));
        label_14->setAlignment(Qt::AlignCenter);
        ClockSpeedSlider = new QSlider(frame_7);
        ClockSpeedSlider->setObjectName(QString::fromUtf8("ClockSpeedSlider"));
        ClockSpeedSlider->setGeometry(QRect(110, 20, 22, 160));
        ClockSpeedSlider->setMinimum(20);
        ClockSpeedSlider->setMaximum(1000);
        ClockSpeedSlider->setSingleStep(20);
        ClockSpeedSlider->setPageStep(100);
        ClockSpeedSlider->setValue(500);
        ClockSpeedSlider->setSliderPosition(500);
        ClockSpeedSlider->setOrientation(Qt::Vertical);
        ClockSpeed = new QLabel(frame_7);
        ClockSpeed->setObjectName(QString::fromUtf8("ClockSpeed"));
        ClockSpeed->setGeometry(QRect(10, 60, 91, 81));
        ClockSpeed->setFont(font3);
        ClockSpeed->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(frame_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 40, 91, 20));
        label_16->setAlignment(Qt::AlignCenter);
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(1045, 221, 121, 21));
        frame_8 = new QFrame(centralWidget);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(540, 120, 161, 241));
        frame_8->setAutoFillBackground(false);
        frame_8->setStyleSheet(QString::fromUtf8("background:rgb(255, 253, 231);\n"
"border: 1px solid;"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        WaitingQueueListWidget = new QListWidget(frame_8);
        WaitingQueueListWidget->setObjectName(QString::fromUtf8("WaitingQueueListWidget"));
        WaitingQueueListWidget->setGeometry(QRect(0, 40, 161, 201));
        WaitingQueueListWidget->setAutoFillBackground(true);
        WaitingQueueListWidget->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);"));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(550, 130, 141, 21));
        label_15->setFont(font1);
        label_15->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(30, 380, 141, 21));
        label_17->setFont(font1);
        label_17->setAlignment(Qt::AlignCenter);
        frame_9 = new QFrame(centralWidget);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(20, 370, 161, 241));
        frame_9->setAutoFillBackground(false);
        frame_9->setStyleSheet(QString::fromUtf8("background:rgb(255, 253, 231);\n"
"border: 1px solid;"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        OutputQueueListWidget = new QListWidget(frame_9);
        OutputQueueListWidget->setObjectName(QString::fromUtf8("OutputQueueListWidget"));
        OutputQueueListWidget->setGeometry(QRect(0, 40, 161, 201));
        OutputQueueListWidget->setAutoFillBackground(true);
        OutputQueueListWidget->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);"));
        frame_10 = new QFrame(centralWidget);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setEnabled(false);
        frame_10->setGeometry(QRect(360, 50, 161, 19));
        frame_10->setStyleSheet(QString::fromUtf8("background:rgba(255,0,0,0.2)"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(626, 10, 61, 20));
        label_19->setStyleSheet(QString::fromUtf8("background:rgba(0,255,0,0.2);border:1px solid"));
        label_19->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(550, 10, 61, 20));
        label_20->setStyleSheet(QString::fromUtf8("background:rgba(255,0,0,0.2);border:1px solid"));
        label_20->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 260, 161, 23));
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setStyleSheet(QString::fromUtf8("background:rgba(255,0,0,0.2);"));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(370, 370, 771, 131));
        QFont font5;
        font5.setPointSize(24);
        font5.setBold(true);
        font5.setWeight(75);
        label_18->setFont(font5);
        label_18->setStyleSheet(QString::fromUtf8("color:red;"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(330, 430, 701, 131));
        label_21->setFont(font5);
        label_21->setStyleSheet(QString::fromUtf8("color:red;"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralWidget);
        frame_3->raise();
        frame_9->raise();
        frame_5->raise();
        frame_4->raise();
        frame_2->raise();
        frame->raise();
        pushButton->raise();
        label->raise();
        label_3->raise();
        label_4->raise();
        pushButton_3->raise();
        FreeMemBar->raise();
        label_7->raise();
        label_8->raise();
        line->raise();
        PCValueLabel->raise();
        label_10->raise();
        BurstTime->raise();
        frame_7->raise();
        frame_8->raise();
        label_15->raise();
        label_17->raise();
        pushButton_7->raise();
        frame_10->raise();
        label_19->raise();
        label_20->raise();
        pushButton_2->raise();
        label_18->raise();
        label_21->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1202, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));
        QObject::connect(verticalSlider_2, SIGNAL(valueChanged(int)), label_5, SLOT(setNum(int)));
        QObject::connect(ClockSpeedSlider, SIGNAL(valueChanged(int)), ClockSpeed, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "OS Simulator", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Load files", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Use slider to for multiples", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "New Queue", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Ready Queue", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Set RoundRobin Quatum", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Use slider to select Quantum", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Set RoundRobin Quatum", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Ticks in Quantum", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Quantum IS SET", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Terminated Queue", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Running at PC -->", nullptr));
        PCValueLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Burst --> ", nullptr));
        BurstTime->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Use slider to select MSecs", nullptr));
        ClockSpeed->setText(QCoreApplication::translate("MainWindow", "500", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Milliseconds", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Set Clock Speed ", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Waiting Queue", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Output", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Not Critical", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Critical", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Interrupt Current Process", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "STEP 1 --- SET  DESIRED QUANTUM  ----->", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "STEP 2 --- SET  DESIRED QUANTUM  ----->", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
