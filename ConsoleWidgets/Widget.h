#ifndef CW_WIDGET_H
#define CW_WIDGET_H

#include "ConsoleWidgets.h"
#include "Rect.h"
#include "Coord.h"

#include <vector>

namespace ConsoleWidgets {

    // Forwards declare so we can have self referential class
    class Widget;

    class Widget : public ConsoleWidgetsObject {
    private:
        Widget *parent;
        std::vector<Widget> children;
        Rect<int> actualBox;
        Rect<double> calculatedBox;
    };
};

#endif