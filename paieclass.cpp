#include <string.h>

#include "pairclass.h"

namespace TelCoColorCoder {
     
    MajorColor ColorPair::getMajor() {
        return majorColor;
    }
    MinorColor ColorPair::getMinor() {
        return minorColor;
    }
    std::string ColorPair::ToString() {
        std::string colorPairStr = MajorColorNames[majorColor];
        colorPairStr += " ";
        colorPairStr += MinorColorNames[minorColor];
        return colorPairStr;
    }
}
