/**
 *******************************************************************************
 *                       Continental Confidential
 *                  Copyright (c) Continental AG. 2017
 *
 *      This software is furnished under license and may be used or
 *      copied only in accordance with the terms of such license.
 *******************************************************************************
 * @file    EventDateDefine.h
 * @brief
 *******************************************************************************
 */
#ifndef EVENTDATEDEFINE_H
#define EVENTDATEDEFINE_H

#include <QEvent>
#include <QString>


static QEvent::Type Test1Type = (QEvent::Type)(QEvent::User + 1000);
static QEvent::Type Test2Type = (QEvent::Type)(QEvent::User + 1001);
static QEvent::Type Test3Type = (QEvent::Type)(QEvent::User + 1002);
static QEvent::Type Test4Type = (QEvent::Type)(QEvent::User + 1003);
static QEvent::Type Test5Type = (QEvent::Type)(QEvent::User + 1004);

class EventText1 : public QEvent
{
public:
    explicit EventText1(Type et, const QString&name);
    const QString& getEventName() const;

private:
    QString mEventName;
};

class EventText2 : public QEvent
{
public:
    explicit EventText2(Type et, const QString&name);
    const QString& getEventName() const;

private:
    QString mEventName;
};

class EventText3 : public QEvent
{
public:
    explicit EventText3(Type et, const QString&name);
    const QString& getEventName() const;

private:
    QString mEventName;
};

class EventText4 : public QEvent
{
public:
    explicit EventText4(Type et, const QString&name);
    const QString& getEventName() const;

private:
    QString mEventName;
};


class EventText5 : public QEvent
{
public:
    explicit EventText5(Type et, const QString&name);
    const QString& getEventName() const;

private:
    QString mEventName;
};
#endif // EVENTDATEDEFINE_H
