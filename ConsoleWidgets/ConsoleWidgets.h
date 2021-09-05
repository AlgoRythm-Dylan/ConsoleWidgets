#ifndef CONSOLE_WIDGETS_H
#define CONSOLE_WIDGETS_H

#ifdef _WIN32
#define CONSOLE_WIDGETS_WIN
#else
#define CONSOLE_WIDGETS_NIX
#endif

#include <ncurses.h>
#include <time.h>
#include <string>
#include <iostream>

namespace ConsoleWidgets {

    class ConsoleWidgetsObject {
    public:
        virtual std::string ToString() { return "<object>"; };
    };

    inline std::ostream& operator <<(std::ostream &stream, ConsoleWidgetsObject &obj){
        return stream << "[ addr:" << std::to_string((uintptr_t)((void*)&obj)) << " ] " << obj.ToString();
    }

    class Context : public ConsoleWidgetsObject {
    public:
        Context();
        void Use();
        void Restore();
        void Update();

        void SetWindow(WINDOW*);
        WINDOW* GetWindow();
    private:
        WINDOW *curses_window;
    };

    Context* Init();
    void Sleep(long);

};

#endif