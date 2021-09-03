#ifndef CW_WIDGET_H
#define CW_WIDGET_H

#include "ConsoleWidgetsCore.h"
#include <vector>

namespace ConsoleWidgets {

    // Forwards declare so we can have self referential class
    class Widget;

    class Widget : ConsoleWidgetsObject {
    private:
        Widget *parent;
        std::vector<Widget> children;
        Rect<int> actualBox;
        Rect<double> calculatedBox;
    };
};

#endif