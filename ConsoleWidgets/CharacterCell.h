#ifndef CW_CHARACTER_CELL
#define CW_CHARACTER_CELL

#include "ConsoleWidgets.h"

namespace ConsoleWidgets {

    class CharacterCell : public ConsoleWidgetsObject {
    private:
        int calcAttrs;
        bool isBold;
    public:
        CharacterCell();
        void Reset();
        void SetBold(bool);
        bool GetBold();
        int CalculateAttrs();
    };

};

#endif