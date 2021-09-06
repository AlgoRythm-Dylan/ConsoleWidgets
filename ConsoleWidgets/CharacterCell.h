#ifndef CW_CHARACTER_CELL
#define CW_CHARACTER_CELL

#include "ConsoleWidgets.h"

namespace ConsoleWidgets {

    class CharacterCell : public ConsoleWidgetsObject {
    private:
        int calcAttrs;
        bool isBold;
        unsigned char content[5]; // 4 bytes for UTF-8, 1 for null terminator
    public:
        CharacterCell();
        CharacterCell(char);
        void Reset();
        void SetBold(bool);
        bool GetBold();
        int CalculateAttrs();
        char GetChar();
        char* GetCharArr();
        wchar_t GetWChar();
    };

};

#endif