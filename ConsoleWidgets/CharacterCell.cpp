#include "CharacterCell.h"

namespace ConsoleWidgets {

    CharacterCell::CharacterCell(){
        Reset();
    }

    void CharacterCell::Reset(){
        calcAttrs = 0;
        isBold = false;
    }

    void CharacterCell::SetBold(bool bold){
        isBold = bold;
    }

    bool CharacterCell::GetBold(){
        return isBold;
    }

};