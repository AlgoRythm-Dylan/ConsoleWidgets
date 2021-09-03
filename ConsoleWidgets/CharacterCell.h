#ifndef CW_CHARACTER_CELL
#define CW_CHARACTER_CELL

#include "ConsoleWidgets.h"

namespace ConsoleWidgets {

    class CharacterCell : ConsoleWidgetsObject {
    private:
        int calcAttrs;
    public:
        CharacterCell();
        Reset();
        SetBold();
        GetBold();
        CalculateAttrs();
    };

};

#endif