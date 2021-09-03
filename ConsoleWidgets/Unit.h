#ifndef CW_UNIT_H
#define CW_UNIT_H

#include "ConsoleWidgets.h"
#include "Rect.h"

namespace ConsoleWidgets {

    // Returns a "real" calculation based on the bounds provided,
    // Which can then be used by a terminal rasterizer to convert
    // into text cell values appropriately
    class Unit : ConsoleWidgetsObject {
    public:
        virtual double Evaluate(double bounds) = 0;
    };

    class PixelUnit : Unit {
    private:
        double pixelValue;
    public:
        PixelUnit() { };
        PixelUnit(double);
        PixelUnit(int);
        virtual double Evaluate(double) override;
        void SetPixels(double);
        double GetPixels(double);
    };

    class PercentageUnit : Unit {
    private:
        double percentage;
    public:
        PercentageUnit() { };
        PercentageUnit(double);
        PercentageUnit(int);
        virtual double Evaluate(double) override;
        void SetPercentage(double);
        double GetPercentage(double);
    };

};

#endif