/**
 *******************************************************************************
 *                       Continental Confidential
 *                  Copyright (c) Continental AG. 2017
 *
 *      This software is furnished under license and may be used or
 *      copied only in accordance with the terms of such license.
 *******************************************************************************
 * @file    EventManager.cpp
 * @brief
 *******************************************************************************
 */
#include "EventManager.h"

#include <QMutexLocker>
#include <QDebug>

QMutex EventManager::EventManager::mQmutex;
EventManager*  EventManager::mInstance = Q_NULLPTR;
EventManager::DestryInstance EventManager::mDestry;
EventManager*  EventManager::instance()
{

    if(mInstance == Q_NULLPTR)
    {
        qDebug()<<"new instance";
        QMutexLocker loker(&mQmutex);
        if(mInstance == Q_NULLPTR)
        {
            mInstance = new EventManager();
        }
    }
    return mInstance;
}

QObject* EventManager::getEventWather(const QEvent::Type& type)
{
    if(mEventWathers.contains(type))
    {
        return mEventWathers[type];
    }

    qDebug()<<"create Event wather. Type:"<<type;
    QObject* wather = new QObject;
    mEventWathers.insert(type, wather);

   return wather;
}

EventManager::EventManager()
{

}

EventManager::EventManager(const EventManager& obj)
{

}

void EventManager::cleanWathers()
{
    foreach (auto * obj, mEventWathers)
    {

        if(obj != Q_NULLPTR)
        {
            qDebug()<<"delete wather pointer:"<<obj;
            delete obj;
            obj = Q_NULLPTR;
        }
    }
    mEventWathers.clear();
}

EventManager::DestryInstance::~DestryInstance()
{
    if(EventManager::mInstance != Q_NULLPTR)
    {
        EventManager::instance()->cleanWathers();
        delete EventManager::mInstance;
        EventManager::mInstance = Q_NULLPTR;
        qDebug()<<"destryInstance";
    }
}
