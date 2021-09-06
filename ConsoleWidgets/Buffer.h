#ifndef CW_BUFFER_H
#define CW_BUFFER_H

#include "ConsoleWidgets.h"
#include "CharacterCell.h"

#include <vector>

namespace ConsoleWidgets {

    class Buffer : public ConsoleWidgetsObject {
    private:
        std::vector<CharacterCell> cells;
        int width, height;
    public:
        std::string ToString() override {
            return CW_NAME + "::Buffer { width : " + std::to_string(width);
        }
    };

};

#endif