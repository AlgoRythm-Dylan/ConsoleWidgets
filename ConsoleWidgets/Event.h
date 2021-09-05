#ifndef CW_EVENT_H
#define CW_EVENT_H

#include "ConsoleWidgets.h"
#include <map>
#include <vector>
#include <functional>

namespace ConsoleWidgets {

    class Event : ConsoleWidgetsObject {
    private:
        bool isCancelled;
    };

};

#endif