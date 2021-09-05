#include "Page.h"

namespace ConsoleWidgets {

    Page::Page(){
        root = nullptr;
        context = nullptr;
    }

    Widget* Page::SetRoot(Widget *newRoot){
        Widget *oldRoot = root;
        root = newRoot;
        return oldRoot;
    }

    Widget* Page::GetRoot(){
        return root;
    }

    Context* Page::SetContext(Context *newContext){
        Context *oldContext = context;
        context = newContext;
        return oldContext;
    }

    Context* Page::GetContext(){
        return context;
    }

};