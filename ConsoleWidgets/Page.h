#ifndef CW_PAGE_H
#define CW_PAGE_H

#include "ConsoleWidgets.h"
#include "Widget.h"
#include "Navigation.h"

namespace ConsoleWidgets {

    class NavigationEvent;

    class Page : public ConsoleWidgetsObject {
    private:
        Widget *root;
        Context *context;
    public:
        Page();
        Page(Context*);
        Page(Context*, Widget*);
        Widget* SetRoot(Widget*);
        Widget* GetRoot();
        Context* SetContext(Context*);
        Context* GetContext();
        void OnNavigate(NavigationEvent&);
    };

};

#endif