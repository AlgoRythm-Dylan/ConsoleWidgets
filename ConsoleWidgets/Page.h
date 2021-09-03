#ifndef CW_PAGE_H
#define CW_PAGE_H

#include "ConsoleWidgets.h"
#include "Widget.h"

namespace ConsoleWidgets {

    class Page : ConsoleWidgetsObject {
    private:
        Widget *root;
        Context *context;
    }

}

#endif