/**
 *******************************************************************************
 *                       Continental Confidential
 *                  Copyright (c) Continental AG. 2017
 *
 *      This software is furnished under license and may be used or
 *      copied only in accordance with the terms of such license.
 *******************************************************************************
 * @file    MainWindow.cpp
 * @brief
 *******************************************************************************
 */
#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QDebug>
#include <QTime>

#include "EventManager.h"
#include "SubWidget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->subLayout->addWidget(new SubWidget(this));
    EventManager::instance()->getEventWather(Test1Type)->installEventFilter(this);
    EventManager::instance()->getEventWather(Test2Type)->installEventFilter(this);
    EventManager::instance()->getEventWather(Test3Type)->installEventFilter(this);
    EventManager::instance()->getEventWather(Test4Type)->installEventFilter(this);
    EventManager::instance()->getEventWather(Test5Type)->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject* watched, QEvent* event)
{
        if (event->type() == Test1Type)
        {
            EventText1* typeEvent = dynamic_cast<EventText1*>(event);
            if(typeEvent != Q_NULLPTR)
            {
                qDebug()<<typeEvent->getEventName();
                return true;
            }
            return false;
        }
        else if (event->type() == Test2Type)
        {
            EventText2* typeEvent = dynamic_cast<EventText2*>(event);
            if(typeEvent != Q_NULLPTR)
            {
                qDebug()<<typeEvent->getEventName();
                return true;
            }
            return false;
        }
        else if (event->type() == Test3Type)
        {
            EventText3* typeEvent = dynamic_cast<EventText3*>(event);
            if(typeEvent != Q_NULLPTR)
            {
                qDebug()<<typeEvent->getEventName();
                return true;
            }
            return false;
        }
        else if (event->type() == Test4Type)
        {
            EventText4* typeEvent = dynamic_cast<EventText4*>(event);
            if(typeEvent != Q_NULLPTR)
            {
                qDebug()<<typeEvent->getEventName();
                return true;
            }
            return false;
        }
        else if (event->type() == Test5Type)
        {
            EventText5* typeEvent = dynamic_cast<EventText5*>(event);
            if(typeEvent != Q_NULLPTR)
            {
                qDebug()<<typeEvent->getEventName();
                return true;
            }
            return false;
        }
    QMainWindow::eventFilter(watched, event);
}
