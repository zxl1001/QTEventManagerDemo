/**
 *******************************************************************************
 *                       Continental Confidential
 *                  Copyright (c) Continental AG. 2017
 *
 *      This software is furnished under license and may be used or
 *      copied only in accordance with the terms of such license.
 *******************************************************************************
 * @file    SubWidget.cpp
 * @brief
 *******************************************************************************
 */
#include "SubWidget.h"
#include "ui_SubWidget.h"

#include "EventManager.h"

#include <QTime>
#include <QDebug>

SubWidget::SubWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubWidget)
{
    ui->setupUi(this);
}

SubWidget::~SubWidget()
{
    delete ui;
}

void SubWidget::on_sendBtn1_clicked()
{
    EventText1* event = new EventText1(Test1Type, "Test1 event");
    QObject* wather = EventManager::instance()->getEventWather(Test1Type);
    if(wather != Q_NULLPTR)
    {
        QCoreApplication::postEvent(wather, event);
    }

}

void SubWidget::on_sendBtn2_clicked()
{
    EventText2* event = new EventText2(Test2Type, "Test2 event");
    QObject* wather = EventManager::instance()->getEventWather(Test2Type);
    if(wather != Q_NULLPTR)
    {
        QCoreApplication::postEvent(wather, event);
    }
}

void SubWidget::on_sendBtn3_clicked()
{
    EventText3* event = new EventText3(Test3Type, "Test3 event");
    QObject* wather = EventManager::instance()->getEventWather(Test3Type);
    if(wather != Q_NULLPTR)
    {
        QCoreApplication::postEvent(wather, event);
    }
}

void SubWidget::on_sendEvent4_clicked()
{
    EventText4* event = new EventText4(Test4Type, "Test4 event");
    QObject* wather = EventManager::instance()->getEventWather(Test4Type);
    if(wather != Q_NULLPTR)
    {
        QCoreApplication::postEvent(wather, event);
    }
}

void SubWidget::on_sendEvent5_clicked()
{
    EventText5* event = new EventText5(Test5Type, "Test5 event");
    QObject* wather = EventManager::instance()->getEventWather(Test5Type);
    if(wather != Q_NULLPTR)
    {
        QCoreApplication::postEvent(wather, event);
    }
}
