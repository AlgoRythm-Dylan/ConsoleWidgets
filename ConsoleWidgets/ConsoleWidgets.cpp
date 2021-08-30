#include "ConsoleWidgets.h"

namespace ConsoleWidgets {

    ConsoleWidgetsContext::ConsoleWidgetsContext(){
        curses_window = nullptr;
    }

    void ConsoleWidgetsContext::Use(){

    }

    void ConsoleWidgetsContext::Restore(){
        endwin();
    }

    void ConsoleWidgetsContext::Update(){
        refresh();
    }

    ConsoleWidgetsContext* Init(){
        ConsoleWidgetsContext *context = new ConsoleWidgetsContext();
        context->SetWindow(initscr());
        return context;
    }

};