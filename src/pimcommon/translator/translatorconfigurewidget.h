/*
   SPDX-FileCopyrightText: 2022 Laurent Montel <montel@kde.org>

   SPDX-License-Identifier: GPL-2.0-or-later
*/

#pragma once

#include "pimcommon_private_export.h"
#include <QWidget>
class QComboBox;
class QStackedWidget;
namespace PimCommon
{
class PIMCOMMON_TESTS_EXPORT TranslatorConfigureWidget : public QWidget
{
    Q_OBJECT
public:
    explicit TranslatorConfigureWidget(QWidget *parent = nullptr);
    ~TranslatorConfigureWidget() override;

    void saveSettings();
    void loadSettings();

private:
    void fillEngine();
    void switchEngine(int index);
    QComboBox *const mEngine;
    QStackedWidget *const mStackedWidget;
    QWidget *const mEmptyWidget;
    QWidget *const mLibreTranslateWidget;
};
}