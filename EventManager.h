/**
 *******************************************************************************
 *                       Continental Confidential
 *                  Copyright (c) Continental AG. 2017
 *
 *      This software is furnished under license and may be used or
 *      copied only in accordance with the terms of such license.
 *******************************************************************************
 * @file    EventManager.h
 * @brief
 *******************************************************************************
 */
#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include <QObject>
#include <QMutex>
#include <QHash>
#include <QEvent>

#include "EventDateDefine.h"

class EventManager : QObject
{
public:
    static EventManager* instance();
    QObject* getEventWather(const QEvent::Type &type);
private:
    EventManager();
    EventManager(const EventManager &obj); //disable copy
    void cleanWathers();

private:
    static QMutex mQmutex;
    static EventManager* mInstance;
    QHash<QEvent::Type, QObject*> mEventWathers;

    class DestryInstance
    {
    public:
        ~DestryInstance();
    };
    static DestryInstance mDestry;
};

#endif // EVENTMANAGER_H
