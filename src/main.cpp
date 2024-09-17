// SPDX-License-Identifier: GPL-3.0-only
#include <QtWidgets/QApplication>

#include "kurokawa.h"

int main(int argc, char** argv) {
    QApplication a { argc, argv };
    Kurokawa w;
    w.show();
    return a.exec();
}
