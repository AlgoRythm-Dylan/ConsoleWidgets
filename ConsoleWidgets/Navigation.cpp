#include "Navigation.h"

#include <vector>

namespace ConsoleWidgets {

    NavigationManager::NavigationManager(){
        pageStack = std::vector<Page*>();
        index = -1;
    }

    Page* NavigationManager::CurrentPage(){
        if(index == -1)
            return nullptr;
        else
            return pageStack[index];
    }

    void NavigationManager::Back(){
        if(index > 0)
            index--;
    }

    void NavigationManager::Forwards(){
        if(index < pageStack.size())
            index++;
    }

};