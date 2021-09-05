#ifndef CW_COORD_H
#define CW_COORD_H

#include <iostream>
#include "ConsoleWidgets.h"

namespace ConsoleWidgets {
    template<class T>
    class Coord : ConsoleWidgetsObject {
    public:
        T x, y;
        Coord() { }
        Coord(T x, T y){
            this->x = x;
            this->y = y;
        }
        std::string ToString() override {
            return "ConsoleWidgets::Coord { x : " + std::to_string(x) + ", y : " + std::to_string(y) + " }";
        }
    };

};

#endif