#ifndef CW_RECT_H
#define CW_RECT_H

#include <iostream>
#include "ConsoleWidgets.h"

namespace ConsoleWidgets {
    template<class T>
    class Rect : ConsoleWidgetsObject {
    public:
        T x, y, width, height;
        Rect() { }
        Rect(T x, T y, T width, T height){
            this->x = x;
            this->y = y;
            this->width = width;
            this->height = height;
        }
        std::string ToString() override {
            return "ConsoleWidgets::Rect { x : " + std::to_string(x) + ", y : " + std::to_string(y)
                    + ", width : " + std::to_string(width) + ", height : " + std::to_string(height) + " }";
        }
    };

    template<class T>
    std::ostream& operator <<(std::ostream &stream, Rect<T> &rect){
        return stream << rect.ToString();
    }

};

#endif