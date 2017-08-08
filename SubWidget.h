/**
 *******************************************************************************
 *                       Continental Confidential
 *                  Copyright (c) Continental AG. 2017
 *
 *      This software is furnished under license and may be used or
 *      copied only in accordance with the terms of such license.
 *******************************************************************************
 * @file    SubWidget.h
 * @brief
 *******************************************************************************
 */
#ifndef SUBWIDGET_H
#define SUBWIDGET_H

#include <QWidget>

namespace Ui {
class SubWidget;
}

class SubWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SubWidget(QWidget *parent = 0);
    ~SubWidget();

private slots:
    void on_sendBtn1_clicked();

    void on_sendBtn2_clicked();

    void on_sendBtn3_clicked();

    void on_sendEvent4_clicked();

    void on_sendEvent5_clicked();

private:
    Ui::SubWidget *ui;
};

#endif // SUBWIDGET_H
