/*---------------------------------------------------------*\
| OpenRGBYeelightSettingsPage.h                             |
|                                                           |
|   User interface for configuring Yeelight settings        |
|                                                           |
|   This file is part of the OpenRGB project                |
|   SPDX-License-Identifier: GPL-2.0-only                   |
\*---------------------------------------------------------*/

#pragma once

#include <QWidget>
#include "ui_OpenRGBYeelightSettingsPage.h"
#include "OpenRGBYeelightSettingsEntry.h"

namespace Ui
{
    class OpenRGBYeelightSettingsPage;
}

class Ui::OpenRGBYeelightSettingsPage : public QWidget
{
    Q_OBJECT

public:
    explicit OpenRGBYeelightSettingsPage(QWidget *parent = nullptr);
    ~OpenRGBYeelightSettingsPage();

private slots:
    void changeEvent(QEvent *event);
    void on_AddYeelightDeviceButton_clicked();

    void on_RemoveYeelightDeviceButton_clicked();

    void on_SaveYeelightConfigurationButton_clicked();

private:
    Ui::OpenRGBYeelightSettingsPageUi *ui;
    std::vector<OpenRGBYeelightSettingsEntry*> entries;
};
