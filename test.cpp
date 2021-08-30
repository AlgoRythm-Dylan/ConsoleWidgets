#include <iostream>

#include "ConsoleWidgets/ConsoleWidgets.h"
#include "ConsoleWidgets/Rect.h"
#include "ConsoleWidgets/Coord.h"

using namespace ConsoleWidgets;

int main(){

    ConsoleWidgetsContext *ctx = Init();
    ctx->Update();
    Sleep(1000);
    ctx->Restore();

    Coord<int> *iCoord = new Coord<int>(20, 30);
    Coord<double> *dCoord = new Coord<double>(20.45, 30.9);

    Rect<int> *iRect = new Rect<int>(1, 2, 3, 4);
    Rect<double> *dRect = new Rect<double>(1.2, 2.3, 3.4, 4.5);

    std::cout << *iCoord << " " << *dCoord << " " << *iRect << " " << *dRect << std::endl;

    return 0;
}