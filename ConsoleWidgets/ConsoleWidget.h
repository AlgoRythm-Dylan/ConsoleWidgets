#ifndef CONSOLE_WIDGET_H
#define CONSOLE_WIDGET_H

#include "ConsoleWidgets.h"

namespace ConsoleWidgets {

    // Forwards declare so we can have self referential class
    class ConsoleWidget;

    class ConsoleWidget : ConsoleWidgetObject {
    private:
        ConsoleWidget *parent;
    }
};

#endif