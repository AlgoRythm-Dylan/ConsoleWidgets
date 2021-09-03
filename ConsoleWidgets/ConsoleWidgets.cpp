#include "ConsoleWidgets.h"

namespace ConsoleWidgets {

    Context::ConsoleWidgetsContext(){
        curses_window = nullptr;
    }

    void Context::Use(){

    }

    void Context::Restore(){
        endwin();
    }

    void Context::Update(){
        refresh();
    }

    void Context::SetWindow(WINDOW *window){
        curses_window = window;
    }

    WINDOW* Context::GetWindow(){
        return curses_window;
    }

    Context* Init(){
        Context *context = new Context();
        context->SetWindow(initscr());
        cbreak();
        noecho();
        keypad(context->GetWindow(), true);
        return context;
    }

    void Sleep(long millis){
        timespec ts;
        ts.tv_sec = millis / 1000;
        ts.tv_nsec = (millis % 1000) * 1000000;
        nanosleep(&ts, &ts);
    }

};