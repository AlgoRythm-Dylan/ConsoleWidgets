#ifndef CW_COORD_H
#define CW_COORD_H

#include <iostream>

namespace ConsoleWidgets {
    template<class T>
    class Coord {
    public:
        T x, y;
        Coord() { }
        Coord(T x, T y){
            this->x = x;
            this->y = y;
        }
    };

    template<class T>
    std::ostream& operator <<(std::ostream &stream, const Coord<T> &coord){
        return stream << "ConsoleWidgets::Coord { x : " << coord.x << ", y : " << coord.y << " }";
    }

};

#endif