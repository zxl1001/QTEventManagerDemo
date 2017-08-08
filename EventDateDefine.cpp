/**
 *******************************************************************************
 *                       Continental Confidential
 *                  Copyright (c) Continental AG. 2017
 *
 *      This software is furnished under license and may be used or
 *      copied only in accordance with the terms of such license.
 *******************************************************************************
 * @file    EventDateDefine.cpp
 * @brief
 *******************************************************************************
 */
#include "EventDateDefine.h"

EventText1::EventText1(QEvent::Type et, const QString& name)
    :QEvent(et),
      mEventName(name)
{

}

const QString& EventText1::getEventName() const
{
    return mEventName;
}

EventText2::EventText2(QEvent::Type et, const QString& name)
    :QEvent(et),
      mEventName(name)
{

}

const QString& EventText2::getEventName() const
{
    return mEventName;
}

EventText3::EventText3(QEvent::Type et, const QString& name)
    :QEvent(et),
      mEventName(name)
{

}

const QString& EventText3::getEventName() const
{
    return mEventName;
}


EventText4::EventText4(QEvent::Type et, const QString& name)
    :QEvent(et),
      mEventName(name)
{

}

const QString& EventText4::getEventName() const
{
    return mEventName;
}


EventText5::EventText5(QEvent::Type et, const QString& name)
    :QEvent(et),
      mEventName(name)
{

}

const QString& EventText5::getEventName() const
{
    return mEventName;
}
