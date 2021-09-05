#include "ConsoleWidgets/ConsoleWidgetsCore.h"

using namespace ConsoleWidgets;

int main(){
    Context *ctx = Init();
    ctx->Restore();
    return 0;
}