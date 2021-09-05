#ifndef CW_PAGE_H
#define CW_PAGE_H

#include "ConsoleWidgets.h"
#include "Navigation.h"
#include "Widget.h"

namespace ConsoleWidgets {

    class Page : ConsoleWidgetsObject {
    private:
        Widget *root;
        Context *context;
    public:
        Page();
        Page(Context*);
        Page(Context*, Widget*);
        Widget* SetRoot();
        Widget* GetRoot();
        Context* SetContext();
        Context* GetContext();
        void OnNavigate(NavigationEvent&);
    };

};

#endif