#ifndef CW_NAVIGATION_H
#define CW_NAVIGATION_H

#include "ConsoleWidgets.h"
#include "Widget.h"
#include "Event.h"
#include "Page.h"
#include <vector>

namespace ConsoleWidgets {

    // Forwards declare Page because Page.h requires Navigation.h for NavigationEvent
    class Page;

    enum NavigationType {
        Direct,
        Back,
        Forwards
    };

    class NavigationEvent : Event {

    };

    class NavigationManager : ConsoleWidgetsObject {
    private:
        std::vector<Page*> pageStack;
        int index;
        void NotifyCurrentPage(NavigationType);
    public:
        NavigationManager();
        Page* CurrentPage();
        void Back();
        void Forwards();
        void RemoveFromStack(Page*);
        void NavigateTo(Page*);
    };

}

#endif