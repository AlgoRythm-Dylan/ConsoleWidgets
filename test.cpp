#include "ConsoleWidgets/ConsoleWidgetsCore.h"
#include <ostream>

using namespace ConsoleWidgets;

int main(){
    ConsoleWidgetsObject obj = ConsoleWidgetsObject();
    std::cout << obj << std::endl;
    return 0;
}