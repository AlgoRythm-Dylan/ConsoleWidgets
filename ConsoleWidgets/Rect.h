#ifndef CW_RECT_H
#define CW_RECT_H

#include <iostream>

namespace ConsoleWidgets {
    template<class T>
    class Rect {
    public:
        T x, y, width, height;
        Rect() { }
        Rect(T x, T y, T width, T height){
            this->x = x;
            this->y = y;
            this->width = width;
            this->height = height;
        }
    };

    template<class T>
    std::ostream& operator <<(std::ostream &stream, const Rect<T> &rect){
        return stream << "ConsoleWidgets::Rect { x : " << rect.x << ", y : " << rect.y
            << ", width : " << rect.width << ", height : " << rect.height << " }";
    }

};

#endif