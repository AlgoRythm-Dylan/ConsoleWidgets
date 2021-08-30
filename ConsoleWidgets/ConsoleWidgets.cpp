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

    void ConsoleWidgetsContext::SetWindow(WINDOW *window){
        curses_window = window;
    }

    WINDOW* ConsoleWidgetsContext::GetWindow(){
        return curses_window;
    }

    ConsoleWidgetsContext* Init(){
        ConsoleWidgetsContext *context = new ConsoleWidgetsContext();
        context->SetWindow(initscr());
        cbreak();
        noecho();
        keypad();
        return context;
    }

    void Sleep(long millis){
        timespec ts;
        ts.tv_sec = millis / 1000;
        ts.tv_nsec = (millis % 1000) * 1000000;
        nanosleep(&ts, &ts);
    }

};