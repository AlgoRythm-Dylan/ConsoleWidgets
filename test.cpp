#include "ConsoleWidgets/ConsoleWidgetsCore.h"
#include <ostream>

using namespace ConsoleWidgets;

int main(){
    Rect<double> dRect = Rect<double>(2.0, 4, 5, 6);
    std::cout << dRect << std::endl;
    return 0;
}