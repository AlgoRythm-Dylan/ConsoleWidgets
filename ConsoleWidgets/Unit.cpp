#include "Unit.h"

namespace ConsoleWidgets {

    double PixelUnit::Evaluate(double bounds) {
        return pixelValue;
    }

    double PercentageUnit::Evaluate(double bounds) {
        return bounds * (percentage * 100.0);
    }

};