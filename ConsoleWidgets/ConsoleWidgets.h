#include <ncurses.h>
#include <time.h>
#include <string>

#ifndef CONSOLE_WIDGETS_H
#define CONSOLE_WIDGETS_H

#ifdef _WIN32
#define CONSOLE_WIDGETS_WIN
#else
#define CONSOLE_WIDGETS_NIX
#endif

namespace ConsoleWidgets {

    class ConsoleWidgetsObject {
    public:
        virtual std::string ToString() { return "<object>"; };
    };

    class ConsoleWidgetsContext : ConsoleWidgetsObject {
    public:
        ConsoleWidgetsContext();
        void Use();
        void Restore();
        void Update();

        void SetWindow(WINDOW*);
        WINDOW* GetWindow();
    private:
        WINDOW *curses_window;
    };

    ConsoleWidgetsContext* Init();
    void Sleep(long);

};

#endif