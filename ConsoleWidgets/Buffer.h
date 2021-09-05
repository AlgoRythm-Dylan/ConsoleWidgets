#ifndef CW_BUFFER_H
#define CW_BUFFER_H

#include "ConsoleWidgets.h"

namespace ConsoleWidgets {

    class Buffer : public ConsoleWidgetsObject {
    public:
        std::string ToString() override {
            return " ConsoleWidgets::Buffer ";
        }
    };

};

#endif