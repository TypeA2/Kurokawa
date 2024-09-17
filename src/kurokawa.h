// SPDX-License-Identifier: GPL-3.0-only
#pragma once

#include <QtWidgets/QMainWindow>

#include "ui_kurokawa.h"

class Kurokawa : public QMainWindow {
    Q_OBJECT

    public:
    Kurokawa(QWidget* parent = nullptr);
    ~Kurokawa();

    private:
    Ui::KurokawaClass ui;
};
