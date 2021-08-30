#include "ConsoleWidgets/ConsoleWidgets.h"

using namespace ConsoleWidgets;

int main(){

    ConsoleWidgetsContext *ctx = Init();
    ctx->Update();
    Sleep(1000);
    ctx->Restore();

    return 0;
}