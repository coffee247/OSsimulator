/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QFrame *frame;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_6;
    QSlider *verticalSlider;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *ClockTicksText;
    QPushButton *pushButton;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(446, 310);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 170, 41, 20));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(230, 9, 191, 201));
        frame->setAutoFillBackground(true);
        frame->setStyleSheet(QString::fromUtf8("background-color=rgb(211, 215, 207)"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 161, 17));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(111, 40, 20, 20));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 70, 101, 71));
        label_6->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_6->setWordWrap(true);
        verticalSlider = new QSlider(frame);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(140, 40, 20, 141));
        verticalSlider->setMinimum(1);
        verticalSlider->setMaximum(1000);
        verticalSlider->setValue(500);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setInvertedAppearance(false);
        verticalSlider->setInvertedControls(true);
        verticalSlider->setTickPosition(QSlider::TicksAbove);
        verticalSlider->setTickInterval(100);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 10, 191, 101));
        label_5->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_5->setWordWrap(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 230, 231, 20));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(310, 230, 101, 17));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(13, 120, 201, 81));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ClockTicksText = new QLineEdit(widget);
        ClockTicksText->setObjectName(QString::fromUtf8("ClockTicksText"));
        ClockTicksText->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ClockTicksText);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        MainWindow->setCentralWidget(centralwidget);
        frame->raise();
        ClockTicksText->raise();
        label_2->raise();
        label_4->raise();
        label_5->raise();
        label_7->raise();
        label_8->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 446, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "1000", nullptr));
        label->setText(QApplication::translate("MainWindow", "Clock ticks per second", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "1", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "more ticks\n"
"per second\n"
"simulates\n"
"faster CPU", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "This demo  \n"
"by Jim Stallings\n"
"shows how to run \n"
"a clock in the background, \n"
"and dynamically speed it up \n"
"or slow it down.", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "By James Stallings Oct 5, 2019", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Get clock ticks", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Ticks  elepsed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
